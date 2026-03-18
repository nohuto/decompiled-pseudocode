/*
 * XREFs of PsGetProcessSessionIdEx @ 0x140072E20
 * Callers:
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x14041DC7C (TtmiLogCalloutWatchdogCrashSkipped.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopGetSettingNotificationName @ 0x1404C4DF4 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x1404C79F0 (PopGetSettingValue.c)
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 *     PopSetDisplayStatus @ 0x140579DA0 (PopSetDisplayStatus.c)
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     TtmiAcquireCurrentSession @ 0x140584CA4 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     DbgkpLkmdFireCallbacks @ 0x1406820EC (DbgkpLkmdFireCallbacks.c)
 *     TtmCleanupCurrentSession @ 0x1406D8DC4 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmiLogCalloutStart @ 0x1406DAF00 (TtmiLogCalloutStart.c)
 *     TtmiLogCalloutStop @ 0x1406DB03C (TtmiLogCalloutStop.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1406DB1BC (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1406DB268 (TtmiLogCleanupCurrentSessionStop.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1406DB3D8 (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogDeviceFromTerminalRemoved @ 0x1406DB4F0 (TtmiLogDeviceFromTerminalRemoved.c)
 *     TtmiLogDeviceInputNotified @ 0x1406DB624 (TtmiLogDeviceInputNotified.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x1406DB8C4 (TtmiLogDeviceToTerminalAssigned.c)
 *     TtmiLogDispatchApiStart @ 0x1406DB9B0 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1406DBA80 (TtmiLogDispatchApiStop.c)
 *     TtmiLogEnterProximity @ 0x1406DBB6C (TtmiLogEnterProximity.c)
 *     TtmiLogExitProximity @ 0x1406DBC40 (TtmiLogExitProximity.c)
 *     TtmiLogInitCurrentSessionStart @ 0x1406DBD58 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1406DBE04 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogProximityBlockedRequest @ 0x1406DBED4 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogProximityPowerPress @ 0x1406DBFF0 (TtmiLogProximityPowerPress.c)
 *     TtmiLogQueueCreated @ 0x1406DC144 (TtmiLogQueueCreated.c)
 *     TtmiLogSessionActivate @ 0x1406DC43C (TtmiLogSessionActivate.c)
 *     TtmiLogSessionDeactivate @ 0x1406DC584 (TtmiLogSessionDeactivate.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1406DC630 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiLogSessionPowerControlStart @ 0x1406DC974 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1406DCA68 (TtmiLogSessionPowerControlStop.c)
 *     TtmiLogSessionPowerStateChange @ 0x1406DCB14 (TtmiLogSessionPowerStateChange.c)
 *     TtmiLogSessionSetCsSessionGoalStart @ 0x1406DCD6C (TtmiLogSessionSetCsSessionGoalStart.c)
 *     TtmiLogSessionSetCsSessionGoalStop @ 0x1406DCE60 (TtmiLogSessionSetCsSessionGoalStop.c)
 *     TtmiLogTerminalCreated @ 0x1406DD20C (TtmiLogTerminalCreated.c)
 *     TtmiLogTerminalOffRequest @ 0x1406DD680 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1406DD798 (TtmiLogTerminalOnRequest.c)
 *     TtmiLogTerminalStateMachine @ 0x1406DDB08 (TtmiLogTerminalStateMachine.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PsGetProcessSessionIdEx(__int64 a1)
{
  return MmGetSessionIdEx(a1);
}
