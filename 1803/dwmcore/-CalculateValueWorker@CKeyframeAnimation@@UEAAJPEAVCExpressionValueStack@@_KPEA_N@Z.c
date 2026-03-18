/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x180019C14 (-Repeat@KeyframeSequence@@QEAAXXZ.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001BAD8 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800296B0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003CE98 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18003D13C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003D2F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18003D520 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18003D554 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18003E4C0 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x1800BC640 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ?Update@Timer@@QEAAXH_N@Z @ 0x1800C3EFC (-Update@Timer@@QEAAXH_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        KeyframeSequence **this,
        struct CExpressionValueStack *a2,
        double a3,
        bool *a4)
{
  int v7; // eax
  int v8; // esi
  __int64 v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  struct CProcessAttribution *(__fastcall *v15)(CResource *__hidden); // rax
  KeyframeSequence *v16; // rax
  __int64 v17; // rax
  char v18; // r15
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r13
  float v25; // xmm1_4
  int v26; // r8d
  KeyframeSequence *v27; // rsi
  float v28; // xmm0_4
  int v29; // r8d
  float v30; // xmm0_4
  unsigned int v31; // r15d
  int v32; // r8d
  float v33; // xmm1_4
  int v34; // eax
  int v35; // edx
  int *v36; // rcx
  float v37; // xmm1_4
  int v38; // edx
  char v39; // cl
  KeyframeSequence *v40; // rcx
  unsigned int v41; // ecx
  KeyframeSequence *v42; // rdx
  int v43; // eax
  __int64 v44; // r8
  char v45; // cl
  int v46; // edx
  int v47; // eax
  KeyframeSequence *v48; // rcx
  unsigned int v49; // r10d
  int v50; // r9d
  int v51; // eax
  int v52; // ecx
  char v53; // al
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // edx
  char v58; // al
  __m128 v59; // rt1
  int v60; // eax
  int v61; // ecx
  char v62; // al
  char v63; // al
  int v64; // eax
  unsigned int v65; // eax
  __int64 v66; // rdx
  unsigned int v67; // eax
  int v68; // eax
  __int64 v69; // xmm1_8
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  unsigned int v73; // [rsp+20h] [rbp-49h]
  __int128 v74; // [rsp+30h] [rbp-39h] BYREF
  __int128 v75; // [rsp+40h] [rbp-29h] BYREF
  __int128 v76; // [rsp+50h] [rbp-19h]
  __int128 v77; // [rsp+60h] [rbp-9h]
  __int128 v78; // [rsp+70h] [rbp+7h]
  __int64 v79; // [rsp+80h] [rbp+17h]
  int v80; // [rsp+88h] [rbp+1Fh]
  char v81; // [rsp+8Ch] [rbp+23h]
  __int64 v82; // [rsp+90h] [rbp+27h] BYREF

  *a4 = 0;
  v7 = CKeyframeAnimation::ApplyPlaybackStateChanges((CKeyframeAnimation *)this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v73 = 1469;
    goto LABEL_169;
  }
  v9 = *((_QWORD *)this[2] + 62) - (_QWORD)this[54];
  if ( v9 < 0 )
    goto LABEL_13;
  if ( *((char *)this + 508) < 0 )
  {
    if ( *((_DWORD *)this + 122) != 2 )
    {
      v15 = (struct CProcessAttribution *(__fastcall *)(CResource *__hidden))*((_QWORD *)*this + 15);
      if ( v15 == CResource::GetProcessAttributionNoRef )
      {
        v16 = this[6];
        v17 = v16 ? *((_QWORD *)v16 + 5) : 0LL;
      }
      else
      {
        v17 = (__int64)v15((CResource *)this);
      }
      if ( v17 )
        ++*(_DWORD *)(v17 + 40);
    }
    v18 = *((_BYTE *)this + 508);
    if ( (v18 & 6) != 0 || (v19 = *((_BYTE *)this + 508), !*((_BYTE *)this + 140)) )
    {
      v19 = *((_BYTE *)this + 508);
      if ( *((_DWORD *)this + 122) == 2 )
      {
        CKeyframeAnimation::Play((CKeyframeAnimation *)this, a2);
        v18 = *((_BYTE *)this + 508) | 0x20;
        *((_BYTE *)this + 508) = v18;
        v19 = v18;
      }
    }
    if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v23) = 0x7FFFFFFF;
    }
    else
    {
      v18 = v19;
      v20 = 1000000 * v9 / Time::s_luFreq.QuadPart;
      v21 = 500LL;
      if ( v20 < 0 )
      {
        v21 = -500LL;
        v18 = v19;
      }
      v22 = (unsigned __int128)((v21 + v20) * (__int128)0x20C49BA5E353F7CFLL) >> 64;
      v23 = ((unsigned __int64)v22 >> 63) + (v22 >> 7);
    }
    v24 = *((_QWORD *)this[2] + 30);
    *(_QWORD *)&v74 = this[6];
    if ( (_QWORD)v74
      && (std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::lower_bound(
            v24 + 440,
            &v82,
            &v74),
          v82 != *(_QWORD *)(v24 + 448)) )
    {
      v25 = *(float *)(v82 + 24);
    }
    else
    {
      v25 = FLOAT_1_0;
    }
    v26 = (int)(float)((float)((float)(int)v23 * *((float *)this + 114)) * v25);
    if ( (v18 & 0x40) != 0 )
    {
      if ( *((_DWORD *)this + 125) == 4 )
      {
        v27 = this[41];
        v28 = 0.0;
        v29 = *((_DWORD *)v27 + 28);
        if ( v29 > 0 )
          v28 = (float)*(int *)(*((_QWORD *)v27 + 13) + 24LL * (unsigned int)(v29 - 1)) / 1000.0;
        v30 = (float)(v28 * *((float *)this + 121)) * 1000.0;
        *(float *)&v74 = v30;
        if ( (LODWORD(v30) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v30 - v30;
          v59.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v74) = _mm_cmple_ss(*(__m128 *)&a3, v59).m128_u32[0];
          v31 = (int)v30 - v74;
        }
        else
        {
          *(float *)&v74 = v30 + 6291456.25;
          v31 = (int)((_DWORD)v74 << 10) >> 11;
        }
        if ( v29 )
          v32 = **((_DWORD **)v27 + 13);
        else
          v32 = 0;
        v33 = *((float *)v27 + 34);
        if ( v33 < 1.0 )
        {
          v35 = *((_DWORD *)v27 + 30);
          v34 = (int)(float)((float)v35 * v33);
        }
        else
        {
          v34 = *((_DWORD *)v27 + 30);
          v35 = v34;
        }
        v36 = (int *)((char *)v27 + 80);
        *((_DWORD *)v27 + 21) = v32;
        *((_DWORD *)v27 + 22) = v34;
        *((_DWORD *)v27 + 23) = v35;
        *((_DWORD *)v27 + 20) = 0;
        *((_DWORD *)v27 + 24) = 0;
        *((_WORD *)v27 + 50) = 0;
        v37 = *((float *)v27 + 33);
        if ( v37 > 0.0 )
          Timer::Update((Timer *)v36, (int)(float)(fminf(v37, *((float *)v27 + 34)) * (float)*((int *)v27 + 30)), 0);
        *((_BYTE *)v27 + 140) |= 0x20u;
        v38 = v31 - v36[1];
        *v36 = v31;
        if ( v38 >= v36[3] || v31 >= v36[2] )
        {
          *((_WORD *)v36 + 10) = 0;
          if ( !*((_BYTE *)v36 + 22) )
          {
            v38 = v36[3];
            if ( v38 >= v36[2] - v36[1] )
              v38 = v36[2] - v36[1];
            goto LABEL_46;
          }
        }
        else
        {
          if ( v38 >= 0 )
          {
            *((_WORD *)v36 + 10) = 1;
LABEL_46:
            v36[4] = v38;
            goto LABEL_47;
          }
          *((_WORD *)v36 + 10) = 0;
          if ( *((_BYTE *)v36 + 22) )
          {
            v38 = v36[3];
            if ( v38 >= v36[2] - v36[1] )
              v38 = v36[2] - v36[1];
            goto LABEL_46;
          }
        }
        v38 = 0;
        goto LABEL_46;
      }
      v46 = *((_DWORD *)this + 105);
      v47 = *((_DWORD *)this + 104);
      if ( v46 < v47 )
      {
        v60 = v47 - v46;
        v61 = (int)(float)((float)((float)(int)v23 * *((float *)this + 114)) * v25);
        if ( v26 >= v60 )
          v61 = v60;
        v26 -= v61;
        *((_DWORD *)this + 105) = v46 + v61;
      }
      v48 = this[41];
      if ( (*((_BYTE *)v48 + 140) & 2) != 0 )
      {
        v49 = *((_DWORD *)v48 + 20);
        if ( v26 >= 0 || abs32(v26) <= v49 )
        {
          v50 = *((_DWORD *)v48 + 23);
        }
        else
        {
          v50 = *((_DWORD *)v48 + 23);
          v49 += v50;
        }
        *((_DWORD *)v48 + 20) = v26 + v49;
        v51 = v26 + v49 - *((_DWORD *)v48 + 21);
        if ( v51 >= v50 || v26 + v49 >= *((_DWORD *)v48 + 22) )
        {
          *((_BYTE *)v48 + 100) = 0;
          if ( *((_BYTE *)v48 + 102) )
          {
            *((_BYTE *)v48 + 101) = 0;
            *((_DWORD *)v48 + 24) = 0;
            goto LABEL_47;
          }
          v56 = *((_DWORD *)v48 + 22) - *((_DWORD *)v48 + 21);
          v57 = *((_DWORD *)v48 + 23);
          *((_BYTE *)v48 + 101) = 1;
          if ( v57 >= v56 )
            v57 = v56;
        }
        else
        {
          if ( v51 >= 0 )
          {
            *((_WORD *)v48 + 50) = 1;
            *((_DWORD *)v48 + 24) = v51;
            goto LABEL_47;
          }
          v62 = *((_BYTE *)v48 + 102);
          *((_BYTE *)v48 + 100) = 0;
          if ( v62 )
          {
            v57 = *((_DWORD *)v48 + 23);
            if ( v57 >= *((_DWORD *)v48 + 22) - *((_DWORD *)v48 + 21) )
              v57 = *((_DWORD *)v48 + 22) - *((_DWORD *)v48 + 21);
            v63 = 1;
          }
          else
          {
            v57 = 0;
            v63 = 0;
          }
          *((_BYTE *)v48 + 101) = v63;
        }
        *((_DWORD *)v48 + 24) = v57;
      }
    }
LABEL_47:
    this[54] = (KeyframeSequence *)*((_QWORD *)this[2] + 62);
    v39 = *((_BYTE *)this + 508);
    if ( v39 < 0
      && *((_DWORD *)this + 105) < *((_DWORD *)this + 104)
      && (*((_DWORD *)this + 124) != 1 || (v39 & 0x10) != 0) )
    {
LABEL_62:
      v45 = *((_BYTE *)this + 508);
      if ( (v45 & 0x20) != 0 )
      {
        CKeyframeAnimation::Pause((CKeyframeAnimation *)this);
        v45 = *((_BYTE *)this + 508);
      }
      if ( (*((_BYTE *)this + 509) & 1) == 0 )
      {
        if ( v45 < 0 && *((_DWORD *)this + 105) < *((_DWORD *)this + 104) )
        {
          if ( *((_DWORD *)this + 124) != 1 || (v45 & 0x10) != 0 )
            goto LABEL_152;
          *((_BYTE *)this + 508) = v45 | 0x10;
        }
LABEL_13:
        v8 = 0;
        goto LABEL_14;
      }
      --*((_DWORD *)a2 + 4);
      v7 = CKeyframeAnimation::Reset((CKeyframeAnimation *)this, 1, a2);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v58 = *((_BYTE *)this + 508);
        if ( (v58 & 1) != 0 )
        {
          v58 &= ~1u;
          *((_BYTE *)this + 508) = v58;
        }
        if ( (v58 & 0x20) != 0 )
        {
          CKeyframeAnimation::Play((CKeyframeAnimation *)this, a2);
          CKeyframeAnimation::Pause((CKeyframeAnimation *)this);
        }
        else
        {
          this[61] = 0LL;
        }
        goto LABEL_13;
      }
      v73 = 1556;
LABEL_169:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v73);
      goto LABEL_14;
    }
    if ( (v39 & 8) == 0 )
    {
      CKeyframeAnimation::ProcessExpressionKeyFrames((CKeyframeAnimation *)this, a2);
      if ( this[40] )
      {
        v64 = CKeyframeAnimation::SampleStartingValue((CKeyframeAnimation *)this);
        v8 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x89Du);
          v39 = *((_BYTE *)this + 508);
          goto LABEL_51;
        }
      }
      *((_BYTE *)this + 508) |= 8u;
      v39 = *((_BYTE *)this + 508);
    }
    v8 = 0;
