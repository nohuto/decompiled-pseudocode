/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18002E81C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800301A0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180033430 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18015FDF0 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18015FEC0 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016C64C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016C71C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D67C (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x18017FD7C (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x18017FDA8 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x1801889B8 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // cl
  char v5; // al
  char v6; // cl
  double v7; // rbx
  unsigned int v9; // r15d
  int v10; // edi
  unsigned int v11; // esi
  int v12; // r13d
  int v13; // r13d
  unsigned int v14; // edi
  __int64 v15; // rax
  bool v16; // r12
  unsigned int v17; // edi
  unsigned int v18; // ebx
  __int64 v19; // rax
  _DWORD *v20; // rsi
  unsigned __int64 v21; // r8
  unsigned int (__fastcall *v22)(CKeyframeAnimation *__hidden); // rax
  unsigned int v23; // eax
  unsigned int *v25; // rdi
  CResource *v26; // rcx
  void (*v27)(void); // rax
  int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r12d
  unsigned int v34; // edx
  CKeyframeAnimation *v35; // rdi
  unsigned __int64 v36; // r13
  bool v37; // al
  __int64 v38; // rax
  void (*v39)(CKeyframeAnimation *__hidden, unsigned __int64); // rax
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rsi
  unsigned int v43; // eax
  unsigned int v44; // edx
  bool v45; // zf
  int v46; // eax
  __int64 v47; // rdi
  int v48; // eax
  double v49; // rsi
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // r8
  __int64 v54; // rdi
  char *v55; // rsi
  unsigned int i; // r15d
  unsigned int v57; // eax
  unsigned int v58; // edx
  int v59; // eax
  __int64 Elapsed; // rax
  __int64 v61; // rax
  int v62; // eax
  double v63; // xmm2_8
  double v64; // xmm0_8
  __int64 v65; // rdx
  __int64 v66; // rax
  double DurationAverage; // xmm0_8
  __int64 v68; // rcx
  double v69; // xmm0_8
  __int64 v70; // rcx
  double v71; // xmm0_8
  __int64 v72; // rcx
  double v73; // xmm0_8
  __int64 v74; // rcx
  double v75; // xmm0_8
  __int64 v76; // rcx
  double v77; // xmm0_8
  LPCGUID v78; // r8
  LPCGUID v79; // r9
  unsigned int v80; // edi
  __int64 v81; // rax
  __int64 v82; // rsi
  struct CInteraction *v83; // rdx
  bool v84[8]; // [rsp+38h] [rbp-D0h] BYREF
  double v85; // [rsp+40h] [rbp-C8h] BYREF
  CKeyframeAnimation *v86; // [rsp+48h] [rbp-C0h] BYREF
  double v87; // [rsp+50h] [rbp-B8h] BYREF
  double v88; // [rsp+58h] [rbp-B0h] BYREF
  double v89; // [rsp+60h] [rbp-A8h] BYREF
  double v90; // [rsp+68h] [rbp-A0h] BYREF
  double v91; // [rsp+70h] [rbp-98h] BYREF
  double v92; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v93[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  double *v96; // [rsp+F8h] [rbp-10h]
  __int64 v97; // [rsp+100h] [rbp-8h]
  char *v98; // [rsp+108h] [rbp+0h]
  __int64 v99; // [rsp+110h] [rbp+8h]
  char *v100; // [rsp+118h] [rbp+10h]
  __int64 v101; // [rsp+120h] [rbp+18h]
  bool *v102; // [rsp+128h] [rbp+20h]
  __int64 v103; // [rsp+130h] [rbp+28h]
  bool *v104; // [rsp+138h] [rbp+30h]
  __int64 v105; // [rsp+140h] [rbp+38h]
  double *v106; // [rsp+148h] [rbp+40h]
  __int64 v107; // [rsp+150h] [rbp+48h]
  double *v108; // [rsp+158h] [rbp+50h]
  __int64 v109; // [rsp+160h] [rbp+58h]
  double *v110; // [rsp+168h] [rbp+60h]
  __int64 v111; // [rsp+170h] [rbp+68h]
  double *v112; // [rsp+178h] [rbp+70h]
  __int64 v113; // [rsp+180h] [rbp+78h]
  double *v114; // [rsp+188h] [rbp+80h]
  __int64 v115; // [rsp+190h] [rbp+88h]
  double *v116; // [rsp+198h] [rbp+90h]
  __int64 v117; // [rsp+1A0h] [rbp+98h]
  __int64 *v118; // [rsp+1A8h] [rbp+A0h]
  __int64 v119; // [rsp+1B0h] [rbp+A8h]
  __int64 v120; // [rsp+228h] [rbp+120h] BYREF

  v120 = a3;
  v4 = *((_BYTE *)this + 376);
  v5 = v4 >> 2;
  v6 = v4 & 0xFB;
  v5 &= 1u;
  v7 = 0.0;
  v9 = 0;
  *(_DWORD *)&v84[4] = 0;
  v87 = 0.0;
  *((_BYTE *)this + 377) = v5;
  *((_BYTE *)this + 376) = v6;
  v84[1] = v5;
  if ( !*((_DWORD *)this + 66) && (v6 & 2) == 0 && !*((_DWORD *)this + 42) )
  {
    v14 = 0;
    LODWORD(v86) = 0;
    goto LABEL_24;
  }
  *((_BYTE *)this + 376) = v6 & 0xFD;
  if ( *((_DWORD *)this + 42) || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 96));
    QpcStopwatch::Start((QpcStopwatch *)&v87);
    v7 = v87;
  }
  v10 = *((_DWORD *)this + 14);
  v11 = *((_DWORD *)this + 4);
  if ( v11 > ~v10 )
  {
    v13 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x40u);
    v14 = -2147418113;
    LODWORD(v86) = -2147418113;
  }
  else
  {
    v12 = *((_DWORD *)this + 22);
    if ( v12 - v10 >= v11 )
      goto LABEL_7;
    memset_0(v93, 0, sizeof(v93));
    LODWORD(v94) = 18;
    v47 = v11 + v10 - v12;
    BYTE4(v94) = 0;
    v48 = DynArrayImpl<1>::AddMultiple((char *)this + 64, 72LL, (unsigned int)v47, &v85);
    v13 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xE5u);
    }
    else if ( (_DWORD)v47 )
    {
      v49 = v85;
      v50 = v93[1];
      **(_OWORD **)&v85 = v93[0];
      v51 = v93[2];
      *(_OWORD *)(*(_QWORD *)&v49 + 16LL) = v50;
      v52 = v93[3];
      *(_OWORD *)(*(_QWORD *)&v49 + 32LL) = v51;
      *(_QWORD *)&v51 = v94;
      *(_OWORD *)(*(_QWORD *)&v49 + 48LL) = v52;
      *(_QWORD *)(*(_QWORD *)&v49 + 64LL) = v51;
      qmemcpy((void *)(*(_QWORD *)&v49 + 72LL), *(const void **)&v49, 8 * ((unsigned __int64)(72 * v47 - 72) >> 3));
    }
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x48u);
    else
