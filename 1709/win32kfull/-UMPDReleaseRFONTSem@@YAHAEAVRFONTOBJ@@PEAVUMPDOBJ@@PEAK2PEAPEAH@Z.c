/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C000D300 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C00B7CF0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C00B8040 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x1C00B84F0 (NtGdiEngTextOut.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C00B9C3C (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C013A690 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01404AC (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C0143498 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02660C4 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C026621C (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0285450 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02866F0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0286E50 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C028F3B0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C028F5F0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C028F730 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C028867C (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 */

__int64 __fastcall UMPDReleaseRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5)
{
  unsigned int *v6; // rdi
  void **v9; // r14
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r14d
  char *v22; // r13
  unsigned int v23; // r14d
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // [rsp+60h] [rbp+8h]

  v29 = 0LL;
  v6 = a3;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( a2 )
  {
    if ( !a3 && !a4 )
    {
      v9 = a5;
      if ( !a5 )
      {
        v10 = 1;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v9 = a5;
  if ( !a5 )
    return 0LL;
  v10 = 0;
  *a3 = 0;
  *a4 = 0;
LABEL_7:
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
  if ( !v11 )
    goto LABEL_14;
  GreAcquireSemaphore(v11);
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  if ( v12 )
  {
    v18 = *(_QWORD *)(v12 + 528);
    if ( v18 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v18) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSystemTT->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 528LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x20u;
        else
          *v6 |= 0x20u;
      }
    }
  }
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  if ( v13 )
  {
    v19 = *(_QWORD *)(v13 + 528);
    if ( v19 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v19) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSysEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 528LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x40u;
        else
          *v6 |= 0x40u;
      }
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 744LL);
  if ( v14 )
  {
    v20 = *(_QWORD *)(v14 + 528);
    if ( v20 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v20) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntDefEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + 528LL));
        if ( v10 )
          *((_DWORD *)a2 + 103) |= 0x80u;
        else
          *v6 |= 0x80u;
      }
    }
  }
  v15 = *(unsigned int *)(*(_QWORD *)a1 + 848LL);
  if ( (_DWORD)v15 )
  {
    if ( v10 )
    {
      v21 = UMPDOBJ::bAllocFontLinks(a2, v15);
    }
    else
    {
      if ( (unsigned int)v15 <= 0xA )
        v22 = (char *)*v9;
      else
        v22 = (char *)PALLOCMEM2((unsigned int)(4 * v15), 1886221639LL, 0);
      v29 = v22;
      *v9 = v22;
      if ( !v22 )
        goto LABEL_23;
      *a4 = v15;
      v21 = 1;
      memset(v22, 0, 4 * v15);
    }
    if ( v21 )
    {
      v23 = 0;
      v24 = 0LL;
      v25 = 0LL;
      do
      {
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 752LL) + v25);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 528);
          if ( v27 )
          {
            if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v27) )
            {
              EtwTraceGreLockReleaseSemaphore(
                L"rfo.prfnt->paprfntFaceName[ii]->hsemCache",
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 752LL) + v25) + 528LL));
              GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 752LL) + v25) + 528LL));
              if ( v10 )
              {
                if ( v23 < *((_DWORD *)a2 + 104) )
                {
                  v28 = *((_QWORD *)a2 + 53);
                  if ( v28 )
                    *(_DWORD *)(v24 + v28) = 1;
                }
              }
              else
              {
                *(_DWORD *)&v29[v24] = 1;
              }
            }
          }
        }
        ++v23;
        v25 += 8LL;
        v24 += 4LL;
      }
      while ( v23 < (unsigned int)v15 );
      v6 = a3;
    }
  }
  if ( !v10 )
  {
LABEL_23:
    *v6 |= *(_DWORD *)(*(_QWORD *)a1 + 720LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 720LL) |= 0x200u;
  }
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 856LL));
LABEL_14:
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 528LL);
  if ( v16 && (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v16) )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)a1 + 528LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 528LL));
    if ( v10 )
      *((_DWORD *)a2 + 103) |= 0x10u;
    else
      *v6 |= 0x10u;
  }
  return 1LL;
}
