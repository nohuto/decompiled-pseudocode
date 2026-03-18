/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A2E74 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800A3DF0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800A7EA0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180155EF4 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18015601C (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016B3C0 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016B490 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D804 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1801838A0 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x180187468 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x180187498 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x18019269C (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // cl
  __int64 v5; // r9
  char v6; // al
  char v7; // cl
  unsigned int v9; // edx
  double v10; // rbx
  unsigned int v11; // r13d
  int v12; // edi
  unsigned int v13; // r14d
  int v14; // r15d
  signed int v15; // r14d
  unsigned int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rax
  _DWORD *v20; // rdi
  unsigned __int8 (__fastcall *v21)(_DWORD *, __int64, void *); // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned int (__fastcall *v24)(CKeyframeAnimation *__hidden); // rax
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int *v28; // rdi
  CResource *v29; // rcx
  void (*v30)(void); // rax
  int v31; // eax
  __int64 v32; // r9
  unsigned int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r15d
  unsigned int v37; // edx
  double v38; // rdi
  unsigned __int64 v39; // r14
  char v40; // r12
  bool v41; // zf
  unsigned int v42; // r13d
  void (*v43)(CKeyframeAnimation *__hidden, unsigned __int64); // rax
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned int v46; // eax
  unsigned int v47; // edx
  signed int v48; // eax
  signed int v49; // eax
  __int64 Elapsed; // rax
  unsigned int v51; // r12d
  __int64 v52; // rdi
  char *v53; // r15
  unsigned int v54; // r14d
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned int v57; // eax
  signed int v58; // eax
  int v59; // eax
  double v60; // xmm2_8
  double v61; // xmm0_8
  __int64 v62; // rdx
  __int64 v63; // rax
  double DurationAverage; // xmm0_8
  __int64 v65; // rcx
  double v66; // xmm0_8
  __int64 v67; // rcx
  double v68; // xmm0_8
  __int64 v69; // rcx
  double v70; // xmm0_8
  __int64 v71; // rcx
  double v72; // xmm0_8
  __int64 v73; // rcx
  double v74; // xmm0_8
  LPCGUID v75; // r8
  LPCGUID v76; // r9
  __int64 v77; // rax
  __int64 v78; // rbx
  struct CInteraction *v79; // rdx
  bool v80[8]; // [rsp+38h] [rbp-D0h] BYREF
  double v81; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+48h] [rbp-C0h] BYREF
  double v83; // [rsp+50h] [rbp-B8h] BYREF
  double v84; // [rsp+58h] [rbp-B0h] BYREF
  double v85; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+68h] [rbp-A0h]
  double v87; // [rsp+70h] [rbp-98h] BYREF
  double v88; // [rsp+78h] [rbp-90h] BYREF
  double v89; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v90[64]; // [rsp+88h] [rbp-80h] BYREF
  int v91; // [rsp+C8h] [rbp-40h]
  char v92; // [rsp+CCh] [rbp-3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  double *v94; // [rsp+F8h] [rbp-10h]
  __int64 v95; // [rsp+100h] [rbp-8h]
  char *v96; // [rsp+108h] [rbp+0h]
  __int64 v97; // [rsp+110h] [rbp+8h]
  char *v98; // [rsp+118h] [rbp+10h]
  __int64 v99; // [rsp+120h] [rbp+18h]
  __int64 *v100; // [rsp+128h] [rbp+20h]
  __int64 v101; // [rsp+130h] [rbp+28h]
  bool *v102; // [rsp+138h] [rbp+30h]
  __int64 v103; // [rsp+140h] [rbp+38h]
  double *v104; // [rsp+148h] [rbp+40h]
  __int64 v105; // [rsp+150h] [rbp+48h]
  double *v106; // [rsp+158h] [rbp+50h]
  __int64 v107; // [rsp+160h] [rbp+58h]
  double *v108; // [rsp+168h] [rbp+60h]
  __int64 v109; // [rsp+170h] [rbp+68h]
  double *v110; // [rsp+178h] [rbp+70h]
  __int64 v111; // [rsp+180h] [rbp+78h]
  double *v112; // [rsp+188h] [rbp+80h]
  __int64 v113; // [rsp+190h] [rbp+88h]
  double *v114; // [rsp+198h] [rbp+90h]
  __int64 v115; // [rsp+1A0h] [rbp+98h]
  __int64 *v116; // [rsp+1A8h] [rbp+A0h]
  __int64 v117; // [rsp+1B0h] [rbp+A8h]
  __int64 v118; // [rsp+218h] [rbp+110h] BYREF

  v118 = a3;
  v4 = *((_BYTE *)this + 376);
  LODWORD(v5) = 0;
  v6 = v4 >> 2;
  v7 = v4 & 0xFB;
  v6 &= 1u;
  v86 = 0LL;
  v9 = 0;
  v10 = 0.0;
  v11 = 0;
  LODWORD(v81) = 0;
  v83 = 0.0;
  *((_BYTE *)this + 377) = v6;
  *((_BYTE *)this + 376) = v7;
  v80[1] = v6;
  if ( !*((_DWORD *)this + 66) && (v7 & 2) == 0 && !*((_DWORD *)this + 42) )
  {
    v16 = 0;
    goto LABEL_28;
  }
  *((_BYTE *)this + 376) = v7 & 0xFD;
  if ( *((_DWORD *)this + 42) || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 96));
    QpcStopwatch::Start((QpcStopwatch *)&v83);
    v10 = v83;
    v9 = 0;
  }
  v12 = *((_DWORD *)this + 14);
  v13 = *((_DWORD *)this + 4);
  if ( v13 > ~v12 )
  {
    v16 = -2147418113;
    v15 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x40u);
    goto LABEL_71;
  }
  v14 = *((_DWORD *)this + 22);
  if ( v14 - v12 >= v13 )
    goto LABEL_7;
  memset_0(v90, 0, sizeof(v90));
  v91 = 18;
  v92 = 0;
  v49 = DynArray<CExpressionValue,1>::AddAndSet((char *)this + 64, v13 + v12 - v14, v90);
  v15 = v49;
  if ( v49 >= 0 )
  {
    v9 = 0;
LABEL_7:
    v15 = 0;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v49, 0x48u);
  v9 = 0;
