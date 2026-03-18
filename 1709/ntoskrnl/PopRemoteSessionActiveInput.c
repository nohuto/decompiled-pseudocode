/*
 * XREFs of PopRemoteSessionActiveInput @ 0x14059FB8C
 * Callers:
 *     PopConsoleSessionActiveInput @ 0x14059FB14 (PopConsoleSessionActiveInput.c)
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x1405ED7F0 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x1405A0528 (PopGetDisplayTimeout.c)
 */

__int64 __fastcall PopRemoteSessionActiveInput(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = a1;
  PopSetSessionUserStatus(a1, 0LL);
  a3[1] = PopGetDisplayTimeout(v4);
  result = (unsigned int)PopInputTimeout;
  *a3 = PopInputTimeout;
  return result;
}
