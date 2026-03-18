/*
 * XREFs of ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4
 * Callers:
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C009784C (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009B810 (NtGdiFONTOBJ_pifi.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009B990 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E7B84 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C010E810 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C012A274 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C013C58C (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02672E8 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0267440 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0288930 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C0289BE0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C028A340 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0292C90 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0292ED0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0293010 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDAcquireRFONTSem(struct RFONTOBJ *a1, struct UMPDOBJ *a2, unsigned int a3, unsigned int a4, int *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r13d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ebp
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax

  v6 = 0;
  v7 = *(_QWORD *)a1;
  if ( v7 )
  {
    if ( a2 )
    {
      v6 = 1;
      a3 = *((_DWORD *)a2 + 103);
      if ( *((_QWORD *)a2 + 53) )
        a4 = *((_DWORD *)a2 + 104);
      else
        a4 = 0;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v11 = *(_QWORD *)(v7 + 528);
      if ( v11 )
      {
        GreAcquireSemaphore(v11);
        if ( v6 )
          *((_DWORD *)a2 + 103) &= ~0x10u;
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
    if ( v12 )
    {
      GreAcquireSemaphore(v12);
      v13 = 0;
      if ( !v6 )
      {
        v14 = *(_DWORD *)(*(_QWORD *)a1 + 720LL);
        if ( (v14 & 0x200) != 0 )
        {
          v13 = 1;
          *(_DWORD *)(*(_QWORD *)a1 + 720LL) = v14 & 0xFFFFFDFF;
          *(_DWORD *)(*(_QWORD *)a1 + 720LL) = HIWORD(a3);
        }
      }
      if ( (a3 & 0x20) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
        if ( v15 )
        {
          GreAcquireSemaphore(*(_QWORD *)(v15 + 528));
          if ( v6 )
            *((_DWORD *)a2 + 103) &= ~0x20u;
        }
      }
      if ( (a3 & 0x40) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
        if ( v16 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v16 + 528));
            *((_DWORD *)a2 + 103) &= ~0x40u;
          }
          else if ( v13 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v16 + 528));
          }
        }
      }
      if ( (a3 & 0x80u) != 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)a1 + 744LL);
        if ( v17 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 528));
            *((_DWORD *)a2 + 103) &= ~0x80u;
          }
          else if ( v13 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 528));
          }
        }
      }
      if ( a4 )
      {
        if ( a4 > *(_DWORD *)(*(_QWORD *)a1 + 848LL) )
          a4 = *(_DWORD *)(*(_QWORD *)a1 + 848LL);
        v18 = 0;
        if ( a4 )
        {
          v19 = 0LL;
          v20 = v6;
          v21 = 0LL;
          do
          {
            v22 = *(_QWORD *)(v19 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
            if ( v22 )
            {
              if ( v20 )
              {
                if ( v18 < *((_DWORD *)a2 + 104) && *(_DWORD *)(v21 * 4 + *((_QWORD *)a2 + 53)) )
                {
LABEL_43:
                  if ( v20 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v22 + 528));
                    if ( v18 < *((_DWORD *)a2 + 104) )
                    {
                      v23 = *((_QWORD *)a2 + 53);
                      if ( v23 )
                        *(_DWORD *)(v21 * 4 + v23) = 0;
                    }
                  }
                  else if ( v13 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v22 + 528));
                  }
                }
              }
              else if ( a5[v21] )
              {
                goto LABEL_43;
              }
            }
            ++v18;
            ++v21;
            v19 += 8LL;
          }
          while ( v18 < a4 );
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 856LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 856LL));
    }
  }
}
