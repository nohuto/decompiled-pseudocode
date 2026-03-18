/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800239D4 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180029658 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x18003D410 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180051660 (-Release@CResource@@UEAAKXZ.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800545B0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800CD240 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800D3598 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@U_Iterator_b.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18013CF80 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18017EEF4 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18017EFBC (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18017EFE4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180193CAC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x180193D7C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x180195A44 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x1801BCBE8 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x1801BCC18 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1801CBD60 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  double v7; // rdi
  int v8; // ebx
  struct CExpressionValueStack *v9; // r13
  unsigned int v10; // r14d
  int v11; // r12d
  int v12; // r14d
  unsigned int v13; // ebx
  char v14; // al
  unsigned int v15; // edx
  unsigned int v16; // r14d
  unsigned int v17; // edi
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // r8
  _DWORD *v19; // rbx
  __int64 (__fastcall *v20)(_QWORD, _QWORD); // rax
  unsigned __int64 v21; // r8
  unsigned int (__fastcall *v22)(CKeyframeAnimation *__hidden); // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  bool v25; // cc
  char *v26; // r14
  double *v27; // rbx
  double v28; // rax
  __int64 v29; // rax
  void **v30; // rbx
  void **v31; // r12
  char v33; // al
  __int64 v34; // rax
  unsigned int *v35; // rbx
  CResource *v36; // rcx
  void (*v37)(void); // rax
  int v38; // ecx
  __int64 v39; // r9
  unsigned int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // edx
  unsigned int v44; // r14d
  unsigned int v45; // r8d
  double v46; // rbx
  unsigned int v47; // ecx
  unsigned __int64 v48; // r12
  bool v49; // al
  __int64 v50; // r8
  unsigned int v51; // r13d
  void (__fastcall *v52)(CKeyframeAnimation *__hidden, unsigned __int64); // rax
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned int v56; // edx
  int v57; // eax
  bool v58; // zf
  int v59; // eax
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // r12
  __int64 v63; // r14
  __int64 v64; // rbx
  char *i; // r12
  unsigned int v66; // eax
  unsigned int v67; // edx
  int v68; // eax
  __int64 Elapsed; // rax
  int v70; // eax
  double v71; // xmm2_8
  double v72; // xmm0_8
  __int64 v73; // rdx
  __int64 v74; // rax
  double DurationAverage; // xmm0_8
  __int64 v76; // rcx
  double v77; // xmm0_8
  __int64 v78; // rcx
  double v79; // xmm0_8
  __int64 v80; // rcx
  double v81; // xmm0_8
  __int64 v82; // rcx
  double v83; // xmm0_8
  __int64 v84; // rcx
  double v85; // xmm0_8
  __int64 v86; // rax
  _DWORD *v87; // rdi
  CChainingHelper *ActiveChainingHelper; // rax
  bool v89; // [rsp+30h] [rbp-D0h] BYREF
  bool v90; // [rsp+31h] [rbp-CFh] BYREF
  double v91; // [rsp+38h] [rbp-C8h] BYREF
  double v92; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v93; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v94; // [rsp+4Ch] [rbp-B4h] BYREF
  double v95; // [rsp+50h] [rbp-B0h] BYREF
  double v96; // [rsp+58h] [rbp-A8h] BYREF
  double v97; // [rsp+60h] [rbp-A0h] BYREF
  double v98; // [rsp+68h] [rbp-98h] BYREF
  double v99; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v100[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v101; // [rsp+C0h] [rbp-40h]
  int v102; // [rsp+C8h] [rbp-38h]
  char v103; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  double *v105; // [rsp+F0h] [rbp-10h]
  __int64 v106; // [rsp+F8h] [rbp-8h]
  char *v107; // [rsp+100h] [rbp+0h]
  __int64 v108; // [rsp+108h] [rbp+8h]
  char *v109; // [rsp+110h] [rbp+10h]
  __int64 v110; // [rsp+118h] [rbp+18h]
  unsigned int *v111; // [rsp+120h] [rbp+20h]
  __int64 v112; // [rsp+128h] [rbp+28h]
  unsigned int *v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  bool *v115; // [rsp+140h] [rbp+40h]
  __int64 v116; // [rsp+148h] [rbp+48h]
  double *v117; // [rsp+150h] [rbp+50h]
  __int64 v118; // [rsp+158h] [rbp+58h]
  double *v119; // [rsp+160h] [rbp+60h]
  __int64 v120; // [rsp+168h] [rbp+68h]
  double *v121; // [rsp+170h] [rbp+70h]
  __int64 v122; // [rsp+178h] [rbp+78h]
  double *v123; // [rsp+180h] [rbp+80h]
  __int64 v124; // [rsp+188h] [rbp+88h]
  double *v125; // [rsp+190h] [rbp+90h]
  __int64 v126; // [rsp+198h] [rbp+98h]
  double *v127; // [rsp+1A0h] [rbp+A0h]
  __int64 v128; // [rsp+1A8h] [rbp+A8h]
  __int64 *v129; // [rsp+1B0h] [rbp+B0h]
  __int64 v130; // [rsp+1B8h] [rbp+B8h]
  __int64 v131; // [rsp+220h] [rbp+120h] BYREF

  v131 = a3;
  v3 = *((_BYTE *)this + 424);
  v5 = 0;
  v92 = *(double *)&a2;
  v93 = 0;
  v94 = 0;
  v95 = 0.0;
  v6 = 0;
  v7 = 0.0;
  *((_BYTE *)this + 424) = (v3 ^ (v3 ^ (2 * v3)) & 8) & 0xFB;
  v90 = ((v3 ^ (v3 ^ (unsigned __int8)(2 * v3)) & 8) & 8) != 0;
  if ( !*((_DWORD *)this + 66) && ((v3 ^ (v3 ^ (unsigned __int8)(2 * v3)) & 8) & 2) == 0 && !*((_DWORD *)this + 42) )
  {
    v13 = 0;
    goto LABEL_27;
  }
  *((_BYTE *)this + 424) = (v3 ^ (v3 ^ (2 * v3)) & 8) & 0xF9;
  if ( *((_DWORD *)this + 42) || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 96));
    QpcStopwatch::Start((QpcStopwatch *)&v95);
    *(double *)&a2 = v92;
    v7 = v95;
  }
  v8 = *((_DWORD *)this + 14);
  v9 = (CExpressionManager *)((char *)this + 40);
  v10 = *((_DWORD *)this + 4);
  if ( v10 > ~v8 )
  {
    v13 = -2147418113;
    v12 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x57u);
    goto LABEL_91;
  }
  v11 = *((_DWORD *)this + 22);
  if ( v11 - v8 >= v10 )
    goto LABEL_7;
  memset_0(v100, 0, sizeof(v100));
  v101 = 0LL;
  v60 = v10 + v8 - v11;
  v102 = 18;
  v103 = 0;
  v61 = DynArrayImpl<1>::AddMultiple((char *)this + 64, 80LL, (unsigned int)v60, &v91);
  v12 = v61;
  if ( v61 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0xE5u);
  }
  else if ( (_DWORD)v60 )
  {
    v62 = *(_QWORD *)&v91;
    do
    {
      CExpressionValue::operator=(v62, (__int64)v100);
      v62 += 80LL;
      --v60;
    }
    while ( v60 );
  }
  if ( v12 >= 0 )
  {
    *(double *)&a2 = v92;
LABEL_7:
    v5 = 0;
    v12 = 0;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x5Fu);
  *(double *)&a2 = v92;
  v5 = 0;
