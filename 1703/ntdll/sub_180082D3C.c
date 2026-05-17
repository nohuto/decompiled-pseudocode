/*
 * XREFs of sub_180082D3C @ 0x180082D3C
 * Callers:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 * Callees:
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 */

__int64 __fastcall sub_180082D3C(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // r11
  int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r9

  if ( (unsigned int)sub_18003F2C4(a1) != 1 )
    return 3LL;
  v3 = 0;
  v4 = *v1 >> 1;
  v5 = 2;
  if ( v4 <= 2 )
    return v5;
  v6 = *((_QWORD *)v1 + 1);
  while ( *(_WORD *)(v6 + 2LL * v5) != 92 && *(_WORD *)(v6 + 2LL * v5) != 47 || ++v3 != 2 )
  {
    if ( ++v5 >= v4 )
      return v5;
  }
  return v5 + 1;
}