LABEL_7:
      v13 = 0;
    LODWORD(v86) = v13;
    v14 = v13;
    if ( v13 >= 0 )
    {
      *((_BYTE *)this + 376) |= 1u;
      v15 = v120;
      *((_QWORD *)this + 3) = a2;
      *((_QWORD *)this + 4) = v15;
      if ( *((_BYTE *)this + 377) )
      {
        v85 = 0.0;
        if ( CCommonRegistryData::m_fLogExpressionPerfStats )
          QpcStopwatch::Start((QpcStopwatch *)&v85);
        v33 = 0;
        if ( *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) )
        {
          v34 = CBaseExpression::s_recursionLevel;
          do
          {
            v35 = *(CKeyframeAnimation **)(*((_QWORD *)this + 4 * *((unsigned int *)this + 43) + 22) + 8LL * v33);
            if ( v35 )
            {
              v36 = *((_QWORD *)this + 4);
              v37 = 0;
              if ( (int)++*((_DWORD *)v35 + 35) <= 1 && *((_QWORD *)v35 + 18) != v36 && v34 <= 0x10 )
              {
                v38 = *(_QWORD *)v35;
                CBaseExpression::s_recursionLevel = v34 + 1;
                v84[0] = 1;
                v39 = *(void (**)(CKeyframeAnimation *__hidden, unsigned __int64))(v38 + 160);
                if ( v39 == CKeyframeAnimation::InsertDependenciesInOrder )
                {
                  CKeyframeAnimation::InsertDependenciesInOrder(v35, v36);
                }
                else if ( (char *)v39 == (char *)CExpression::InsertDependenciesInOrder )
                {
                  CExpression::InsertDependenciesInOrder(v35, v36);
                }
                else
                {
                  ((void (__fastcall *)(CKeyframeAnimation *, unsigned __int64, void (__fastcall *)(CExpression *__hidden, unsigned __int64)))v39)(
                    v35,
                    v36,
                    CExpression::InsertDependenciesInOrder);
                }
                if ( (*((_BYTE *)v35 + 208) & 2) != 0 )
                {
                  v41 = *((_QWORD *)v35 + 2);
                  v86 = v35;
                  v42 = *(_QWORD *)(v41 + 240) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v41 + 240) + 172LL));
                  v43 = *(_DWORD *)(v42 + 200);
                  v44 = v43 + 1;
                  if ( v43 + 1 < v43 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
                  }
                  else if ( v44 > *(_DWORD *)(v42 + 196) )
                  {
                    v46 = DynArrayImpl<1>::AddMultipleAndSet(v42 + 176, 8LL, v40, &v86);
                    if ( v46 < 0 )
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xC0u);
                  }
                  else
                  {
                    *(_QWORD *)(*(_QWORD *)(v42 + 176) + 8LL * v43) = v86;
                    *(_DWORD *)(v42 + 200) = v44;
                  }
                }
                v37 = v84[0];
                v34 = CBaseExpression::s_recursionLevel;
              }
              *((_QWORD *)v35 + 18) = v36;
              if ( v37 )
                CBaseExpression::s_recursionLevel = --v34;
              --*((_DWORD *)v35 + 35);
            }
            ++v33;
          }
          while ( v33 < *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) );
        }
        *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) = 0;
        v45 = CCommonRegistryData::m_fLogExpressionPerfStats == 0;
        *((_DWORD *)this + 43) = 1 - *((_DWORD *)this + 43);
        *((_BYTE *)this + 377) = 0;
        if ( !v45 )
        {
          Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v85);
          ++*((_DWORD *)this + 26);
          *((_QWORD *)this + 17) += Elapsed;
        }
      }
      *(_QWORD *)((char *)this + 380) = 0LL;
      v16 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0;
      v17 = 0;
      if ( *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) )
      {
        v18 = 0;
        do
        {
          v19 = *((_QWORD *)this + 4 * *((unsigned int *)this + 43) + 22);
          v20 = *(_DWORD **)(v19 + 8LL * v17);
          if ( v20 )
          {
            if ( v16 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v20 + 48LL))(
                     *(_QWORD *)(v19 + 8LL * v17),
                     112LL) )
              {
                if ( (v20[98] & 3) != 0 )
                {
                  v61 = *((_QWORD *)v20 + 6);
                  if ( v61 )
                  {
                    ++*(_DWORD *)(v61 + 68);
                    *(_BYTE *)(*((_QWORD *)v20 + 2) + 544LL) = 1;
                  }
                }
              }
            }
            v21 = *((_QWORD *)this + 4);
            v84[0] = 0;
            CBaseExpression::CalculateValue((CBaseExpression *)v20, (CExpressionManager *)((char *)this + 40), v21, v84);
            *((_BYTE *)this + 376) |= 2 * v84[0];
            v22 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(*(_QWORD *)v20 + 152LL);
            if ( v22 == CExpression::GetMaxStackCount )
            {
              v23 = v20[60];
            }
            else if ( v22 == CKeyframeAnimation::GetMaxStackCount )
            {
              v23 = v20[94];
            }
            else
            {
              v23 = v22((CKeyframeAnimation *)v20);
            }
            if ( v23 > v18 )
              v18 = v23;
          }
          else
          {
            ++v9;
          }
          ++v17;
        }
        while ( v17 < *((_DWORD *)this + 8 * *((unsigned int *)this + 43) + 50) );
        *(_DWORD *)&v84[4] = v18;
        v7 = v87;
        if ( v9 > 0x100 )
        {
          v53 = 0LL;
          v54 = 32LL * *((unsigned int *)this + 43);
          v55 = (char *)this + 32 * (unsigned int)(1 - *((_DWORD *)this + 43));
          for ( i = 0; i < *(_DWORD *)((char *)this + v54 + 200); ++i )
          {
            v85 = *(double *)(*(_QWORD *)((char *)this + v54 + 176) + 8LL * i);
            if ( v85 != 0.0 )
            {
              v57 = *((_DWORD *)v55 + 50);
              v58 = v57 + 1;
              if ( v57 + 1 < v57 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              }
              else if ( v58 > *((_DWORD *)v55 + 49) )
              {
                v59 = DynArrayImpl<1>::AddMultipleAndSet(v55 + 176, 8LL, v53, &v85);
                if ( v59 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xC0u);
              }
              else
              {
                *(double *)(*((_QWORD *)v55 + 22) + 8LL * v57) = v85;
                *((_DWORD *)v55 + 50) = v58;
              }
            }
          }
          *(_DWORD *)((char *)this + v54 + 200) = 0;
          *((_DWORD *)this + 43) = 1 - *((_DWORD *)this + 43);
        }
      }
      *((_BYTE *)this + 376) &= ~1u;
      while ( *((_DWORD *)this + 66) )
      {
        v25 = (unsigned int *)*((_QWORD *)this + 30);
        CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v25 + 1), *v25);
        v26 = (CResource *)*((_QWORD *)v25 + 1);
        v27 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
        if ( (char *)v27 == (char *)CResource::Release )
          CResource::Release(v26);
        else
          v27();
        v28 = *((_DWORD *)this + 66);
        if ( v28 )
        {
          v29 = *((_QWORD *)this + 30);
          v30 = 0;
          if ( v28 != 1 )
          {
            do
            {
              v31 = 2LL * v30;
              v32 = 2LL * ++v30;
              *(_OWORD *)(v29 + 8 * v31) = *(_OWORD *)(v29 + 8 * v32);
            }
            while ( v30 < *((_DWORD *)this + 66) - 1 );
          }
          --*((_DWORD *)this + 66);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
        }
      }
      v14 = 0;
      *((_DWORD *)this + 4) = *(_DWORD *)&v84[4];
      LODWORD(v86) = 0;
      goto LABEL_23;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x191u);
