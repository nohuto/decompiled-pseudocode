/*
 * XREFs of sub_18001F10C @ 0x18001F10C
 * Callers:
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 * Callees:
 *     sub_18001EEF8 @ 0x18001EEF8 (sub_18001EEF8.c)
 */

__int64 __fastcall sub_18001F10C(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  __int64 v3; // r9
  int v5; // r8d
  __int64 v6; // r9
  char v7; // al
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // r11
  char v11; // al
  __int64 v12; // r11

  v2 = *(unsigned __int8 *)(a1 + 27);
  if ( v2 == a2 )
    return 0LL;
  v5 = v2 - a2;
  v6 = a1 + 32LL * a2;
  *(_BYTE *)(v6 + 24) |= 8u;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + v6 + 27) = v5 - 1;
  *(_BYTE *)(v6 + 27) = v5;
  v7 = sub_18001EEF8(v6, (unsigned __int8)v5);
  *(_DWORD *)v8 = -857879331;
  *(_BYTE *)(v8 + 26) = ~v7;
  *(_BYTE *)(32LL * (unsigned int)(v9 - 1) + v10 + 27) = v9 - 1;
  *(_BYTE *)(v10 + 27) = v9;
  v11 = sub_18001EEF8(v10, v9);
  *(_BYTE *)(v12 + 26) = ~v11;
  return v3;
}
