/*
 * XREFs of ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18009DC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009E7C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x1800A019C (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnRawGameControllerRemoved(
        WGIRawInputProvider *this,
        struct IInspectable *a2,
        struct Windows::Gaming::Input::IRawGameController *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  WGIController **i; // rbx
  struct _RTL_CRITICAL_SECTION **v7; // r14
  struct _RTL_CRITICAL_SECTION **v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rax
  WGIController *v10; // rcx
  __int64 v11; // rax
  WGIController *v12; // rcx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v14 = v5;
  for ( i = (WGIController **)*((_QWORD *)this + 11); i != *((WGIController ***)this + 12); ++i )
  {
    if ( *((struct Windows::Gaming::Input::IRawGameController **)*i + 9) == a3 )
    {
      WGIController::NotifyRemovedAndStop(*i);
      v7 = (struct _RTL_CRITICAL_SECTION **)*((_QWORD *)this + 12);
      v8 = (struct _RTL_CRITICAL_SECTION **)(i + 1);
      if ( i + 1 != (WGIController **)v7 )
      {
        do
        {
          v9 = 0LL;
          if ( &v14 != v8 )
          {
            v9 = *v8;
            *v8 = 0LL;
          }
          v10 = (WGIController *)*(v8 - 1);
          *(v8 - 1) = v9;
          if ( v10 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
          ++v8;
        }
        while ( v8 != v7 );
      }
      v11 = *((_QWORD *)this + 12);
      v12 = *(WGIController **)(v11 - 8);
      if ( v12 )
      {
        *(_QWORD *)(v11 - 8) = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v12);
      }
      *((_QWORD *)this + 12) -= 8LL;
      break;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