LABEL_23:
  if ( v7 != 0.0 )
  {
    v62 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v87);
    v63 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
    v64 = (double)v62;
    if ( dword_18023D7F0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
      {
        v97 = 8LL;
        v96 = &v85;
        v99 = 4LL;
        v98 = (char *)this + 380;
        v100 = (char *)this + 384;
        v66 = 32LL * *((unsigned int *)this + 43);
        v101 = 4LL;
        v85 = v64 / v63;
        *(_DWORD *)&v84[4] = *(_DWORD *)((char *)this + v66 + 200);
        v102 = &v84[4];
        v105 = v65;
        v104 = &v84[1];
        v103 = 4LL;
        DurationAverage = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 96, 0LL);
        v107 = 8LL;
        v106 = &v87;
        v87 = DurationAverage / v63;
        v69 = CExpressionPerformanceCounter::GetDurationAverage(v68, 1LL);
        v109 = 8LL;
        v108 = &v88;
        v88 = v69 / v63;
        v71 = CExpressionPerformanceCounter::GetDurationAverage(v70, 2LL);
        v111 = 8LL;
        v110 = &v89;
        v89 = v71 / v63;
        v73 = CExpressionPerformanceCounter::GetDurationAverage(v72, 3LL);
        v113 = 8LL;
        v112 = &v90;
        v90 = v73 / v63;
        v75 = CExpressionPerformanceCounter::GetDurationAverage(v74, 4LL);
        v115 = 8LL;
        v114 = &v91;
        v91 = v75 / v63;
        v77 = CExpressionPerformanceCounter::GetDurationAverage(v76, 5LL);
        v117 = 8LL;
        v116 = &v92;
        v118 = &v120;
        v119 = 8LL;
        v92 = v77 / v63;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6879, v78, v79, 0xEu, &pData);
      }
    }
  }
LABEL_24:
  if ( !*((_DWORD *)this + 74) )
    return v14;
  v80 = 0;
  do
  {
    v81 = *((_QWORD *)this + 34);
    v82 = *(_QWORD *)(v81 + 8LL * v80);
    if ( *(_DWORD *)(v82 + 140) )
      CInteractionTracker::CheckForIdle(*(CInteractionTracker **)(v81 + 8LL * v80));
    CInteractionTracker::CheckForOutOfBounds((CInteractionTracker *)v82);
    v83 = *(struct CInteraction **)(v82 + 520);
    if ( v83 )
      CChainingHelper::UpdateConfigurationIfDirty((CChainingHelper *)(v82 + 328), v83);
    CInteractionTracker::SendPendingCallbacks((CInteractionTracker *)v82);
    ++v80;
  }
  while ( v80 < *((_DWORD *)this + 74) );
  return (unsigned int)v86;
}
