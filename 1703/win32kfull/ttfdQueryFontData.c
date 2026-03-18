/*
 * XREFs of ttfdQueryFontData @ 0x1C022E854
 * Callers:
 *     ttfdSemQueryFontData @ 0x1C02256C0 (ttfdSemQueryFontData.c)
 * Callees:
 *     ttfdQueryGlyphOutline @ 0x1C022C09C (ttfdQueryGlyphOutline.c)
 *     lGetGlyphBitmap @ 0x1C022D6AC (lGetGlyphBitmap.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C022D9E4 (lGetGlyphBitmapErrRecover.c)
 *     lGetGlyphBitmapVertical @ 0x1C022DAE8 (lGetGlyphBitmapVertical.c)
 *     lGetSingularGlyphBitmap @ 0x1C022DBA8 (lGetSingularGlyphBitmap.c)
 *     lQueryDEVICEMETRICS @ 0x1C022DC8C (lQueryDEVICEMETRICS.c)
 *     ttfdGlyphBitmap @ 0x1C022E6F8 (ttfdGlyphBitmap.c)
 *     bGrabXform @ 0x1C02308C0 (bGrabXform.c)
 *     ttfdOpenFontContext @ 0x1C023141C (ttfdOpenFontContext.c)
 */

__int64 __fastcall ttfdQueryFontData(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        PATHOBJ *a5,
        unsigned int a6)
{
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned __int16 v12; // cx
  int v13; // edx
  int v14; // r9d
  int v15; // r10d
  BOOL v16; // r8d
  int v17; // edx
  __int64 v18; // rdx
  PATHOBJ *v19; // rsi
  unsigned int v20; // edi
  int v21; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 40) = *(_DWORD *)(v11 + 40) & 0x80000000 | *(_DWORD *)(a1 + 12);
  }
  else
  {
    v11 = ttfdOpenFontContext();
    *(_QWORD *)(a1 + 56) = v11;
  }
  if ( !v11 )
    return 0xFFFFFFFFLL;
  v12 = 8;
  *(_QWORD *)v11 = a1;
  switch ( a2 )
  {
    case 5u:
      v12 = 0;
      goto LABEL_16;
    case 6u:
      v12 = 2;
      goto LABEL_16;
    case 8u:
LABEL_12:
      v12 = 4;
      goto LABEL_16;
  }
  if ( a2 != 9 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x10010000) != 0x10000 )
    {
      v12 = 0;
      goto LABEL_16;
    }
    goto LABEL_12;
  }
LABEL_16:
  v13 = *(_DWORD *)(v11 + 40);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( (v13 & 0x2000) != 0 && (*(_DWORD *)(v11 + 116) & 3) != 0 )
    v16 = a2 != 2;
  if ( (a2 < 5 || a2 > 6 && a2 - 8 > 1) && (v13 & 0x10000000) != 0 )
  {
    v14 = (v13 & 0x40000000) != 0 ? -1 : 1;
    if ( (v13 & 0x20000000) != 0 )
      v15 = 1;
  }
  v17 = 0;
  if ( (a2 == 1 || a2 == 4) && (*(_BYTE *)(v11 + 120) & 2) != 0 )
    v17 = 1;
  if ( !(unsigned int)bGrabXform(v11, v12, v16, v14, v15, v17) )
    return 0xFFFFFFFFLL;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      return (unsigned int)ttfdQueryGlyphOutline(v11, a3, (__int64)a4, a5) != 0 ? 64 : -1;
    if ( a2 == 3 )
      return lQueryDEVICEMETRICS(v11, v18, (__int64)a5);
    if ( a2 != 4 )
    {
      if ( a2 > 4 && (a2 <= 6 || a2 - 8 <= 1) )
        return ttfdGlyphBitmap(v11, a3, (__int64)a4, a5, a6);
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*(_DWORD *)(v11 + 116) & 8) != 0 )
    return lGetSingularGlyphBitmap(v11, a3, a4, a5, a6);
  v19 = a5;
  v20 = a6;
  v21 = 0;
  if ( *(_DWORD *)(v11 + 308) )
    result = lGetGlyphBitmapVertical(v11, a3, a4, (__int64)a5, a6, &v21);
  else
    result = lGetGlyphBitmap(v11, a3, a4, (__int64)a5, a6, &v21);
  if ( (_DWORD)result == -1 && v21 == 4609 )
    return lGetGlyphBitmapErrRecover(v11, a3, (__int64)a4, (__int64)v19, v20);
  return result;
}
