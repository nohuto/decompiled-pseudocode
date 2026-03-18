/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C0047D58
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0046620 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C0047490 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C00478C0 (NtGdiCreateDIBSection.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F50F0 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C011C450 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011F0DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C0136E1C (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C029472C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0096624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01248C4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C024FC34 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0299508 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02995C4 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        unsigned int a2,
        void *a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        unsigned int a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  int v15; // r15d
  unsigned int v16; // r12d
  __int64 v17; // r8
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // r9d
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // esi
  void *v25; // rsi
  _QWORD *v26; // r12
  unsigned int v27; // edx
  int v28; // ecx
  __int64 v29; // rbx
  unsigned int v31; // edx
  __int64 v32; // rcx
  unsigned int *v33; // rax
  unsigned int *v34; // rsi
  unsigned int v35; // r8d
  unsigned int v36; // edx
  ULONG v37; // ecx
  unsigned __int64 v38; // rsi
  __int64 v39; // r13
  void *v40; // rax
  void *v41; // r15
  __int64 v42; // r8
  DYNAMICMODECHANGESHARELOCK *v43; // rcx
  int v44; // esi
  __int64 v45; // rbx
  DYNAMICMODECHANGESHARELOCK *v46; // rcx
  __int64 v47; // [rsp+68h] [rbp-100h] BYREF
  char v48; // [rsp+70h] [rbp-F8h]
  int v49; // [rsp+74h] [rbp-F4h]
  __int64 v50; // [rsp+78h] [rbp-F0h] BYREF
  int v51; // [rsp+80h] [rbp-E8h]
  char v52[8]; // [rsp+88h] [rbp-E0h] BYREF
  void *v53; // [rsp+90h] [rbp-D8h]
  _QWORD v54[4]; // [rsp+98h] [rbp-D0h] BYREF
  int v55; // [rsp+B8h] [rbp-B0h]
  unsigned int v56; // [rsp+BCh] [rbp-ACh]
  unsigned int v57; // [rsp+C0h] [rbp-A8h]
  void *Src; // [rsp+C8h] [rbp-A0h]
  void *v59; // [rsp+D0h] [rbp-98h]
  int v60; // [rsp+D8h] [rbp-90h]
  unsigned int v61; // [rsp+DCh] [rbp-8Ch]
  unsigned int v62; // [rsp+E0h] [rbp-88h]
  _QWORD v63[2]; // [rsp+E8h] [rbp-80h] BYREF
  DC *v64[2]; // [rsp+F8h] [rbp-70h] BYREF
  _QWORD v65[2]; // [rsp+108h] [rbp-60h] BYREF
  _QWORD v66[10]; // [rsp+118h] [rbp-50h] BYREF
  unsigned int v68; // [rsp+178h] [rbp+10h] BYREF
  void *v69; // [rsp+180h] [rbp+18h]

  v69 = a3;
  v68 = a2;
  memset(v54, 0, sizeof(v54));
  v15 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_116;
  v16 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_116;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_116;
  if ( !a4 )
    goto LABEL_116;
  if ( a6 < 0x28 )
    goto LABEL_116;
  v17 = *a4;
  v55 = v17;
  v60 = v17;
  if ( a6 < (unsigned int)v17 )
    goto LABEL_116;
  if ( (unsigned int)v17 < 0x28 )
    goto LABEL_116;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_116;
  v18 = a4[1];
  if ( v18 <= 0 )
    goto LABEL_116;
  v19 = a4[2];
  if ( !v19 )
    goto LABEL_116;
  LODWORD(v54[3]) = 0;
  HIDWORD(v54[0]) = v18;
  if ( v19 < 0 )
  {
    v19 = -v19;
    LODWORD(v54[3]) = 1;
  }
  LODWORD(v54[1]) = v19;
  v20 = *((unsigned __int16 *)a4 + 7);
  LODWORD(v54[0]) = v20;
  v21 = a4[4];
  v57 = v21;
  v61 = v21;
  v56 = a4[8];
  v62 = v56;
  Src = (char *)a4 + v17;
  v68 = 0;
  if ( v21 )
  {
    if ( v21 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_116;
      Src = a4 + 10;
      v68 = a4[10];
      LODWORD(v53) = a4[11];
      LODWORD(v59) = a4[12];
      v23 = 0;
      v24 = 512;
      if ( v20 == 16 )
      {
        LODWORD(v54[0]) = 4;
      }
      else
      {
        if ( v20 != 32 )
          goto LABEL_116;
        LODWORD(v54[0]) = 6;
      }
      goto LABEL_27;
    }
    if ( v21 != 10 )
      goto LABEL_116;
    DCOBJ::DCOBJ((DCOBJ *)v64, a1);
    if ( !v64[0] || !(unsigned int)DC::bIsCMYKColor(v64[0]) )
      goto LABEL_84;
    switch ( LODWORD(v54[0]) )
    {
      case 1:
        LODWORD(v54[0]) = 1;
        v23 = 2;
        break;
      case 4:
        LODWORD(v54[0]) = 2;
        v23 = 16;
        break;
      case 8:
        LODWORD(v54[0]) = 3;
        v23 = 256;
        break;
      case 0x20:
        LODWORD(v54[0]) = 6;
        v23 = 0;
        v24 = 512;
        v16 = 16;
LABEL_89:
        DCOBJ::~DCOBJ((DCOBJ *)v64);
        goto LABEL_27;
      default:
LABEL_84:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v64);
        return 0LL;
    }
    v16 = 1;
    v24 = 1024;
    goto LABEL_89;
  }
  switch ( v20 )
  {
    case 1:
      LODWORD(v54[0]) = 1;
      v23 = 2;
      break;
    case 4:
      LODWORD(v54[0]) = 2;
      v23 = 16;
      break;
    case 8:
      LODWORD(v54[0]) = 3;
      v23 = 256;
      break;
    default:
      v22 = 0;
      if ( a5 != 1 )
        v22 = a5;
      v15 = v22;
      v23 = 0;
      v24 = 512;
      switch ( v20 )
      {
        case 24:
          LODWORD(v54[0]) = 5;
          goto LABEL_25;
        case 16:
          LODWORD(v54[0]) = 4;
          v68 = 31744;
          LODWORD(v53) = 992;
          LODWORD(v59) = 31;
          goto LABEL_26;
        case 32:
          LODWORD(v54[0]) = 6;
LABEL_25:
          v16 = 8;
LABEL_26:
          a5 = v22;
          goto LABEL_27;
      }
LABEL_116:
      EngSetLastError(0x57u);
      return 0LL;
  }
  v16 = 1;
  v24 = 1024;
LABEL_27:
  v51 = 0;
  v50 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v50, v16, v23, 0LL, v68, (unsigned int)v53, (unsigned int)v59, v24, 1) )
  {
LABEL_93:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v50);
    return 0LL;
  }
  v54[2] = *(_QWORD *)v50;
  v47 = 0LL;
  v48 = 0;
  v49 = 0;
  v25 = 0LL;
  v53 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v50 + 24) |= 0x8000u;
    v25 = v69;
    v53 = a8;
    if ( !v69 )
    {
LABEL_92:
      SURFMEM::~SURFMEM((SURFMEM *)&v47);
      goto LABEL_93;
    }
    v69 = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v66, a1);
    if ( v66[0] && (*(_DWORD *)(*(_QWORD *)(v66[0] + 48LL) + 32LL) & 0x8000) != 0 )
      LODWORD(v54[3]) |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v66);
  }
  v26 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v47,
          (struct _DEVBITMAPINFO *)v54,
          v25,
          v53,
          a9,
          a10,
          a12,
          0,
          1,
          (a11 >> 3) & 1,
          a13 != 0LL)
    || !*(_WORD *)(v47 + 100) && *(_QWORD *)(v47 + 200) && *(_DWORD *)(v47 + 64) != a7 )
  {
    goto LABEL_92;
  }
  if ( v69 )
  {
    v36 = *(_DWORD *)(v47 + 64);
    if ( v36 > a7 )
      goto LABEL_94;
    LODWORD(v53) = *(_DWORD *)(v47 + 64);
    v59 = *(void **)(v47 + 72);
    memmove(v59, v69, v36);
    v27 = a6;
    v28 = v55;
  }
  else
  {
    v27 = a6;
    v28 = v55;
  }
  if ( v56 && v56 < v23 )
    v23 = v56;
  if ( !v23 )
    goto LABEL_39;
  v31 = v27 - v28;
  if ( !v15 )
  {
    if ( 4 * (unsigned __int64)v23 <= 0xFFFFFFFF )
    {
      v32 = 4 * v23;
      if ( v31 >= (unsigned int)v32 )
      {
        v33 = (unsigned int *)AllocFreeTmpBuffer(v32);
        v34 = v33;
        if ( v33 )
        {
          memmove(v33, Src, 4LL * v23);
          if ( v57 - 10 <= 2 )
            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v50, v34, v35, v23);
          else
            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v50, (struct tagRGBQUAD *)v34, 0, v23);
          FreeTmpBuffer(v34);
          if ( (a11 & 4) == 0 || LODWORD(v54[0]) != 3 )
            goto LABEL_39;
          DCOBJ::DCOBJ((DCOBJ *)v65, a1);
          v44 = 0;
          if ( v65[0] )
          {
            v45 = *(_QWORD *)(v65[0] + 48LL);
            DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v52);
            if ( *(_DWORD *)(v45 + 2124) == 3
              && (*(_DWORD *)(v45 + 2188) & 0x100) != 0
              && (*(_DWORD *)(v45 + 32) & 1) != 0 )
            {
              v44 = 1;
              XEPALOBJ::apalColorSet((XEPALOBJ *)&v50, *(struct PALETTE **)(v45 + 1824));
            }
            DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v46);
          }
          DCOBJ::~DCOBJ((DCOBJ *)v65);
          if ( v44 )
            goto LABEL_39;
          goto LABEL_92;
        }
        v37 = 14;
        goto LABEL_96;
      }
    }
