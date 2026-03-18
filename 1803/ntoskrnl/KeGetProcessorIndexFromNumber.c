/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140038470
 * Callers:
 *     PoGetIdleTimes @ 0x14003837C (PoGetIdleTimes.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1400C1EC0 (KeSetIdealProcessorThreadByNumber.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1400C6718 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x1400D0EE0 (KeSetTargetProcessorDpcEx.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400D2FA0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmClearSimulatedIdle @ 0x140271C7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140273868 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402743A0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x140277DC0 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140278154 (PpmSetSimulatedLoad.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x1406277D0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14075DF00 (PpmInstallPlatformIdleStates.c)
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
