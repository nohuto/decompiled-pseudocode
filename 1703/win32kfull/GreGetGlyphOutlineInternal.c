/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C00E59A8
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C00E57F0 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0002988 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0032444 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C008DC0C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C008E610 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C008EC54 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C008F4D8 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00E615C (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C012DFF8 (-QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLY.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C013F4F0 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0286134 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

__int64 __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  unsigned __int16 v8; // r15
  unsigned int v9; // r14d
  int v10; // ebx
  struct _FONTOBJ *v11; // r13
  unsigned int v12; // r12d
  unsigned int v13; // edi
  __int64 v14; // rsi
  int v15; // eax
  struct _FONTOBJ *v16; // rsi
  struct _FONTOBJ **v17; // r12
  ULONG_PTR iFile; // rcx
  unsigned int v19; // r13d
  SIZE sizLogResPpi; // rcx
  __int64 v21; // rcx
  __int64 i; // rbx
  ULONG_PTR v23; // rdx
  unsigned int iTTUniq; // r14d
  _QWORD *pvConsumer; // rbx
  __int64 v26; // r12
  __int64 v27; // rbx
  struct RFONTOBJ *v28; // r8
  SIZE v29; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  SIZE v31; // rbx
  unsigned int v32; // r12d
  __int64 v33; // r14
  __int64 v34; // rbx
  unsigned int v35; // r15d
  SIZE v36; // r9
  unsigned __int16 v37; // cx
  struct RFONTOBJ *v38; // r8
  struct _GLYPHDATA *v39; // rax
  __int64 v40; // rbx
  struct RFONTOBJ *v41; // r8
  unsigned int v42; // r14d
  struct _GLYPHDATA *v43; // rax
  ULONG_PTR v44; // rax
  struct DHPDEV__ *v45; // rdx
  unsigned int v46; // edi
  unsigned int v47; // edi
  unsigned int v48; // edi
  int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  LONG top; // ecx
  int v53; // eax
  int v54; // eax
  unsigned __int16 v56; // [rsp+40h] [rbp-C0h] BYREF
  struct _FONTOBJ *v57; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v59; // [rsp+54h] [rbp-ACh]
  SIZE v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-A0h]
  unsigned int v62; // [rsp+64h] [rbp-9Ch]
  unsigned int v63; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v64; // [rsp+70h] [rbp-90h] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  struct _FONTOBJ **v66; // [rsp+80h] [rbp-80h] BYREF
  __int64 v67; // [rsp+88h] [rbp-78h] BYREF
  int v68; // [rsp+90h] [rbp-70h]
  unsigned int v69; // [rsp+94h] [rbp-6Ch]
  int v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h] BYREF
  RFONTOBJ *v72; // [rsp+A8h] [rbp-58h]
  struct _FONTOBJ *v73; // [rsp+B0h] [rbp-50h]
  struct _MAT2 *v74; // [rsp+B8h] [rbp-48h]
  struct tagTTPOLYGONHEADER *v75; // [rsp+C0h] [rbp-40h]
  _QWORD v76[3]; // [rsp+C8h] [rbp-38h] BYREF
  struct _GLYPHDATA v77; // [rsp+E0h] [rbp-20h] BYREF

  v8 = a2;
  v75 = a6;
  v9 = 0;
  v62 = 0;
  v74 = a7;
  v10 = a3 & 0x80;
  v59 = a2;
  v71 = a4;
  v70 = a3 & 0x100;
  v11 = 0LL;
  v73 = 0LL;
  v12 = -1;
  v13 = a3 & 0xFFFFFE7F;
  v68 = -1;
  v14 = a4;
  v69 = v10 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v76, a1);
  if ( !v14 || !v74 )
  {
    EngSetLastError(0x57u);
    goto LABEL_61;
  }
  if ( !v76[0] )
  {
    EngSetLastError(6u);
    goto LABEL_92;
  }
  v57 = 0LL;
  v15 = RFONTOBJ::bInit((struct _FD_XFORM **)&v57, (struct XDCOBJ *)v76, 0, 2u);
  v16 = v57;
  if ( v15 )
    GreAcquireSemaphore(v57[8].iTTUniq);
  v17 = &v57;
  v64 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v66 = &v57;
  if ( !v16 )
    goto LABEL_58;
  if ( v10 )
  {
    v9 = v8;
  }
  else
  {
    v56 = v8;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v57, &v56, 1, &v63, 0, 0);
    v9 = v63;
  }
  v63 = v9;
  if ( v9 != v16[7].cxMax )
    goto LABEL_56;
  if ( v10 )
    goto LABEL_56;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v57, v8) )
    goto LABEL_56;
  iFile = v16[13].iFile;
  if ( !iFile )
    goto LABEL_56;
  GreAcquireSemaphore(iFile);
  v19 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v57, (struct XDCOBJ *)v76);
  sizLogResPpi = v16[11].sizLogResPpi;
  if ( sizLogResPpi )
  {
    v60 = v16[11].sizLogResPpi;
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 528LL));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
  }
  v21 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( v21 )
  {
    v60 = *(SIZE *)&v16[11].ulStyleSize;
    GreAcquireSemaphore(*(_QWORD *)(v21 + 528));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
  }
  for ( i = 0LL; (unsigned int)i < LODWORD(v16[13].iTTUniq); i = (unsigned int)(i + 1) )
  {
    v60 = (SIZE)*((_QWORD *)v16[11].pvConsumer + i);
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v60 + 528LL));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
  }
  v23 = v16[13].iFile;
  LODWORD(v16[11].iTTUniq) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v23);
  GreReleaseSemaphoreInternal(v16[13].iFile);
  iTTUniq = v16[13].iTTUniq;
  v61 = iTTUniq;
  if ( iTTUniq )
  {
    pvConsumer = v16[11].pvConsumer;
    v26 = iTTUniq - 1;
    v56 = v8;
    v27 = pvConsumer[v26];
    v65 = v27;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v56, 1, &v58, 0, 0);
    if ( v58 != *(_DWORD *)(v27 + 456) )
    {
      v29 = (SIZE)*((_QWORD *)v16[11].pvConsumer + v26);
      v60 = v29;
      if ( *(_QWORD *)&v29
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v29 + 120LL) + 52LL) & 0xA) == 8
        && (v61 = iTTUniq - 1, --iTTUniq, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v60, v8, v28)) != 0LL)
        && EudcMetrics->fxD )
      {
        v19 = v58;
        v17 = (struct _FONTOBJ **)&v65;
        v66 = (struct _FONTOBJ **)&v65;
      }
      else
      {
        v17 = &v57;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
      if ( v19 != -1 )
        goto LABEL_51;
    }
  }
  v31 = v16[11].sizLogResPpi;
  if ( v31 )
  {
    v64 = (ULONG_PTR)v16[11].sizLogResPpi;
    v56 = v8;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v56, 1, &v58, 0, 0);
    if ( v58 != *(_DWORD *)(*(_QWORD *)&v31 + 456LL) )
    {
      v17 = (struct _FONTOBJ **)&v64;
      v19 = v58;
      v66 = (struct _FONTOBJ **)&v64;
      if ( v58 != -1 )
        goto LABEL_51;
    }
  }
  v32 = 0;
  if ( !iTTUniq )
  {
LABEL_43:
    v17 = v66;
    goto LABEL_44;
  }
  v56 = v8;
  v33 = 0LL;
  while ( 1 )
  {
    v65 = *(_QWORD *)((char *)v16[11].pvConsumer + v33);
    v34 = v65;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v56, 1, &v58, 0, 0);
    v35 = v58;
    if ( v58 != *(_DWORD *)(v34 + 456) )
      break;
