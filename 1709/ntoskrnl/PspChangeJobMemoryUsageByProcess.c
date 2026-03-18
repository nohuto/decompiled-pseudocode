/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1404961F0
 * Callers:
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 *     PsChangeJobMemoryUsage @ 0x1404961D4 (PsChangeJobMemoryUsage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PspSendJobNotification @ 0x1400D2E84 (PspSendJobNotification.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1405124F0 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x14057EEEC (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  BOOL v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v20; // rax
  __int16 v21; // dx
  int v22; // r8d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  $B476B70DB57F76B110DA5B9238C3E934 *v26; // rcx
  __int64 v27; // rax
  __int64 i; // rdi
  int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  unsigned __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+40h] [rbp-48h]

  if ( (a1 & 0x10) == 0 || !*(_QWORD *)(a3 + 944) )
    return 1;
  v7 = 1;
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  v30 = 0LL;
  v31 = *(_QWORD *)(*(_QWORD *)(a3 + 904) + 1080LL);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v31 )
    ExAcquirePushLockExclusiveEx(v31 + 1032, 0LL);
  v9 = v31;
  v33 = *(_QWORD *)(a3 + 904);
  v10 = v33;
  if ( v33 != a4 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( v10 != v9 )
        ExAcquirePushLockExclusiveEx(v10 + 1032, 0LL);
      v12 = *(_QWORD *)(v10 + 976);
      v13 = v12 + a2;
      if ( a2 <= 0 )
      {
        if ( v13 > v12 )
        {
LABEL_63:
          v27 = v30;
          if ( v7 )
            v27 = v10;
          v30 = v27;
          PspUnlockJobMemoryLimitsExclusive(v10, v9, 0LL);
          v7 = 0;
          goto LABEL_26;
        }
      }
      else if ( v13 < v12 )
      {
        goto LABEL_63;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      v16 = v13 + *(_QWORD *)(v10 + 1320);
      v32 = v16;
      if ( (v15 & 0x200000) != 0 && v16 > *(_QWORD *)(v10 + 592) )
        v14 = a2 > 0;
      if ( (v15 & 0x200) != 0 && v13 > *(_QWORD *)(v10 + 584) && a2 > 0 || v14 )
        break;
      if ( v7 )
      {
        *(_QWORD *)(v10 + 976) = v13;
LABEL_17:
        if ( v7 )
        {
          v17 = *(_QWORD *)(v10 + 984);
          if ( v17 )
          {
            v20 = *(_QWORD *)(v17 + 40);
            v21 = 512;
            if ( a2 <= 0 )
              v21 = 0x8000;
            if ( (*(_DWORD *)v17 & 0x200000) == 0 )
              v16 = v13;
            v22 = 0;
            if ( v20 && (v21 & 0x200) != 0 && v16 > v20 )
              v22 = 512;
            v23 = *(_QWORD *)(v17 + 32);
            if ( v23 && v21 < 0 && v16 < v23 )
              v22 |= 0x8000u;
            v29 |= v22;
          }
        }
      }
      if ( a2 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 608) )
          *(_QWORD *)(v10 + 608) = v13;
        v11 = *(_QWORD *)(a3 + 1264);
      }
      if ( v10 != v9 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 1032));
        KeAbPostRelease(v10 + 1032);
      }
      if ( v11 )
      {
        if ( v11 > *(_QWORD *)(v10 + 600) )
        {
          _m_prefetchw((const void *)(v10 + 600));
          v24 = *(_QWORD *)(v10 + 600);
          if ( v11 > v24 )
          {
            do
            {
              v25 = v24;
              v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 600), v11, v24);
            }
            while ( v24 != v25 && v11 > v24 );
          }
        }
      }
LABEL_26:
      v10 = *(_QWORD *)(v10 + 1072);
      if ( v10 == a4 )
      {
        if ( v7 )
        {
          if ( v29 )
            PspScheduleEnforcementWorker(v9, 1LL);
        }
        else
        {
          for ( i = v33; i != v30; i = *(_QWORD *)(i + 1072) )
          {
            if ( i != v9 )
              ExAcquirePushLockExclusiveEx(i + 1032, 0LL);
            *(_QWORD *)(i + 976) -= a2;
            PspUnlockJobMemoryLimitsExclusive(i, v9, 0LL);
          }
        }
        goto LABEL_30;
      }
    }
    if ( (a1 & 4) != 0 )
    {
      *(_QWORD *)(v10 + 976) = v13;
    }
    else if ( v7 )
    {
      v30 = v10;
      v7 = 0;
    }
    if ( *(_QWORD *)(v10 + 456) && (*(_DWORD *)(v10 + 876) & 0x200) != 0 && (*(_DWORD *)(a3 + 768) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(a3 + 768), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(a3 + 736), 1);
      v16 = v32;
    }
    goto LABEL_17;
  }
LABEL_30:
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 1032));
    KeAbPostRelease(v9 + 1032);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v26 = &CurrentThread->152;
      if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v26->ApcState.ApcListHead[0].Flink != v26 )
        KiCheckForKernelApcDelivery((__int64)v26);
    }
  }
  return v7;
}
