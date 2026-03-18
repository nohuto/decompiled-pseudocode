/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00B37F0
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00B3D88 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?cComputeGISET@@YAKPEAGKPEAU_GISET@@K@Z @ 0x1C00F5924 (-cComputeGISET@@YAKPEAGKPEAU_GISET@@K@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, struct PFE *a2, struct _GISET **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v7; // edi
  struct _FD_GLYPHSET *v8; // rsi
  struct PDEV *v9; // rdx
  int v10; // r14d
  PTRDIFF dpwszFamilyName; // ebp
  _DWORD *v12; // rax
  unsigned __int64 v14; // rax
  size_t v15; // rcx
  void *v16; // rax
  unsigned __int64 phg; // rdx
  void *v18; // rbp
  _WORD *v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 cGlyphs; // r10
  unsigned __int64 v23; // rcx
  unsigned int v24; // r15d
  struct _GISET *v25; // rax
  struct _GISET *v26; // r14
  struct _FD_GLYPHSET *v27; // rax
  WCHAR wcLow; // ax
  unsigned __int16 v29; // cx
  __int64 *v30; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v30 = (__int64 *)a2;
  *a3 = 0LL;
  v5 = *(_QWORD *)a2;
  v7 = 1;
  v8 = 0LL;
  v9 = *(struct PDEV **)(*(_QWORD *)a2 + 88LL);
  if ( v9 == gppdevTrueType || v9 == qword_1C0334158 && !*(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v27 = PFEOBJ::pfdg(&v30);
    v8 = v27;
    if ( !v27 )
      return v3;
    if ( (v27->flAccel & 6) == 0 )
      goto LABEL_30;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( v10 )
  {
    if ( !dpwszFamilyName )
      return v3;
LABEL_9:
    v12 = PALLOCMEM2(0xCuLL, 1936484167LL, 1);
    if ( v12 )
    {
      *v12 = dpwszFamilyName;
      v12[1] = 1;
      *((_WORD *)v12 + 4) = 0;
      *((_WORD *)v12 + 5) = dpwszFamilyName;
      *a3 = (struct _GISET *)v12;
      goto LABEL_11;
    }
LABEL_41:
    v7 = 0;
LABEL_11:
    if ( !v10 )
      goto LABEL_30;
    return v7;
  }
  if ( dpwszFamilyName )
    goto LABEL_9;
  v14 = 2LL * v8->cGlyphsSupported;
  v15 = 0xFFFFFFFFLL;
  v7 = 0;
  if ( v14 <= 0xFFFFFFFF )
    v15 = (unsigned int)v14;
  LOBYTE(v7) = v14 <= 0xFFFFFFFF;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_41;
  v16 = PALLOCMEM2(v15, 1936484167LL, 1);
  v18 = v16;
  if ( !v16 )
    goto LABEL_41;
  v19 = v16;
  v20 = 0LL;
  if ( !v8->cRuns )
    goto LABEL_26;
  while ( 1 )
  {
    v21 = (unsigned int)v20;
    phg = (unsigned __int64)v8->awcrun[v21].phg;
    if ( phg )
    {
      cGlyphs = v8->awcrun[v21].cGlyphs;
      v23 = 0LL;
      if ( phg > phg + 4 * cGlyphs )
        cGlyphs = 0LL;
      if ( cGlyphs )
      {
        do
        {
          ++v23;
          *v19 = *(_WORD *)phg;
          phg += 4LL;
          ++v19;
        }
        while ( v23 < cGlyphs );
      }
      goto LABEL_25;
    }
    phg = v8->awcrun[v21].cGlyphs;
    if ( !(_WORD)phg )
      break;
    wcLow = v8->awcrun[v21].wcLow;
    v29 = phg + wcLow - 1;
    while ( wcLow <= v29 )
      *v19 = wcLow++;
LABEL_25:
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v8->cRuns )
      goto LABEL_26;
  }
  v7 = 0;
LABEL_26:
  if ( v7 )
  {
    qsort(v18, v8->cGlyphsSupported, 2uLL, CompareRoutine);
    v24 = cComputeGISET((unsigned __int16 *)v18, v8->cGlyphsSupported, 0LL, 0);
    v25 = (struct _GISET *)PALLOCMEM2(4 * v24 + 8, 1936484167LL, 1);
    v26 = v25;
    if ( v25 )
    {
      cComputeGISET((unsigned __int16 *)v18, v8->cGlyphsSupported, v25, v24);
      *a3 = v26;
    }
    else
    {
      v7 = 0;
    }
  }
  Win32FreePool(v18, phg, v20);
LABEL_30:
  PFEOBJ::vFreepfdg(&v30);
  return v7;
}
