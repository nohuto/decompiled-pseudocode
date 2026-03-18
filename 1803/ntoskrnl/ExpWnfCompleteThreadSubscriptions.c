/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x1404F502C
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1404F4C10 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExpWnfLookupNameInstance @ 0x1404F62D0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ExpCaptureWnfStateName @ 0x1404F68C4 (ExpCaptureWnfStateName.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *v8; // rbp
  int v9; // r13d
  char v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 *v16; // rbx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 **v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h] BYREF
  int v27[2]; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( (int)ExpCaptureWnfStateName(a2, &v25, 0LL) < 0 )
    return 3221225485LL;
  v11 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, v10);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, v11, (ULONG_PTR)(a1 + 10));
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0);
  v15 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v12, (ULONG_PTR)(a1 + 13));
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v16 = (__int64 *)a1[14];
  if ( v16 != a1 + 14 )
  {
    while ( *(v16 - 11) != a3 || v25 != *(v16 - 6) )
    {
      v16 = (__int64 *)*v16;
      if ( v16 == a1 + 14 )
        goto LABEL_27;
    }
    v9 = 1;
    if ( a4 == *((_DWORD *)v16 + 6) && *((int *)v16 + 4) > 1 )
    {
      v17 = *((_DWORD *)v16 + 5);
      if ( v17 )
      {
        *((_DWORD *)v16 + 4) = 1;
        if ( a5 == -1073741267 && (v17 & 1) == 0 )
          *((_DWORD *)v16 + 5) = v17 | 1;
      }
      else
      {
        if ( a5 )
        {
          *((_DWORD *)v16 + 4) = 3;
          v20 = 3;
        }
        else
        {
          *((_DWORD *)v16 + 4) = 0;
          v18 = (__int64 *)*v16;
          if ( *(__int64 **)(*v16 + 8) != v16 || (v19 = (__int64 **)v16[1], *v19 != v16) )
            __fastfail(3u);
          *v19 = v18;
          v18[1] = (__int64)v19;
          v20 = *((_DWORD *)v16 + 4);
        }
        if ( v20 == 3 )
          goto LABEL_27;
      }
      if ( (*((_BYTE *)v16 + 20) & 1) == 0 && (v16[3] & 1) != 0 )
      {
        v21 = *(v16 - 7);
        if ( v21 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 164), 0xFFFFFFFF) == 1
            && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(v16 - 7) + 8)) )
          {
            v8 = (struct _EX_RUNDOWN_REF *)*(v16 - 7);
          }
        }
      }
      *((_DWORD *)v16 + 6) = 0;
    }
  }
LABEL_27:
  v22 = _InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v22) = v22 & 6;
  if ( (_BYTE)v22 == 2 )
    ExfTryToWakePushLock(a1 + 13, v22, v13, v14);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  if ( !v9 && (a4 & 1) != 0 )
  {
    v24 = a1[1];
    *(_QWORD *)v27 = 0LL;
    ExpWnfResolveScopeInstance((int)v27, v24, 0, (v25 >> 6) & 0xF, 0LL);
    if ( (int)ExpWnfLookupNameInstance(*(_QWORD *)v27, v25, &v26) >= 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 164), 0xFFFFFFFF) == 1 )
        v8 = (struct _EX_RUNDOWN_REF *)v26;
      else
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v26 + 8));
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v27 + 8LL));
  }
  if ( v8 )
  {
    ExpWnfNotifyNameSubscribers(v8, 8LL, 1LL, 1LL);
    ExReleaseRundownProtection(v8 + 1);
  }
  return 0LL;
}
