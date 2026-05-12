/*
 * XREFs of RaUnitSetAtaPassThroughCdb @ 0x1C00012DC
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003E90 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitSetAtaPassThroughCdb(__int64 a1, _BYTE *a2)
{
  __int16 v2; // ax
  char v3; // r8
  char v4; // al
  char result; // al

  v2 = *(_WORD *)(a1 + 2);
  if ( (v2 & 6) != 0 )
  {
    if ( (v2 & 2) != 0 )
      v3 = (v2 & 0x10) != 0 ? 10 : 4;
    else
      v3 = (v2 & 0x10) != 0 ? 11 : 5;
  }
  else
  {
    v3 = 3;
  }
  *a2 = -123;
  v4 = *(_BYTE *)(a1 + 2);
  a2[2] |= 7u;
  a2[1] = (2 * v3) & 0x1F | ((v4 & 8) != 0);
  a2[2] = a2[2] & 0x17 | (4 * (*(_BYTE *)(a1 + 2) & 2 | 0xE8));
  a2[3] = *(_BYTE *)(a1 + 32);
  a2[4] = *(_BYTE *)(a1 + 40);
  a2[5] = *(_BYTE *)(a1 + 33);
  a2[6] = *(_BYTE *)(a1 + 41);
  a2[7] = *(_BYTE *)(a1 + 34);
  a2[8] = *(_BYTE *)(a1 + 42);
  a2[9] = *(_BYTE *)(a1 + 35);
  a2[10] = *(_BYTE *)(a1 + 43);
  a2[11] = *(_BYTE *)(a1 + 36);
  a2[12] = *(_BYTE *)(a1 + 44);
  a2[13] = *(_BYTE *)(a1 + 45);
  result = *(_BYTE *)(a1 + 46);
  a2[14] = result;
  return result;
}
