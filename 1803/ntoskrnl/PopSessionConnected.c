/*
 * XREFs of PopSessionConnected @ 0x140612E30
 * Callers:
 *     PopSessionConnectionChange @ 0x140612D8C (PopSessionConnectionChange.c)
 * Callees:
 *     PopDiagTraceSessionStates @ 0x140526968 (PopDiagTraceSessionStates.c)
 *     PopRemoteSessionActiveInput @ 0x1405270DC (PopRemoteSessionActiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x140527168 (PopConsoleSessionActiveInput.c)
 *     PopSetSessionDisplayStatus @ 0x140612ED8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, unsigned __int8 a2, int *a3)
{
  __int64 v7; // rdx

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, a2);
  if ( a2 )
  {
    PopConsoleSession = 1;
    PopSetSessionDisplayStatus(a1, 1LL, 0LL);
    PopConsoleContext = a1;
    return PopConsoleSessionActiveInput(
             a1,
             (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
             a3);
  }
  else
  {
    PopSetSessionDisplayStatus(a1, 1LL, 0LL);
    return PopRemoteSessionActiveInput(a1, v7, a3);
  }
}
