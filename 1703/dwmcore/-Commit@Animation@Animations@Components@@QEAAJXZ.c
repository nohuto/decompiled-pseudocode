/*
 * XREFs of ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x18002CAD0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?SetVector2Value@CKeyframeAnimation@@UEAAJMM@Z @ 0x18001EF50 (-SetVector2Value@CKeyframeAnimation@@UEAAJMM@Z.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x180028CDC (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x18002AA3C (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x1801B9744 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Animation::Commit(Components::Animations::Animation *this)
{
  CKeyframeAnimation *v1; // rbx
  int v3; // eax
  __int64 (__fastcall *v4)(CKeyframeAnimation *__hidden, float); // rax
  float v5; // xmm1_4
  __int64 (__fastcall **v6)(_QWORD); // r8
  unsigned int v7; // ecx
  __int64 v8; // rdx
  float *v9; // rax
  __int64 result; // rax
  double *v11; // rcx
  double v12; // xmm3_8
  double v13; // xmm0_8
  __int64 (__fastcall *v14)(CKeyframeAnimation *__hidden, float, float, float, float); // rax
  float v15; // xmm2_4
  __int64 (__fastcall **v16)(_QWORD); // r8
  __int128 v17; // xmm0
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(_QWORD); // rax
  Components::Animations::AnimationManager *v21; // rbx
  double *v22; // rcx
  __int64 (__fastcall *v23)(CKeyframeAnimation *, float, float); // rax
  float v24; // xmm2_4
  float v25; // xmm1_4
  __int128 v26; // [rsp+30h] [rbp-18h] BYREF
  Components::Animations::Animation *v27; // [rsp+50h] [rbp+8h] BYREF

  v1 = (CKeyframeAnimation *)*((_QWORD *)this + 8);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 12);
    if ( v3 != 18 )
    {
      if ( v3 == 70 )
      {
        v11 = *(double **)(*((_QWORD *)this + 1) + 232LL);
        v12 = v11[2];
        v13 = v11[3];
        v14 = *(__int64 (__fastcall **)(CKeyframeAnimation *__hidden, float, float, float, float))(*(_QWORD *)v1 + 32LL);
        v15 = v11[1];
        *(float *)&v26 = *v11;
        *((float *)&v26 + 1) = v15;
        *(float *)&v13 = v13;
        *((float *)&v26 + 2) = v12;
        HIDWORD(v26) = LODWORD(v13);
        if ( v14 == CKeyframeAnimation::SetColorValue )
        {
          v16 = (__int64 (__fastcall **)(_QWORD))*((_QWORD *)v1 + 14);
          v17 = v26;
          v18 = *((_DWORD *)v16 + 4);
          if ( v18 == -1 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xBFu);
          }
          else
          {
            if ( *((_DWORD *)v16 + 12) != v18 )
            {
              *((_DWORD *)v16 + 4) = v18 + 1;
              v19 = 9LL * v18;
              v20 = v16[3];
              *((_DWORD *)v20 + 2 * v19 + 16) = 70;
              *(_OWORD *)((char *)v20 + 8 * v19) = v17;
              *((_BYTE *)v20 + 8 * v19 + 68) = 1;
              goto LABEL_7;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x23Eu);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v3 == 35 )
        {
          v22 = *(double **)(*((_QWORD *)this + 1) + 232LL);
          v23 = *(__int64 (__fastcall **)(CKeyframeAnimation *, float, float))(*(_QWORD *)v1 + 8LL);
          if ( v23 == CKeyframeAnimation::SetVector2Value )
          {
            v25 = *v22;
            v24 = v22[1];
            result = CKeyframeAnimation::SetVector2Value(v1, v25, v24);
          }
          else
          {
            result = ((__int64 (__fastcall *)(CKeyframeAnimation *))v23)(v1);
          }
          if ( (int)result < 0 )
            return result;
          goto LABEL_7;
        }
        if ( v3 == 52 )
        {
          result = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)v1 + 16LL))(v1);
          if ( (int)result < 0 )
            return result;
          goto LABEL_7;
        }
        if ( v3 != 69 )
        {
          if ( v3 == 71 )
          {
            Components::Animations::Value::GetQuaternion(*(_QWORD *)(*((_QWORD *)this + 1) + 232LL), &v26);
            result = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)v1 + 40LL))(v1);
            if ( (int)result < 0 )
              return result;
          }
          goto LABEL_7;
        }
        Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 1) + 232LL), (__int64)&v26);
        v14 = *(__int64 (__fastcall **)(CKeyframeAnimation *__hidden, float, float, float, float))(*(_QWORD *)v1 + 24LL);
      }
      result = ((__int64 (__fastcall *)(CKeyframeAnimation *))v14)(v1);
      if ( (int)result < 0 )
        return result;
      goto LABEL_7;
    }
    v4 = **(__int64 (__fastcall ***)(CKeyframeAnimation *__hidden, float))v1;
    v5 = **(double **)(*((_QWORD *)this + 1) + 232LL);
    if ( v4 != CKeyframeAnimation::SetScalarValue )
    {
      result = ((__int64 (__fastcall *)(CKeyframeAnimation *))v4)(v1);
      if ( (int)result < 0 )
        return result;
      goto LABEL_7;
    }
    v6 = (__int64 (__fastcall **)(_QWORD))*((_QWORD *)v1 + 14);
    v7 = *((_DWORD *)v6 + 4);
    if ( v7 == -1 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xBFu);
    }
    else
    {
      if ( *((_DWORD *)v6 + 12) != v7 )
      {
        *((_DWORD *)v6 + 4) = v7 + 1;
        v8 = 9LL * v7;
        v9 = (float *)v6[3];
        v9[2 * v8] = v5;
        LODWORD(v9[2 * v8 + 16]) = 18;
        LOBYTE(v9[2 * v8 + 17]) = 1;
        goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x1D6u);
  }
LABEL_7:
  if ( (*((_BYTE *)this + 72) & 0x20) == 0
    || (result = Components::Animations::Animation::ApiReset(this, 1), (int)result >= 0) )
  {
    if ( (*((_BYTE *)this + 72) & 0x11) == 0x11 )
    {
      v21 = Components::Animations::AnimationManager::s_PORT_pSingleton;
      v27 = this;
      Components::Animations::ArrayListF<Components::Animations::Animation *>::Add(
        (__int64)Components::Animations::AnimationManager::s_PORT_pSingleton + 80,
        &v27);
      *((_BYTE *)v21 + 176) |= 4u;
      *((_BYTE *)this + 72) &= ~1u;
    }
    return 1LL;
  }
  return result;
}
