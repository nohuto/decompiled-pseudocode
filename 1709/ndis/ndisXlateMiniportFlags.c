/*
 * XREFs of ndisXlateMiniportFlags @ 0x1C00E754C
 * Callers:
 *     ndisGetPowerInfo @ 0x1C005D108 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlateMiniportFlags(unsigned int a1)
{
  int v2; // r8d
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // ecx
  __int64 result; // rax

  v2 = (a1 >> 15) & 1 | 2;
  if ( (a1 & 0x20000) == 0 )
    v2 = (a1 >> 15) & 1;
  v4 = v2 | 4;
  if ( (a1 & 0x40000) == 0 )
    v4 = v2;
  v5 = v4 | 8;
  if ( (a1 & 0x200000) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (a1 & 0x4000000) == 0 )
    v6 = v5;
  result = v6 | 0x20;
  if ( (a1 & 0x20000000) == 0 )
    return v6;
  return result;
}
