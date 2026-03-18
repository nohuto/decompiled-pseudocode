/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C008F0B8
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0002988 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C007D710 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C008F528 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C011D530 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C013F4F0 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0286134 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  unsigned int v9; // r13d
  struct ESTROBJ *v11; // rbx
  __int64 v13; // r12
  struct RFONTOBJ *v15; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  struct RFONTOBJ *v21; // r8
  __int64 v22; // rax
  struct _GLYPHDATA *v23; // rax
  struct _GLYPHDATA *v24; // r15
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  __int64 v26; // r15
  RFONTOBJ *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct RFONTOBJ *v30; // r8
  struct _GLYPHDATA *v31; // rax
  struct _GLYPHDATA *v32; // rax
  int *v33; // rax
  __int64 v34; // [rsp+68h] [rbp+48h] BYREF
  __int64 v35; // [rsp+70h] [rbp+50h]

  v9 = 0;
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
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C032C162 )
        {
          a3 = (struct ESTROBJ *)(0x80000000 >> ((a4 - gqlTTSystem) % 32));
          if ( ((unsigned int)a3 & *(_DWORD *)(qword_1C032C168 + 4LL * ((a4 - gqlTTSystem) / 32))) != 0 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) )
              return RFONTOBJ::pgdDefault(this);
            if ( v11 && (*((_DWORD *)v11 + 16) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(v11, a6, 0, 0);
            Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
            v34 = *(_QWORD *)(*(_QWORD *)this + 728LL);
            if ( v34
              && (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, v15))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, v15)),
                  (v17 = EudcMetrics) != 0LL) )
            {
              if ( v11 )
              {
                v18 = a5;
                ++*((_DWORD *)v11 + 63);
                *(_DWORD *)(v13 + 4 * v18) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v17 = RFONTOBJ::pgdDefault(this);
            }
            goto LABEL_23;
          }
        }
      }
    }
  }
  LODWORD(v19) = *(_DWORD *)(*(_QWORD *)this + 848LL);
  if ( (_DWORD)v19 )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
    v21 = (struct RFONTOBJ *)(unsigned int)(v19 - 1);
    v22 = *(_QWORD *)(*(_QWORD *)(v20 + 752) + 8LL * (_QWORD)v21);
    v34 = v22;
    if ( v22 && (*(_DWORD *)(*(_QWORD *)(v22 + 120) + 52LL) & 0xA) == 8 )
    {
      v19 = (unsigned int)v21;
      v23 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, v21)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, v21);
      v24 = v23;
      if ( v23 )
      {
        if ( v23->fxD )
        {
          if ( !v11 )
            goto LABEL_35;
          *(_DWORD *)(v13 + 4LL * a5) = v19 + 4;
          ++*(_DWORD *)(*((_QWORD *)v11 + 34) + 4 * v19);
          goto LABEL_34;
        }
      }
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
  }
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v34 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, a3);
    v24 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v11 )
        goto LABEL_35;
      *(_DWORD *)(v13 + 4LL * a5) = 2;
      ++*((_DWORD *)v11 + 64);
LABEL_34:
      *a7 = 0;
      goto LABEL_35;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
  }
  if ( !(_DWORD)v19 )
  {
LABEL_57:
    if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
    {
      v34 = *(_QWORD *)(*(_QWORD *)this + 744LL);
      if ( a9 )
        v32 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, a3);
      else
        v32 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, a3);
      v17 = v32;
      if ( v32 && v32->fxD )
      {
        if ( v11 )
        {
          *(_DWORD *)(v13 + 4LL * a5) = 3;
          v33 = a7;
          ++*((_DWORD *)v11 + 65);
          *v33 = 0;
        }
LABEL_23:
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
        return v17;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
    }
    return 0LL;
  }
  v26 = 0LL;
  v35 = 0LL;
  while ( 1 )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v34);
    v28 = *(_QWORD *)this;
    v29 = *(_QWORD *)(v26 + *(_QWORD *)(*(_QWORD *)this + 752LL));
    v34 = v29;
    if ( !v29
      || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                         v27,
                         a4,
                         *(struct PFF **)(v28 + 120),
                         *(struct PFF **)(v29 + 120)) )
    {
      goto LABEL_56;
    }
    v31 = a9
        ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v34, a4, v30)
        : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v34, a4, v30);
    v24 = v31;
    if ( v31 )
    {
      if ( v31->fxD )
        break;
    }
    v26 = v35;
LABEL_56:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
    v26 += 8LL;
    ++v9;
    v35 = v26;
    if ( v9 >= (unsigned int)v19 )
      goto LABEL_57;
  }
  if ( v11 )
  {
    *(_DWORD *)(v13 + 4LL * a5) = v9 + 4;
    ++*(_DWORD *)(*((_QWORD *)v11 + 34) + 4LL * v9);
    *a7 = 0;
  }
LABEL_35:
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
  return v24;
}
