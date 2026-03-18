/*
 * XREFs of PopRemoteSessionActiveInput @ 0x1405270DC
 * Callers:
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x140527168 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x140612E30 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x140526758 (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x140527118 (PopGetDisplayTimeout.c)
 */

__int64 __fastcall PopRemoteSessionActiveInput(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  PopSetSessionUserStatus(a1, 0);
  a3[1] = PopGetDisplayTimeout(a1);
  result = (unsigned int)PopInputTimeout;
  *a3 = PopInputTimeout;
  return result;
}
