/*
 * XREFs of GreExtGetObjectW @ 0x1C00462D8
 * Callers:
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C000C5F8 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C000C71C (UserSetAltScaleFont.c)
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     GetWindowNCMetrics @ 0x1C00452A4 (GetWindowNCMetrics.c)
 *     GetScaledLogFontForDpi @ 0x1C00454B4 (GetScaledLogFontForDpi.c)
 *     NtGdiExtGetObjectW @ 0x1C00461D0 (NtGdiExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0046620 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     xxxCreateCaret @ 0x1C00B0198 (xxxCreateCaret.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     EraseBitmap @ 0x1C011733C (EraseBitmap.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0137E70 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B4848 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     CreateScaledFont @ 0x1C01C3F3C (CreateScaledFont.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C020CDCC (-GetCursorHeight@@YAHXZ.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C00800D0 (GreGetDIBitsInternal.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C01225D4 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C0294844 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HBRUSH a1, __int64 a2, unsigned __int16 *a3)
{
  HBRUSH v3; // rbp
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // rsi
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 HDEV; // rax
  int v18; // r14d
  _QWORD *v19; // r15
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // r14d
  int LogicalColorSpace; // eax
  int v24; // ecx
  int v25; // ecx
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (int)a2;
  LODWORD(v6) = 0;
  v7 = (((unsigned int)a1 >> 16) & 0x1F) - 5;
  if ( !v7 )
  {
    if ( !a3 )
    {
      LODWORD(v6) = 32;
      return (unsigned int)v6;
    }
    if ( (int)a2 < 32 )
      return (unsigned int)v6;
    LOBYTE(a2) = 5;
    v15 = HmgShareLockCheck(v3, a2);
    v16 = v15;
    if ( !v15 )
      return (unsigned int)v6;
    if ( (*(_DWORD *)(v15 + 112) & 0x4100000) == 0 )
      goto LABEL_18;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v15 + 56);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v15 + 60);
    if ( (*(_DWORD *)(v15 + 116) & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v15 + 604);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v15 + 608);
    }
    v24 = *((unsigned __int16 *)&galBitsPerPixel + 2 * *(unsigned int *)(v15 + 96));
    a3[9] = v24;
    v25 = *(_DWORD *)(v15 + 56) * v24;
    a3[8] = 1;
    *((_QWORD *)a3 + 3) = 0LL;
    LODWORD(v6) = 32;
    *((_DWORD *)a3 + 3) = ((v25 + 15) >> 3) & 0xFFFFFFFE;
    if ( (*(_WORD *)(v15 + 100) || !*(_QWORD *)(v15 + 200)) && (*(_DWORD *)(v15 + 112) & 0x100000) == 0 )
      goto LABEL_18;
    v26 = *(_QWORD *)(v15 + 72);
    if ( v26 < 0x10000 || v26 > (unsigned __int64)MmHighestUserAddress )
      v26 = 0LL;
    v27 = a3[9];
    *((_QWORD *)a3 + 3) = v26;
    *((_DWORD *)a3 + 3) = ((*(_DWORD *)(v16 + 56) * v27 + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v4 < 0x68 )
    {
LABEL_18:
      DEC_SHARE_REF_CNT(v16);
      return (unsigned int)v6;
    }
    *((_DWORD *)a3 + 8) = 40;
    a3[23] = 0;
    if ( (unsigned int)GreGetDIBitsInternal(0, (int)v3, 0, 0, 0LL, (struct tagBITMAPINFO *)(a3 + 16), 0, 0, 0x68u) )
    {
      LODWORD(v6) = 104;
      if ( (*(_DWORD *)(v16 + 112) & 0x100000) != 0 )
        *((_DWORD *)a3 + 13) = 0;
    }
    v28 = *(_QWORD *)(v16 + 128);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 + 24);
      if ( (v29 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v28 + 120);
        *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v28 + 120) + 4LL);
        *((_DWORD *)a3 + 20) = *(_DWORD *)(*(_QWORD *)(v28 + 120) + 8LL);
        goto LABEL_45;
      }
      if ( (v29 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
    *((_DWORD *)a3 + 20) = 0;
LABEL_45:
    *((_QWORD *)a3 + 11) = *(_QWORD *)(v16 + 192);
    *((_DWORD *)a3 + 24) = *(_DWORD *)(v16 + 208);
    goto LABEL_18;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    LODWORD(v6) = 2;
    if ( a3 )
    {
      if ( (int)a2 >= 2 )
      {
        v32 = ghsemPalette;
        GreAcquireSemaphore(ghsemPalette);
        EPALOBJ::EPALOBJ((EPALOBJ *)&v31, (HPALETTE)v3);
        v30 = v31;
        if ( v31 )
        {
          *a3 = *(_WORD *)(v31 + 28);
          DEC_SHARE_REF_CNT(v30);
        }
        else
        {
          LODWORD(v6) = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v32);
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
    return (unsigned int)v6;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    LogicalColorSpace = cjGetLogicalColorSpace(v3, a2, a3);
    goto LABEL_28;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 6 )
      return (unsigned int)v6;
    LogicalColorSpace = cjGetBrushOrPen(v3, a2, a3);
LABEL_28:
    LODWORD(v6) = LogicalColorSpace;
    return (unsigned int)v6;
  }
  LOBYTE(a2) = 10;
  v11 = HmgShareLock(v3, a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = *(unsigned int *)(v11 + 28);
    if ( (v13 & 1) != 0 )
    {
      HDEV = UserGetHDEV(v13);
      v18 = *(_DWORD *)(v12 + 24);
      v19 = (_QWORD *)HDEV;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
      if ( !v19 )
        return (unsigned int)v6;
      v21 = v18 - 4;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 1 )
            v3 = (HBRUSH)v19[182];
        }
        else
        {
          v3 = (HBRUSH)v19[181];
        }
      }
      else
      {
        v3 = (HBRUSH)v19[180];
      }
      LOBYTE(v20) = 10;
      v12 = HmgShareLock(v3, v20);
    }
    if ( v12 )
    {
      if ( a3 )
      {
        v6 = *(unsigned int *)(v12 + 272);
        if ( v4 < v6 )
          LODWORD(v6) = v4;
        memmove(a3, (const void *)(v12 + 276), (unsigned int)v6);
      }
      else
      {
        LODWORD(v6) = *(_DWORD *)(v12 + 272);
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
    }
  }
  return (unsigned int)v6;
}