LABEL_41:
    ++v32;
    v33 += 8LL;
    if ( v32 >= v61 )
    {
      v8 = v59;
      goto LABEL_43;
    }
  }
  v36 = *(SIZE *)((char *)v16[11].pvConsumer + v33);
  v60 = v36;
  if ( !*(_QWORD *)&v36
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       (RFONTOBJ *)v59,
                       v59,
                       (struct PFF *)v16[1].pvProducer,
                       *(struct PFF **)(*(_QWORD *)&v36 + 120LL))
    || (v39 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v60, v37, v38)) == 0LL
    || !v39->fxD )
  {
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
    goto LABEL_41;
  }
  v19 = v35;
  v17 = (struct _FONTOBJ **)&v65;
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
  if ( v35 != -1 )
    goto LABEL_51;
  v8 = v59;
LABEL_44:
  v40 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( !v40 )
    goto LABEL_54;
  v67 = *(_QWORD *)&v16[11].ulStyleSize;
  v56 = v8;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v67, &v56, 1, &v58, 0, 0);
  v42 = v58;
  if ( v58 == *(_DWORD *)(v40 + 456) )
    goto LABEL_54;
  v66 = *(struct _FONTOBJ ***)&v16[11].ulStyleSize;
  if ( v66 )
  {
    v43 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v66, v8, v41);
    if ( v43 )
    {
      if ( v43->fxD )
      {
        v19 = v42;
        v17 = (struct _FONTOBJ **)&v67;
      }
    }
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v66);
  if ( v19 == -1 )
  {
LABEL_54:
    RFONTOBJ::dtHelper((RFONTOBJ *)&v57, 1);
    LODWORD(v16[11].iTTUniq) = 0;
    v9 = v63;
  }
  else
  {
LABEL_51:
    v9 = v19;
  }
  v11 = v73;
