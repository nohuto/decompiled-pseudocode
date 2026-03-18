/*
 * XREFs of PopGetDisplayTimeout @ 0x1405A0528
 * Callers:
 *     PopRemoteSessionActiveInput @ 0x14059FB8C (PopRemoteSessionActiveInput.c)
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopCheckConsoleTimeouts @ 0x140709B34 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1405A0558 (PopGetLockConsoleTimeout.c)
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
