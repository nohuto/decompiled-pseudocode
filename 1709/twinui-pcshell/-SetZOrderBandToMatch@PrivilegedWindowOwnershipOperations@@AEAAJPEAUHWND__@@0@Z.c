/*
 * XREFs of ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1800F2E94
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800F2D80 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  const char *v6; // r9
  __int64 v7; // rdx
  RTL_SRWLOCK *v9; // rbx
  const char *v10; // r9
  unsigned int LastError; // ebx
  int v12; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v13[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)GetWindowBand(a2, &v12) )
  {
    v7 = 443LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( !(unsigned int)GetWindowBand(a3, &v15) )
  {
    v7 = 446LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( v12 != v15 )
  {
    v9 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
    v13[0] = v9;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v9[5].Ptr + 1);
      v9 = v13[0];
    }
    AcquireSRWLockExclusive(v9 + 7);
    EnableIAMAccess(v9[6].Ptr, 1LL);
    if ( !(unsigned int)SetWindowBand(a2, 0LL, v15) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1C3,
                    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                    v10);
      IamAccess::SyncIamAccess::~SyncIamAccess(v13);
      return LastError;
    }
    IamAccess::SyncIamAccess::~SyncIamAccess(v13);
  }
  return 0LL;
}