LABEL_56:
  if ( *v17 )
  {
    v11 = *v17;
    goto LABEL_59;
  }
LABEL_58:
  EngSetLastError(0x3EBu);
LABEL_59:
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v65);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v67);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v64);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
  v14 = v71;
  v12 = v68;
LABEL_61:
  if ( v11 )
  {
    v57 = v11;
    GreAcquireSemaphore(v11[8].iTTUniq);
    v44 = v57[1].iTTUniq;
    v64 = v44;
    if ( v44
      && *(_QWORD *)(v44 + 3096)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v71, (struct DCOBJ *)v76, (struct RFONTOBJ *)&v57, v74, a8, v69),
          (_DWORD)v71) )
    {
      if ( !v13 )
      {
        v51 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v64, 0LL, v57, 4u, v9, &v77, 0LL, 0);
        goto LABEL_85;
      }
      if ( v13 == 1 )
        goto LABEL_70;
      if ( v13 <= 3 )
      {
        v49 = 2;
        if ( v13 != 3 )
          v49 = 0;
        v50 = v49 | 4;
        if ( !v70 )
          v50 = v49;
        v51 = PDEVOBJ::QueryTrueTypeOutline((PDEVOBJ *)&v64, v45, v57, v9, v50, &v77, a5, v75);
LABEL_85:
        v12 = v51;
        if ( v51 != -1 )
        {
          top = v77.rclInk.top;
          v53 = v77.rclInk.right - v77.rclInk.left;
          *(_DWORD *)(v14 + 8) = v77.rclInk.left;
          *(_DWORD *)v14 = v53;
          *(_DWORD *)(v14 + 4) = v77.rclInk.bottom - top;
          v54 = (v77.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v14 + 12) = -top;
          *(_WORD *)(v14 + 16) = v54 >> 1;
          *(_WORD *)(v14 + 18) = ((v77.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v13 <= 6 )
      {
LABEL_70:
        v46 = v13 - 1;
        if ( v46 )
        {
          v47 = v46 - 3;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              if ( v48 == 1 )
                v62 = 9;
            }
            else
            {
              v62 = 8;
            }
          }
          else
          {
            v62 = 6;
          }
        }
        else
        {
          v62 = 5;
        }
        v51 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v64, 0LL, v57, v62, v9, &v77, v75, a5);
        goto LABEL_85;
      }
      if ( !HIDWORD(v71) )
      {
        RFONTOBJ::vReleaseCache(v72);
        RFONTOBJ::vMakeInactive(v72);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v57 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v57);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v57);
  }
LABEL_92:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v76);
  return v12;
}
