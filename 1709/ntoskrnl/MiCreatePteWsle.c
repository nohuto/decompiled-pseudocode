/*
 * XREFs of MiCreatePteWsle @ 0x140849240
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteWsle @ 0x1400E6D40 (MiWriteWsle.c)
 */

__int64 __fastcall MiCreatePteWsle(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 << 25 >> 16;
  if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
    MiWriteWsle(0xFFFFF68000000000uLL, v2);
  return 0LL;
}
