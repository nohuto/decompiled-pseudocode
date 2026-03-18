/*
 * XREFs of PipDmgInitPhaseOne @ 0x1408A503C
 * Callers:
 *     PiDmaGuardInitialize @ 0x1408A4834 (PiDmaGuardInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     PnpTraceDmaGuardSystemPolicy @ 0x140623084 (PnpTraceDmaGuardSystemPolicy.c)
 */

__int64 PipDmgInitPhaseOne()
{
  PnpTraceDmaGuardSystemPolicy();
  if ( (unsigned int)(PipDmaGuardPolicy - 2) <= 1 )
  {
    if ( PipDmaGuardPolicy != 3 )
      PipCslUnlockCallback = (__int64 (*)(void))PipDmgConsoleUnlockCallback;
    ExInitializeResourceLite(&PipDgqListLock);
    qword_1403C57E8 = (__int64)&PipDgqListHead;
    PipDgqListHead = &PipDgqListHead;
  }
  return 0LL;
}
