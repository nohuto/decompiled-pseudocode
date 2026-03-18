/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18003E4C0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001BAD8 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BCFC (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x18003A0DC (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003B470 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18003CF88 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18003D13C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800C249C (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18013CE5C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x180197C68 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  char v8; // al
  char v9; // cl
  __int64 v10; // rcx
  struct CChannelContext *v11; // rdx
  __int64 v12; // rax
  CExpressionManager *v13; // rcx
  float GlobalPlaybackRate; // xmm0_4
  int v15; // ecx
  __int64 v16; // rax
  double v17; // xmm1_8
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  char v21; // al
  __int64 v22; // rax
  int v23; // ebp
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  LONGLONG v29; // rax
  float v30; // xmm2_4
  int v31; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v33; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 123);
  v5 = *((_DWORD *)this + 122);
  if ( v4 == v5 )
    goto LABEL_2;
  if ( !v5 )
  {
    if ( v4 )
    {
      CKeyframeAnimation::Play(this, a2);
      v10 = *((_QWORD *)this + 2);
      v11 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v12 = *(_QWORD *)(v10 + 496) - *((_QWORD *)this + 53);
      v13 = *(CExpressionManager **)(v10 + 240);
      v33 = v12;
      GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(v13, v11);
      if ( (float)(GlobalPlaybackRate
                 * (float)((float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&v33) * *((float *)this + 114))) > 0.0 )
        CKeyframeAnimation::UpdateTime(this, 0);
      if ( *((_DWORD *)this + 123) != 2 )
        goto LABEL_14;
      goto LABEL_13;
    }
LABEL_32:
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 54) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
    goto LABEL_14;
  }
  if ( !v4 )
  {
    v22 = *((_QWORD *)this + 22);
    if ( v22 && *(_QWORD *)(v22 + 8) )
    {
      v23 = *((_DWORD *)a2 + 4);
      v24 = CKeyframeAnimation::Reset(this, 1, a2);
      v6 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x35Bu);
        return v6;
      }
      v25 = *((_DWORD *)a2 + 4);
      if ( v25 == v23 + 1 )
      {
        v26 = CBaseExpression::SetOutputValue(
                this,
                (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(v25 - 1)));
        v6 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x369u);
          return v6;
        }
        --*((_DWORD *)a2 + 4);
      }
    }
    v27 = *((_QWORD *)this + 48);
    if ( v27 )
    {
      if ( (*(_BYTE *)(v27 + 112) & 4) != 0 )
      {
        v28 = CBaseExpression::NotifyAnimationCompleted(this);
        v6 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x372u);
          return v6;
        }
      }
    }
    goto LABEL_14;
  }
  if ( v4 != 2 )
    goto LABEL_32;
LABEL_13:
  CKeyframeAnimation::Pause(this);
LABEL_14:
  v15 = *((_DWORD *)this + 123);
  v5 = v15;
  if ( *((_DWORD *)this + 122) == 1 )
  {
    if ( v15 != 1 )
    {
      v21 = *((_BYTE *)this + 508);
      if ( (v21 & 1) != 0 )
        *((_BYTE *)this + 508) = v21 & 0xFE;
      v5 = v15;
      *((_DWORD *)this + 122) = v15;
      goto LABEL_2;
    }
  }
  else if ( v15 == 1 && (*((_BYTE *)this + 508) & 1) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 424LL) |= 2u;
    *((_BYTE *)this + 508) |= 1u;
    v5 = *((_DWORD *)this + 123);
  }
  *((_DWORD *)this + 122) = v5;
LABEL_2:
  if ( v5 )
  {
    v8 = *((_BYTE *)this + 508);
    v9 = v8 & 4;
    if ( (v8 & 2) != 0 )
    {
      if ( v9 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v16 = *((_QWORD *)this + 56);
      HIDWORD(v17) = 0;
      *(float *)&v17 = (float)(int)v16;
      if ( v16 < 0 )
        *(float *)&v17 = *(float *)&v17 + 1.8446744e19;
      v18 = *((_QWORD *)this + 55);
      *(float *)&v17 = *(float *)&v17 / 10000000.0;
      v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
      if ( v18 != v19 )
      {
        v29 = (unsigned __int64)(v19 - v18) / g_qpcFrequency.QuadPart;
        v30 = (float)(int)v29;
        if ( v29 < 0 )
          v30 = v30 + 1.8446744e19;
        *(float *)&v17 = *(float *)&v17 + v30;
      }
      v20 = CKeyframeAnimation::TimeSeek(this, v17);
      v6 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x3C3u);
        return v6;
      }
      *((_QWORD *)this + 54) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
    }
    else if ( v9 )
    {
      v31 = CKeyframeAnimation::ProgressSeek(this, *((float *)this + 115));
      v6 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x3CBu);
        return v6;
      }
    }
  }
  return 0;
}
