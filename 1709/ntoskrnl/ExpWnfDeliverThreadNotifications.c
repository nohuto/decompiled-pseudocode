/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x1405013D8
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1405003E4 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExpWnfReadStateData @ 0x140500CA8 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v4; // r15d
  PRTL_BALANCED_NODE v5; // rsi
  PRTL_BALANCED_NODE v6; // rax
  PRTL_BALANCED_NODE v7; // rsi
  _QWORD *v8; // rax
  _QWORD *i; // r12
  _QWORD *v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // r15d
  _QWORD *v13; // rcx
  _OWORD *v14; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // [rsp+34h] [rbp-54h]
  unsigned int v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+3Ch] [rbp-4Ch] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+A0h] [rbp+18h]
  int v25; // [rsp+A8h] [rbp+20h] BYREF

  v4 = -2147483622;
  v24 = -2147483622;
  v19 = 0;
  v25 = 0;
  v20 = a3 - 48;
LABEL_2:
  v5 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, 0);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, (__int64)v5, (ULONG_PTR)(a1 + 10));
  if ( v5 )
    BYTE2(v5[1].Left) |= 1u;
  v6 = KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, (__int64)v6, (__int16 *)a1 + 52);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = a1 + 14;
  for ( i = (_QWORD *)a1[14]; i != v8; i = (_QWORD *)*i )
  {
    v10 = i - 13;
    if ( *((_DWORD *)i + 4) != 1 )
      continue;
    v11 = v10[6];
    v22 = v11;
    if ( v11 )
    {
      v11 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8)) != 0);
      v22 = v11;
    }
    v12 = *((_DWORD *)v10 + 31) & *((_DWORD *)v10 + 25) & 0xFFFFFFFE;
    if ( v11 )
      v12 = *((_DWORD *)v10 + 31) & *((_DWORD *)v10 + 25);
    if ( !v12 )
      goto LABEL_39;
    memset(a2, 0, 0x30uLL);
    v13 = a2;
    a2[1] = v10[7] ^ 0x41C64E6DA3BC0074LL;
    *a2 = v10[2];
    if ( (v12 & 1) != 0 )
    {
      v14 = *(_OWORD **)(v11 + 64);
      if ( v14 )
        *(_OWORD *)((char *)a2 + 28) = *v14;
      v19 = ExpWnfReadStateData(v11, &v25, a2 + 6, v20, &v21);
      if ( v19 < 0 )
        goto LABEL_24;
      v13 = a2;
      *((_DWORD *)a2 + 4) = v25;
      *((_DWORD *)a2 + 5) = v21;
    }
    *((_DWORD *)v13 + 11) = 48;
    *((_DWORD *)v13 + 6) = v12;
LABEL_24:
    if ( v11 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
      v11 = 0LL;
    }
    if ( v19 < 0 )
    {
      v4 = v24;
      v8 = a1 + 14;
      if ( v24 == -2147483622 )
      {
        v4 = v19;
        v24 = v19;
      }
      continue;
    }
    if ( !v25 )
      v12 &= ~1u;
    if ( v12 )
    {
      *((_DWORD *)v10 + 32) = v12;
      v10[15] = 2LL;
      v4 = 0;
      break;
    }
LABEL_39:
    v16 = (_QWORD *)i[1];
    i = v16;
    v17 = v10[13];
    if ( *(_QWORD **)(v17 + 8) != v10 + 13 || (_QWORD *)*v16 != v10 + 13 )
      __fastfail(3u);
    *v16 = v17;
    *(_QWORD *)(v17 + 8) = v16;
    *((_DWORD *)v10 + 30) = 0;
    v18 = *((_DWORD *)v10 + 31);
    *(_QWORD *)((char *)v10 + 124) = 0LL;
    if ( v11 )
    {
      if ( (v18 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFF) == 1 )
      {
        if ( (_InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 13);
        KeAbPostRelease((ULONG_PTR)(a1 + 13));
        if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(a1 + 10);
        KeAbPostRelease((ULONG_PTR)(a1 + 10));
        ExpWnfNotifyNameSubscribers(v11, 8, 1, 1u);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
        v4 = v24;
        goto LABEL_2;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
    }
    v8 = a1 + 14;
    v4 = v24;
  }
  if ( (_InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  return v4;
}
