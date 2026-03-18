/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C00B26C0
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C00B2E80 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0033AB0 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0034518 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0034B80 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0035490 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0038A38 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00B25A8 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C0131520 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C0144E24 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0282C84 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  __int64 v44; // rdx
  __int64 v45; // r8
  ULONG_PTR v46; // rdx
  __int64 left; // rdx
  __int64 v48; // r8
  unsigned int v49; // edi
  unsigned int v50; // edi
  unsigned int v51; // edi
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // eax
  LONG top; // ecx
  int v56; // eax
  int v57; // eax
  unsigned __int16 v59; // [rsp+40h] [rbp-C0h] BYREF
  struct _FONTOBJ *v60; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v62; // [rsp+54h] [rbp-ACh]
  SIZE v63; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-A0h]
  unsigned int v65; // [rsp+64h] [rbp-9Ch]
  unsigned int v66; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  struct _FONTOBJ **v68; // [rsp+78h] [rbp-88h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  SIZE v70; // [rsp+88h] [rbp-78h] BYREF
  int v71; // [rsp+90h] [rbp-70h]
  unsigned int v72; // [rsp+94h] [rbp-6Ch]
  int v73; // [rsp+98h] [rbp-68h]
  _QWORD v74[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-50h] BYREF
  RFONTOBJ *v76; // [rsp+B8h] [rbp-48h]
  _QWORD v77[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _MAT2 *v78; // [rsp+D0h] [rbp-30h]
  struct tagTTPOLYGONHEADER *v79; // [rsp+D8h] [rbp-28h]
  struct _GLYPHDATA v80; // [rsp+E0h] [rbp-20h] BYREF

  v8 = a2;
  v79 = a6;
  v9 = 0;
  v65 = 0;
  v78 = a7;
  v10 = a3 & 0x80;
  v62 = a2;
  v75 = a4;
  v73 = a3 & 0x100;
  v11 = 0LL;
  v74[0] = 0LL;
  v12 = -1;
  v13 = a3 & 0xFFFFFE7F;
  v71 = -1;
  v14 = a4;
  v72 = v10 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v77, a1);
  if ( !v14 || !v78 )
  {
    EngSetLastError(0x57u);
    goto LABEL_61;
  }
  if ( !v77[0] )
  {
    EngSetLastError(6u);
    goto LABEL_92;
  }
  v60 = 0LL;
  v15 = RFONTOBJ::bInit((struct _FD_XFORM **)&v60, (struct XDCOBJ *)v77, 0, 2u);
  v16 = v60;
  if ( v15 )
    GreAcquireSemaphore(v60[8].iTTUniq);
  v17 = &v60;
  v70 = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  v68 = &v60;
  if ( !v16 )
    goto LABEL_58;
  if ( v10 )
  {
    v9 = v8;
  }
  else
  {
    v59 = v8;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v60, &v59, 1, &v66, 0, 0);
    v9 = v66;
  }
  v66 = v9;
  if ( v9 != v16[7].cxMax )
    goto LABEL_56;
  if ( v10 )
    goto LABEL_56;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v60, v8) )
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
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v60, (struct XDCOBJ *)v77);
  sizLogResPpi = v16[11].sizLogResPpi;
  if ( sizLogResPpi )
  {
    v63 = v16[11].sizLogResPpi;
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 528LL));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
  }
  v21 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( v21 )
  {
    v63 = *(SIZE *)&v16[11].ulStyleSize;
    GreAcquireSemaphore(*(_QWORD *)(v21 + 528));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
  }
  for ( i = 0LL; (unsigned int)i < LODWORD(v16[13].iTTUniq); i = (unsigned int)(i + 1) )
  {
    v63 = (SIZE)*((_QWORD *)v16[11].pvConsumer + i);
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v63 + 528LL));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
  }
  v23 = v16[13].iFile;
  LODWORD(v16[11].iTTUniq) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v23);
  GreReleaseSemaphoreInternal(v16[13].iFile);
  iTTUniq = v16[13].iTTUniq;
  v64 = iTTUniq;
  if ( iTTUniq )
  {
    pvConsumer = v16[11].pvConsumer;
    v26 = iTTUniq - 1;
    v59 = v8;
    v27 = pvConsumer[v26];
    v67 = v27;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v67, &v59, 1, &v61, 0, 0);
    if ( v61 != *(_DWORD *)(v27 + 456) )
    {
      v29 = (SIZE)*((_QWORD *)v16[11].pvConsumer + v26);
      v63 = v29;
      if ( *(_QWORD *)&v29
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v29 + 120LL) + 52LL) & 0xA) == 8
        && (v64 = iTTUniq - 1, --iTTUniq, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v63, v8, v28)) != 0LL)
        && EudcMetrics->fxD )
      {
        v19 = v61;
        v17 = (struct _FONTOBJ **)&v67;
        v68 = (struct _FONTOBJ **)&v67;
      }
      else
      {
        v17 = &v60;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
      if ( v19 != -1 )
        goto LABEL_51;
    }
  }
  v31 = v16[11].sizLogResPpi;
  if ( v31 )
  {
    v70 = v16[11].sizLogResPpi;
    v59 = v8;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v70, &v59, 1, &v61, 0, 0);
    if ( v61 != *(_DWORD *)(*(_QWORD *)&v31 + 456LL) )
    {
      v17 = (struct _FONTOBJ **)&v70;
      v19 = v61;
      v68 = (struct _FONTOBJ **)&v70;
      if ( v61 != -1 )
        goto LABEL_51;
    }
  }
  v32 = 0;
  if ( !iTTUniq )
  {
LABEL_43:
    v17 = v68;
    goto LABEL_44;
  }
  v59 = v8;
  v33 = 0LL;
  while ( 1 )
  {
    v67 = *(_QWORD *)((char *)v16[11].pvConsumer + v33);
    v34 = v67;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v67, &v59, 1, &v61, 0, 0);
    v35 = v61;
    if ( v61 != *(_DWORD *)(v34 + 456) )
      break;
