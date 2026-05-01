/*
 * XREFs of ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180081EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::GetPositionerPriority(RTL_SRWLOCK *this, struct IShellPositionerPriority **a2)
{
  unsigned int v4; // ebx
  PVOID Ptr; // rcx
  struct IShellPositionerPriority *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  *a2 = 0LL;
  if ( this[11].Ptr )
  {
    Ptr = this[11].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v6 = (struct IShellPositionerPriority *)this[11].Ptr;
    v4 = 0;
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)0x8007000ELL);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v4;
}
