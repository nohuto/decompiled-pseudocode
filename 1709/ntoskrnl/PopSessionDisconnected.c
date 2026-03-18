/*
 * XREFs of PopSessionDisconnected @ 0x140709E74
 * Callers:
 *     PopSessionConnectionChange @ 0x1405ED750 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PopDiagTraceSessionStates @ 0x14059FE78 (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x1405ED87C (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_1403644E0 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0, 0);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
