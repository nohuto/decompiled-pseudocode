/*
 * XREFs of ?put_WindowResizingState@ViewWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180050A50
 * Callers:
 *     ?SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800474D0 (-SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Wind.c)
 * Callees:
 *     ?SetWindowResizingStateForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180056110 (-SetWindowResizingStateForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4WindowResizingState@ViewM.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::put_WindowResizingState(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64, _QWORD); // rax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
  AcquireSRWLockExclusive(v4);
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 520LL);
    v7 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 208LL);
    if ( (char *)v7 == (char *)ViewManagerBridge::SetWindowResizingStateForView )
      ViewManagerBridge::SetWindowResizingStateForView(v6, v5, a2);
    else
      v7(v6, v5, a2);
    v8 = 0;
  }
  else
  {
    v8 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x653,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL,
      -2);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v8;
}
