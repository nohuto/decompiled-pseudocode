/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x140006310
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140006060 (KiCallInterruptServiceRoutine.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14014C90C (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExProcessorCounterSetCallback @ 0x1404F65F0 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
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
