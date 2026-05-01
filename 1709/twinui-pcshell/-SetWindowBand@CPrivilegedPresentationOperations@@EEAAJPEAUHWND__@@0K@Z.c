/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1800F2590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800032F0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int LastErrorFailHr; // edi
  wil::details *v9; // rcx
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  LastErrorFailHr = 0;
  v11 = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v4[5].Ptr + 1);
    v4 = v11;
  }
  AcquireSRWLockExclusive(v4 + 7);
  EnableIAMAccess(v4[6].Ptr, 1LL);
  if ( !(unsigned int)SetWindowBand(a2, a3, a4) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v9);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v11);
  return LastErrorFailHr;
}
