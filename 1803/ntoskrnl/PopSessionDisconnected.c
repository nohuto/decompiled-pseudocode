/*
 * XREFs of PopSessionDisconnected @ 0x1405EEACC
 * Callers:
 *     PopSessionConnectionChange @ 0x140612D8C (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopSetSessionUserStatus @ 0x140526758 (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x140526968 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x140612ED8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_1403A7B80 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
