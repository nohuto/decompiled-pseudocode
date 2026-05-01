/*
 * XREFs of ?SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x18013F350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328 (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x180141EDC (-PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::SetWindowOwner(RTL_SRWLOCK **this, HWND a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[22], &SRWLock);
  v4 = this[33];
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  if ( !v4 )
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F2,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
    return v5;
  }
  v5 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, HWND))(*(_QWORD *)this[22][60].Ptr + 24LL))(
         this[22][60].Ptr,
         v4,
         a2);
  result = 2147943800LL;
  if ( v5 != -2147023496 )
  {
    if ( (v5 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x400,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)v5);
      return v5;
    }
    if ( !a2 )
      ViewWrapperBase::PushDesiredZbidToWindow((ViewWrapperBase *)this);
    return 0LL;
  }
  return result;
}
