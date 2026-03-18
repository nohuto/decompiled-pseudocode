/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C0034FC4
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0034CC8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0024A4C (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0035370 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0126BA0 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C0144E24 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0282C84 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8,
        int a9)
{
  __int64 v9; // r14
  struct ESTROBJ *v11; // rbx
  __int64 v13; // r12
  struct RFONTOBJ *v15; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rdx
  struct RFONTOBJ *v21; // r8
  struct RFONTOBJ *v22; // r15
  __int64 v23; // rax
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  struct _GLYPHDATA *v25; // r14
  struct _GLYPHDATA *v26; // rax
  unsigned int v27; // r15d
  RFONTOBJ *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct RFONTOBJ *v31; // r8
  struct _GLYPHDATA *v32; // rax
  struct _GLYPHDATA *v33; // rax
  __int64 v34; // [rsp+68h] [rbp+48h] BYREF
  __int64 v35; // [rsp+70h] [rbp+50h]

  v9 = 0LL;
  v11 = a3;
  if ( a3 )
    v13 = *((_QWORD *)a3 + 27);
  else
    v13 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 320LL) )
  {
    if ( a8 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
      {
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C032F962 )
        {
          a3 = (struct ESTROBJ *)(0x80000000 >> ((a4 - gqlTTSystem) % 32));
          if ( ((unsigned int)a3 & *(_DWORD *)(qword_1C032F968 + 4LL * ((a4 - gqlTTSystem) / 32))) != 0 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) )
              return RFONTOBJ::pgdDefault(this);
            if ( v11 && (*((_DWORD *)v11 + 16) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(v11, a6, 0, 0);
            Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
            v34 = *(_QWORD *)(*(_QWORD *)this + 728LL);
            if ( !v34
              || (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, v15))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, v15)),
                  (v17 = EudcMetrics) == 0LL) )
            {
              v17 = RFONTOBJ::pgdDefault(this);
              goto LABEL_24;
            }
            if ( !v11 )
            {
LABEL_24:
              RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
              return v17;
            }
            v18 = a5;
            ++*((_DWORD *)v11 + 63);
            *(_DWORD *)(v13 + 4 * v18) = 1;
LABEL_22:
            *a7 = 0;
            goto LABEL_24;
          }
        }
      }
    }
  }
  v19 = *(_DWORD *)(*(_QWORD *)this + 848LL);
  if ( v19 )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
    v21 = (struct RFONTOBJ *)(v19 - 1);
    v22 = v21;
    v23 = *(_QWORD *)(*(_QWORD *)(v20 + 752) + 8LL * (_QWORD)v21);
    v34 = v23;
    if ( v23 && (*(_DWORD *)(*(_QWORD *)(v23 + 120) + 52LL) & 0xA) == 8 )
    {
      v19 = (unsigned int)v21;
      if ( a9 )
        EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, v21);
      else
        EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, v21);
      v25 = EudcMetricsPlus;
      if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
      {
        if ( v11 )
        {
          *(_DWORD *)(v13 + 4LL * a5) = v19 + 4;
          ++*(_DWORD *)(*((_QWORD *)v11 + 34) + 4LL * (_QWORD)v22);
          goto LABEL_35;
        }
        goto LABEL_36;
      }
      v9 = 0LL;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
  }
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v34 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      v26 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, a3);
    else
      v26 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, a3);
    v25 = v26;
    if ( v26 && v26->fxD )
    {
      if ( v11 )
      {
        *(_DWORD *)(v13 + 4LL * a5) = 2;
        ++*((_DWORD *)v11 + 64);
        goto LABEL_35;
      }
      goto LABEL_36;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
    v9 = 0LL;
  }
  v27 = 0;
  if ( !v19 )
  {
LABEL_59:
    if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
    {
      v34 = *(_QWORD *)(*(_QWORD *)this + 744LL);
      if ( a9 )
        v33 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, a3);
      else
        v33 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, a3);
      v17 = v33;
      if ( v33 && v33->fxD )
      {
        if ( !v11 )
          goto LABEL_24;
        *(_DWORD *)(v13 + 4LL * a5) = 3;
        ++*((_DWORD *)v11 + 65);
        goto LABEL_22;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
    }
    return 0LL;
  }
  v35 = 0LL;
  while ( 1 )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
    v29 = *(_QWORD *)this;
    v30 = *(_QWORD *)(v9 + *(_QWORD *)(*(_QWORD *)this + 752LL));
    v34 = v30;
    if ( !v30
      || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                         v28,
                         a4,
                         *(struct PFF **)(v29 + 120),
                         *(struct PFF **)(v30 + 120)) )
    {
      goto LABEL_58;
    }
    v32 = a9
        ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, v31)
        : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, v31);
    v25 = v32;
    if ( v32 )
    {
      if ( v32->fxD )
        break;
    }
    v9 = v35;
LABEL_58:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
    v9 += 8LL;
    ++v27;
    v35 = v9;
    if ( v27 >= v19 )
      goto LABEL_59;
  }
  if ( v11 )
  {
    *(_DWORD *)(v13 + 4LL * a5) = v27 + 4;
    ++*(_DWORD *)(*((_QWORD *)v11 + 34) + 4LL * v27);
LABEL_35:
    *a7 = 0;
  }
LABEL_36:
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
  return v25;
}
