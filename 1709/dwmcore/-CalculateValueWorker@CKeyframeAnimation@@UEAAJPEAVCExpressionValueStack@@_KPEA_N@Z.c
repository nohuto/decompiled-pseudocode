/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180092EB0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800A3848 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x1800A3B0C (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3B34 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800A3CE0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3E24 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A3E58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6D00 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Repeat@KeyframeSequence@@QEAAXXZ @ 0x1800A73C8 (-Repeat@KeyframeSequence@@QEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A7534 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        double a3,
        bool *a4)
{
  signed int v7; // eax
  signed int v8; // ebx
  LONGLONG v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // r8
  char v12; // al
  __int64 result; // rax
  struct CProcessAttribution *(__fastcall *v14)(CResource *__hidden); // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  LONGLONG v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r9d
  unsigned int v26; // r8d
  int v27; // edx
  int v28; // eax
  char v29; // cl
  __int64 v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // r10
  __int64 v33; // r8
  int v34; // eax
  char v35; // cl
  __int64 v36; // r11
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm0_4
  unsigned int v40; // ebx
  __int64 v41; // r11
  int v42; // r8d
  int v43; // eax
  signed int v44; // edx
  int v45; // eax
  signed int v46; // eax
  signed int v47; // eax
  signed int v48; // eax
  int v49; // eax
  char v50; // al
  int v51; // eax
  int v52; // ecx
  __m128 v53; // rt1
  signed int v54; // eax
  int v55; // eax
  __int64 v56; // xmm1_8
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  unsigned int v60; // [rsp+20h] [rbp-49h]
  float v61; // [rsp+30h] [rbp-39h]
  __int128 v62; // [rsp+40h] [rbp-29h] BYREF
  __int128 v63; // [rsp+50h] [rbp-19h]
  __int128 v64; // [rsp+60h] [rbp-9h]
  __int128 v65; // [rsp+70h] [rbp+7h]
  int v66; // [rsp+80h] [rbp+17h]

  *a4 = 0;
  v7 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v60 = 1216;
    goto LABEL_139;
  }
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL)
     - Time::s_luBegin.QuadPart
     - (*((_QWORD *)this + 49)
      - Time::s_luBegin.QuadPart);
  if ( v9 < 0 )
    goto LABEL_11;
  if ( (*((_BYTE *)this + 456) & 0x40) != 0 )
  {
    v14 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 120LL);
    if ( v14 == CResource::GetProcessAttributionNoRef )
    {
      v15 = *((_QWORD *)this + 6);
      if ( v15 )
        v15 = *(_QWORD *)(v15 + 40);
    }
    else
    {
      v15 = (__int64)v14(this);
    }
    if ( v15 )
      ++*(_DWORD *)(v15 + 40);
    if ( ((*((_BYTE *)this + 456) & 2) != 0 || !*((_BYTE *)this + 132)) && *((_DWORD *)this + 109) == 2 )
    {
      CKeyframeAnimation::Play(this, a2);
      *((_BYTE *)this + 456) |= 0x10u;
    }
    if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v21) = 0x7FFFFFFF;
    }
    else
    {
      v16 = 1000000 * v9;
      if ( Time::s_luFreq.QuadPart == 3312653 )
      {
        v17 = (__int64)((unsigned __int128)(v16 * (__int128)0x51088B53D25AA7A3LL) >> 64) >> 20;
        v18 = (v17 >> 63) + v17;
      }
      else
      {
        v18 = v16 / Time::s_luFreq.QuadPart;
      }
      v19 = 500LL;
      if ( v18 < 0 )
        v19 = -500LL;
      v20 = (__int64)((unsigned __int128)((v19 + v18) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
      v21 = (v20 >> 63) + v20;
    }
    if ( (*((_BYTE *)this + 456) & 0x20) != 0 )
    {
      if ( *((_DWORD *)this + 112) == 4 )
      {
        v36 = *((_QWORD *)this + 39);
        v37 = 0.0;
        v38 = *(_DWORD *)(v36 + 104);
        if ( v38 > 0 )
          v37 = (float)*(int *)(*(_QWORD *)(v36 + 96) + 24LL * (unsigned int)(v38 - 1)) / 1000.0;
        v39 = (float)(v37 * *((float *)this + 108)) * 1000.0;
        if ( (LODWORD(v39) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v39 - v39;
          v53.m128_f32[0] = FLOAT_N0_5;
          v40 = (int)v39 - _mm_cmple_ss(*(__m128 *)&a3, v53).m128_u32[0];
        }
        else
        {
          v61 = v39 + 6291456.25;
          v40 = (int)(LODWORD(v61) << 10) >> 11;
        }
        KeyframeSequence::ConfigureTimer((KeyframeSequence *)v36);
        *(_DWORD *)(v41 + 72) = v40;
        v42 = *(_DWORD *)(v41 + 76);
        v43 = v40 - v42;
        v44 = *(_DWORD *)(v41 + 84);
        if ( (int)(v40 - v42) >= v44 || v40 >= *(_DWORD *)(v41 + 80) )
        {
          v48 = *(_DWORD *)(v41 + 80) - v42;
          *(_WORD *)(v41 + 92) = 0;
          if ( v44 >= v48 )
            v44 = v48;
          *(_DWORD *)(v41 + 88) = v44;
        }
        else if ( v43 < 0 )
        {
          *(_WORD *)(v41 + 92) = 0;
          *(_DWORD *)(v41 + 88) = 0;
        }
        else
        {
          *(_WORD *)(v41 + 92) = 1;
          *(_DWORD *)(v41 + 88) = v43;
        }
      }
      else
      {
        v22 = *((_DWORD *)this + 95);
        v23 = *((_DWORD *)this + 94);
        if ( v22 < v23 )
        {
          v51 = v23 - v22;
          v52 = v21;
          if ( (int)v21 >= v51 )
            v52 = v51;
          LODWORD(v21) = v21 - v52;
          *((_DWORD *)this + 95) = v22 + v52;
        }
        v24 = *((_QWORD *)this + 39);
        if ( (*(_BYTE *)(v24 + 132) & 2) != 0 )
        {
          v25 = *(_DWORD *)(v24 + 76);
          v26 = v21 + *(_DWORD *)(v24 + 72);
          v27 = *(_DWORD *)(v24 + 84);
          v28 = v26 - v25;
          *(_DWORD *)(v24 + 72) = v26;
          if ( (int)(v26 - v25) >= v27 || v26 >= *(_DWORD *)(v24 + 80) )
          {
            v49 = *(_DWORD *)(v24 + 80) - v25;
            *(_WORD *)(v24 + 92) = 256;
            if ( v27 >= v49 )
              v27 = v49;
            *(_DWORD *)(v24 + 88) = v27;
          }
          else if ( v28 < 0 )
          {
            *(_WORD *)(v24 + 92) = 0;
            *(_DWORD *)(v24 + 88) = 0;
          }
          else
          {
            *(_WORD *)(v24 + 92) = 1;
            *(_DWORD *)(v24 + 88) = v28;
          }
        }
      }
    }
    *((_QWORD *)this + 49) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    v29 = *((_BYTE *)this + 456);
    if ( (v29 & 0x40) != 0
      && *((_DWORD *)this + 95) < *((_DWORD *)this + 94)
      && (*((_DWORD *)this + 111) != 1 || (v29 & 8) != 0) )
    {
      goto LABEL_53;
    }
    if ( (v29 & 4) == 0 )
    {
      CKeyframeAnimation::ProcessExpressionKeyFrames(this, a2);
      if ( *((_QWORD *)this + 38) )
      {
        v54 = CKeyframeAnimation::SampleStartingValue(this);
        v8 = v54;
        if ( v54 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v54, 0x762u);
          goto LABEL_42;
        }
      }
      *((_BYTE *)this + 456) |= 4u;
    }
    v8 = 0;
LABEL_42:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x4F2u);
      goto LABEL_12;
    }
    if ( (*((_BYTE *)this + 456) & 0x20) != 0 )
    {
      if ( (*((_BYTE *)this + 457) & 1) != 0 )
      {
        v47 = CKeyframeAnimation::OnAnimationEvent((__int64)this, 32);
        v8 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v47, 0x926u);
LABEL_47:
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x4F5u);
            goto LABEL_12;
          }
          v31 = *((_DWORD *)a2 + 4);
          v32 = *((_QWORD *)this + 39);
          if ( v31 == -1 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0xBFu);
          }
          else
          {
            if ( *((_DWORD *)a2 + 12) != v31 )
            {
              v33 = *((_QWORD *)a2 + 3);
              *((_DWORD *)a2 + 4) = v31 + 1;
              v34 = *(_DWORD *)(v32 + 64);
              if ( v34 == 18 )
              {
                *(_DWORD *)(v33 + 72LL * v31) = *(_DWORD *)v32;
                *(_DWORD *)(v33 + 72LL * v31 + 64) = 18;
LABEL_52:
                *(_BYTE *)(v33 + 72LL * v31 + 68) = 1;
              }
              else
              {
                switch ( v34 )
                {
                  case 17:
                    *(_BYTE *)(v33 + 72LL * v31) = *(_BYTE *)v32;
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 17;
                    goto LABEL_52;
                  case 35:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 35;
                    *(_QWORD *)(v33 + 72LL * v31) = *(_QWORD *)v32;
                    goto LABEL_52;
                  case 42:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 42;
                    *(_DWORD *)(v33 + 72LL * v31) = *(_DWORD *)v32;
                    goto LABEL_52;
                  case 52:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 52;
                    *(_QWORD *)(v33 + 72LL * v31) = *(_QWORD *)v32;
                    *(_DWORD *)(v33 + 72LL * v31 + 8) = *(_DWORD *)(v32 + 8);
                    goto LABEL_52;
                  case 69:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 69;
                    *(_OWORD *)(v33 + 72LL * v31) = *(_OWORD *)v32;
                    goto LABEL_52;
                  case 70:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 70;
                    *(_OWORD *)(v33 + 72LL * v31) = *(_OWORD *)v32;
                    goto LABEL_52;
                  case 71:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 71;
                    *(_OWORD *)(v33 + 72LL * v31) = *(_OWORD *)v32;
                    goto LABEL_52;
                  case 104:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 104;
                    *(_OWORD *)(v33 + 72LL * v31) = *(_OWORD *)v32;
                    *(_QWORD *)(v33 + 72LL * v31 + 16) = *(_QWORD *)(v32 + 16);
                    goto LABEL_52;
                  case 265:
                    *(_DWORD *)(v33 + 72LL * v31 + 64) = 265;
                    *(_OWORD *)(v33 + 72LL * v31) = *(_OWORD *)v32;
                    *(_OWORD *)(v33 + 72LL * v31 + 16) = *(_OWORD *)(v32 + 16);
                    *(_OWORD *)(v33 + 72LL * v31 + 32) = *(_OWORD *)(v32 + 32);
                    *(_OWORD *)(v33 + 72LL * v31 + 48) = *(_OWORD *)(v32 + 48);
                    goto LABEL_52;
                  default:
                    break;
                }
              }
LABEL_53:
              if ( (*((_BYTE *)this + 456) & 0x10) != 0 )
                CKeyframeAnimation::Pause(this);
              v35 = *((_BYTE *)this + 456);
              if ( v35 >= 0 )
              {
                if ( (v35 & 0x40) != 0 && *((_DWORD *)this + 95) < *((_DWORD *)this + 94) )
                {
                  if ( *((_DWORD *)this + 111) != 1 || (v35 & 8) != 0 )
                    goto LABEL_59;
                  *((_BYTE *)this + 456) = v35 | 8;
                }
LABEL_11:
                v8 = 0;
                goto LABEL_12;
              }
              --*((_DWORD *)a2 + 4);
              v7 = CKeyframeAnimation::Reset(this, 1, a2);
              v8 = v7;
              if ( v7 >= 0 )
              {
                v50 = *((_BYTE *)this + 456);
                if ( (v50 & 1) != 0 )
                  *((_BYTE *)this + 456) = v50 & 0xFE;
                if ( (*((_BYTE *)this + 456) & 0x10) != 0 )
                {
                  CKeyframeAnimation::Play(this, a2);
                  CKeyframeAnimation::Pause(this);
                }
                else
                {
                  *(_QWORD *)((char *)this + 436) = 0LL;
                }
                goto LABEL_11;
              }
              v60 = 1295;
LABEL_139:
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v60);
              goto LABEL_12;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0xCCu);
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x2BDu);
          v8 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x4FBu);
          goto LABEL_12;
        }
        *((_BYTE *)this + 457) &= ~1u;
      }
      KeyframeSequence::Calculate(*((KeyframeSequence **)this + 39), a2);
      v30 = *((_QWORD *)this + 39);
      if ( (*(_BYTE *)(v30 + 132) & 3) == 1 )
      {
        if ( *(_BYTE *)(v30 + 93) )
        {
          *((_BYTE *)this + 457) |= 1u;
          v45 = *((_DWORD *)this + 106);
          if ( v45 >= 0 )
          {
            if ( v45 <= 0 )
            {
              *((_BYTE *)this + 456) &= ~0x20u;
              *((_BYTE *)this + 456) |= 0x80u;
              v46 = CKeyframeAnimation::OnAnimationEvent((__int64)this, 1);
              v8 = v46;
              if ( v46 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v46, 0x95Cu);
                goto LABEL_47;
              }
              goto LABEL_46;
            }
            *((_DWORD *)this + 106) = v45 - 1;
          }
          CKeyframeAnimation::PrepareSequenceForIteration(this, ++*((_DWORD *)this + 104));
          KeyframeSequence::Repeat(*((KeyframeSequence **)this + 39));
        }
      }
    }
