/*
 * XREFs of PopHandleExecutionRequiredEnablementUpdate @ 0x14059F4BC
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14000EF00 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopExecutionRequiredSettingCallback @ 0x1405F1760 (PopExecutionRequiredSettingCallback.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1406F5B60 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1406F5B90 (PopPowerRequestNotifyStandbyStateChanged.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x14023D398 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405F25F8 (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopHandleExecutionRequiredEnablementUpdate(unsigned __int64 a1)
{
  int v1; // r8d
  char v2; // al

  LOBYTE(v1) = 0;
  if ( !PopExecutionRequiredTimeout )
    goto LABEL_4;
  if ( !qword_1403671E8 )
    goto LABEL_3;
  if ( !PopIsUserInitiatedMonitorRequestReason(HIDWORD(PopExecutionRequiredContext)) )
  {
    if ( PopPowerRequestActiveAudioEnablesExecutionRequired != v1 && BYTE1(PopExecutionRequiredContext) != (_BYTE)v1 )
    {
LABEL_3:
      LOBYTE(v1) = 1;
      goto LABEL_4;
    }
    a1 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    v2 = v1;
    if ( MEMORY[0xFFFFF78000000008] - qword_1403671E8 < a1 )
      v2 = 1;
    LOBYTE(v1) = v2;
  }
LABEL_4:
  if ( (_BYTE)PopExecutionRequiredContext != (_BYTE)v1 )
  {
    LOBYTE(a1) = v1;
    LOBYTE(PopExecutionRequiredContext) = v1;
    PopEnableExecutionRequiredPowerRequests(a1);
  }
}
