/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C009A300
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     _InternalGetIconInfo @ 0x1C001D404 (_InternalGetIconInfo.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0099310 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00999B0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0099DE0 (NtGdiCreateDIBSection.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0103010 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C0126200 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C013D6AC (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0290E4C (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     GreGetDCDpiScaleValue @ 0x1C0082CD4 (GreGetDCDpiScaleValue.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C009BC28 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C012CCD4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0251684 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0295BAC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C0295C6C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
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
  int v14; // r15d
  unsigned int v15; // r12d
  __int64 v16; // r8
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // r13d
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // esi
  void *v25; // rsi
  void *v26; // r13
  unsigned int v27; // eax
  _QWORD *v28; // r12
  unsigned int v29; // edx
  void *v30; // r13
  int v31; // eax
  unsigned int v32; // r8d
  HDC v33; // r15
  char v34; // dl
  __int64 v35; // rbx
  unsigned int v37; // edx
  __int64 v38; // rcx
  unsigned int *v39; // rax
  unsigned int *v40; // rsi
  unsigned int v41; // r8d
  unsigned int v42; // edx
  int DCDpiScaleValue; // ecx
  ULONG v44; // ecx
  unsigned __int64 v45; // rsi
  __int64 v46; // r13
  void *v47; // rax
  void *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // r8
  DYNAMICMODECHANGESHARELOCK *v51; // rcx
  int v52; // esi
  __int64 v53; // rbx
  DYNAMICMODECHANGESHARELOCK *v54; // rcx
  float v55; // xmm0_4
  __int64 v56; // rcx
  __int64 v57; // [rsp+68h] [rbp-F0h] BYREF
  char v58; // [rsp+70h] [rbp-E8h]
  int v59; // [rsp+74h] [rbp-E4h]
  __int64 v60; // [rsp+78h] [rbp-E0h] BYREF
  int v61; // [rsp+80h] [rbp-D8h]
  void *Src; // [rsp+88h] [rbp-D0h]
  char v63[4]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned int v64; // [rsp+94h] [rbp-C4h]
  _QWORD v65[4]; // [rsp+98h] [rbp-C0h] BYREF
  int v66; // [rsp+B8h] [rbp-A0h]
  unsigned int v67; // [rsp+BCh] [rbp-9Ch]
  unsigned int v68; // [rsp+C0h] [rbp-98h]
  void *v69; // [rsp+C8h] [rbp-90h]
  int v70; // [rsp+D0h] [rbp-88h]
  unsigned int v71; // [rsp+D4h] [rbp-84h]
  unsigned int v72; // [rsp+D8h] [rbp-80h]
  _QWORD v73[2]; // [rsp+E0h] [rbp-78h] BYREF
  DC *v74[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v75[2]; // [rsp+100h] [rbp-58h] BYREF
  _QWORD v76[9]; // [rsp+110h] [rbp-48h] BYREF
  unsigned int v78; // [rsp+168h] [rbp+10h] BYREF
  void *v79; // [rsp+170h] [rbp+18h]

  v79 = a3;
  v78 = a2;
  memset(v65, 0, sizeof(v65));
  v14 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_123;
  v15 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_123;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_123;
  if ( !a4 )
    goto LABEL_123;
  if ( a6 < 0x28 )
    goto LABEL_123;
  v16 = *a4;
  v66 = v16;
  v70 = v16;
  if ( a6 < (unsigned int)v16 )
    goto LABEL_123;
  if ( (unsigned int)v16 < 0x28 )
    goto LABEL_123;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_123;
  v17 = a4[1];
  if ( v17 <= 0 )
    goto LABEL_123;
  v18 = a4[2];
  if ( !v18 )
    goto LABEL_123;
  LODWORD(v65[3]) = 0;
  HIDWORD(v65[0]) = v17;
  if ( v18 < 0 )
  {
    v18 = -v18;
    LODWORD(v65[3]) = 1;
  }
  LODWORD(v65[1]) = v18;
  v19 = *((unsigned __int16 *)a4 + 7);
  LODWORD(v65[0]) = v19;
  v20 = a4[4];
  v68 = v20;
  v71 = v20;
  v67 = a4[8];
  v72 = v67;
  Src = (char *)a4 + v16;
  v21 = 0;
  if ( v20 )
  {
    if ( v20 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_123;
      Src = a4 + 10;
      v78 = a4[10];
      v64 = a4[11];
      LODWORD(v69) = a4[12];
      v23 = 0;
      v24 = 512;
      if ( v19 == 16 )
      {
        LODWORD(v65[0]) = 4;
      }
      else
      {
        if ( v19 != 32 )
          goto LABEL_123;
        LODWORD(v65[0]) = 6;
      }
      v21 = v78;
      goto LABEL_27;
    }
    if ( v20 != 10 )
      goto LABEL_123;
    DCOBJ::DCOBJ((DCOBJ *)v74, a1);
    if ( !v74[0] || !(unsigned int)DC::bIsCMYKColor(v74[0]) )
      goto LABEL_91;
    switch ( LODWORD(v65[0]) )
    {
      case 1:
        LODWORD(v65[0]) = 1;
        v23 = 2;
        break;
      case 4:
        LODWORD(v65[0]) = 2;
        v23 = 16;
        break;
      case 8:
        LODWORD(v65[0]) = 3;
        v23 = 256;
        break;
      case 0x20:
        LODWORD(v65[0]) = 6;
        v23 = 0;
        v24 = 512;
        v15 = 16;
LABEL_96:
        DCOBJ::~DCOBJ((DCOBJ *)v74);
        goto LABEL_27;
      default:
LABEL_91:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v74);
        return 0LL;
    }
    v15 = 1;
    v24 = 1024;
    goto LABEL_96;
  }
  switch ( v19 )
  {
    case 1:
      LODWORD(v65[0]) = 1;
      v23 = 2;
      break;
    case 4:
      LODWORD(v65[0]) = 2;
      v23 = 16;
      break;
    case 8:
      LODWORD(v65[0]) = 3;
      v23 = 256;
      break;
    default:
      v22 = 0;
      if ( a5 != 1 )
        v22 = a5;
      v14 = v22;
      v23 = 0;
      v24 = 512;
      switch ( v19 )
      {
        case 24:
          LODWORD(v65[0]) = 5;
          goto LABEL_25;
        case 16:
          LODWORD(v65[0]) = 4;
          v21 = 31744;
          v64 = 992;
          LODWORD(v69) = 31;
          goto LABEL_26;
        case 32:
          LODWORD(v65[0]) = 6;
LABEL_25:
          v15 = 8;
LABEL_26:
          a5 = v22;
          goto LABEL_27;
      }
LABEL_123:
      EngSetLastError(0x57u);
      return 0LL;
  }
  v15 = 1;
  v24 = 1024;
LABEL_27:
  v61 = 0;
  v60 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v60, v15, v23, 0LL, v21, v64, (unsigned int)v69, v24, 1) )
  {
LABEL_100:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v60);
    return 0LL;
  }
  v65[2] = *(_QWORD *)v60;
  v57 = 0LL;
  v58 = 0;
  v59 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = a11;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v60 + 24) |= 0x8000u;
    v25 = v79;
    v26 = a8;
    if ( !v79 )
      goto LABEL_99;
    v79 = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v76, a1);
    if ( v76[0] && (*(_DWORD *)(*(_QWORD *)(v76[0] + 48LL) + 32LL) & 0x8000) != 0 )
      LODWORD(v65[3]) |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v76);
    v27 = a11;
  }
  v28 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v57,
          (struct _DEVBITMAPINFO *)v65,
          v25,
          v26,
          a9,
          a10,
          a12,
          0,
          1,
          (v27 >> 3) & 1,
          a13 != 0LL)
    || !*(_WORD *)(v57 + 100) && *(_QWORD *)(v57 + 200) && *(_DWORD *)(v57 + 64) != a7 )
  {
    goto LABEL_99;
  }
  if ( v79 )
  {
    v42 = *(_DWORD *)(v57 + 64);
    if ( v42 > a7 )
    {
LABEL_101:
      v44 = 87;
LABEL_103:
      EngSetLastError(v44);
      goto LABEL_99;
    }
    v64 = *(_DWORD *)(v57 + 64);
    v69 = *(void **)(v57 + 72);
    memmove(v69, v79, v42);
    v29 = a6;
    v30 = Src;
    v31 = v66;
    v32 = v67;
  }
  else
  {
    v29 = a6;
    v30 = Src;
    v31 = v66;
    v32 = v67;
  }
  if ( v32 && v32 < v23 )
    v23 = v32;
  if ( !v23 )
    goto LABEL_41;
  v37 = v29 - v31;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