LABEL_8:
  v16 = v15;
  if ( v15 >= 0 )
  {
    *((_BYTE *)this + 376) |= 1u;
    v17 = v118;
    *((_QWORD *)this + 3) = a2;
    *((_QWORD *)this + 4) = v17;
    if ( *((_BYTE *)this + 377) )
    {
      v84 = 0.0;
      if ( CCommonRegistryData::m_fLogExpressionPerfStats )
      {
        QpcStopwatch::Start((QpcStopwatch *)&v84);
        v9 = 0;
      }
      v36 = 0;
      if ( *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) )
      {
        v37 = CBaseExpression::s_recursionLevel;
        do
        {
          v38 = *(double *)(*((_QWORD *)this + 4 * *((unsigned int *)this + 43) + 22) + 8LL * v36);
          if ( v38 != 0.0 )
          {
            v39 = *((_QWORD *)this + 4);
            v40 = 0;
            if ( (int)++*(_DWORD *)(*(_QWORD *)&v38 + 140LL) <= 1
              && *(_QWORD *)(*(_QWORD *)&v38 + 144LL) != v39
              && v37 <= 0x10 )
            {
              v40 = 1;
              v41 = *(_DWORD *)(*(_QWORD *)&v38 + 224LL) == 0;
              v42 = 0;
              CBaseExpression::s_recursionLevel = v37 + 1;
              if ( !v41 )
              {
                do
                  CBaseExpression::InsertInOrder(
                    *(CBaseExpression **)(*(_QWORD *)(*(_QWORD *)&v38 + 200LL) + 8LL * v42++),
                    v39);
                while ( v42 < *(_DWORD *)(*(_QWORD *)&v38 + 224LL) );
              }
              v43 = *(void (**)(CKeyframeAnimation *__hidden, unsigned __int64))(**(_QWORD **)&v38 + 176LL);
              if ( v43 == CKeyframeAnimation::InsertDependenciesInOrder )
              {
                CKeyframeAnimation::InsertDependenciesInOrder(*(CKeyframeAnimation **)&v38, v39);
              }
              else if ( v43 == CExpression::InsertDependenciesInOrder )
              {
                CExpression::InsertDependenciesInOrder(*(CExpression **)&v38, v39);
              }
              else
              {
                ((void (__fastcall *)(_QWORD, unsigned __int64, void (*)(CExpression *__hidden, unsigned __int64)))v43)(
                  *(_QWORD *)&v38,
                  v39,
                  CExpression::InsertDependenciesInOrder);
              }
              if ( (*(_BYTE *)(*(_QWORD *)&v38 + 192LL) & 2) != 0 )
              {
                v44 = *(_QWORD *)(*(_QWORD *)&v38 + 16LL);
                v85 = v38;
                v45 = *(_QWORD *)(v44 + 216) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v44 + 216) + 172LL));
                v46 = *(_DWORD *)(v45 + 200);
                v47 = v46 + 1;
                if ( v46 + 1 < v46 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0xB5u);
                }
                else if ( v47 > *(_DWORD *)(v45 + 196) )
                {
                  v48 = DynArrayImpl<1>::AddMultipleAndSet(v45 + 176, 8u, v45, &v85);
                  if ( v48 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v48, 0xC0u);
                }
                else
                {
                  *(double *)(*(_QWORD *)(v45 + 176) + 8LL * v46) = v85;
                  *(_DWORD *)(v45 + 200) = v47;
                }
              }
              v37 = CBaseExpression::s_recursionLevel;
            }
            *(_QWORD *)(*(_QWORD *)&v38 + 144LL) = v39;
            if ( v40 )
              CBaseExpression::s_recursionLevel = --v37;
            --*(_DWORD *)(*(_QWORD *)&v38 + 140LL);
          }
          ++v36;
        }
        while ( v36 < *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) );
        v9 = LODWORD(v81);
        v11 = LODWORD(v81);
        v10 = v83;
      }
      *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) = 0;
      v41 = CCommonRegistryData::m_fLogExpressionPerfStats == 0;
      *((_DWORD *)this + 43) = 1 - *((_DWORD *)this + 43);
      *((_BYTE *)this + 377) = 0;
      if ( !v41 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v84);
        ++*((_DWORD *)this + 26);
        *((_QWORD *)this + 17) += Elapsed;
        v9 = LODWORD(v81);
      }
    }
    v18 = 0;
    v19 = 32LL * *((unsigned int *)this + 43);
    *(_QWORD *)((char *)this + 380) = 0LL;
    if ( *(_DWORD *)((char *)this + v19 + 200) )
    {
      do
      {
        v20 = *(_DWORD **)(*((_QWORD *)this + 4 * *((unsigned int *)this + 43) + 22) + 8LL * v18);
        if ( v20 )
        {
          v21 = *(unsigned __int8 (__fastcall **)(_DWORD *, __int64, void *))(*(_QWORD *)v20 + 48LL);
          if ( ((char *)v21 == (char *)&CKeyframeAnimation::IsOfType
             || (char *)v21 != (char *)&CExpression::IsOfType && v21(v20, 78LL, &CKeyframeAnimation::IsOfType))
            && (v20[114] & 3) != 0 )
          {
            v22 = *((_QWORD *)v20 + 6);
            if ( v22 )
            {
              ++*(_DWORD *)(v22 + 76);
              *(_BYTE *)(*((_QWORD *)v20 + 2) + 496LL) = 1;
            }
          }
          v23 = *((_QWORD *)this + 4);
          v80[0] = 0;
          CBaseExpression::CalculateValue((CBaseExpression *)v20, (CExpressionManager *)((char *)this + 40), v23, v80);
          *((_BYTE *)this + 376) |= 2 * v80[0];
          v24 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(*(_QWORD *)v20 + 168LL);
          if ( v24 == CKeyframeAnimation::GetMaxStackCount )
          {
            v25 = v20[62];
          }
          else if ( v24 == CExpression::GetMaxStackCount )
          {
            v25 = v20[72];
          }
          else
          {
            v25 = v24((CKeyframeAnimation *)v20);
          }
          v9 = LODWORD(v81);
          if ( v25 > v11 )
            v11 = v25;
        }
        else
        {
          LODWORD(v81) = ++v9;
        }
        v26 = *((unsigned int *)this + 43);
        ++v18;
      }
      while ( v18 < *((_DWORD *)this + 8 * v26 + 50) );
      v10 = v83;
      if ( v9 > 0x100 )
      {
        v51 = 0;
        v52 = 32 * v26;
        v53 = (char *)this + 32 * (unsigned int)(1 - v26);
        if ( *((_DWORD *)this + 8 * v26 + 50) )
        {
          v54 = v82;
          do
          {
            v55 = v54;
            v84 = *(double *)(*(_QWORD *)((char *)this + v52 + 176) + 8LL * v51);
            if ( v84 != 0.0 )
            {
              v56 = *((unsigned int *)v53 + 50);
              v57 = v56 + 1;
              v54 = v56 + 1;
              if ( (int)v56 + 1 < (unsigned int)v56 )
                v54 = v55;
              if ( v57 < (unsigned int)v56 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v57 < (unsigned int)v56 ? 0x80070216 : 0, 0xB5u);
              }
              else if ( v54 > *((_DWORD *)v53 + 49) )
              {
                v58 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v53 + 176), 8u, v55, &v84);
                if ( v58 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v58, 0xC0u);
              }
              else
              {
                *(double *)(*((_QWORD *)v53 + 22) + 8 * v56) = v84;
                *((_DWORD *)v53 + 50) = v54;
              }
            }
            ++v51;
          }
          while ( v51 < *(_DWORD *)((char *)this + v52 + 200) );
        }
        *(_DWORD *)((char *)this + v52 + 200) = 0;
        *((_DWORD *)this + 43) = 1 - *((_DWORD *)this + 43);
      }
    }
    *((_BYTE *)this + 376) &= ~1u;
    while ( *((_DWORD *)this + 66) )
    {
      v28 = (unsigned int *)*((_QWORD *)this + 30);
      CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v28 + 1), *v28);
      v29 = (CResource *)*((_QWORD *)v28 + 1);
      v30 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
      if ( (char *)v30 == (char *)CResource::Release )
        CResource::Release(v29);
      else
        v30();
      v31 = *((_DWORD *)this + 66);
      if ( v31 )
      {
        v32 = *((_QWORD *)this + 30);
        v33 = 0;
        if ( v31 != 1 )
        {
          do
          {
            v34 = 2LL * v33;
            v35 = 2LL * ++v33;
            *(_OWORD *)(v32 + 8 * v34) = *(_OWORD *)(v32 + 8 * v35);
          }
          while ( v33 < *((_DWORD *)this + 66) - 1 );
        }
        --*((_DWORD *)this + 66);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
      }
    }
    LODWORD(v5) = 0;
    *((_DWORD *)this + 4) = v11;
    v16 = 0;
    goto LABEL_27;
  }
