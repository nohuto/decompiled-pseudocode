/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180020AF0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1800210DC (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x18002C724 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x18002C99C (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x18002C9F8 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x18002F068 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1800C3EA8 (-ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v2; // eax
  int v4; // ecx
  unsigned int v6; // edi
  int v8; // eax
  __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  int v14; // eax
  Components::Animations::Animation *v15; // rcx
  int v16; // eax
  char v17; // al
  int v18; // eax
  __int64 v19; // rax
  int v20; // ebp
  Components::Animations::Animation *v21; // rcx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  LONGLONG v28; // rax
  float v29; // xmm2_4
  __int64 v30; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 96);
  v4 = *((_DWORD *)this + 95);
  if ( v2 == v4 )
    goto LABEL_2;
  if ( v4 )
  {
    if ( !v2 )
    {
      v19 = *((_QWORD *)this + 21);
      if ( v19 && *(_QWORD *)(v19 + 8) )
      {
        v20 = *((_DWORD *)a2 + 4);
        v21 = (Components::Animations::Animation *)*((_QWORD *)this + 40);
        *((_QWORD *)this + 42) = a2;
        v22 = Components::Animations::Animation::ApiReset(v21, 1);
        v6 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x404u);
          return v6;
        }
        *((_QWORD *)this + 42) = 0LL;
        v23 = *((_DWORD *)a2 + 4);
        if ( v23 == v20 + 1 )
        {
          v24 = CBaseExpression::SetOutputValue(
                  this,
                  (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 72LL * (unsigned int)(v23 - 1)));
          v6 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x413u);
            return v6;
          }
          --*((_DWORD *)a2 + 4);
        }
      }
      v25 = *((_QWORD *)this + 41);
      if ( v25 )
      {
        if ( (*(_BYTE *)(v25 + 112) & 4) != 0 )
        {
          v26 = CBaseExpression::NotifyAnimationCompleted(this);
          v6 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x41Cu);
            return v6;
          }
        }
      }
      goto LABEL_11;
    }
  }
  else if ( v2 )
  {
    v8 = Components::Animations::Animation::ApiPlay(*((Components::Animations::Animation **)this + 40));
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3D3u);
      return v6;
    }
    v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL) - *((_QWORD *)this + 43);
    if ( (int)Components::Animations::TimeDelta::ToMilliseconds((Components::Animations::TimeDelta *)&v30) > 0 )
      Components::Animations::Animation::UpdateTime(*((Components::Animations::Animation **)this + 40), 0);
    if ( *((_DWORD *)this + 96) == 2 )
    {
      v27 = Components::Animations::Animation::ApiPause(*((Components::Animations::Animation **)this + 40));
      v6 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x3E9u);
        return v6;
      }
    }
    goto LABEL_11;
  }
  v15 = (Components::Animations::Animation *)*((_QWORD *)this + 40);
  if ( v2 == 2 )
  {
    v16 = Components::Animations::Animation::ApiPause(v15);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x428u);
      return v6;
    }
  }
  else
  {
    v18 = Components::Animations::Animation::ApiPlay(v15);
    v6 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x434u);
      return v6;
    }
    *((_QWORD *)this + 44) = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
  }
LABEL_11:
  if ( *((_DWORD *)this + 95) != 1 )
  {
    if ( *((_DWORD *)this + 96) == 1 && (*((_BYTE *)this + 392) & 1) == 0 )
    {
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 376LL) |= 2u;
      *((_BYTE *)this + 392) |= 1u;
    }
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 96) == 1 || (v17 = *((_BYTE *)this + 392), (v17 & 1) == 0) )
  {
LABEL_15:
    *((_DWORD *)this + 95) = *((_DWORD *)this + 96);
    goto LABEL_2;
  }
  *((_BYTE *)this + 392) = v17 & 0xFE;
  *((_DWORD *)this + 95) = *((_DWORD *)this + 96);
LABEL_2:
  if ( (*((_BYTE *)this + 392) & 2) != 0 && *((_DWORD *)this + 95) )
  {
    v9 = *((_QWORD *)this + 46);
    v10 = (float)(int)v9;
    if ( v9 < 0 )
      v10 = v10 + 1.8446744e19;
    v11 = *((_QWORD *)this + 45);
    v12 = v10 / 10000000.0;
    v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
    if ( v11 != v13 )
    {
      v28 = (unsigned __int64)(v13 - v11) / g_qpcFrequency.QuadPart;
      v29 = (float)(int)v28;
      if ( v28 < 0 )
        v29 = v29 + 1.8446744e19;
      v12 = v12 + v29;
    }
    v14 = Components::Animations::Animation::ApiSeek(*((Components::Animations::Animation **)this + 40), v12);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x465u);
      return v6;
    }
    *((_QWORD *)this + 44) = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
  }
  return 0;
}
