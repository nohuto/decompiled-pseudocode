/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x140519510
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x14011D7EC (MmAssignProcessToJob.c)
 *     MiDecommitRegion @ 0x140499E58 (MiDecommitRegion.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 *     PsChangeJobMemoryUsageByProcess @ 0x1406E0FF0 (PsChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x140039434 (PspSendJobNotification.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     PspScheduleEnforcementWorker @ 0x140443B24 (PspScheduleEnforcementWorker.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x14055F938 (PspUnlockJobMemoryLimitsExclusive.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  BOOL v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  __int16 v18; // cx
  unsigned __int64 v20; // rax
  __int16 v21; // dx
  unsigned __int64 v22; // r8
  int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  $69CD3F157F9F39B6F7113F2231989901 *v27; // rcx
  __int64 v28; // rax
  __int64 i; // rdi
  int v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  unsigned __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-48h]

  if ( (a1 & 0x10) == 0 || !*(_QWORD *)(a3 + 944) )
    return 1;
  v7 = 1;
  CurrentThread = KeGetCurrentThread();
  v30 = 0;
  v31 = 0LL;
  v32 = *(_QWORD *)(*(_QWORD *)(a3 + 904) + 1080LL);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v32 )
    ExAcquirePushLockExclusiveEx(v32 + 1032, 0LL);
  v9 = v32;
  v34 = *(_QWORD *)(a3 + 904);
  v10 = v34;
  if ( v34 != a4 )
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
          v28 = v31;
          if ( v7 )
            v28 = v10;
          v31 = v28;
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
      v33 = v16;
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
            v22 = v13;
            if ( a2 <= 0 )
              v21 = 0x8000;
            if ( (*(_DWORD *)v17 & 0x200000) != 0 )
              v22 = v16;
            v23 = 0;
            if ( v20 && (v21 & 0x200) != 0 && v22 > v20 )
              v23 = 512;
            v24 = *(_QWORD *)(v17 + 32);
            if ( v24 && v21 < 0 && v22 < v24 )
              v23 |= 0x8000u;
            v30 |= v23;
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
          v25 = *(_QWORD *)(v10 + 600);
          if ( v11 > v25 )
          {
            do
            {
              v26 = v25;
              v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 600), v11, v25);
            }
            while ( v25 != v26 && v11 > v25 );
          }
        }
      }
LABEL_26:
      v10 = *(_QWORD *)(v10 + 1072);
      if ( v10 == a4 )
      {
        if ( v7 )
        {
          if ( v30 )
            PspScheduleEnforcementWorker(v9);
        }
        else
        {
          for ( i = v34; i != v31; i = *(_QWORD *)(i + 1072) )
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
      v31 = v10;
      v7 = 0;
    }
    if ( *(_QWORD *)(v10 + 456) && (*(_DWORD *)(v10 + 876) & 0x200) != 0 && (*(_DWORD *)(a3 + 768) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(a3 + 768), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(a3 + 736), 1);
      v16 = v33;
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
    v18 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v18;
    if ( !v18 )
    {
      v27 = &CurrentThread->152;
      if ( ($69CD3F157F9F39B6F7113F2231989901 *)v27->ApcState.ApcListHead[0].Flink != v27 )
        KiCheckForKernelApcDelivery((__int64)v27);
    }
  }
  return v7;
}
