/*
 * XREFs of ?GetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18007CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetSizeConstraintsForDpi(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  (*(void (__fastcall **)(PVOID, _QWORD *, _QWORD))(*(_QWORD *)this[22].Ptr + 24LL))(this[22].Ptr, v9, a2);
  if ( a3 )
    *a3 = (struct tagSIZE)v9[0];
  if ( a4 )
    *a4 = (struct tagSIZE)v9[1];
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
