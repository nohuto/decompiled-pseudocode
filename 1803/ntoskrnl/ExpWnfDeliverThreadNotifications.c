/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x1404F4D64
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
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExpWnfReadStateData @ 0x1404F6A2C (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 *v3; // r13
  unsigned int v4; // r15d
  signed __int64 *v5; // r12
  __int64 v6; // rsi
  volatile signed __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 *v12; // rax
  unsigned __int64 *i; // rdx
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // rsi
  unsigned int v16; // r13d
  _QWORD *v17; // rcx
  _OWORD *v18; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // eax
  volatile signed __int64 *v23; // r14
  int v24; // [rsp+34h] [rbp-84h]
  unsigned __int64 *v25; // [rsp+38h] [rbp-80h]
  unsigned __int64 *v26; // [rsp+38h] [rbp-80h]
  unsigned int v27; // [rsp+40h] [rbp-78h]
  int v28; // [rsp+44h] [rbp-74h] BYREF
  unsigned __int64 *v29; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v30; // [rsp+50h] [rbp-68h]
  unsigned __int64 v31; // [rsp+58h] [rbp-60h]
  unsigned __int64 *v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 *v33; // [rsp+70h] [rbp-48h]
  int v36; // [rsp+D0h] [rbp+18h]
  int v37; // [rsp+D8h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)a1;
  v4 = -2147483622;
  v36 = -2147483622;
  v24 = 0;
  v37 = 0;
  v27 = a3 - 48;
LABEL_2:
  v5 = (signed __int64 *)(v3 + 10);
  v33 = v3 + 10;
  v6 = KeAbPreAcquire((ULONG_PTR)(v3 + 10), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3 + 10, v6, (ULONG_PTR)(v3 + 10));
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (volatile signed __int64 *)(v3 + 13);
  v32 = v3 + 13;
  v8 = KeAbPreAcquire((ULONG_PTR)(v3 + 13), 0LL, 0);
  v11 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3 + 13, v8, (ULONG_PTR)(v3 + 13));
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = v3 + 14;
  v29 = v3 + 14;
  for ( i = (unsigned __int64 *)v3[14]; ; i = (unsigned __int64 *)*i )
  {
    v25 = i;
    v30 = i;
    if ( i == v12 )
      break;
    v14 = i - 13;
    if ( *((_DWORD *)i + 4) != 1 )
      goto LABEL_36;
    v15 = v14[6];
    v31 = v15;
    if ( v15 )
    {
      v15 &= -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v15 + 8)) != 0);
      v31 = v15;
    }
    v16 = *((_DWORD *)v14 + 31) & *((_DWORD *)v14 + 25) & 0xFFFFFFFE;
    if ( v15 )
      v16 = *((_DWORD *)v14 + 31) & *((_DWORD *)v14 + 25);
    if ( !v16 )
      goto LABEL_41;
    memset(a2, 0, 0x30uLL);
    v17 = a2;
    a2[1] = v14[7] ^ 0x41C64E6DA3BC0074LL;
    *a2 = v14[2];
    if ( (v16 & 1) == 0 )
      goto LABEL_23;
    v18 = *(_OWORD **)(v15 + 64);
    if ( v18 )
      *(_OWORD *)((char *)a2 + 28) = *v18;
    v24 = ExpWnfReadStateData(v15, &v37, a2 + 6, v27, &v28);
    if ( v24 >= 0 )
    {
      v17 = a2;
      *((_DWORD *)a2 + 4) = v37;
      *((_DWORD *)a2 + 5) = v28;
LABEL_23:
      *((_DWORD *)v17 + 11) = 48;
      *((_DWORD *)v17 + 6) = v16;
    }
    if ( v15 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v15 + 8));
    v15 = 0LL;
    if ( v24 >= 0 )
    {
      if ( !v37 )
        v16 &= ~1u;
      if ( v16 )
      {
        *((_DWORD *)v14 + 32) = v16;
        v14[15] = 2LL;
        v4 = 0;
        break;
      }
LABEL_41:
      v20 = (unsigned __int64 *)v25[1];
      i = v20;
      v26 = v20;
      v9 = (__int64)v30;
      v21 = *v30;
      if ( *(unsigned __int64 **)(*v30 + 8) != v30 || (unsigned __int64 *)*v20 != v30 )
        __fastfail(3u);
      *v20 = v21;
      *(_QWORD *)(v21 + 8) = v20;
      *((_DWORD *)v14 + 30) = 0;
      v22 = *((_DWORD *)v14 + 31);
      *(unsigned __int64 *)((char *)v14 + 124) = 0LL;
      if ( v15 )
      {
        if ( (v22 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 164), 0xFFFFFFFF) == 1 )
        {
          v3 = (unsigned __int64 *)a1;
          v23 = (volatile signed __int64 *)(a1 + 104);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v23, (__int64)i, v9, v10);
          KeAbPostRelease((ULONG_PTR)v23);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 80));
          KeAbPostRelease(a1 + 80);
          ExpWnfNotifyNameSubscribers(v15, 8LL, 1LL, 1LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v15 + 8));
          v4 = v36;
          goto LABEL_2;
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v15 + 8));
        i = v26;
      }
      v12 = v29;
LABEL_36:
      v4 = v36;
      continue;
    }
    v4 = v36;
    if ( v36 == -2147483622 )
      v4 = v24;
    v36 = v4;
    i = v25;
    v12 = v29;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7, (__int64)i, v9, v10);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return v4;
}
