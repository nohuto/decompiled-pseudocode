/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A1CD0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?Seek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A38CC (-Seek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x1800A3B0C (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3B34 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800BA1F8 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18011AAD0 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v2; // eax
  int v4; // ecx
  __int64 v7; // rax
  double v8; // xmm1_8
  __int64 v9; // rcx
  __int64 v10; // rax
  signed int v11; // edi
  char v12; // al
  __int64 v13; // rax
  int v14; // ebp
  signed int v15; // esi
  int v16; // ecx
  __int64 v17; // rax
  LONGLONG v18; // rax
  float v19; // xmm2_4
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 110);
  v4 = *((_DWORD *)this + 109);
  if ( v2 == v4 )
    goto LABEL_2;
  if ( !v4 )
  {
    if ( v2 )
    {
      CKeyframeAnimation::Play(this, a2);
      v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) - *((_QWORD *)this + 48);
      if ( (int)TimeDelta::ToMilliseconds((TimeDelta *)&v20) > 0 )
        CKeyframeAnimation::UpdateTime(this, 0);
      if ( *((_DWORD *)this + 110) == 2 )
        goto LABEL_9;
LABEL_10:
      if ( *((_DWORD *)this + 109) == 1 )
      {
        if ( *((_DWORD *)this + 110) != 1 )
        {
          v12 = *((_BYTE *)this + 456);
          if ( (v12 & 1) != 0 )
          {
            *((_BYTE *)this + 456) = v12 & 0xFE;
            *((_DWORD *)this + 109) = *((_DWORD *)this + 110);
LABEL_2:
            if ( (*((_BYTE *)this + 456) & 2) == 0 || !*((_DWORD *)this + 109) )
              return 0LL;
            v7 = *((_QWORD *)this + 51);
            HIDWORD(v8) = 0;
            *(float *)&v8 = (float)(int)v7;
            if ( v7 < 0 )
              *(float *)&v8 = *(float *)&v8 + 1.8446744e19;
            v9 = *((_QWORD *)this + 50);
            *(float *)&v8 = *(float *)&v8 / 10000000.0;
            v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
            if ( v9 != v10 )
            {
              v18 = (unsigned __int64)(v10 - v9) / g_qpcFrequency.QuadPart;
              v19 = (float)(int)v18;
              if ( v18 < 0 )
                v19 = v19 + 1.8446744e19;
              *(float *)&v8 = *(float *)&v8 + v19;
            }
            v11 = CKeyframeAnimation::Seek(this, v8);
            if ( v11 >= 0 )
            {
              *((_QWORD *)this + 49) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
              return 0LL;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x2DAu);
            return (unsigned int)v11;
          }
        }
      }
      else if ( *((_DWORD *)this + 110) == 1 && (*((_BYTE *)this + 456) & 1) == 0 )
      {
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 376LL) |= 2u;
        *((_BYTE *)this + 456) |= 1u;
      }
      *((_DWORD *)this + 109) = *((_DWORD *)this + 110);
      goto LABEL_2;
    }
LABEL_27:
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 49) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    goto LABEL_10;
  }
  if ( v2 )
  {
    if ( v2 == 2 )
    {
LABEL_9:
      CKeyframeAnimation::Pause(this);
      goto LABEL_10;
    }
    goto LABEL_27;
  }
  v13 = *((_QWORD *)this + 21);
  if ( v13 && *(_QWORD *)(v13 + 8) )
  {
    v14 = *((_DWORD *)a2 + 4);
    v15 = CKeyframeAnimation::Reset(this, 1, a2);
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x27Au);
      return (unsigned int)v15;
    }
    v16 = *((_DWORD *)a2 + 4);
    if ( v16 == v14 + 1 )
    {
      v15 = CBaseExpression::SetOutputValue(
              this,
              (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 72LL * (unsigned int)(v16 - 1)));
      if ( v15 >= 0 )
      {
        --*((_DWORD *)a2 + 4);
        goto LABEL_34;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x288u);
      return (unsigned int)v15;
    }
  }
LABEL_34:
  v17 = *((_QWORD *)this + 46);
  if ( !v17 )
    goto LABEL_10;
  if ( (*(_BYTE *)(v17 + 112) & 4) == 0 )
    goto LABEL_10;
  v11 = CBaseExpression::NotifyAnimationCompleted(this);
  if ( v11 >= 0 )
    goto LABEL_10;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x291u);
  return (unsigned int)v11;
}
