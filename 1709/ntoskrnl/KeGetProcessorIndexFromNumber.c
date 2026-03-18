/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x14008CE90
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x14000B3F4 (PoGetPerfStateAndParkingInfo.c)
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1400E5800 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FBEB0 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetTargetProcessorDpcEx @ 0x14011AF00 (KeSetTargetProcessorDpcEx.c)
 *     PpmClearSimulatedIdle @ 0x14023A84C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x14023C278 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x14023CDC0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x140240790 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140240BF8 (PpmSetSimulatedLoad.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     PpmUpdateIdleStates @ 0x1405B81D0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406F62E0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  unsigned __int16 Group; // ax
  unsigned __int8 Number; // dl
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !ProcNumber->Group && !ProcNumber->Number )
    return 0;
  if ( Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}
