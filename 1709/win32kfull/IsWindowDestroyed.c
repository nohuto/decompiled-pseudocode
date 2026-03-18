/*
 * XREFs of IsWindowDestroyed @ 0x1C008BC1C
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDestroyed(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 59) >> 7;
}
