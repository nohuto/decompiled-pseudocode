/*
 * XREFs of ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1800F2C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedTabletModeOperations::SetWindowShowState(
        CPrivilegedTabletModeOperations *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5)
{
  RTL_SRWLOCK *v5; // rbx
  unsigned int LastError; // edi
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  LastError = 0;
  v13 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v5[5].Ptr + 1);
    v5 = v13;
  }
  AcquireSRWLockExclusive(v5 + 7);
  EnableIAMAccess(v5[6].Ptr, 1LL);
  if ( !(unsigned int)SetWindowShowState(a2, a3, a4, a5) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x185,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v10);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v13);
  return LastError;
}
