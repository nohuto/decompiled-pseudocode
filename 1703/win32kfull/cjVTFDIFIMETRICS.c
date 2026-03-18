/*
 * XREFs of cjVTFDIFIMETRICS @ 0x1C02373CC
 * Callers:
 *     bVtfdLoadFont @ 0x1C023714C (bVtfdLoadFont.c)
 *     vVtfdFill_IFIMetrics @ 0x1C02374E8 (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0233DD4 (StringCchLengthA.c)
 */

__int64 __fastcall cjVTFDIFIMETRICS(__int64 a1)
{
  __int64 v1; // r11
  int v2; // r8d
  unsigned __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // r9d
  char v7; // al
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  StringCchLengthA(
    (STRSAFE_PCNZCH)(a1
                   + (*(unsigned __int8 *)(a1 + 105) | ((*(unsigned __int8 *)(a1 + 106) | ((unsigned __int64)*(unsigned __int16 *)(a1 + 107) << 8)) << 8))),
    0x7FFFFFFFuLL,
    &pcchLength);
  v2 = -1;
  v3 = 2LL * (unsigned int)(pcchLength + 1);
  if ( v3 > 0xFFFFFFFF || (int)v3 + 3 < (unsigned int)v3 )
    return 0LL;
  v4 = ((v3 + 3) & 0xFFFFFFFC) + 192;
  v5 = -1;
  if ( v4 >= 0xC0 )
    v5 = ((v3 + 3) & 0xFFFFFFFC) + 192;
  v6 = v5;
  if ( v4 < 0xC0 )
    return 0LL;
  v7 = *(_BYTE *)(v1 + 80);
  v8 = *(unsigned __int16 *)(v1 + 83) > 0x190u ? 2 - (v7 != 0) : v7 != 0 ? 2 : 4;
  v9 = v8 - 1;
  if ( !v9 )
    return v5;
  v10 = 20LL * v9;
  if ( v10 > 0xFFFFFFFF || (unsigned int)(v10 + 12) < 0xC )
    return 0LL;
  v11 = v10 + 12 + v5;
  if ( v11 >= v5 )
    v2 = v10 + 12 + v5;
  v5 = v2;
  if ( v11 < v6 )
    return 0LL;
  else
    return v5;
}
