/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x18002D6C0 (--1CAnimation@@UEAA@XZ.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B9950 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x18002CAB0 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18002CD70 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x18002CDA0 (-GetQPCFrequency@CAnimation@@UEAA_KXZ.c)
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x18002CE40 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18002CFB0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180092A10 (-SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A3C30 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B47A0 (-SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B6550 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800B6794 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxqf @ 0x18015645C (McTemplateU0xxxqf.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1801CABF8 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1801CACE4 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

void __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  CAnimation *v1; // rbx
  unsigned __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // r12
  const struct DwmAnimationPrimitive *v5; // r14
  CAnimation **v6; // rsi
  CAnimation *v7; // rcx
  char v8; // r15
  float v9; // xmm7_4
  __int64 v10; // r13
  __int64 (*v11)(void); // rax
  int PrimitivesCount; // eax
  const struct DwmAnimationPrimitive *(__fastcall *v13)(CAnimation *, unsigned int); // rdx
  CAnimation *v14; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v15)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *Primitive; // rax
  CAnimation *v17; // rcx
  unsigned __int64 (__fastcall *v18)(CAnimation *); // rax
  int v19; // eax
  unsigned int v20; // edi
  __int64 (*v21)(void); // rax
  unsigned int v22; // eax
  CAnimation *v23; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v24)(CAnimation *, unsigned int); // rax
  unsigned int v25; // edi
  unsigned __int64 (__fastcall *v26)(CAnimation *); // rax
  unsigned int v27; // eax
  CAnimation *v28; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v29)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v30; // rax
  unsigned int i; // edi
  unsigned __int64 (__fastcall *v32)(CAnimation *); // rax
  unsigned __int64 v33; // rax
  unsigned __int64 (__fastcall *v34)(CAnimation *); // rax
  unsigned int v35; // eax
  CAnimation *v36; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v37)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v38; // rax
  unsigned int v39; // eax
  const struct DwmAnimationPrimitive *v40; // rdx
  char v41; // r14
  const struct DwmAnimationPrimitive *v42; // rdi
  int v43; // ecx
  __int64 (*v44)(void); // rax
  LARGE_INTEGER QPCFrequency; // rax
  __int64 v46; // r13
  double LowPart; // xmm0_8
  double v48; // xmm3_8
  float v49; // xmm6_4
  CAnimation *v50; // rcx
  bool (__fastcall *v51)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rax
  char v52; // al
  unsigned int v53; // edi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  void (__fastcall *v57)(__int64, __int64, __int64, float *); // rax
  int v58; // edx
  char *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  char AdjustedHandoffValue; // al
  int v64; // [rsp+28h] [rbp-59h]
  float *v65; // [rsp+38h] [rbp-49h]
  float v66; // [rsp+48h] [rbp-39h] BYREF
  float v67; // [rsp+4Ch] [rbp-35h] BYREF
  const struct DwmAnimationPrimitive *v68; // [rsp+50h] [rbp-31h]
  const struct DwmAnimationPrimitive *v69; // [rsp+58h] [rbp-29h]
  unsigned __int64 v70; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v71[3]; // [rsp+68h] [rbp-19h] BYREF
  char v73; // [rsp+F0h] [rbp+6Fh]
  double v74; // [rsp+F0h] [rbp+6Fh]
  float v75; // [rsp+F8h] [rbp+77h] BYREF
  int v76; // [rsp+100h] [rbp+7Fh] BYREF

  v1 = this;
  v2 = *(_QWORD *)(*((_QWORD *)this - 5) + 472LL);
  if ( v2 >= *((_QWORD *)v1 + 10) && *((_DWORD *)v1 + 8) )
  {
    *((_BYTE *)v1 + 56) |= 1u;
    v3 = (*((_BYTE *)v1 + 56) & 0x10) == 0;
    v4 = *((_QWORD *)v1 + 18);
    v71[0] = v4;
    if ( v3 )
    {
      v4 += v2 - *((_QWORD *)v1 + 19);
      v71[0] = v4;
    }
    v5 = 0LL;
    v75 = 0.0;
    v6 = (CAnimation **)((char *)v1 + 208);
    v66 = 0.0;
    v7 = (CAnimation *)*((_QWORD *)v1 + 26);
    v70 = 0LL;
    v8 = 0;
    v76 = 0;
    v9 = 0.0;
    v67 = 0.0;
    v10 = v4;
    v11 = **(__int64 (***)(void))v7;
    if ( (char *)v11 == (char *)CAnimation::GetPrimitivesCount )
      PrimitivesCount = CAnimation::GetPrimitivesCount(v7);
    else
      PrimitivesCount = v11();
    v13 = CAnimation::GetPrimitive;
    if ( PrimitivesCount )
    {
      v14 = *v6;
      v15 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v6 + 8LL);
      if ( v15 == CAnimation::GetPrimitive )
        Primitive = CAnimation::GetPrimitive(v14, 0);
      else
        Primitive = v15(v14, 0);
      v5 = Primitive;
    }
    v17 = *v6;
    v68 = v5;
    v18 = **(unsigned __int64 (__fastcall ***)(CAnimation *))v17;
    if ( v18 == CAnimation::GetPrimitivesCount )
      v19 = CAnimation::GetPrimitivesCount(v17);
    else
      v19 = ((__int64 (__fastcall *)(CAnimation *, _QWORD))v18)(v17, v13);
    v20 = v19 - 1;
    v21 = **(__int64 (***)(void))*v6;
    if ( (char *)v21 == (char *)CAnimation::GetPrimitivesCount )
      v22 = CAnimation::GetPrimitivesCount(*v6);
    else
      v22 = v21();
    if ( v20 >= v22 )
    {
      v69 = 0LL;
    }
    else
    {
      v23 = *v6;
      v24 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v6 + 8LL);
      if ( v24 == CAnimation::GetPrimitive )
        v69 = CAnimation::GetPrimitive(v23, v20);
      else
        v69 = v24(v23, v20);
    }
    v73 = 0;
    if ( !v5 )
      goto LABEL_96;
    v25 = *((_DWORD *)v1 + 54);
    if ( v25 != -1 )
    {
      v26 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
      v27 = v26 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v6) : ((__int64 (*)(void))v26)();
      if ( v25 >= v27 )
      {
        v30 = 0LL;
      }
      else
      {
        v28 = *v6;
        v29 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v6 + 8LL);
        v30 = v29 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(v28, v25) : v29(v28, v25);
      }
      if ( *((_QWORD *)v30 + 1) > v4 )
        *((_DWORD *)v1 + 54) = -1;
    }
    for ( i = *((_DWORD *)v1 + 54); ; *((_DWORD *)v1 + 54) = i )
    {
      ++i;
      v32 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
      v33 = v32 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v6) : ((__int64 (*)(void))v32)();
      if ( i >= v33 )
        break;
      v34 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v6;
      v35 = v34 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v6) : ((__int64 (*)(void))v34)();
      if ( i >= v35 )
      {
        v38 = 0LL;
      }
      else
      {
        v36 = *v6;
        v37 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v6 + 8LL);
        v38 = v37 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(v36, i) : v37(v36, i);
      }
      if ( *((_QWORD *)v38 + 1) > v4 )
        break;
    }
    v39 = *((_DWORD *)v1 + 54);
    v8 = 0;
    if ( v39 == -1 )
    {
LABEL_96:
      v41 = 0;
    }
    else
    {
      v40 = v68;
      v41 = 1;
      v42 = (const struct DwmAnimationPrimitive *)((char *)v68 + 32 * v39);
      if ( *(_DWORD *)v42 == 4 || *(_DWORD *)v42 == 6 && v42 == v69 )
        v73 = 1;
LABEL_40:
      while ( 1 )
      {
        v43 = *(_DWORD *)v42;
        if ( ((*(_DWORD *)v42 - 3) & 0xFFFFFFFC) != 0 || v43 == 4 )
          break;
        if ( v40 == v42
          || (v60 = CAnimationInterpolator::TransformTime((CAnimation *)((char *)v1 + 208), v42, v10),
              v10 = v60,
              *((_QWORD *)v42 + 1) < v60) )
        {
          v41 = 0;
          goto LABEL_57;
        }
        v40 = v68;
        v42 = (const struct DwmAnimationPrimitive *)((char *)v42 - 32);
        if ( *((_QWORD *)v42 + 1) > v60 )
        {
          while ( v42 != v68 )
          {
            v42 = (const struct DwmAnimationPrimitive *)((char *)v42 - 32);
            if ( *((_QWORD *)v42 + 1) <= v60 )
              goto LABEL_40;
          }
          goto LABEL_96;
        }
      }
      switch ( v43 )
      {
        case 1:
          v44 = *(__int64 (**)(void))(*(_QWORD *)*v6 + 24LL);
          if ( (char *)v44 == (char *)CAnimation::GetQPCFrequency )
            QPCFrequency = CAnimation::GetQPCFrequency(*v6);
          else
            QPCFrequency.QuadPart = v44();
          v46 = v10 - *((_QWORD *)v42 + 1);
          LowPart = (double)(int)QPCFrequency.LowPart;
          if ( QPCFrequency.QuadPart < 0 )
            LowPart = LowPart + 1.844674407370955e19;
          v48 = (double)(int)v46 / LowPart;
          v49 = *((float *)v42 + 4) * (v48 * v48) * v48
              + *((float *)v42 + 5) * (v48 * v48)
              + *((float *)v42 + 6) * v48
              + *((float *)v42 + 7);
          break;
        case 2:
          v49 = CAnimationInterpolator::InterpolateSinusoidal((CAnimation *)((char *)v1 + 208), v42, v10);
          break;
        case 4:
          v49 = *((float *)v42 + 4);
          break;
        default:
          goto LABEL_96;
      }
      if ( !_finite(v49) )
        goto LABEL_96;
      v8 = v73;
      v9 = v49;
      v67 = v49;
    }
    if ( v41 )
    {
      v50 = *v6;
      v51 = *(bool (__fastcall **)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(*(_QWORD *)*v6 + 16LL);
      v52 = v51 == CAnimation::GetHandoffData
          ? CAnimation::GetHandoffData(v50, (enum DwmAnimationHandoffType::Enum *)&v76, &v66, &v70)
          : v51(v50, (enum DwmAnimationHandoffType::Enum *)&v76, &v66, &v70);
      v41 = v52;
      if ( v52 )
      {
        if ( v76 )
        {
          v65 = &v67;
          HIWORD(v64) = HIWORD(v66);
          AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue((char *)v1 + 208, v4);
          v9 = v67;
          v41 = AdjustedHandoffValue;
        }
        if ( v41 )
          v75 = v9;
      }
    }
LABEL_57:
    *((_BYTE *)v1 + 56) &= ~4u;
    *((_BYTE *)v1 + 56) |= 4 * (v8 & 1);
    if ( v41 )
    {
      v53 = 0;
      v74 = (double)(int)v4 / (double)(int)g_qpcFrequency.LowPart;
      if ( *((_DWORD *)v1 + 8) )
      {
        do
        {
          v54 = *((_QWORD *)v1 + 1);
          v55 = *(_QWORD *)(v54 + 16LL * v53);
          v56 = *(unsigned int *)(v54 + 16LL * v53 + 8);
          v57 = *(void (__fastcall **)(__int64, __int64, __int64, float *))(*(_QWORD *)v55 + 88LL);
          if ( (char *)v57 == (char *)CKeyframeAnimation::SetProperty )
          {
            CKeyframeAnimation::SetProperty(v55, v56, 18LL, &v75);
          }
          else if ( (char *)v57 == (char *)CEffectGroup::SetProperty )
          {
            CEffectGroup::SetProperty(v55, v56, 18LL, &v75);
          }
          else if ( (char *)v57 == (char *)CPrimitiveColor::SetProperty )
          {
            CPrimitiveColor::SetProperty(v55, v56, 18LL, &v75);
          }
          else if ( (char *)v57 == (char *)CTranslateTransform::SetProperty )
          {
            CTranslateTransform::SetProperty(v55, v56, 18LL, &v75);
          }
          else
          {
            v57(v55, v56, 18LL, &v75);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xxxqf(
              *((_QWORD *)v1 + 1),
              v58,
              LODWORD(v74),
              (_DWORD)v1 - 56,
              *(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL * v53),
              *(_DWORD *)(*((_QWORD *)v1 + 1) + 16LL * v53 + 8),
              SLOBYTE(v75));
          ++v53;
        }
        while ( v53 < *((_DWORD *)v1 + 8) );
        v4 = v71[0];
      }
      if ( *((_DWORD *)v1 + 8) )
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v1 - 5) + 216LL) + 376LL) |= 2u;
    }
    v59 = (char *)v1 - 56;
    if ( *((_DWORD *)v1 + 61) && *((_DWORD *)v59 + 74) && *((_DWORD *)v59 + 46) < *((_DWORD *)v59 + 44) )
    {
      do
      {
        v61 = *((_QWORD *)v59 + 19);
        v62 = 2LL * *((unsigned int *)v59 + 46);
        if ( *(_QWORD *)(v61 + 16LL * *((unsigned int *)v59 + 46)) > v4 )
          break;
        v71[0] = *((unsigned int *)v59 + 75);
        v71[1] = *((unsigned int *)v59 + 74);
        LODWORD(v65) = *(_DWORD *)(v61 + 8 * v62 + 8);
        LOWORD(v64) = 0;
        CoreUICallSend(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v59 + 2) + 1288LL) + 56LL),
          v71,
          2LL,
          1LL,
          v64,
          &unk_1801F0512,
          v65);
        ++*((_DWORD *)v59 + 46);
      }
      while ( *((_DWORD *)v59 + 46) < *((_DWORD *)v59 + 44) );
      v1 = this;
    }
    if ( (*((_BYTE *)v1 + 56) & 0xC) == 4 )
      CAnimation::EndAnimation((CAnimation *)v59);
  }
}
