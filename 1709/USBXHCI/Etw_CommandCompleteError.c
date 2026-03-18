/*
 * XREFs of Etw_CommandCompleteError @ 0x1C0038270
 * Callers:
 *     Command_ControllerResetPostReset @ 0x1C000C6F4 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C000C980 (Command_FailAllCommands.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000CADC (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     McTemplateK0ppbqc @ 0x1C0008034 (McTemplateK0ppbqc.c)
 */

NTSTATUS __fastcall Etw_CommandCompleteError(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  NTSTATUS result; // eax
  char v6; // [rsp+38h] [rbp-10h]

  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x40) != 0 )
  {
    v6 = *(_BYTE *)(a3 + 60);
    return McTemplateK0ppbqc(
             a3 + 24,
             &USBXHCI_ETW_EVENT_COMMAND_COMPLETE_ERROR,
             a3,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             a3,
             a3 + 24,
             a4,
             v6);
  }
  return result;
}