LABEL_94:
    v37 = 87;
LABEL_96:
    EngSetLastError(v37);
    goto LABEL_92;
  }
  if ( v15 == 1 )
  {
    v38 = 2LL * v23;
    if ( v38 <= 0xFFFFFFFF && v31 >= v38 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v63, a1);
      v39 = v63[0];
      if ( v63[0] )
      {
        v40 = (void *)AllocFreeTmpBuffer(2 * v23);
        v41 = v40;
        if ( v40 )
        {
          memmove(v40, Src, 2LL * v23);
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v68);
          v42 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v63) + 16);
          if ( !v42 )
            v42 = *(_QWORD *)(*(_QWORD *)(v39 + 48) + 1824LL);
          XEPALOBJ::vGetEntriesFrom(&v50, *(_QWORD *)(v39 + 96), v42, v41, v23);
          FreeTmpBuffer(v41);
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v43);
          DCOBJ::~DCOBJ((DCOBJ *)v63);
          goto LABEL_39;
        }
        EngSetLastError(0xEu);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v63);
      goto LABEL_92;
    }
    goto LABEL_94;
  }
LABEL_39:
  if ( v26 )
  {
    if ( (a11 & 8) != 0 )
      *v26 = 0LL;
    else
      *v26 = *(_QWORD *)(v47 + 72);
  }
  *(_DWORD *)(v47 + 112) |= 0x4000000u;
  v48 |= 1u;
  v51 = 1;
  v29 = *(_QWORD *)(v47 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v47);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v50);
  return v29;
}
