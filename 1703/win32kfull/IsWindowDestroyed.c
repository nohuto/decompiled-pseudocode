/*
 * XREFs of IsWindowDestroyed @ 0x1C001DD34
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDestroyed(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 59) >> 7;
}
