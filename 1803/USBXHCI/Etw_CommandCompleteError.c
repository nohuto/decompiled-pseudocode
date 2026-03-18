/*
 * XREFs of Etw_CommandCompleteError @ 0x1C0035E50
 * Callers:
 *     Command_ControllerResetPostReset @ 0x1C0003270 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C00037AC (Command_FailAllCommands.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0003D70 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     McTemplateK0ppbqc @ 0x1C0036A08 (McTemplateK0ppbqc.c)
 */

__int64 __fastcall Etw_CommandCompleteError(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x40) != 0 )
    return McTemplateK0ppbqc(
             (int)a3 + 24,
             (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE_ERROR,
             a3,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             a3,
             a3 + 24,
             a4,
             *(_BYTE *)(a3 + 60));
  return result;
}
