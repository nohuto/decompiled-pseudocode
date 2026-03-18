/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18003FCC0
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800403B0 (--1CAnimation@@UEAA@XZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800C1E40 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180019AE0 (-SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180019BB0 (-SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003D240 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x18003F910 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18003F9B0 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x18003F9E0 (-GetQPCFrequency@CAnimation@@UEAA_KXZ.c)
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x18003FA70 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18003FBE4 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxqf @ 0x18017F770 (McTemplateU0xxxqf.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1802080E0 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802081CC (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

void __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  CAnimation *v1; // rbx
  unsigned __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // r14
  CAnimation **v5; // rsi
  CAnimation *v6; // rcx
  char v7; // r13
  float v8; // xmm7_4
  __int64 (**v9)(void); // rax
  __int64 (*v10)(void); // rax
  int PrimitivesCount; // eax
  CAnimation *v12; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v13)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *Primitive; // r12
  CAnimation *v15; // rcx
  __int64 (*v16)(void); // rax
  int v17; // eax
  unsigned int v18; // edi
  __int64 (*v19)(void); // rax
  unsigned int v20; // eax
  CAnimation *v21; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v22)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v23; // r15
  unsigned int v24; // edi
  unsigned __int64 (__fastcall *v25)(CAnimation *); // rax
  unsigned int v26; // eax
  CAnimation *v27; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v28)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v29; // rax
  unsigned int i; // edi
  unsigned __int64 (__fastcall *v31)(CAnimation *); // rax
  unsigned __int64 v32; // rax
  unsigned __int64 (__fastcall *v33)(CAnimation *); // rax
  unsigned int v34; // eax
  CAnimation *v35; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v36)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v37; // rax
  unsigned int v38; // eax
  const struct DwmAnimationPrimitive *v39; // rdx
  char v40; // r12
  const struct DwmAnimationPrimitive *v41; // rdi
  int v42; // ecx
  unsigned __int64 v43; // r15
  __int64 v44; // r14
  unsigned __int64 (__fastcall *v45)(CAnimation *); // rax
  CAnimation *v47; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v48)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v49; // r9
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // r15
  __int64 (*v53)(void); // rax
  LARGE_INTEGER QPCFrequency; // rax
  double LowPart; // xmm0_8
  double v56; // xmm3_8
  float v57; // xmm6_4
  CAnimation *v58; // rcx
  bool (__fastcall *v59)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rax
  char v60; // al
  unsigned int v61; // edi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 (__fastcall *v65)(__int64, int, int, float *); // rax
  int v66; // edx
  unsigned int v67; // eax
  char *v68; // rdi
  unsigned int v69; // eax
  __int64 v70; // r14
  __int64 v71; // rax
  char AdjustedHandoffValue; // al
  float v73; // [rsp+48h] [rbp-39h] BYREF
  float v74; // [rsp+4Ch] [rbp-35h]
  __int64 v75; // [rsp+50h] [rbp-31h]
  const struct DwmAnimationPrimitive *v76; // [rsp+58h] [rbp-29h]
  __int64 v77; // [rsp+60h] [rbp-21h]
  unsigned __int64 v78[3]; // [rsp+68h] [rbp-19h] BYREF
  char v80; // [rsp+F0h] [rbp+6Fh]
  double v81; // [rsp+F0h] [rbp+6Fh]
  float v82; // [rsp+F8h] [rbp+77h] BYREF
  int v83; // [rsp+100h] [rbp+7Fh] BYREF

  v1 = this;
  v2 = *(_QWORD *)(*((_QWORD *)this - 5) + 496LL);
  if ( v2 >= *((_QWORD *)v1 + 10) && *((_DWORD *)v1 + 8) )
  {
    *((_BYTE *)v1 + 56) |= 1u;
    v3 = (*((_BYTE *)v1 + 56) & 0x10) == 0;
    v4 = *((_QWORD *)v1 + 18);
    v75 = v4;
    if ( v3 )
    {
      v4 += v2 - *((_QWORD *)v1 + 19);
      v75 = v4;
    }
    v82 = 0.0;
    v5 = (CAnimation **)((char *)v1 + 208);
    v73 = 0.0;
    v6 = (CAnimation *)*((_QWORD *)v1 + 26);
    v78[0] = 0LL;
    v7 = 0;
    v83 = 0;
    v8 = 0.0;
    v74 = 0.0;
    v9 = *(__int64 (***)(void))v6;
    v77 = v4;
    v10 = *v9;
    if ( (char *)v10 == (char *)CAnimation::GetPrimitivesCount )
      PrimitivesCount = CAnimation::GetPrimitivesCount(v6);
    else
      PrimitivesCount = v10();
    if ( PrimitivesCount )
    {
      v12 = *v5;
      v13 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v5 + 8LL);
      if ( v13 == CAnimation::GetPrimitive )
        Primitive = CAnimation::GetPrimitive(v12, 0);
      else
        Primitive = v13(v12, 0);
    }
    else
    {
      Primitive = 0LL;
    }
    v15 = *v5;
    v76 = Primitive;
    v16 = **(__int64 (***)(void))v15;
    if ( (char *)v16 == (char *)CAnimation::GetPrimitivesCount )
      v17 = CAnimation::GetPrimitivesCount(v15);
    else
      v17 = v16();
    v18 = v17 - 1;
    v19 = **(__int64 (***)(void))*v5;
    if ( (char *)v19 == (char *)CAnimation::GetPrimitivesCount )
      v20 = CAnimation::GetPrimitivesCount(*v5);
    else
      v20 = v19();
    if ( v18 >= v20 )
    {
      v23 = 0LL;
    }
    else
    {
      v21 = *v5;
      v22 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v5 + 8LL);
      if ( v22 == CAnimation::GetPrimitive )
        v23 = CAnimation::GetPrimitive(v21, v18);
      else
        v23 = v22(v21, v18);
    }
    v80 = 0;
    if ( !Primitive )
      goto LABEL_91;
    v24 = *((_DWORD *)v1 + 54);
    if ( v24 != -1 )
    {
      v25 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v5;
      v26 = v25 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v5) : ((__int64 (*)(void))v25)();
      if ( v24 >= v26 )
      {
        v29 = 0LL;
      }
      else
      {
        v27 = *v5;
        v28 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v5 + 8LL);
        v29 = v28 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(v27, v24) : v28(v27, v24);
      }
      if ( *((_QWORD *)v29 + 1) > v4 )
        *((_DWORD *)v1 + 54) = -1;
    }
    for ( i = *((_DWORD *)v1 + 54); ; *((_DWORD *)v1 + 54) = i )
    {
      ++i;
      v31 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v5;
      v32 = v31 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v5) : ((__int64 (*)(void))v31)();
      if ( i >= v32 )
        break;
      v33 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v5;
      v34 = v33 == CAnimation::GetPrimitivesCount ? CAnimation::GetPrimitivesCount(*v5) : ((__int64 (*)(void))v33)();
      if ( i >= v34 )
      {
        v37 = 0LL;
      }
      else
      {
        v35 = *v5;
        v36 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v5 + 8LL);
        v37 = v36 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(v35, i) : v36(v35, i);
      }
      if ( *((_QWORD *)v37 + 1) > v4 )
        break;
    }
    v38 = *((_DWORD *)v1 + 54);
    v1 = this;
    if ( v38 == -1 )
    {
LABEL_91:
      v40 = 0;
    }
    else
    {
      v39 = v76;
      v40 = 1;
      v41 = (const struct DwmAnimationPrimitive *)((char *)v76 + 32 * v38);
      v42 = *(_DWORD *)v41;
      if ( *(_DWORD *)v41 == 4 || v42 == 6 && v41 == v23 )
        v80 = 1;
      while ( ((v42 - 3) & 0xFFFFFFFC) == 0 && v42 != 4 )
      {
        if ( v39 == v41 )
          goto LABEL_127;
        v43 = 0LL;
        v44 = 0LL;
        v45 = **(unsigned __int64 (__fastcall ***)(CAnimation *))*v5;
        if ( v45 == CAnimation::GetPrimitivesCount
           ? CAnimation::GetPrimitivesCount(*v5)
           : ((unsigned int (*)(void))v45)() )
        {
          v47 = *v5;
          v48 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*v5 + 8LL);
          v49 = v48 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive(v47, 0) : v48(v47, 0);
        }
        else
        {
          v49 = 0LL;
        }
        switch ( *(_DWORD *)v41 )
        {
          case 3:
            v50 = *((_QWORD *)v41 + 2);
            v51 = *((_QWORD *)v41 + 1);
            if ( v50 )
            {
              v52 = v77 - v51;
              if ( v50 == 14679294 )
                v43 = v52 % 0xDFFCFE;
              else
                v43 = v52 % v50;
            }
            v44 = v43 + v51 - v50;
            if ( v44 < *((_QWORD *)v49 + 1) )
              v44 = *((_QWORD *)v41 + 1);
            break;
          case 5:
            v70 = *((_QWORD *)v41 + 1);
            v71 = v70 - *((_QWORD *)v49 + 1);
            if ( v77 - v70 <= v71 )
              v71 = v77 - v70;
            v44 = v70 - v71;
            break;
          case 6:
            v44 = *((_QWORD *)v41 + 1);
            break;
        }
        v77 = v44;
        if ( *((_QWORD *)v41 + 1) < v44 )
        {
LABEL_127:
          v4 = v75;
          v40 = 0;
          goto LABEL_74;
        }
        v39 = v76;
        v41 = (const struct DwmAnimationPrimitive *)((char *)v41 - 32);
        if ( *((_QWORD *)v41 + 1) > v44 )
        {
          while ( v41 != v76 )
          {
            v41 = (const struct DwmAnimationPrimitive *)((char *)v41 - 32);
            if ( *((_QWORD *)v41 + 1) <= v44 )
              goto LABEL_57;
          }
          goto LABEL_130;
        }
LABEL_57:
        v42 = *(_DWORD *)v41;
      }
      switch ( v42 )
      {
        case 1:
          v53 = *(__int64 (**)(void))(*(_QWORD *)*v5 + 24LL);
          if ( (char *)v53 == (char *)CAnimation::GetQPCFrequency )
            QPCFrequency = CAnimation::GetQPCFrequency(*v5);
          else
            QPCFrequency.QuadPart = v53();
          LowPart = (double)(int)QPCFrequency.LowPart;
          if ( QPCFrequency.QuadPart < 0 )
            LowPart = LowPart + 1.844674407370955e19;
          v56 = (double)((int)v77 - *((_DWORD *)v41 + 2)) / LowPart;
          v57 = *((float *)v41 + 4) * (v56 * v56) * v56
              + *((float *)v41 + 5) * (v56 * v56)
              + *((float *)v41 + 6) * v56
              + *((float *)v41 + 7);
          break;
        case 4:
          v57 = *((float *)v41 + 4);
          break;
        case 2:
          v57 = CAnimationInterpolator::InterpolateSinusoidal((CAnimationInterpolator *)v5, v41, v77);
          break;
        default:
LABEL_130:
          v4 = v75;
          goto LABEL_91;
      }
      v4 = v75;
      if ( !_finite(v57) )
        goto LABEL_91;
      v7 = v80;
      v8 = v57;
      v74 = v57;
    }
    if ( v40 )
    {
      v58 = *v5;
      v59 = *(bool (__fastcall **)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(*(_QWORD *)*v5 + 16LL);
      v60 = v59 == CAnimation::GetHandoffData
          ? CAnimation::GetHandoffData(v58, (enum DwmAnimationHandoffType::Enum *)&v83, &v73, v78)
          : v59(v58, (enum DwmAnimationHandoffType::Enum *)&v83, &v73, v78);
      v40 = v60;
      if ( v60 )
      {
        if ( v83 )
        {
          AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue(v5, v4);
          v8 = v74;
          v40 = AdjustedHandoffValue;
        }
        if ( v40 )
          v82 = v8;
      }
    }
LABEL_74:
    *((_BYTE *)v1 + 56) &= ~4u;
    *((_BYTE *)v1 + 56) |= 4 * (v7 & 1);
    if ( v40 )
    {
      v61 = 0;
      v81 = (double)(int)v4 / (double)(int)g_qpcFrequency.LowPart;
      if ( *((_DWORD *)v1 + 8) )
      {
        do
        {
          v62 = *((_QWORD *)v1 + 1);
          v63 = *(_QWORD *)(v62 + 16LL * v61);
          v64 = *(unsigned int *)(v62 + 16LL * v61 + 8);
          v65 = *(__int64 (__fastcall **)(__int64, int, int, float *))(*(_QWORD *)v63 + 88LL);
          if ( v65 == CKeyframeAnimation::SetProperty )
          {
            CKeyframeAnimation::SetProperty(v63, v64, 18, &v82);
          }
          else if ( v65 == CEffectGroup::SetProperty )
          {
            CEffectGroup::SetProperty(v63, v64, 18, &v82);
          }
          else if ( v65 == CTranslateTransform::SetProperty )
          {
            CTranslateTransform::SetProperty(v63, v64, 18, &v82);
          }
          else
          {
            v65(v63, v64, 18, &v82);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xxxqf(
              *((_QWORD *)v1 + 1),
              v66,
              LODWORD(v81),
              (_DWORD)v1 - 56,
              *(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL * v61),
              *(_DWORD *)(*((_QWORD *)v1 + 1) + 16LL * v61 + 8),
              SLOBYTE(v82));
          v67 = *((_DWORD *)v1 + 8);
          ++v61;
        }
        while ( v61 < v67 );
        if ( v67 )
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v1 - 5) + 240LL) + 424LL) |= 2u;
      }
    }
    v68 = (char *)v1 - 56;
    if ( *((_DWORD *)v1 + 61) )
    {
      if ( *((_DWORD *)v68 + 74) )
      {
        v69 = *((_DWORD *)v68 + 46);
        if ( v69 < *((_DWORD *)v68 + 44) )
        {
          do
          {
            if ( *(_QWORD *)(*((_QWORD *)v68 + 19) + 16LL * v69) > v4 )
              break;
            v78[0] = *((unsigned int *)v68 + 75);
            v78[1] = *((unsigned int *)v68 + 74);
            CoreUICallSend(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v68 + 2) + 1312LL) + 56LL),
              v78,
              2LL,
              1LL,
              0,
              &unk_180239C77);
            v69 = *((_DWORD *)v68 + 46) + 1;
            *((_DWORD *)v68 + 46) = v69;
          }
          while ( v69 < *((_DWORD *)v68 + 44) );
          v1 = this;
        }
      }
    }
    if ( (*((_BYTE *)v1 + 56) & 0xC) == 4 )
      CAnimation::EndAnimation((CAnimation *)v68);
  }
}
