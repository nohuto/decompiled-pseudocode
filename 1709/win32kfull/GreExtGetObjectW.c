/*
 * XREFs of GreExtGetObjectW @ 0x1C001AC58
 * Callers:
 *     NtGdiExtGetObjectW @ 0x1C001AB50 (NtGdiExtGetObjectW.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     GetWindowNCMetrics @ 0x1C0076268 (GetWindowNCMetrics.c)
 *     GetScaledLogFontForDpi @ 0x1C007810C (GetScaledLogFontForDpi.c)
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     CreateFontFromUserProfile @ 0x1C0082080 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C00821F4 (UserSetAltScaleFont.c)
 *     xxxCreateCaret @ 0x1C0084868 (xxxCreateCaret.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0099310 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     EraseBitmap @ 0x1C01210BC (EraseBitmap.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C013BB18 (-GetCursorHeight@@YAHXZ.c)
 *     CreateCompatiblePublicDC @ 0x1C013C380 (CreateCompatiblePublicDC.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C013ECE8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     CreateScaledFont @ 0x1C01A1438 (CreateScaledFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B7A74 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C012BF1C (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C0290F5C (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HBRUSH a1, __int64 a2, char *a3)
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
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  __int64 HDEV; // rax
  int v17; // r14d
  _QWORD *v18; // r15
  __int64 v19; // rdx
  int v20; // r14d
  int v21; // r14d
  int LogicalColorSpace; // eax
  int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+20h] BYREF

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
    v14 = (_DWORD *)HmgShareLockCheck(v3, a2);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)v6;
    if ( (v14[28] & 0x4100000) == 0 )
      goto LABEL_18;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = v14[14];
    *((_DWORD *)a3 + 2) = v14[15];
    if ( (v14[29] & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = v14[151];
      *((_DWORD *)a3 + 2) = v14[152];
    }
    v23 = *((unsigned __int16 *)&galBitsPerPixel + 2 * (unsigned int)v14[24]);
    *((_WORD *)a3 + 9) = v23;
    v24 = v14[14] * v23;
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 3) = ((v24 + 15) >> 3) & 0xFFFFFFFE;
    *((_WORD *)a3 + 8) = 1;
    LODWORD(v6) = 32;
    if ( (*((_WORD *)v15 + 50) || !*((_QWORD *)v15 + 25)) && (v15[28] & 0x100000) == 0 )
      goto LABEL_18;
    v25 = *((_QWORD *)v15 + 9);
    if ( v25 < 0x10000 || v25 > (unsigned __int64)MmHighestUserAddress )
      v25 = 0LL;
    *((_QWORD *)a3 + 3) = v25;
    *((_DWORD *)a3 + 3) = ((v15[14] * v23 + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v4 < 0x68 )
    {
LABEL_18:
      DEC_SHARE_REF_CNT(v15);
      return (unsigned int)v6;
    }
    *((_DWORD *)a3 + 8) = 40;
    *((_WORD *)a3 + 23) = 0;
    if ( (unsigned int)GreGetDIBitsInternal(0LL, (__int64)v3, 0, 0, 0LL, (struct tagBITMAPINFO *)(a3 + 32), 0, 0, 0x68u) )
    {
      LODWORD(v6) = 104;
      if ( (v15[28] & 0x100000) != 0 )
        *((_DWORD *)a3 + 13) = 0;
    }
    v26 = *((_QWORD *)v15 + 16);
    if ( v26 )
    {
      v27 = *(_DWORD *)(v26 + 24);
      if ( (v27 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v26 + 120);
        *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v26 + 120) + 4LL);
        *((_DWORD *)a3 + 20) = *(_DWORD *)(*(_QWORD *)(v26 + 120) + 8LL);
        goto LABEL_45;
      }
      if ( (v27 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
    *((_DWORD *)a3 + 20) = 0;
LABEL_45:
    *((_QWORD *)a3 + 11) = *((_QWORD *)v15 + 24);
    *((_DWORD *)a3 + 24) = v15[52];
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
        v30 = ghsemPalette;
        GreAcquireSemaphore(ghsemPalette);
        EPALOBJ::EPALOBJ((EPALOBJ *)&v29, (HPALETTE)v3);
        v28 = v29;
        if ( v29 )
        {
          *(_WORD *)a3 = *(_WORD *)(v29 + 28);
          DEC_SHARE_REF_CNT(v28);
        }
        else
        {
          LODWORD(v6) = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v30);
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
    if ( (*(_DWORD *)(v11 + 28) & 1) != 0 )
    {
      HDEV = UserGetHDEV();
      v17 = *(_DWORD *)(v12 + 24);
      v18 = (_QWORD *)HDEV;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
      if ( !v18 )
        return (unsigned int)v6;
      v20 = v17 - 4;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
            v3 = (HBRUSH)v18[182];
        }
        else
        {
          v3 = (HBRUSH)v18[181];
        }
      }
      else
      {
        v3 = (HBRUSH)v18[180];
      }
      LOBYTE(v19) = 10;
      v12 = HmgShareLock(v3, v19);
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
