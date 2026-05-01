/*
 * XREFs of ?UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1801CF5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::UnregisterForPropertyChangeEvents(
        RTL_SRWLOCK *this,
        int a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v6; // rbp
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+20h]

  v11 = 0LL;
  v6 = this + 10;
  AcquireSRWLockShared(this + 10);
  v12 = v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
  ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-27], a2, &v11);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  if ( v11
    && (v7 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v11 + 832LL))(v11, a3.value),
        v8 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x799,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
  return v8;
}
