/*
 * XREFs of ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F3DA8
 * Callers:
 *     ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x18010BE30 (-OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z.c)
 *     ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x18010BEF0 (-OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::ViewOperationRequestComplete(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct IViewWrapperInternal *v8; // rcx
  int v9; // eax
  __int64 result; // rax
  struct IViewWrapperInternal *v11; // rcx
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewWrapperInternal *v14; // [rsp+40h] [rbp+8h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  try
  {
    v14 = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 28, SRWLock);
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x49A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    if ( SRWLock[0] )
      ReleaseSRWLockShared(SRWLock[0]);
    result = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v14 + 696LL))(
               v14,
               a3,
               a4);
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      result = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  catch ( ... )
  {
  }
  return result;
}