LABEL_46:
    v8 = 0;
    goto LABEL_47;
  }
  if ( !*((_BYTE *)this + 132) )
  {
LABEL_59:
    v8 = 1;
    goto LABEL_12;
  }
  v66 = 18;
  v62 = 0uLL;
  v63 = 0uLL;
  v64 = 0uLL;
  v65 = 0uLL;
  CExpressionValue::CopyFrom((CExpressionValue *)&v62, (CKeyframeAnimation *)((char *)this + 64));
  v10 = *((_DWORD *)a2 + 4);
  if ( v10 == -1 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0xBFu);
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != v10 )
    {
      v11 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 4) = v10 + 1;
      if ( v66 == 18 )
      {
        *(_DWORD *)(v11 + 72LL * v10 + 64) = 18;
LABEL_9:
        *(_DWORD *)(v11 + 72LL * v10) = v62;
LABEL_10:
        *(_BYTE *)(v11 + 72LL * v10 + 68) = 1;
      }
      else
      {
        switch ( v66 )
        {
          case 17:
            *(_BYTE *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 17;
            goto LABEL_10;
          case 35:
            *(_DWORD *)(v11 + 72LL * v10 + 4) = DWORD1(v62);
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 35;
            goto LABEL_9;
          case 42:
            *(_DWORD *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 42;
            goto LABEL_10;
          case 52:
            v55 = DWORD2(v62);
            *(_QWORD *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 8) = v55;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 52;
            goto LABEL_10;
          case 69:
            *(_OWORD *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 69;
            goto LABEL_10;
          case 70:
            *(_OWORD *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 70;
            goto LABEL_10;
          case 71:
            *(_OWORD *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 71;
            goto LABEL_10;
          case 104:
            v56 = v63;
            *(_OWORD *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 104;
            *(_QWORD *)(v11 + 72LL * v10 + 16) = v56;
            goto LABEL_10;
          case 265:
            v57 = v63;
            *(_OWORD *)(v11 + 72LL * v10) = v62;
            *(_DWORD *)(v11 + 72LL * v10 + 64) = 265;
            v58 = v64;
            *(_OWORD *)(v11 + 72LL * v10 + 16) = v57;
            v59 = v65;
            *(_OWORD *)(v11 + 72LL * v10 + 32) = v58;
            *(_OWORD *)(v11 + 72LL * v10 + 48) = v59;
            goto LABEL_10;
          default:
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0xCCu);
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x2BDu);
  v8 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x543u);
LABEL_12:
  *a4 = *((_BYTE *)this + 456) & 1;
  v12 = *((_BYTE *)this + 456);
  if ( (v12 & 2) != 0 )
    *((_BYTE *)this + 456) = v12 & 0xFD;
  result = (unsigned int)v8;
  *((_BYTE *)this + 456) &= ~0x10u;
  return result;
}
