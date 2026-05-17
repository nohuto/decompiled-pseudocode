/*
 * XREFs of sub_180076B04 @ 0x180076B04
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x180076700 (RtlSetCurrentDirectory_U.c)
 *     sub_1800E91E0 @ 0x1800E91E0 (sub_1800E91E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180076B04(unsigned int a1, __int16 *a2)
{
  __int16 v2; // r8

  if ( a1 > 0xFFFF )
    v2 = -1;
  else
    v2 = a1;
  *a2 = v2;
  return a1 > 0xFFFF ? 0xC0000095 : 0;
}
