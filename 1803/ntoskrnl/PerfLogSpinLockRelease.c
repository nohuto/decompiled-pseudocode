/*
 * XREFs of PerfLogSpinLockRelease @ 0x1402B1E58
 * Callers:
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1402BA9C8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 v9; // di
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v11; // r14
  unsigned int v12; // ecx
  int NestingLevel; // edx
  unsigned __int8 CurrentIrql; // al
  char v15; // cl
  char v16; // cl
  unsigned __int8 v17; // si
  __int64 v18; // rcx
  __int128 v19; // xmm1
  _QWORD v20[4]; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+54h] [rbp-2Ch]
  unsigned int CurrentRunTime; // [rsp+58h] [rbp-28h]
  int v24; // [rsp+5Ch] [rbp-24h]
  unsigned __int8 v25; // [rsp+60h] [rbp-20h]
  char v26; // [rsp+61h] [rbp-1Fh]
  char v27; // [rsp+62h] [rbp-1Eh]
  _QWORD *v28; // [rsp+68h] [rbp-18h] BYREF
  int v29; // [rsp+70h] [rbp-10h]
  int v30; // [rsp+74h] [rbp-Ch]

  result = (__int64)KeGetCurrentPrcb();
  v7 = *(_QWORD *)(result + 24616) + 16LL;
  v8 = *(_BYTE *)(*(_QWORD *)(result + 24616) + 272LL);
  if ( v8 )
  {
    v9 = *(_BYTE *)(*(_QWORD *)(result + 24616) + 272LL);
    while ( 1 )
    {
      result = 32LL * --v9;
      if ( *(_QWORD *)(result + v7 + 8) == a1 )
        break;
      if ( !v9 )
      {
        ++*(_DWORD *)(v7 + 264);
        return result;
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 32LL * v9 + v7;
    if ( *(_BYTE *)(v7 + 257) )
      goto LABEL_20;
    if ( !EtwpSpinLockHoldThreshold
      || (result = (unsigned int)(a3 - *(_DWORD *)v11), (unsigned int)result <= EtwpSpinLockHoldThreshold) )
    {
      v12 = *(_DWORD *)(v11 + 20);
      if ( v12 < EtwpSpinLockSpinThreshold
        || (result = CurrentPrcb->SynchCounters.SpinLockContentionCount / EtwpSpinLockContentionSampleRate,
            CurrentPrcb->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate) )
      {
        if ( v12 )
          goto LABEL_20;
        result = (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
               / EtwpSpinLockAcquireSampleRate;
        if ( (CurrentPrcb->SynchCounters.SpinLockAcquireCount - CurrentPrcb->SynchCounters.SpinLockContentionCount)
           % EtwpSpinLockAcquireSampleRate )
        {
          goto LABEL_20;
        }
      }
    }
    NestingLevel = CurrentPrcb->NestingLevel;
    *(_BYTE *)(v7 + 257) = 1;
    v20[0] = a1;
    v20[1] = a2;
    v20[3] = a3;
    CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
    v26 = v8;
    CurrentIrql = KeGetCurrentIrql();
    v25 = CurrentIrql;
    v20[2] = *(_QWORD *)v11;
    v21 = *(_DWORD *)(v11 + 16);
    v22 = *(_DWORD *)(v11 + 20);
    v24 = CurrentPrcb->InterruptCount - *(_DWORD *)(v11 + 24);
    v15 = *(_BYTE *)(v11 + 28);
    v27 = v15;
    if ( NestingLevel == 1 )
    {
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v16 = v15 | 0x40;
LABEL_18:
        v27 = v16;
        goto LABEL_19;
      }
    }
    else if ( !NestingLevel )
    {
LABEL_19:
      v30 = 0;
      v28 = v20;
      v29 = 56;
      result = EtwTraceKernelEvent((int)&v28, 1, 0x20010000u, 1321, 1538);
      *(_BYTE *)(v7 + 257) = 0;
LABEL_20:
      v17 = v8 - 1;
      while ( v9 < v17 )
      {
        v18 = 32LL * ((unsigned int)v9++ + 1);
        v19 = *(_OWORD *)(v18 + v7 + 16);
        *(_OWORD *)v11 = *(_OWORD *)(v18 + v7);
        *(_OWORD *)(v11 + 16) = v19;
        v11 += 32LL;
      }
      --*(_BYTE *)(v7 + 256);
      return result;
    }
    v16 = v15 | 0x80;
    goto LABEL_18;
  }
  return result;
}