LABEL_8:
  v13 = v12;
  if ( v12 >= 0 )
  {
    *((_QWORD *)this + 4) = v131;
    v14 = *((_BYTE *)this + 424) | 1;
    *((double *)this + 3) = *(double *)&a2;
    *((_BYTE *)this + 424) = v14;
    if ( (v14 & 8) != 0 )
    {
      v91 = 0.0;
      if ( CCommonRegistryData::m_fLogExpressionPerfStats )
        QpcStopwatch::Start((QpcStopwatch *)&v91);
      v43 = *((_DWORD *)this + 43);
      v44 = 0;
      if ( *((_DWORD *)this + 8 * v43 + 50) )
      {
        v45 = CBaseExpression::s_recursionLevel;
        do
        {
          v46 = *(double *)(*((_QWORD *)this + 4 * v43 + 22) + 8LL * v44);
          v47 = v43;
          if ( v46 != 0.0 )
          {
            v48 = *((_QWORD *)this + 4);
            v49 = 0;
            if ( (int)++*(_DWORD *)(*(_QWORD *)&v46 + 148LL) <= 1
              && *(_QWORD *)(*(_QWORD *)&v46 + 152LL) != v48
              && v45 <= 0x10 )
            {
              v50 = v45 + 1;
              v89 = 1;
              v51 = 0;
              for ( CBaseExpression::s_recursionLevel = v50; v51 < *(_DWORD *)(*(_QWORD *)&v46 + 240LL); ++v51 )
                CBaseExpression::InsertInOrder(
                  *(CBaseExpression **)(*(_QWORD *)(*(_QWORD *)&v46 + 216LL) + 8LL * v51),
                  v48);
              v52 = *(void (__fastcall **)(CKeyframeAnimation *__hidden, unsigned __int64))(**(_QWORD **)&v46 + 176LL);
              if ( v52 == CExpression::InsertDependenciesInOrder )
              {
                CExpression::InsertDependenciesInOrder(*(CExpression **)&v46, v48);
              }
              else if ( v52 == CKeyframeAnimation::InsertDependenciesInOrder )
              {
                CKeyframeAnimation::InsertDependenciesInOrder(*(CKeyframeAnimation **)&v46, v48);
              }
              else
              {
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, void (__fastcall *)(CKeyframeAnimation *__hidden, unsigned __int64)))v52)(
                  *(_QWORD *)&v46,
                  v48,
                  v50,
                  CKeyframeAnimation::InsertDependenciesInOrder);
              }
              if ( (*(_BYTE *)(*(_QWORD *)&v46 + 208LL) & 2) != 0 )
              {
                v53 = *(_QWORD *)(*(_QWORD *)&v46 + 16LL);
                v92 = v46;
                v54 = *(_QWORD *)(v53 + 240) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v53 + 240) + 172LL));
                v55 = *(_DWORD *)(v54 + 200);
                v56 = v55 + 1;
                if ( v55 + 1 < v55 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
                }
                else if ( v56 > *(_DWORD *)(v54 + 196) )
                {
                  v59 = DynArrayImpl<1>::AddMultipleAndSet(v54 + 176, 8LL, v54, &v92);
                  if ( v59 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xC0u);
                }
                else
                {
                  *(double *)(*(_QWORD *)(v54 + 176) + 8LL * v55) = v92;
                  *(_DWORD *)(v54 + 200) = v56;
                }
              }
              v49 = v89;
              v45 = CBaseExpression::s_recursionLevel;
            }
            *(_QWORD *)(*(_QWORD *)&v46 + 152LL) = v48;
            if ( v49 )
              CBaseExpression::s_recursionLevel = --v45;
            --*(_DWORD *)(*(_QWORD *)&v46 + 148LL);
            v47 = *((_DWORD *)this + 43);
          }
          ++v44;
          v43 = v47;
        }
        while ( v44 < *((_DWORD *)this + 8 * v47 + 50) );
        v7 = v95;
        v9 = (CExpressionManager *)((char *)this + 40);
        v6 = v93;
      }
      *((_DWORD *)this + 8 * v43 + 50) = 0;
      v57 = 1 - *((_DWORD *)this + 43);
      *((_BYTE *)this + 424) &= ~8u;
      v58 = CCommonRegistryData::m_fLogExpressionPerfStats == 0;
      *((_DWORD *)this + 43) = v57;
      if ( !v58 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v91);
        ++*((_DWORD *)this + 26);
        *((_QWORD *)this + 17) += Elapsed;
      }
    }
    v15 = *((_DWORD *)this + 43);
    v16 = 0;
    *(_QWORD *)((char *)this + 428) = 0LL;
    if ( *((_DWORD *)this + 8 * v15 + 50) )
    {
      v17 = v94;
      v18 = CExpression::IsOfType;
      do
      {
        v19 = *(_DWORD **)(*((_QWORD *)this + 4 * v15 + 22) + 8LL * v16);
        if ( v19 )
        {
          v20 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 48LL);
          if ( v20 != CExpression::IsOfType
            && ((char *)v20 == (char *)&CKeyframeAnimation::IsOfType
             || ((unsigned __int8 (__fastcall *)(_DWORD *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD), void *))v20)(
                  v19,
                  84LL,
                  CExpression::IsOfType,
                  &CKeyframeAnimation::IsOfType)) )
          {
            v33 = *((_BYTE *)v19 + 508);
            if ( (v33 & 1) != 0 || (v33 & 6) != 0 )
            {
              v34 = *((_QWORD *)v19 + 6);
              if ( v34 )
              {
                ++*(_DWORD *)(v34 + 76);
                *(_BYTE *)(*((_QWORD *)v19 + 2) + 520LL) = 1;
              }
            }
          }
          v21 = *((_QWORD *)this + 4);
          v89 = 0;
          CBaseExpression::CalculateValue((CBaseExpression *)v19, v9, v21, &v89);
          *((_BYTE *)this + 424) |= 2 * v89;
          v22 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(*(_QWORD *)v19 + 168LL);
          if ( v22 == CExpression::GetMaxStackCount )
          {
            v23 = v19[76];
          }
          else if ( v22 == CKeyframeAnimation::GetMaxStackCount )
          {
            v23 = v19[66];
          }
          else
          {
            v23 = v22((CKeyframeAnimation *)v19);
          }
          v18 = CExpression::IsOfType;
          if ( v23 > v6 )
            v6 = v23;
        }
        else
        {
          ++v17;
        }
        v24 = *((unsigned int *)this + 43);
        ++v16;
        v15 = *((_DWORD *)this + 43);
      }
      while ( v16 < *((_DWORD *)this + 8 * (unsigned int)v24 + 50) );
      v25 = v17 <= 0x100;
      v7 = v95;
      if ( !v25 )
      {
        v63 = 32 * v24;
        v64 = 0LL;
        for ( i = (char *)this + 32 * (unsigned int)(1 - v24);
              (unsigned int)v64 < *(_DWORD *)((char *)this + v63 + 200);
              v64 = (unsigned int)(v64 + 1) )
        {
          v91 = *(double *)(*(_QWORD *)((char *)this + v63 + 176) + 8 * v64);
          if ( v91 != 0.0 )
          {
            v66 = *((_DWORD *)i + 50);
            v67 = v66 + 1;
            if ( v66 + 1 < v66 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
            }
            else if ( v67 > *((_DWORD *)i + 49) )
            {
              v68 = DynArrayImpl<1>::AddMultipleAndSet(i + 176, 8LL, v18, &v91);
              if ( v68 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xC0u);
            }
            else
            {
              *(double *)(*((_QWORD *)i + 22) + 8LL * v66) = v91;
              *((_DWORD *)i + 50) = v67;
            }
          }
        }
        *(_DWORD *)((char *)this + v63 + 200) = 0;
        *((_DWORD *)this + 43) = 1 - *((_DWORD *)this + 43);
      }
    }
    *((_BYTE *)this + 424) &= ~1u;
    while ( *((_DWORD *)this + 66) )
    {
      v35 = (unsigned int *)*((_QWORD *)this + 30);
      CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v35 + 1), *v35);
      v36 = (CResource *)*((_QWORD *)v35 + 1);
      v37 = *(void (**)(void))(*(_QWORD *)v36 + 16LL);
      if ( (char *)v37 == (char *)CResource::Release )
        CResource::Release(v36);
      else
        v37();
      v38 = *((_DWORD *)this + 66);
      if ( v38 )
      {
        v39 = *((_QWORD *)this + 30);
        v40 = 0;
        if ( v38 != 1 )
        {
          do
          {
            v41 = 2LL * v40;
            v42 = 2LL * ++v40;
            *(_OWORD *)(v39 + 8 * v41) = *(_OWORD *)(v39 + 8 * v42);
            v38 = *((_DWORD *)this + 66);
          }
          while ( v40 < v38 - 1 );
        }
        *((_DWORD *)this + 66) = v38 - 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
      }
    }
    v26 = (char *)this + 408;
    v27 = (double *)*((_QWORD *)this + 51);
    v28 = *v27;
    v91 = *v27;
    while ( *(double **)&v28 != v27 )
    {
      CExpressionManager::SuspendAnimations(this, *(_DWORD *)(*(_QWORD *)&v28 + 28LL), 1, 0);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>::operator++(&v91);
      v28 = v91;
    }
    v29 = *(_QWORD *)v26;
    v30 = *(void ***)(*(_QWORD *)v26 + 8LL);
    v31 = v30;
    if ( !*((_BYTE *)v30 + 25) )
    {
      do
      {
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
          (__int64)this + 408,
          v31[2]);
        v31 = (void **)*v31;
        std::_Deallocate(v30, 1uLL, 0x20uLL);
        v30 = v31;
      }
      while ( !*((_BYTE *)v31 + 25) );
      v29 = *(_QWORD *)v26;
    }
    *(_QWORD *)(v29 + 8) = v29;
    v5 = 0;
    v13 = 0;
    **(_QWORD **)v26 = *(_QWORD *)v26;
    *(_QWORD *)(*(_QWORD *)v26 + 16LL) = *(_QWORD *)v26;
    *((_QWORD *)this + 52) = 0LL;
    *((_DWORD *)this + 4) = v6;
    goto LABEL_26;
  }
