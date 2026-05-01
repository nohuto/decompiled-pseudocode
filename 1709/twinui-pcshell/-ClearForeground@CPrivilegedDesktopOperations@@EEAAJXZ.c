/*
 * XREFs of ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1800F22E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::ClearForeground(CPrivilegedDesktopOperations *this)
{
  RTL_SRWLOCK *v1; // rbx
  unsigned int LastError; // edi
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  LastError = 0;
  v6 = v1;
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v1[5].Ptr + 1);
    v1 = v6;
  }
  AcquireSRWLockExclusive(v1 + 7);
  EnableIAMAccess(v1[6].Ptr, 1LL);
  if ( !(unsigned int)ClearForeground() )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x9A,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v3);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v6);
  return LastError;
}
