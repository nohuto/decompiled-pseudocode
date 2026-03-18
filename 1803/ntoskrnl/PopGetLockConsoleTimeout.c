/*
 * XREFs of PopGetLockConsoleTimeout @ 0x140527148
 * Callers:
 *     PopGetDisplayTimeout @ 0x140527118 (PopGetDisplayTimeout.c)
 *     PopConsoleSessionPassiveInput @ 0x1405847B8 (PopConsoleSessionPassiveInput.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x14048BA24 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_1403A7B76 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
