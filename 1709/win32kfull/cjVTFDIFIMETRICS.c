/*
 * XREFs of cjVTFDIFIMETRICS @ 0x1C0238984
 * Callers:
 *     bVtfdLoadFont @ 0x1C0238704 (bVtfdLoadFont.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0238AAC (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0235354 (StringCchLengthA.c)
 */

__int64 __fastcall cjVTFDIFIMETRICS(__int64 a1)
{
  __int64 v1; // r11
  int v2; // edx
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  StringCchLengthA(
    (STRSAFE_PCNZCH)(a1
                   + (*(unsigned __int8 *)(a1 + 105) | (unsigned __int64)((*(unsigned __int8 *)(a1 + 106) | (*(unsigned __int16 *)(a1 + 107) << 8)) << 8))),
    0x7FFFFFFFuLL,
    &pcchLength);
  v2 = -1;
  v3 = 2LL * (unsigned int)(pcchLength + 1);
  if ( v3 > 0xFFFFFFFF || (int)v3 + 3 < (unsigned int)v3 )
    return 0LL;
  v4 = ((v3 + 3) & 0xFFFFFFFC) + 192;
  v5 = -1;
  if ( v4 >= 0xC0 )
    v5 = ((2 * (pcchLength + 1) + 3) & 0xFFFFFFFC) + 192;
  v6 = v5;
  if ( v4 < 0xC0 )
    return 0LL;
  v7 = *(unsigned __int16 *)(v1 + 83) > 0x190u ? *(_BYTE *)(v1 + 80) == 0 : *(_BYTE *)(v1 + 80) != 0 ? 1 : 3;
  if ( !v7 )
    return v5;
  v8 = 20LL * v7;
  if ( v8 > 0xFFFFFFFF || (unsigned int)(v8 + 12) < 0xC )
    return 0LL;
  v9 = v8 + 12 + v5;
  if ( v9 >= v5 )
    v2 = v8 + 12 + v5;
  v5 = v2;
  if ( v9 < v6 )
    return 0LL;
  else
    return v5;
}
