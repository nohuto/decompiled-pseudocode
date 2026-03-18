/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x14054FD20
 * Callers:
 *     MiDecommitRegion @ 0x1404AE180 (MiDecommitRegion.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 *     PsChangeJobMemoryUsage @ 0x14077B2A0 (PsChangeJobMemoryUsage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x14008522C (PspSendJobNotification.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140532E98 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x140550090 (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r15
  char v6; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  BOOL v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 i; // rdi
  int v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v4 = a2;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 944) )
    return 1;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  v26 = 0LL;
  v27 = *(_QWORD *)(*(_QWORD *)(a3 + 904) + 1080LL);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v27 )
  {
    ExAcquirePushLockExclusiveEx(v27 + 1032, 0LL);
    a4 = v32;
    a3 = v31;
  }
  v8 = v27;
  if ( (a1 & 4) != 0 )
  {
    v9 = a4;
    a4 = 0LL;
    v32 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 904);
  }
  v28 = v9;
  v10 = v9;
  if ( v9 != a4 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( v10 != v8 )
        ExAcquirePushLockExclusiveEx(v10 + 1032, 0LL);
      v12 = *(_QWORD *)(v10 + 976);
      v13 = v12 + v4;
      if ( v4 <= 0 )
      {
        if ( v13 > v12 )
        {
LABEL_65:
          v23 = v10;
          if ( !v6 )
            v23 = v26;
          v26 = v23;
          PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL, a4);
          v6 = 0;
          goto LABEL_28;
        }
      }
      else if ( v13 < v12 )
      {
        goto LABEL_65;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      a4 = v13 + *(_QWORD *)(v10 + 1320);
      v29 = a4;
      if ( (v15 & 0x200000) != 0 && a4 > *(_QWORD *)(v10 + 592) )
      {
        a2 = 1LL;
        v14 = v4 > 0;
      }
      if ( (v15 & 0x200) != 0 && v13 > *(_QWORD *)(v10 + 584) && v4 > 0 || v14 )
        break;
      if ( v6 )
      {
        *(_QWORD *)(v10 + 976) = v13;
LABEL_19:
        if ( v6 )
        {
          v16 = *(_QWORD *)(v10 + 984);
          if ( v16 )
          {
            v19 = *(_QWORD *)(v16 + 40);
            a2 = 512LL;
            if ( v4 <= 0 )
              a2 = 0x8000LL;
            if ( (*(_DWORD *)v16 & 0x200000) == 0 )
              a4 = v13;
            a3 = 0LL;
            if ( v19 && (a2 & 0x200) != 0 && a4 > v19 )
              a3 = 512LL;
            v20 = *(_QWORD *)(v16 + 32);
            if ( v20 && (a2 & 0x8000) != 0 && a4 < v20 )
              a3 = (unsigned int)a3 | 0x8000;
            v25 |= a3;
          }
        }
      }
      if ( v4 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 608) )
          *(_QWORD *)(v10 + 608) = v13;
        v11 = *(_QWORD *)(v31 + 1264);
      }
      if ( v10 != v8 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 1032), a2, a3, a4);
        KeAbPostRelease(v10 + 1032);
      }
      if ( v11 )
      {
        if ( v11 > *(_QWORD *)(v10 + 600) )
        {
          _m_prefetchw((const void *)(v10 + 600));
          v21 = *(_QWORD *)(v10 + 600);
          if ( v11 > v21 )
          {
            do
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 600), v11, v21);
            }
            while ( v21 != v22 && v11 > v21 );
          }
        }
      }
LABEL_28:
      v10 = *(_QWORD *)(v10 + 1072);
      if ( v10 == v32 )
      {
        if ( v6 )
        {
          if ( v25 )
            PspScheduleEnforcementWorker(v8);
        }
        else
        {
          for ( i = v28; i != v26; i = *(_QWORD *)(i + 1072) )
          {
            if ( i != v8 )
              ExAcquirePushLockExclusiveEx(i + 1032, 0LL);
            *(_QWORD *)(i + 976) -= v4;
            PspUnlockJobMemoryLimitsExclusive(i, v8, 0LL, a4);
          }
        }
        goto LABEL_32;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v10 + 976) = v13;
    }
    else if ( v6 )
    {
      v26 = v10;
      v6 = 0;
    }
    if ( *(_QWORD *)(v10 + 456) && (*(_DWORD *)(v10 + 876) & 0x200) != 0 && (*(_DWORD *)(v31 + 768) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v31 + 768), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(v31 + 736), 1);
      a4 = v29;
    }
    goto LABEL_19;
  }
LABEL_32:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 1032), a2, a3, a4);
    KeAbPostRelease(v8 + 1032);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}
