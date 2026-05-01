/*
 * XREFs of ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800F2D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800032F0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedSizeConstraintsOperations::QuerySizeConstraints(
        CPrivilegedSizeConstraintsOperations *this,
        HWND a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int LastErrorFailHr; // edi
  wil::details *v5; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  LastErrorFailHr = 0;
  v7 = v2;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v2[5].Ptr + 1);
    v2 = v7;
  }
  AcquireSRWLockExclusive(v2 + 7);
  EnableIAMAccess(v2[6].Ptr, 1LL);
  if ( !(unsigned int)GetWindowTrackInfoAsync(a2) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v7);
  return LastErrorFailHr;
}