LABEL_51:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5F7u);
      goto LABEL_14;
    }
    if ( (v39 & 0x40) != 0 )
    {
      if ( (*((_BYTE *)this + 509) & 2) != 0 )
      {
        v55 = CKeyframeAnimation::OnAnimationEvent((__int64)this, 32);
        v8 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0xAF1u);
LABEL_56:
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5FAu);
            goto LABEL_14;
          }
          v41 = *((_DWORD *)a2 + 4);
          v42 = this[41];
          if ( v41 == -1 )
          {
            v65 = 232;
          }
          else
          {
            if ( *((_DWORD *)a2 + 12) != v41 )
            {
              *((_DWORD *)a2 + 4) = v41 + 1;
              v43 = *((_DWORD *)v42 + 18);
              v44 = *((_QWORD *)a2 + 3) + 80LL * v41;
              if ( v43 == 18 )
              {
                *(_DWORD *)v44 = *(_DWORD *)v42;
                *(_DWORD *)(v44 + 72) = 18;
LABEL_61:
                *(_BYTE *)(v44 + 76) = 1;
              }
              else
              {
                switch ( v43 )
                {
                  case 11:
                    v66 = *((_QWORD *)v42 + 8);
                    *(_DWORD *)(v44 + 72) = 11;
                    *(_BYTE *)(v44 + 76) = 1;
                    Microsoft::WRL::ComPtr<CPathData>::operator=(v44 + 64, v66);
                    break;
                  case 17:
                    *(_BYTE *)v44 = *(_BYTE *)v42;
                    *(_DWORD *)(v44 + 72) = 17;
                    goto LABEL_61;
                  case 35:
                    *(_DWORD *)(v44 + 72) = 35;
                    *(_QWORD *)v44 = *(_QWORD *)v42;
                    goto LABEL_61;
                  case 42:
                    *(_DWORD *)(v44 + 72) = 42;
                    *(_DWORD *)v44 = *(_DWORD *)v42;
                    goto LABEL_61;
                  case 52:
                    *(_DWORD *)(v44 + 72) = 52;
                    *(_QWORD *)v44 = *(_QWORD *)v42;
                    *(_DWORD *)(v44 + 8) = *((_DWORD *)v42 + 2);
                    goto LABEL_61;
                  case 69:
                    *(_DWORD *)(v44 + 72) = 69;
                    *(_OWORD *)v44 = *(_OWORD *)v42;
                    goto LABEL_61;
                  case 70:
                    *(_DWORD *)(v44 + 72) = 70;
                    *(_OWORD *)v44 = *(_OWORD *)v42;
                    goto LABEL_61;
                  case 71:
                    *(_DWORD *)(v44 + 72) = 71;
                    *(_OWORD *)v44 = *(_OWORD *)v42;
                    goto LABEL_61;
                  case 104:
                    *(_DWORD *)(v44 + 72) = 104;
                    *(_OWORD *)v44 = *(_OWORD *)v42;
                    *(_QWORD *)(v44 + 16) = *((_QWORD *)v42 + 2);
                    goto LABEL_61;
                  case 265:
                    *(_DWORD *)(v44 + 72) = 265;
                    *(_OWORD *)v44 = *(_OWORD *)v42;
                    *(_OWORD *)(v44 + 16) = *((_OWORD *)v42 + 1);
                    *(_OWORD *)(v44 + 32) = *((_OWORD *)v42 + 2);
                    *(_OWORD *)(v44 + 48) = *((_OWORD *)v42 + 3);
                    goto LABEL_61;
                  default:
                    goto LABEL_62;
                }
              }
              goto LABEL_62;
            }
            v65 = 245;
          }
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            v65);
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x2ACu);
          v8 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x600u);
          goto LABEL_14;
        }
        *((_BYTE *)this + 509) &= ~2u;
      }
      KeyframeSequence::Calculate(this[41], a2);
      v40 = this[41];
      if ( (*((_BYTE *)v40 + 140) & 3) == 1 )
      {
        if ( *((_BYTE *)v40 + 101) )
        {
          *((_BYTE *)this + 509) |= 2u;
          v52 = *((_DWORD *)this + 119);
          v53 = *((_BYTE *)this + 509);
          if ( v52 >= 0 )
          {
            if ( v52 <= 0 )
            {
              *((_BYTE *)this + 508) &= ~0x40u;
              *((_BYTE *)this + 509) = v53 | 1;
              v54 = CKeyframeAnimation::OnAnimationEvent((__int64)this, 1);
              v8 = v54;
              if ( v54 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0xB27u);
                goto LABEL_56;
              }
              goto LABEL_55;
            }
            *((_DWORD *)this + 119) = v52 - 1;
          }
          CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)this, ++*((_DWORD *)this + 117));
          KeyframeSequence::Repeat(this[41]);
        }
      }
    }
