/*
 * XREFs of GetFontResourceInfoInternalW @ 0x1C02B0488
 * Callers:
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C028A540 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C003D6FC (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vIFIMetricsToLogFontW @ 0x1C0282AD8 (vIFIMetricsToLogFontW.c)
 */

__int64 __fastcall GetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int *a6,
        int a7)
{
  unsigned __int64 v8; // rsi
  __int64 v11; // rbx
  struct PFF *v12; // rbp
  struct PDEV *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // esi
  __int64 v17; // rdx
  unsigned int FontFile; // eax
  struct _FONTHASH **v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h] BYREF

  v8 = a4;
  v11 = 0LL;
  v21 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v20 = gpPFTPrivate;
  if ( !gpPFTPrivate || (v12 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v20, a1, a2, a3, 0LL, 0, 0LL, 0)) == 0LL )
  {
    v20 = gpPFTPublic;
    v12 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v20, a1, a2, a3, 0LL, 0, 0LL, 0);
    if ( !v12 )
    {
      if ( a7 != 5 )
        goto LABEL_48;
      if ( (_DWORD)v8 )
      {
        if ( !a6 || (unsigned int)v8 < 4 )
          goto LABEL_48;
        *a6 = 1;
      }
LABEL_46:
      LODWORD(v11) = 1;
      goto LABEL_47;
    }
  }
  switch ( a7 )
  {
    case 0:
      if ( (_DWORD)v8 )
      {
        if ( (unsigned int)v8 < 4 )
          goto LABEL_48;
        *a6 = *((_DWORD *)v12 + 36);
      }
      goto LABEL_40;
    case 1:
      v17 = *((_QWORD *)v12 + 10);
      v20 = (struct _FONTHASH **)*((_QWORD *)v12 + 11);
      FontFile = PDEVOBJ::QueryFontFile((struct PDEV **)&v20, v17, 1LL, 0LL, 0LL);
      if ( FontFile == -1 )
        goto LABEL_48;
      if ( (_DWORD)v8 )
      {
        if ( FontFile > (unsigned int)v8 )
          FontFile = -1;
        else
          FontFile = PDEVOBJ::QueryFontFile((struct PDEV **)&v20, *((_QWORD *)v12 + 10), 1LL, (unsigned int)v8, a6);
      }
      if ( FontFile == -1 )
        goto LABEL_48;
      v14 = FontFile;
      goto LABEL_35;
    case 2:
      if ( (_DWORD)v8 )
      {
        v15 = *((unsigned int *)v12 + 36);
        if ( v8 < 92 * v15 )
          goto LABEL_48;
        v16 = 0;
        if ( (_DWORD)v15 )
        {
          do
          {
            vIFIMetricsToLogFontW((__int64)a6 + v11, *(_QWORD *)(*((_QWORD *)v12 + v16 + 28) + 32LL));
            v11 += 92LL;
            ++v16;
          }
          while ( v16 < *((_DWORD *)v12 + 36) );
        }
        *a5 = v11;
LABEL_36:
        LODWORD(v11) = 1;
        goto LABEL_48;
      }
      v14 = 92LL * *((unsigned int *)v12 + 36);
LABEL_35:
      *a5 = v14;
      goto LABEL_36;
    case 3:
      if ( (_DWORD)v8 )
      {
        if ( !a6 || (unsigned int)v8 < 4 )
          goto LABEL_48;
        v13 = (struct PDEV *)*((_QWORD *)v12 + 11);
        if ( v13 == gppdevTrueType || v13 == qword_1C0334158 && !*(_DWORD *)(*((_QWORD *)v12 + 10) + 8LL) )
          LODWORD(v11) = 1;
        *a6 = v11;
      }
      goto LABEL_46;
  }
  if ( a7 != 5 )
  {
    EngSetLastError(0x57u);
    goto LABEL_48;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_40;
  if ( a6 && (unsigned int)v8 >= 4 )
  {
    *a6 = 0;
LABEL_40:
    LODWORD(v11) = 1;
LABEL_47:
    *a5 = 4LL;
  }
LABEL_48:
  SEMOBJ::vUnlock((SEMOBJ *)&v21);
  return (unsigned int)v11;
}
