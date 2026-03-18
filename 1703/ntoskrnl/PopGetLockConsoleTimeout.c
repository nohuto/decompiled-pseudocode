/*
 * XREFs of PopGetLockConsoleTimeout @ 0x14042094C
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x14042020C (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x1404205B4 (PopGetDisplayTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140349E96 && PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
