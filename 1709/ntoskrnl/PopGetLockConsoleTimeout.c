/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1405A0558
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x14059FBC8 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x1405A0528 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x140709C7C (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_1403644D6 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