LABEL_41:
      v33 = a1;
      goto LABEL_42;
    }
    v45 = 2LL * v23;
    if ( v45 > 0xFFFFFFFF || v37 < v45 )
      goto LABEL_101;
    DCOBJ::DCOBJ((DCOBJ *)v73, a1);
    v46 = v73[0];
    if ( v73[0] )
    {
      v47 = (void *)AllocFreeTmpBuffer(2 * v23);
      v48 = v47;
      if ( v47 )
      {
        memmove(v47, Src, 2LL * v23);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v78);
        v50 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v73) + 16);
        if ( !v50 )
          v50 = *(_QWORD *)(v49 + 1824);
        XEPALOBJ::vGetEntriesFrom(&v60, *(_QWORD *)(v46 + 96), v50, v48, v23);
        FreeTmpBuffer(v48);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v51);
        DCOBJ::~DCOBJ((DCOBJ *)v73);
        goto LABEL_41;
      }
      EngSetLastError(0xEu);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v73);
LABEL_99:
    SURFMEM::~SURFMEM((SURFMEM *)&v57);
    goto LABEL_100;
  }
  if ( 4 * (unsigned __int64)v23 > 0xFFFFFFFF )
    goto LABEL_101;
  v38 = 4 * v23;
  if ( v37 < (unsigned int)v38 )
    goto LABEL_101;
  v39 = (unsigned int *)AllocFreeTmpBuffer(v38);
  v40 = v39;
  if ( !v39 )
  {
    v44 = 14;
    goto LABEL_103;
  }
  memmove(v39, v30, 4LL * v23);
  if ( v68 - 10 <= 2 )
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v60, v40, v41, v23);
  else
    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v60, (struct tagRGBQUAD *)v40, 0, v23);
  FreeTmpBuffer(v40);
  v34 = a11;
  if ( (a11 & 4) == 0 || LODWORD(v65[0]) != 3 )
  {
    v33 = a1;
    goto LABEL_43;
  }
  v33 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v75, a1);
  v52 = 0;
  if ( v75[0] )
  {
    v53 = *(_QWORD *)(v75[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v63);
    if ( *(_DWORD *)(v53 + 2124) == 3 && (*(_DWORD *)(v53 + 2188) & 0x100) != 0 && (*(_DWORD *)(v53 + 32) & 1) != 0 )
    {
      v52 = 1;
      XEPALOBJ::apalColorSet((XEPALOBJ *)&v60, *(struct PALETTE **)(v53 + 1824));
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v54);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v75);
  if ( !v52 )
    goto LABEL_99;
LABEL_42:
  v34 = a11;
LABEL_43:
  if ( v28 )
  {
    if ( (v34 & 8) != 0 )
      *v28 = 0LL;
    else
      *v28 = *(_QWORD *)(v57 + 72);
  }
  *(_DWORD *)(v57 + 112) |= 0x4000000u;
  v58 |= 1u;
  v61 = 1;
  if ( (v34 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v33);
    if ( DCDpiScaleValue > 1 )
    {
      v55 = (float)DCDpiScaleValue;
      LODWORD(Src) = HIDWORD(v65[0]) / DCDpiScaleValue;
      HIDWORD(Src) = LODWORD(v65[1]) / DCDpiScaleValue;
      v56 = v57;
      *(float *)(v57 + 596) = v55;
      *(float *)(v56 + 600) = v55;
      *(_DWORD *)(v56 + 116) |= 0x800u;
      *(_QWORD *)(v56 + 604) = Src;
    }
  }
  v35 = *(_QWORD *)(v57 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v57);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v60);
  return v35;
}
