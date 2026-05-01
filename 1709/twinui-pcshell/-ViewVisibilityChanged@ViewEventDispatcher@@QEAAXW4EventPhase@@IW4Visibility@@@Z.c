/*
 * XREFs of ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x18011DDE0
 * Callers:
 *     ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180136AD0 (-OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z.c)
 *     ?OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4AnimationFlags@3@@Z @ 0x180136C10 (-OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::ViewVisibilityChanged(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rbx
  struct IViewWrapperInternal *v9; // rcx
  int v10; // eax
  __int64 result; // rax
  struct IViewWrapperInternal *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v14; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v14 = 0LL;
    v8 = a1 + 37;
    AcquireSRWLockShared(a1 + 37);
    v9 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a3, &v14);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3C9,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v10);
    if ( v8 )
      ReleaseSRWLockShared(v8);
    result = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v14 + 672LL))(
               v14,
               a2,
               a4);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      result = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  catch ( ... )
  {
  }
  return result;
}
