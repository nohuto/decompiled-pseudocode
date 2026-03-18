/*
 * XREFs of PerfLogSpinLockRelease @ 0x14027EC8C
 * Callers:
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1402862C8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 v9; // di
  struct _KPRCB *v10; // r8
  __int64 v11; // r14
  unsigned int v12; // ecx
  int NestingLevel; // edx
  unsigned __int8 CurrentIrql; // al
  char v15; // al
  unsigned __int8 v16; // si
  __int64 v17; // rcx
  __int128 v18; // xmm1
  _QWORD v19[4]; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+54h] [rbp-2Ch]
  unsigned int CurrentRunTime; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+5Ch] [rbp-24h]
  unsigned __int8 v24; // [rsp+60h] [rbp-20h]
  char v25; // [rsp+61h] [rbp-1Fh]
  char v26; // [rsp+62h] [rbp-1Eh]
  _QWORD *v27; // [rsp+68h] [rbp-18h] BYREF
  int v28; // [rsp+70h] [rbp-10h]
  int v29; // [rsp+74h] [rbp-Ch]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (__int64)CurrentPrcb->EtwSupport + 16;
  v8 = *((_BYTE *)CurrentPrcb->EtwSupport + 272);
  if ( v8 )
  {
    v9 = *((_BYTE *)CurrentPrcb->EtwSupport + 272);
    while ( *(_QWORD *)(32LL * --v9 + v7 + 8) != a1 )
    {
      if ( !v9 )
      {
        ++*((_DWORD *)CurrentPrcb->EtwSupport + 70);
        return;
      }
    }
    v10 = KeGetCurrentPrcb();
    v11 = 32LL * v9 + v7;
    if ( *((_BYTE *)CurrentPrcb->EtwSupport + 273) )
      goto LABEL_20;
    if ( !EtwpSpinLockHoldThreshold || (int)a3 - *(_DWORD *)v11 <= (unsigned int)EtwpSpinLockHoldThreshold )
    {
      v12 = *(_DWORD *)(v11 + 20);
      if ( (v12 < EtwpSpinLockSpinThreshold
         || v10->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate)
        && (v12
         || (v10->SynchCounters.SpinLockAcquireCount - v10->SynchCounters.SpinLockContentionCount)
          % EtwpSpinLockAcquireSampleRate) )
      {
        goto LABEL_20;
      }
    }
    NestingLevel = v10->NestingLevel;
    *((_BYTE *)CurrentPrcb->EtwSupport + 273) = 1;
    v19[0] = a1;
    v19[1] = a2;
    v19[3] = a3;
    CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
    v25 = v8;
    CurrentIrql = KeGetCurrentIrql();
    v24 = CurrentIrql;
    v19[2] = *(_QWORD *)v11;
    v20 = *(_DWORD *)(v11 + 16);
    v21 = *(_DWORD *)(v11 + 20);
    v23 = v10->InterruptCount - *(_DWORD *)(v11 + 24);
    v15 = *(_BYTE *)(v11 + 28);
    v26 = v15;
    if ( NestingLevel == 1 )
    {
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v26 |= 0x40u;
LABEL_19:
        v29 = 0;
        v27 = v19;
        v28 = 56;
        EtwTraceKernelEvent((__int64)&v27, 1u, 0x20010000u, 0x529u, 0x602u);
        *(_BYTE *)(v7 + 257) = 0;
LABEL_20:
        v16 = v8 - 1;
        while ( v9 < v16 )
        {
          v17 = 32LL * ((unsigned int)v9++ + 1);
          v18 = *(_OWORD *)(v17 + v7 + 16);
          *(_OWORD *)v11 = *(_OWORD *)(v17 + v7);
          *(_OWORD *)(v11 + 16) = v18;
          v11 += 32LL;
        }
        --*(_BYTE *)(v7 + 256);
        return;
      }
      v15 = v26;
    }
    else if ( !NestingLevel )
    {
      goto LABEL_19;
    }
    v26 = v15 | 0x80;
    goto LABEL_19;
  }
}
