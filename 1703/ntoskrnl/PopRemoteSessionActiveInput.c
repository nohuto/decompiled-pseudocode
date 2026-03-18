/*
 * XREFs of PopRemoteSessionActiveInput @ 0x140420578
 * Callers:
 *     PopSessionInputChange @ 0x14041FE64 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x14042028C (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x14057D654 (PopSessionConnected.c)
 * Callees:
 *     PopGetDisplayTimeout @ 0x1404205B4 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x1404205E4 (PopSetSessionUserStatus.c)
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