LABEL_55:
    v8 = 0;
    goto LABEL_56;
  }
  if ( !*((_BYTE *)this + 140) )
  {
LABEL_152:
    v8 = 1;
    goto LABEL_14;
  }
  v79 = 0LL;
  v75 = 0uLL;
  v76 = 0uLL;
  v77 = 0uLL;
  v78 = 0uLL;
  v81 = 0;
  v80 = 18;
  CExpressionValue::CopyFrom((CExpressionValue *)&v75, (const struct CExpressionValue *)(this + 8));
  v10 = *((_DWORD *)a2 + 4);
  if ( v10 == -1 )
  {
    v67 = 232;
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != v10 )
    {
      v11 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 4) = v10 + 1;
      v12 = v79;
      v13 = 80LL * v10;
      if ( v80 == 18 )
      {
        *(_DWORD *)(v13 + v11 + 72) = 18;
LABEL_9:
        *(_DWORD *)(v13 + v11) = v75;
LABEL_10:
        *(_BYTE *)(v13 + v11 + 76) = 1;
      }
      else
      {
        switch ( v80 )
        {
          case 11:
            *(_DWORD *)(v13 + v11 + 72) = 11;
            *(_BYTE *)(v13 + v11 + 76) = 1;
            Microsoft::WRL::ComPtr<CPathData>::operator=(v13 + v11 + 64, v12);
            break;
          case 17:
            *(_BYTE *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 72) = 17;
            goto LABEL_10;
          case 35:
            *(_DWORD *)(v13 + v11 + 4) = DWORD1(v75);
            *(_DWORD *)(v13 + v11 + 72) = 35;
            goto LABEL_9;
          case 42:
            *(_DWORD *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 72) = 42;
            goto LABEL_10;
          case 52:
            v68 = DWORD2(v75);
            *(_QWORD *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 8) = v68;
            *(_DWORD *)(v13 + v11 + 72) = 52;
            goto LABEL_10;
          case 69:
            *(_OWORD *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 72) = 69;
            goto LABEL_10;
          case 70:
            *(_OWORD *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 72) = 70;
            goto LABEL_10;
          case 71:
            *(_OWORD *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 72) = 71;
            goto LABEL_10;
          case 104:
            v69 = v76;
            *(_OWORD *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 72) = 104;
            *(_QWORD *)(v13 + v11 + 16) = v69;
            goto LABEL_10;
          case 265:
            v70 = v76;
            *(_OWORD *)(v13 + v11) = v75;
            *(_DWORD *)(v13 + v11 + 72) = 265;
            v71 = v77;
            *(_OWORD *)(v13 + v11 + 16) = v70;
            v72 = v78;
            *(_OWORD *)(v13 + v11 + 32) = v71;
            *(_OWORD *)(v13 + v11 + 48) = v72;
            goto LABEL_10;
          default:
            break;
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      goto LABEL_13;
    }
    v67 = 245;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147418113,
    v67);
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147418113,
    0x2ACu);
  v8 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x648u);
  if ( v79 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
LABEL_14:
  *a4 = *((_BYTE *)this + 508) & 1;
  result = (unsigned int)v8;
  *((_BYTE *)this + 508) &= 0xD9u;
  return result;
}