LABEL_41:
    ++v32;
    v33 += 8LL;
    if ( v32 >= v64 )
    {
      v8 = v62;
      goto LABEL_43;
    }
  }
  v36 = *(SIZE *)((char *)v16[11].pvConsumer + v33);
  v63 = v36;
  if ( !*(_QWORD *)&v36
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       (RFONTOBJ *)v62,
                       v62,
                       (struct PFF *)v16[1].pvProducer,
                       *(struct PFF **)(*(_QWORD *)&v36 + 120LL))
    || (v39 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v63, v37, v38)) == 0LL
    || !v39->fxD )
  {
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
    goto LABEL_41;
  }
  v19 = v35;
  v17 = (struct _FONTOBJ **)&v67;
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
  if ( v35 != -1 )
    goto LABEL_51;
  v8 = v62;
LABEL_44:
  v40 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( !v40 )
    goto LABEL_54;
  v69 = *(_QWORD *)&v16[11].ulStyleSize;
  v59 = v8;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v69, &v59, 1, &v61, 0, 0);
  v42 = v61;
  if ( v61 == *(_DWORD *)(v40 + 456) )
    goto LABEL_54;
  v68 = *(struct _FONTOBJ ***)&v16[11].ulStyleSize;
  if ( v68 )
  {
    v43 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v68, v8, v41);
    if ( v43 )
    {
      if ( v43->fxD )
      {
        v19 = v42;
        v17 = (struct _FONTOBJ **)&v69;
      }
    }
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v68);
  if ( v19 == -1 )
  {
LABEL_54:
    RFONTOBJ::dtHelper((RFONTOBJ *)&v60, 1);
    LODWORD(v16[11].iTTUniq) = 0;
    v9 = v66;
  }
  else
  {
LABEL_51:
    v9 = v19;
  }
  v11 = (struct _FONTOBJ *)v74[0];
LABEL_56:
  if ( *v17 )
  {
    v11 = *v17;
    goto LABEL_59;
  }
LABEL_58:
  EngSetLastError(0x3EBu);
LABEL_59:
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v67);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v69);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v70);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60, v44, v45);
  v14 = v75;
  v12 = v71;
LABEL_61:
  if ( v11 )
  {
    v60 = v11;
    GreAcquireSemaphore(v11[8].iTTUniq);
    v46 = v60[1].iTTUniq;
    v74[0] = v11[1].pvProducer;
    if ( v46
      && *(_QWORD *)(v46 + 3096)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v75, (struct DCOBJ *)v77, (struct RFONTOBJ *)&v60, v78, a8, v72),
          (_DWORD)v75) )
    {
      if ( !v13 )
      {
        v54 = PFFOBJ::QueryFontData((PFFOBJ *)v74, 0LL, v60, 4u, v9, &v80, 0LL, 0);
        goto LABEL_85;
      }
      if ( v13 == 1 )
        goto LABEL_70;
      if ( v13 <= 3 )
      {
        v52 = 2;
        if ( v13 != 3 )
          v52 = 0;
        v53 = v52 | 4;
        if ( !v73 )
          v53 = v52;
        v54 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)v74, (struct DHPDEV__ *)left, v60, v9, v53, &v80, a5, v79);
LABEL_85:
        v12 = v54;
        if ( v54 != -1 )
        {
          left = (unsigned int)v80.rclInk.left;
          top = v80.rclInk.top;
          v56 = v80.rclInk.right - v80.rclInk.left;
          *(_DWORD *)(v14 + 8) = v80.rclInk.left;
          *(_DWORD *)v14 = v56;
          *(_DWORD *)(v14 + 4) = v80.rclInk.bottom - top;
          v57 = (v80.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v14 + 12) = -top;
          *(_WORD *)(v14 + 16) = v57 >> 1;
          *(_WORD *)(v14 + 18) = ((v80.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v13 <= 6 )
      {
LABEL_70:
        v49 = v13 - 1;
        if ( v49 )
        {
          v50 = v49 - 3;
          if ( v50 )
          {
            v51 = v50 - 1;
            if ( v51 )
            {
              if ( v51 == 1 )
                v65 = 9;
            }
            else
            {
              v65 = 8;
            }
          }
          else
          {
            v65 = 6;
          }
        }
        else
        {
          v65 = 5;
        }
        v54 = PFFOBJ::QueryFontData((PFFOBJ *)v74, 0LL, v60, v65, v9, &v80, v79, a5);
        goto LABEL_85;
      }
      if ( !HIDWORD(v75) )
      {
        RFONTOBJ::vReleaseCache(v76, left, v48);
        RFONTOBJ::vMakeInactive(v76);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v60 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v60, left, v48);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v60);
  }
LABEL_92:
  if ( v77[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v77);
  return v12;
}
