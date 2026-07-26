/*
 * XREFs of ndisXlatePnPFlags @ 0x1C00DD688
 * Callers:
 *     ndisGetPowerInfo @ 0x1C005D5A8 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

int __fastcall ndisXlatePnPFlags(int a1)
{
  int v2; // r8d
  char v3; // al
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int result; // eax

  v2 = ((a1 & 1) << 8) | 0x200;
  v3 = a1;
  if ( (a1 & 8) == 0 )
    v2 = (a1 & 1) << 8;
  v4 = v2 | 0x400;
  if ( (v3 & 0x10) == 0 )
    v4 = v2;
  v5 = v4 | 0x800;
  if ( (a1 & 0x20) == 0 )
    v5 = v4;
  v6 = v5 | 0x1000;
  if ( (a1 & 0x40) == 0 )
    v6 = v5;
  v7 = v6 | 0x2000;
  if ( (a1 & 0x100) == 0 )
    v7 = v6;
  v8 = v7 | 0x4000;
  if ( (a1 & 0x4000) == 0 )
    v8 = v7;
  result = v8 | 0x400000;
  if ( (a1 & 0x4000000) == 0 )
    return v8;
  return result;
}
