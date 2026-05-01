/*
 * XREFs of ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801CF968
 * Callers:
 *     ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x1801DD3F0 (-OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z.c)
 *     ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x1801DDB00 (-OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::ViewOperationRequestComplete(
        RTL_SRWLOCK *a1,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rsi
  struct IViewWrapperInternal *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v8 = a1 + 37;
  AcquireSRWLockShared(a1 + 37);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, &v10);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  if ( v10 )
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v10 + 728LL))(v10, a3, a4);
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
}
