/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x18001FCD8 (-Repeat@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18002B0D0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x18002C0AC (-PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x18002C724 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x18002C99C (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x18002CAD0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180030084 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ @ 0x1800301D4 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x1800905A0 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800C57BC (-Update@Timer@Animations@Components@@QEAAXH_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  int v7; // eax
  int v8; // ebx
  LONGLONG v9; // rbx
  Components::Animations::Animation *v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // r8
  char v13; // al
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r9d
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r9d
  unsigned int v25; // r8d
  int v26; // edx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  char v30; // al
  __int64 v31; // rcx
  char v32; // cl
  __int64 v33; // rcx
  int **v34; // r9
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm0_4
  double v38; // xmm1_8
  double v39; // xmm1_8
  int v40; // eax
  int v41; // edx
  int v42; // r8d
  unsigned int v43; // r10d
  float v44; // xmm1_4
  int **v45; // rcx
  float v46; // xmm1_4
  int v47; // r8d
  int v48; // eax
  signed int v49; // edx
  int v50; // eax
  int v51; // ecx
  signed int v52; // eax
  int v53; // eax
  int v54; // ecx
  __int64 v55; // rcx
  __int64 (__fastcall *v56)(__int64, int); // rax
  char v57; // al
  int v58; // eax
  char v59; // al
  int v60; // eax
  __int64 v61; // xmm1_8
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  unsigned int v65; // [rsp+20h] [rbp-39h]
  unsigned int v66; // [rsp+20h] [rbp-39h]
  __int128 v67; // [rsp+30h] [rbp-29h] BYREF
  __int128 v68; // [rsp+40h] [rbp-19h]
  __int128 v69; // [rsp+50h] [rbp-9h]
  __int128 v70; // [rsp+60h] [rbp+7h]
  int v71; // [rsp+70h] [rbp+17h]

  *a4 = 0;
  *((_QWORD *)this + 42) = a2;
  v7 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v65 = 1206;
    goto LABEL_122;
  }
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL)
     - Components::Animations::Time::s_luBegin.QuadPart
     - (*((_QWORD *)this + 44)
      - Components::Animations::Time::s_luBegin.QuadPart);
  if ( v9 < 0 )
    goto LABEL_10;
  v10 = (Components::Animations::Animation *)*((_QWORD *)this + 40);
  if ( (*((_BYTE *)v10 + 72) & 4) != 0 )
  {
    if ( ((*((_BYTE *)this + 392) & 2) != 0 || !*((_BYTE *)this + 132)) && *((_DWORD *)this + 95) == 2 )
    {
      Components::Animations::Animation::ApiPlay(v10);
      *((_BYTE *)this + 392) |= 0x10u;
    }
    if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v19) = 0x7FFFFFFF;
    }
    else
    {
      v15 = 1000000 * v9;
      if ( Components::Animations::Time::s_luFreq.QuadPart == 3312660 )
        v16 = v15 / 3312660;
      else
        v16 = v15 / Components::Animations::Time::s_luFreq.QuadPart;
      v17 = 500LL;
      if ( v16 < 0 )
        v17 = -500LL;
      v18 = (__int64)((unsigned __int128)((v17 + v16) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
      v19 = (v18 >> 63) + v18;
    }
    v20 = *((_QWORD *)this + 40);
    if ( (*(_BYTE *)(v20 + 72) & 2) != 0 )
    {
      if ( *(_DWORD *)(v20 + 24) == 2 )
      {
        v34 = *(int ***)(v20 + 8);
        v35 = 0.0;
        v36 = *((_DWORD *)v34 + 2);
        if ( v36 > 0 )
          v35 = (float)(*v34)[6 * v36 - 6] / 1000.0;
        v37 = (float)(v35 * *(float *)(v20 + 44)) * 1000.0;
        v38 = v37;
        if ( v37 < 0.0 )
          v39 = v38 - 0.5;
        else
          v39 = v38 + 0.5;
        v40 = 0;
        v41 = *((_DWORD *)v34 + 61);
        v42 = v41;
        v43 = (int)v39;
        if ( *((int *)v34 + 2) > 0 )
          v40 = **v34;
        v44 = *((float *)v34 + 65);
        if ( v44 < 1.0 )
          v42 = (int)(float)((float)v41 * v44);
        v45 = v34 + 26;
        *((_DWORD *)v34 + 53) = v40;
        *((_DWORD *)v34 + 54) = v42;
        *((_DWORD *)v34 + 55) = v41;
        *((_DWORD *)v34 + 52) = 0;
        *((_DWORD *)v34 + 56) = 0;
        *((_WORD *)v34 + 114) = 0;
        v46 = *((float *)v34 + 64);
        if ( v46 > 0.0 )
          Components::Animations::Timer::Update(
            (Components::Animations::Timer *)v45,
            (int)(float)(fminf(v46, *((float *)v34 + 65)) * (float)*((int *)v34 + 61)),
            0);
        *((_BYTE *)v34 + 264) |= 0x10u;
        v47 = *((_DWORD *)v45 + 1);
        v48 = v43 - v47;
        v49 = *((_DWORD *)v45 + 3);
        *(_DWORD *)v45 = v43;
        if ( (int)(v43 - v47) >= v49 || v43 >= *((_DWORD *)v45 + 2) )
        {
          v52 = *((_DWORD *)v45 + 2) - v47;
          *((_WORD *)v45 + 10) = 0;
          if ( v49 >= v52 )
            v49 = v52;
          *((_DWORD *)v45 + 4) = v49;
        }
        else if ( v48 < 0 )
        {
          *((_WORD *)v45 + 10) = 0;
          *((_DWORD *)v45 + 4) = 0;
        }
        else
        {
          *((_WORD *)v45 + 10) = 1;
          *((_DWORD *)v45 + 4) = v48;
        }
      }
      else
      {
        v21 = *(_DWORD *)(v20 + 20);
        v22 = *(_DWORD *)(v20 + 16);
        if ( v21 < v22 )
        {
          v50 = v22 - v21;
          v51 = v19;
          if ( (int)v19 >= v50 )
            v51 = v50;
          LODWORD(v19) = v19 - v51;
          *(_DWORD *)(v20 + 20) = v51 + v21;
        }
        v23 = *(_QWORD *)(v20 + 8);
        if ( (*(_BYTE *)(v23 + 264) & 2) != 0 )
        {
          v24 = *(_DWORD *)(v23 + 212);
          v25 = v19 + *(_DWORD *)(v23 + 208);
          v26 = *(_DWORD *)(v23 + 220);
          v27 = v25 - v24;
          *(_DWORD *)(v23 + 208) = v25;
          if ( (int)(v25 - v24) >= v26 || v25 >= *(_DWORD *)(v23 + 216) )
          {
            v53 = *(_DWORD *)(v23 + 216) - v24;
            *(_WORD *)(v23 + 228) = 256;
            if ( v26 >= v53 )
              v26 = v53;
            *(_DWORD *)(v23 + 224) = v26;
          }
          else if ( v27 < 0 )
          {
            *(_WORD *)(v23 + 228) = 0;
            *(_DWORD *)(v23 + 224) = 0;
          }
          else
          {
            *(_WORD *)(v23 + 228) = 1;
            *(_DWORD *)(v23 + 224) = v27;
          }
        }
      }
    }
    *((_QWORD *)this + 44) = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
    v28 = *((_QWORD *)this + 40);
    if ( (*(_BYTE *)(v28 + 72) & 4) != 0
      && *(_DWORD *)(v28 + 20) < *(_DWORD *)(v28 + 16)
      && (*((_DWORD *)this + 97) != 1 || (*((_BYTE *)this + 392) & 8) != 0) )
    {
      goto LABEL_42;
    }
    if ( (*((_BYTE *)this + 392) & 4) == 0 )
    {
      CKeyframeAnimation::ProcessExpressionKeyFrames(this);
      if ( *((_QWORD *)this + 33) )
      {
        v58 = CKeyframeAnimation::SampleStartingValue(this);
        v8 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x813u);
LABEL_34:
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4DFu);
            goto LABEL_11;
          }
          v29 = *((_QWORD *)this + 40);
          v30 = *(_BYTE *)(v29 + 72);
          if ( (v30 & 2) != 0 )
          {
            if ( (v30 & 0x40) != 0 )
            {
              *(_DWORD *)(v29 + 60) = 0;
              *(_BYTE *)(v29 + 72) = v30 & 0xBF;
            }
            Components::Animations::Sequence::Calculate(*(Components::Animations::Sequence **)(v29 + 8));
            v31 = *(_QWORD *)(v29 + 8);
            if ( (*(_BYTE *)(v31 + 264) & 3) == 1 )
            {
              if ( *(_BYTE *)(v31 + 229) )
              {
                *(_BYTE *)(v29 + 72) |= 0x40u;
                v54 = *(_DWORD *)(v29 + 36);
                if ( v54 >= 0 )
                {
                  if ( v54 <= 0 )
                  {
                    v55 = *(_QWORD *)(v29 + 64);
                    *(_BYTE *)(v29 + 72) = *(_BYTE *)(v29 + 72) & 0xED | 0x10;
                    v56 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v55 + 64LL);
                    if ( v56 == CKeyframeAnimation::OnAnimationEvent )
                      CKeyframeAnimation::OnAnimationEvent(v55, 1);
                    else
                      v56(v55, 1);
                    goto LABEL_39;
                  }
                  *(_DWORD *)(v29 + 36) = v54 - 1;
                }
                Components::Animations::Animation::PrepareSequenceForIteration(
                  (Components::Animations::Animation *)v29,
                  ++*(_DWORD *)(v29 + 28));
                Components::Animations::Sequence::Repeat(*(Components::Animations::Sequence **)(v29 + 8));
              }
            }
          }
LABEL_39:
          v32 = *(_BYTE *)(v29 + 72);
          if ( (v32 & 0x18) == 0x18 )
            *(_BYTE *)(v29 + 72) = v32 | 0x20;
          v7 = Components::Animations::Animation::Commit(*((Components::Animations::Animation **)this + 40));
          v8 = v7;
          if ( v7 < 0 )
          {
            v65 = 1258;
            goto LABEL_122;
          }
LABEL_42:
          if ( (*((_BYTE *)this + 392) & 0x10) != 0 )
            Components::Animations::Animation::ApiPause(*((Components::Animations::Animation **)this + 40));
          v33 = *((_QWORD *)this + 40);
          if ( (*(_BYTE *)(v33 + 72) & 0x10) == 0 )
          {
            if ( (*(_BYTE *)(v33 + 72) & 4) != 0 && *(_DWORD *)(v33 + 20) < *(_DWORD *)(v33 + 16) )
            {
              if ( *((_DWORD *)this + 97) != 1 )
                goto LABEL_48;
              v59 = *((_BYTE *)this + 392);
              if ( (v59 & 8) != 0 )
                goto LABEL_48;
              *((_BYTE *)this + 392) = v59 | 8;
            }
LABEL_10:
            v8 = 0;
            goto LABEL_11;
          }
          --*((_DWORD *)a2 + 4);
          v7 = Components::Animations::Animation::ApiReset(*((Components::Animations::Animation **)this + 40), 1);
          v8 = v7;
          if ( v7 < 0 )
          {
            v65 = 1277;
          }
          else
          {
            v57 = *((_BYTE *)this + 392);
            if ( (v57 & 1) != 0 )
              *((_BYTE *)this + 392) = v57 & 0xFE;
            if ( (*((_BYTE *)this + 392) & 0x10) == 0 )
            {
              *(_QWORD *)((char *)this + 380) = 0LL;
              goto LABEL_10;
            }
            v7 = Components::Animations::Animation::ApiPlay(*((Components::Animations::Animation **)this + 40));
            v8 = v7;
            if ( v7 < 0 )
            {
              v65 = 1293;
            }
            else
            {
              v7 = Components::Animations::Animation::ApiPause(*((Components::Animations::Animation **)this + 40));
              v8 = v7;
              if ( v7 >= 0 )
                goto LABEL_10;
              v65 = 1294;
            }
          }
LABEL_122:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v65);
          goto LABEL_11;
        }
      }
      *((_BYTE *)this + 392) |= 4u;
    }
    v8 = 0;
    goto LABEL_34;
  }
  if ( !*((_BYTE *)this + 132) )
  {
LABEL_48:
    v8 = 1;
    goto LABEL_11;
  }
  v71 = 18;
  v67 = 0uLL;
  v68 = 0uLL;
  v69 = 0uLL;
  v70 = 0uLL;
  CExpressionValue::CopyFrom((CExpressionValue *)&v67, (CKeyframeAnimation *)((char *)this + 64));
  v11 = *((_DWORD *)a2 + 4);
  if ( v11 == -1 )
  {
    v66 = 191;
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != v11 )
    {
      v12 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 4) = v11 + 1;
      if ( v71 == 18 )
      {
        *(_DWORD *)(v12 + 72LL * v11) = v67;
        *(_DWORD *)(v12 + 72LL * v11 + 64) = 18;
LABEL_9:
        *(_BYTE *)(v12 + 72LL * v11 + 68) = 1;
      }
      else
      {
        switch ( v71 )
        {
          case 17:
            *(_BYTE *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 17;
            goto LABEL_9;
          case 35:
            *(_QWORD *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 35;
            goto LABEL_9;
          case 52:
            v60 = DWORD2(v67);
            *(_QWORD *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 8) = v60;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 52;
            goto LABEL_9;
          case 69:
            *(_OWORD *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 69;
            goto LABEL_9;
          case 70:
            *(_OWORD *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 70;
            goto LABEL_9;
          case 71:
            *(_OWORD *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 71;
            goto LABEL_9;
          case 104:
            v61 = v68;
            *(_OWORD *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 104;
            *(_QWORD *)(v12 + 72LL * v11 + 16) = v61;
            goto LABEL_9;
          case 265:
            v62 = v68;
            *(_OWORD *)(v12 + 72LL * v11) = v67;
            *(_DWORD *)(v12 + 72LL * v11 + 64) = 265;
            v63 = v69;
            *(_OWORD *)(v12 + 72LL * v11 + 16) = v62;
            v64 = v70;
            *(_OWORD *)(v12 + 72LL * v11 + 32) = v63;
            *(_OWORD *)(v12 + 72LL * v11 + 48) = v64;
            goto LABEL_9;
          default:
            goto LABEL_10;
        }
      }
      goto LABEL_10;
    }
    v66 = 204;
  }
  v8 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, v66);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x2A3u);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x531u);
LABEL_11:
  *a4 = *((_BYTE *)this + 392) & 1;
  v13 = *((_BYTE *)this + 392);
  *((_QWORD *)this + 42) = 0LL;
  if ( (v13 & 2) != 0 )
    *((_BYTE *)this + 392) = v13 & 0xFD;
  result = (unsigned int)v8;
  *((_BYTE *)this + 392) &= ~0x10u;
  return result;
}