LABEL_91:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x19Eu);
LABEL_26:
  if ( v7 != 0.0 )
  {
    v70 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v95);
    v71 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
    v72 = (double)v70;
    if ( dword_1802D3FE0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        v106 = 8LL;
        v105 = &v91;
        v108 = 4LL;
        v107 = (char *)this + 428;
        v109 = (char *)this + 432;
        v74 = 32LL * *((unsigned int *)this + 43);
        v110 = 4LL;
        v91 = v72 / v71;
        v94 = *(_DWORD *)((char *)this + v74 + 200);
        v111 = &v94;
        v93 = *((_DWORD *)this + 82);
        v113 = &v93;
        v116 = v73;
        v115 = &v90;
        v112 = 4LL;
        v114 = 4LL;
        DurationAverage = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 96, 0LL);
        v118 = 8LL;
        v117 = &v92;
        v92 = DurationAverage / v71;
        v77 = CExpressionPerformanceCounter::GetDurationAverage(v76, 1LL);
        v120 = 8LL;
        v119 = &v95;
        v95 = v77 / v71;
        v79 = CExpressionPerformanceCounter::GetDurationAverage(v78, 2LL);
        v122 = 8LL;
        v121 = &v96;
        v96 = v79 / v71;
        v81 = CExpressionPerformanceCounter::GetDurationAverage(v80, 3LL);
        v124 = 8LL;
        v123 = &v97;
        v97 = v81 / v71;
        v83 = CExpressionPerformanceCounter::GetDurationAverage(v82, 4LL);
        v126 = 8LL;
        v125 = &v98;
        v98 = v83 / v71;
        v85 = CExpressionPerformanceCounter::GetDurationAverage(v84, 5LL);
        v128 = 8LL;
        v127 = &v99;
        v129 = &v131;
        v130 = 8LL;
        v99 = v85 / v71;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A7258, 0LL, 0LL, 0xFu, &pData);
      }
    }
  }
LABEL_27:
  if ( *((_DWORD *)this + 74) )
  {
    do
    {
      v86 = *((_QWORD *)this + 34);
      v87 = *(_DWORD **)(v86 + 8LL * v5);
      if ( v87[38] )
        CInteractionTracker::CheckForIdle(*(CInteractionTracker **)(v86 + 8LL * v5));
      CInteractionTracker::CheckForOutOfBounds((CInteractionTracker *)v87);
      ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v87 + 88));
      if ( ActiveChainingHelper )
        CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
      CInteractionTracker::SendPendingCallbacks((CInteractionTracker *)v87);
      ++v5;
    }
    while ( v5 < *((_DWORD *)this + 74) );
  }
  return v13;
}
