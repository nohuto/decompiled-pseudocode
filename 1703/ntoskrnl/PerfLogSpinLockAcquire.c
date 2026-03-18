/*
 * XREFs of PerfLogSpinLockAcquire @ 0x14025635C
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1401FEAB0 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x1401FECE0 (KiTryToAcquireSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C874 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C900 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14025C99C (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     <none>
 */

char __fastcall PerfLogSpinLockAcquire(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // r10
  unsigned __int8 v9; // r11
  __int64 v10; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (__int64)CurrentPrcb->EtwSupport + 1472;
  v9 = *((_BYTE *)CurrentPrcb->EtwSupport + 1728);
  if ( v9 < 8u )
  {
    *((_BYTE *)CurrentPrcb->EtwSupport + 1728) = v9 + 1;
    v10 = 32LL * v9;
    *(_DWORD *)(v10 + v8 + 24) = a5;
    LOBYTE(CurrentPrcb) = a6;
    *(_BYTE *)(v10 + v8 + 28) = a6;
    *(_QWORD *)(v10 + v8) = a2;
    *(_DWORD *)(v10 + v8 + 20) = a4;
    *(_QWORD *)(v10 + v8 + 8) = a1;
    *(_DWORD *)(v10 + v8 + 16) = a3;
  }
  else
  {
    ++*((_DWORD *)CurrentPrcb->EtwSupport + 433);
  }
  return (char)CurrentPrcb;
}
