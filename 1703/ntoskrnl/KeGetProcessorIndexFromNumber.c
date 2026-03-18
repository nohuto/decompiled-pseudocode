/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140088D10
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x14002D4E0 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetTargetProcessorDpcEx @ 0x140032680 (KeSetTargetProcessorDpcEx.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140080400 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetIdleTimes @ 0x140088C1C (PoGetIdleTimes.c)
 *     PpmClearSimulatedIdle @ 0x140227A7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402293C8 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140229F10 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x14022D354 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14022D688 (PpmSetSimulatedLoad.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402331F0 (PoGetPerfStateAndParkingInfo.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x1405A8220 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406C6000 (PpmInstallPlatformIdleStates.c)
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
  result = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int64)Group + Number];
  if ( !result )
    return -1;
  return result;
}
