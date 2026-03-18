/*
 * XREFs of PopGetDisplayTimeout @ 0x140527118
 * Callers:
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x1405270DC (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x14076D7C4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x140527148 (PopGetLockConsoleTimeout.c)
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
