/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x14010D1C0
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x140038C54 (PpmContinueActiveTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x140109F20 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x14016B97C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlGetPpmStatsForProcessor @ 0x140157930 (HvlGetPpmStatsForProcessor.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, __int64 *a5)
{
  unsigned int v5; // r14d
  bool v7; // zf
  char v11; // di
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  int v14; // r10d
  __int64 v15; // rcx
  char v16; // r8
  unsigned int i; // eax
  char v18; // r9
  __int16 v19; // bp
  bool v20; // bp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  __int64 v23; // r15
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, int *); // rax
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // edx
  int v36; // r8d
  unsigned int v37; // eax
  unsigned int v38; // r9d
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  __int64 *v41; // rbx
  __int64 v43; // r10
  int v44; // eax
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // [rsp+30h] [rbp-78h] BYREF
  __int64 v50; // [rsp+38h] [rbp-70h] BYREF
  __int64 v51; // [rsp+40h] [rbp-68h]
  __int64 PpmStatsForProcessor; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+50h] [rbp-58h]
  __int64 v54; // [rsp+58h] [rbp-50h] BYREF
  __int64 v55[8]; // [rsp+60h] [rbp-48h] BYREF
  int v56; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v58; // [rsp+B0h] [rbp+8h] BYREF
  int v59; // [rsp+B8h] [rbp+10h] BYREF

  v5 = 0;
  v7 = *(_DWORD *)(a1 + 24024) == 3;
  PpmStatsForProcessor = 0LL;
  v58 = 0LL;
  v53 = 0LL;
  if ( v7 )
  {
    v11 = 1;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24656) + 8LL * DWORD2(xmmword_1403E5A30)) >> 1;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  v51 = v12;
  v13 = (volatile signed __int32 *)(a1 + 23880);
  if ( a2
    || *(_QWORD *)(a1 + 23936)
    || *(_QWORD *)(a1 + 23960)
    && (*(_DWORD *)(a1 + 23432) != *(_DWORD *)(a1 + 23976) || *(_DWORD *)(a1 + 23428) != *(_DWORD *)(a1 + 23980))
    || a3 && v12 != *(_QWORD *)(a1 + 23984) )
  {
    v14 = 2;
    v15 = a1 + 23904;
    v16 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v15 )
      {
        v18 = *(_BYTE *)(*(_QWORD *)v15 + 32LL);
        if ( v18 && a3 )
          return 0;
        if ( v18 )
          v16 = 1;
        if ( v14 == 2 )
          v14 = i;
      }
      v15 += 8LL;
    }
    if ( v16 || a2 || !a4 )
    {
      v19 = v56;
      _disable();
      v20 = (v19 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 23880);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = SchedulerAssist[5];
            SchedulerAssist[5] = v44 + 1;
            if ( v44 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v13, 0LL) )
        {
          KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 23880), v45);
        }
      }
      v23 = _InterlockedExchange64((volatile __int64 *)(a1 + 23936), 0LL);
      if ( v11 )
      {
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v54, &v58);
        v53 = v54;
        v23 = PpmStatsForProcessor - v54 - *(_QWORD *)(a1 + 23992);
        *(_QWORD *)(a1 + 23992) = PpmStatsForProcessor - v54;
      }
      *(_QWORD *)(a1 + 23928) += v23;
      v24 = (_QWORD *)(a1 + 23944);
      do
      {
        v25 = *(v24 - 5);
        if ( v25 )
        {
          v26 = *(void (__fastcall **)(__int64, int *))v25;
          v27 = *(_QWORD *)(v25 + 40);
          if ( *(_BYTE *)(v25 + 33) )
          {
            ((void (__fastcall *)(__int64, _QWORD, unsigned __int64 *, __int64 *))v26)(v27, a2, &v49, &v50);
            v28 = *(_QWORD *)(v25 + 16);
            if ( v49 != v28 )
            {
              v29 = *(_QWORD *)(v25 + 8);
              v30 = v49 - v28;
              v32 = (v50 - v29) * *(unsigned __int8 *)(v25 + 35);
              v49 = v30;
              v50 -= v29;
              v31 = v50;
              *(_DWORD *)(v25 + 24) = v32 / v30;
              *(_QWORD *)(v25 + 16) = v30 + v28;
              *(_QWORD *)(v25 + 8) = v29 + v31;
            }
            v33 = *(_DWORD *)(v25 + 24);
            v59 = v33;
          }
          else
          {
            v26(v27, &v59);
            v33 = v59;
          }
          v34 = v23 * v33;
          *v24 += v34;
          if ( v5 == *(unsigned __int8 *)(a1 + 24016) )
            *(_QWORD *)(a1 + 23960) += v34;
        }
        ++v5;
        ++v24;
      }
      while ( v5 < 2 );
      if ( *(_BYTE *)(a1 + 24016) == 2 )
        *(_QWORD *)(a1 + 23960) += 100 * v23;
      v35 = *(_DWORD *)(a1 + 23432);
      v36 = *(_DWORD *)(a1 + 23428);
      v37 = v36 - *(_DWORD *)(a1 + 23980);
      v38 = v37 + v35 - *(_DWORD *)(a1 + 23976);
      if ( v38 )
      {
        v43 = *(_QWORD *)(a1 + 23960);
        *(_QWORD *)(a1 + 23960) = 0LL;
        *(_DWORD *)(a1 + 23976) = v35;
        *(_DWORD *)(a1 + 23980) = v36;
        if ( v37 )
        {
          v59 = v37 / v38;
          *(_QWORD *)(a1 + 23968) += v43 * (v37 / v38);
        }
      }
      *(_QWORD *)(a1 + 23984) = v51;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 23880, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v46 = v40[5] - 1;
          v40[5] = v46;
          if ( !v46 && !*((_BYTE *)v40 + 25) && !*((_BYTE *)v40 + 27) )
            KiPerformUnboostKick(v39);
        }
      }
      if ( v20 )
        _enable();
    }
  }
  v41 = a5;
  if ( a5 )
  {
    v47 = PpmStatsForProcessor;
    if ( PpmStatsForProcessor )
    {
      v48 = v53;
    }
    else
    {
      v47 = HvlGetPpmStatsForProcessor(a1, v55, &v58);
      v48 = v55[0];
    }
    *v41 = v47;
    v41[2] = v58;
    v41[1] = v48;
  }
  return 1;
}
