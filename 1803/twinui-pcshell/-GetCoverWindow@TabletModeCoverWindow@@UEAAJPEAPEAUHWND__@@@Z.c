/*
 * XREFs of ?GetCoverWindow@TabletModeCoverWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x1802E1FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180095670 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall TabletModeCoverWindow::GetCoverWindow(RTL_SRWLOCK *this, HWND *a2)
{
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 5, &SRWLock);
  *a2 = (HWND)this[4].Ptr;
  if ( this[4].Ptr )
  {
    v4 = 0;
  }
  else
  {
    v4 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)0x80004005LL);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v4;
}
