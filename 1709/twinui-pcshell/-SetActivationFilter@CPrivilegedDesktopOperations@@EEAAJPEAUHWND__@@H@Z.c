/*
 * XREFs of ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800F2360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActivationFilter(
        CPrivilegedDesktopOperations *this,
        HWND a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned int LastError; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  LastError = 0;
  v10 = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v3[5].Ptr + 1);
    v3 = v10;
  }
  AcquireSRWLockExclusive(v3 + 7);
  EnableIAMAccess(v3[6].Ptr, 1LL);
  if ( !(unsigned int)SetActivationFilter(a2, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xA2,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v7);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v10);
  return LastError;
}
