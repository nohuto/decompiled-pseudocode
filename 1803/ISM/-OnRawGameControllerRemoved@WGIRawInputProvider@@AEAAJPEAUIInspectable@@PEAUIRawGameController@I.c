/*
 * XREFs of ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800770A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x180078F48 (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerRemoved(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  WGIController **v6; // rbx
  struct _RTL_CRITICAL_SECTION **v7; // rdi
  struct _RTL_CRITICAL_SECTION **v8; // rbp
  struct _RTL_CRITICAL_SECTION *v9; // rax
  WGIController *v10; // rcx
  WGIController *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v13 = v5;
  v6 = (WGIController **)*((_QWORD *)this + 11);
  if ( v6 != *((WGIController ***)this + 12) )
  {
    while ( 1 )
    {
      v7 = (struct _RTL_CRITICAL_SECTION **)(v6 + 1);
      if ( *((struct Windows::Gaming::Input::IRawGameController **)*v6 + 9) == a3 )
        break;
      ++v6;
      if ( v7 == *((struct _RTL_CRITICAL_SECTION ***)this + 12) )
        goto LABEL_15;
    }
    WGIController::NotifyRemovedAndStop(*v6);
    v8 = (struct _RTL_CRITICAL_SECTION **)*((_QWORD *)this + 12);
    if ( v7 != v8 )
    {
      do
      {
        v9 = 0LL;
        if ( &v13 != v7 )
        {
          v9 = *v7;
          *v7 = 0LL;
        }
        v10 = (WGIController *)*(v7 - 1);
        *(v7 - 1) = v9;
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
        ++v7;
      }
      while ( v7 != v8 );
      v8 = (struct _RTL_CRITICAL_SECTION **)*((_QWORD *)this + 12);
    }
    v11 = (WGIController *)*(v8 - 1);
    if ( v11 )
    {
      *(v8 - 1) = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v11);
    }
    *((_QWORD *)this + 12) -= 8LL;
  }
LABEL_15:
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
