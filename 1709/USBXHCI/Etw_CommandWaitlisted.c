/*
 * XREFs of Etw_CommandWaitlisted @ 0x1C00382BC
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 * Callees:
 *     McTemplateK0ppbc @ 0x1C0007F98 (McTemplateK0ppbc.c)
 */

NTSTATUS __fastcall Etw_CommandWaitlisted(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  NTSTATUS result; // eax

  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    return McTemplateK0ppbc(a1, a2, a3, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), a3, a3 + 24, a4);
  return result;
}
