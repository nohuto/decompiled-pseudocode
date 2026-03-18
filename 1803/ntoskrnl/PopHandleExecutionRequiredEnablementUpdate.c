/*
 * XREFs of PopHandleExecutionRequiredEnablementUpdate @ 0x1405E8FEC
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14014D38C (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopExecutionRequiredSettingCallback @ 0x140654A90 (PopExecutionRequiredSettingCallback.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x14075D780 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x14075D7B0 (PopPowerRequestNotifyStandbyStateChanged.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x140274838 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140655158 (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopHandleExecutionRequiredEnablementUpdate(unsigned __int64 a1)
{
  int v1; // r8d
  char v2; // al

  LOBYTE(v1) = 0;
  if ( !PopExecutionRequiredTimeout )
    goto LABEL_4;
  if ( !qword_1403ABA98 )
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
    if ( MEMORY[0xFFFFF78000000008] - qword_1403ABA98 < a1 )
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