LABEL_71:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x191u);
  LODWORD(v5) = 0;
LABEL_27:
  if ( v10 != 0.0 )
  {
    v59 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v83);
    v60 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
    v61 = (double)v59;
    if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
    {
      v95 = 8LL;
      v94 = &v84;
      v97 = 4LL;
      v96 = (char *)this + 380;
      v98 = (char *)this + 384;
      v63 = 32LL * *((unsigned int *)this + 43);
      v99 = 4LL;
      v84 = v61 / v60;
      LODWORD(v82) = *(_DWORD *)((char *)this + v63 + 200);
      v100 = &v82;
      v103 = v62;
      v102 = &v80[1];
      v101 = 4LL;
      DurationAverage = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 96, 0LL);
      v105 = 8LL;
      v104 = &v85;
      v85 = DurationAverage / v60;
      v66 = CExpressionPerformanceCounter::GetDurationAverage(v65, 1LL);
      v107 = 8LL;
      v106 = &v83;
      v83 = v66 / v60;
      v68 = CExpressionPerformanceCounter::GetDurationAverage(v67, 2LL);
      v109 = 8LL;
      v108 = &v81;
      v81 = v68 / v60;
      v70 = CExpressionPerformanceCounter::GetDurationAverage(v69, 3LL);
      v111 = 8LL;
      v110 = &v87;
      v87 = v70 / v60;
      v72 = CExpressionPerformanceCounter::GetDurationAverage(v71, 4LL);
      v113 = 8LL;
      v112 = &v88;
      v88 = v72 / v60;
      v74 = CExpressionPerformanceCounter::GetDurationAverage(v73, 5LL);
      v115 = 8LL;
      v114 = &v89;
      v116 = &v118;
      v117 = 8LL;
      v89 = v74 / v60;
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802128D1, v75, v76, 0xEu, &pData);
    }
    LODWORD(v5) = 0;
  }
LABEL_28:
  if ( *((_DWORD *)this + 74) )
  {
    do
    {
      v77 = *((_QWORD *)this + 34);
      v78 = *(_QWORD *)(v77 + 8LL * (unsigned int)v5);
      if ( *(_DWORD *)(v78 + 152) )
        CInteractionTracker::CheckForIdle(*(CInteractionTracker **)(v77 + 8LL * (unsigned int)v5));
      CInteractionTracker::CheckForOutOfBounds((CInteractionTracker *)v78);
      v79 = *(struct CInteraction **)(v78 + 552);
      if ( v79 )
        CChainingHelper::UpdateConfigurationIfDirty((CChainingHelper *)(v78 + 340), v79);
      CInteractionTracker::SendPendingCallbacks((CInteractionTracker *)v78);
      v5 = (unsigned int)(v86 + 1);
      v86 = v5;
    }
    while ( (unsigned int)v5 < *((_DWORD *)this + 74) );
  }
  return v16;
}
