/*
 * XREFs of ?SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800F21C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetCancelRotationDelayHintWindow(
        CPrivilegedDesktopOperations *this,
        HWND a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int LastError; // edi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  LastError = 0;
  v8 = v2;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v2[5].Ptr + 1);
    v2 = v8;
  }
  AcquireSRWLockExclusive(v2 + 7);
  EnableIAMAccess(v2[6].Ptr, 1LL);
  if ( !(unsigned int)SetCancelRotationDelayHintWindow(a2) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x88,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v8);
  return LastError;
}
