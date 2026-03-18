/*
 * XREFs of ExInitSystemPhase2 @ 0x1408390F8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     BootApplicationPersistentDataProcess @ 0x140827E84 (BootApplicationPersistentDataProcess.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax

  ExpWatchProductTypeInitialization();
  MEMORY[0xFFFFF780000002E0] = -1;
  BootApplicationPersistentDataProcess(0);
  ExpMicrocodeInitialization(2LL);
  result = (unsigned int)KeMaximumProcessors;
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  return result;
}
