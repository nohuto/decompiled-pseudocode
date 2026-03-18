/*
 * XREFs of RtlpUnlockAtomTable @ 0x140489C4C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400194E0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1401214B0 (RtlDestroyLowBoxAtoms.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
