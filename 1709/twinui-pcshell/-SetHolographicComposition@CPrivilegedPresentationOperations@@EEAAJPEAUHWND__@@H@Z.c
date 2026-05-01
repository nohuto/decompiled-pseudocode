/*
 * XREFs of ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800F2620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetHolographicComposition(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned int LastError; // edi
  const char *v6; // r9
  int v8; // [rsp+20h] [rbp-28h] BYREF
  int *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  LastError = 0;
  v12 = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v3[5].Ptr + 1);
    v3 = v12;
  }
  AcquireSRWLockExclusive(v3 + 7);
  EnableIAMAccess(v3[6].Ptr, 1LL);
  v8 = 23;
  v9 = &v13;
  v10 = 4;
  if ( !(unsigned int)SetWindowCompositionAttribute(a2, &v8) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xEC,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v6);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v12);
  return LastError;
}
