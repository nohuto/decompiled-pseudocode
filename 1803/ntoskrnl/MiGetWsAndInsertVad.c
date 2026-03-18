/*
 * XREFs of MiGetWsAndInsertVad @ 0x1400E6090
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x1404ED1D0 (MiInsertProcessVads.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiInsertChildVads @ 0x1405BFB04 (MiInsertChildVads.c)
 * Callees:
 *     MiInsertVad @ 0x14001F3B0 (MiInsertVad.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

$005F0E83B22994B61E86C72E0CE43C71 *__fastcall MiGetWsAndInsertVad(__int64 a1)
{
  LONG *v1; // rbx
  __int64 Process; // rsi
  unsigned __int8 CurrentIrql; // bp
  $005F0E83B22994B61E86C72E0CE43C71 *result; // rax
  __int64 *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KTHREAD *v15; // rdi

  v1 = &dword_1403CCD40;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  if ( (*(_BYTE *)(Process + 1464) & 7) != 2 )
    v1 = (LONG *)(Process + 1472);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v1, CurrentIrql);
  v1[1] = 0;
  MiInsertVad(a1, Process, 0);
  result = ($005F0E83B22994B61E86C72E0CE43C71 *)MiUnlockWorkingSetExclusive(Process + 1280, CurrentIrql);
  if ( (*(_DWORD *)(a1 + 48) & 0x4000) == 0 )
  {
    v6 = *(__int64 **)(a1 + 72);
    v7 = (_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 112) = Process | 1;
    v8 = *v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
    if ( (*(_DWORD *)(v8 + 56) & 0x400) == 0 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = (_QWORD *)(v8 + 8);
      if ( *(_QWORD *)(v13 + 8) != v8 + 8 )
        __fastfail(3u);
      *v7 = v13;
      *(_QWORD *)(a1 + 104) = v14;
      *(_QWORD *)(v13 + 8) = v7;
      *v14 = v7;
    }
    v15 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 104), v10, v11, v12);
    result = ($005F0E83B22994B61E86C72E0CE43C71 *)KeAbPostRelease(v8 + 104);
    if ( v15->SpecialApcDisable++ == -1 )
    {
      result = &v15->152;
      if ( ($005F0E83B22994B61E86C72E0CE43C71 *)result->ApcState.ApcListHead[0].Flink != result )
        return ($005F0E83B22994B61E86C72E0CE43C71 *)KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
