/*
 * XREFs of RtlpUnlockAtomTable @ 0x1404B7B6C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14003F560 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1400A1240 (RtlDestroyLowBoxAtoms.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

void __fastcall RtlpUnlockAtomTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx

  v4 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8), a2, a3, a4);
  KeAbPostRelease(v4);
  KeLeaveCriticalRegion();
}
