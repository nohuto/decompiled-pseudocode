/*
 * XREFs of PopSessionDisconnected @ 0x140579D20
 * Callers:
 *     PopSessionConnectionChange @ 0x14057D5B0 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PopDiagTraceSessionStates @ 0x14042015C (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x1404205E4 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14057D6FC (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( PopConsoleContext == a1 && a1 != -1 )
  {
    memset(&PopConsoleContext, 0, 0x28uLL);
    PopConsoleContext = -1;
    dword_140349EA0 = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  result = PopSetSessionUserStatus(a1, 2u);
  a2[1] = 0;
  *a2 = 0;
  return result;
}
