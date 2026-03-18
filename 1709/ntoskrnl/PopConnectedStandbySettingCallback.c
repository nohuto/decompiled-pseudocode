/*
 * XREFs of PopConnectedStandbySettingCallback @ 0x1405F2260
 * Callers:
 *     <none>
 * Callees:
 *     PopThermalCsEntry @ 0x1402439D0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x140243A20 (PopThermalCsExit.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407014E4 (PopDiagNextCsSleepStudySession.c)
 *     PopFanUpdateCsState @ 0x140707340 (PopFanUpdateCsState.c)
 */

__int64 __fastcall PopConnectedStandbySettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  GUID *v10; // rcx

  v3 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( PopPlatformAoAc )
    {
      if ( PopMonitorOffDueToSleep )
      {
        PopMonitorOffDueToSleep = 0;
        if ( v5 )
          return v4;
      }
      else if ( (_DWORD)qword_1403657E4 || PopHiberBootForceMonitorOff )
      {
        PopMonitorOffDueToSleep = 1;
        return v4;
      }
      PopAcquirePolicyLock();
      if ( v5 )
      {
        if ( v5 == 1 && qword_140389BC8 )
        {
          v8 = 2;
          PopTransitionTelemetryOsState(4, 6);
          PopThermalCsExit();
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        v8 = 1;
        LOBYTE(v7) = PopPdcLastCsEnterReason == 23;
        PopThermalCsEntry(v7);
        PopTransitionTelemetryOsState(3, 6);
      }
      PopReleasePolicyLock();
      LOBYTE(v9) = v5 != 0;
      PopFanUpdateCsState(v9);
      if ( v8 == 1 )
      {
        v10 = &GUID_SPM_LOW_POWER_CS;
      }
      else
      {
        if ( v8 != 2 )
          return v4;
        PopSleepstudyStopReason = 17;
        v10 = &NullGuid;
      }
      PopDiagNextCsSleepStudySession(v10);
      return v4;
    }
    return (unsigned int)-1073741637;
  }
  return v4;
}
