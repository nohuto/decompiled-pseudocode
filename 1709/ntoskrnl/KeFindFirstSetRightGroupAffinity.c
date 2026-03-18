/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1400193C0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1400A92A0 (KiCallInterruptServiceRoutine.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1400B3690 (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExProcessorCounterSetCallback @ 0x1404875F0 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
