/*
 * XREFs of PopGetDisplayTimeout @ 0x1404205B4
 * Callers:
 *     PopSessionInputChange @ 0x14041FE64 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x140420578 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1406D4484 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x14042094C (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopGetDisplayTimeout(int a1)
{
  __int64 result; // rax

  if ( PopConsoleContext != a1 || a1 == -1 )
    return 0LL;
  result = PopGetLockConsoleTimeout();
  if ( !(_DWORD)result )
    return (unsigned int)PopDisplayTimeout;
  return result;
}
