/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800BB9F0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800BD358 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001ED80 (-SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180020480 (-SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x180030DF0 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x1800BC4B0 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800BC560 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800BC7A4 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BD6A0 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800D2C14 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxxqf @ 0x1801635DC (Template_xxxqf.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1801AFF80 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1801B006C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  CAnimation *v1; // rdi
  unsigned __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // r12
  __int64 (****v5)(void); // r15
  __int64 v6; // rcx
  char v7; // r13
  float v8; // xmm7_4
  __int64 (**v9)(void); // rax
  __int64 (*v10)(void); // rax
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 (***v13)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v14)(CAnimation *, unsigned int); // rax
  __int64 (**v15)(void); // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 (*v18)(void); // rax
  __int64 v19; // r14
  __int64 (*v20)(void); // rax
  __int64 (**v21)(void); // rcx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 (*v24)(void); // rax
  __int64 (**v25)(void); // rcx
  unsigned int v26; // eax
  __int64 (***v27)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v28)(CAnimation *, unsigned int); // rax
  __int64 (**v29)(void); // r9
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 (*v32)(void); // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 (*v36)(void); // rax
  __int64 (**v37)(void); // rcx
  unsigned int v38; // eax
  __int64 (***v39)(void); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v40)(CAnimation *, unsigned int); // rax
  __int64 (**v41)(void); // r9
  unsigned __int64 v42; // r8
  __int64 (*v43)(void); // rax
  __int64 v44; // rax
  unsigned int i; // ebx
  __int64 (***v46)(void); // rcx
  __int64 (*v47)(void); // rax
  unsigned __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // r14
  char AnimationValue; // r12
  __int64 v52; // rbx
  int v53; // ecx
  unsigned __int64 v54; // r14
  __int64 v55; // rsi
  __int64 (*v56)(void); // rax
  __int64 (**v57)(void); // rcx
  int v58; // eax
  unsigned __int64 (__fastcall ***v59)(CAnimation *); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v60)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  unsigned __int64 (__fastcall **v61)(CAnimation *); // r9
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rdx
  unsigned __int64 (__fastcall *v64)(CAnimation *); // rax
  __int64 v65; // r9
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // r14
  __int64 (*v68)(void); // rax
  LARGE_INTEGER v69; // rax
  double LowPart; // xmm0_8
  double v71; // xmm3_8
  float v72; // xmm6_4
  __int64 (***v73)(void); // rbx
  bool (__fastcall *v74)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *); // rax
  __int64 (**v75)(void); // rcx
  __int64 v76; // r14
  unsigned int v77; // ebx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 (__fastcall *v81)(__int64, int, int, float *); // rax
  CAnimation *v83; // rcx
  unsigned __int64 (__fastcall *v84)(CAnimation *); // rax
  unsigned int v85; // eax
  unsigned __int64 (__fastcall ***v86)(CAnimation *); // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v87)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *v88; // rax
  int updated; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // r8
  __int64 (**v94)(void); // rax
  __int64 v95; // rdx
  char AdjustedHandoffValue; // al
  int v97; // [rsp+48h] [rbp-59h] BYREF
  float v98; // [rsp+4Ch] [rbp-55h]
  __int64 v99; // [rsp+50h] [rbp-51h]
  __int64 v100; // [rsp+58h] [rbp-49h]
  __int64 v101[2]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v102[2]; // [rsp+70h] [rbp-31h] BYREF
  double j; // [rsp+108h] [rbp+67h]
  char v105; // [rsp+110h] [rbp+6Fh]
  float v106; // [rsp+118h] [rbp+77h] BYREF
  int v107; // [rsp+120h] [rbp+7Fh] BYREF

  v1 = this;
  v2 = *(_QWORD *)(*((_QWORD *)this - 5) + 520LL);
  if ( v2 < *((_QWORD *)v1 + 10) || !*((_DWORD *)v1 + 8) )
    return 1;
  *((_BYTE *)v1 + 56) |= 1u;
  v3 = (*((_BYTE *)v1 + 56) & 0x10) == 0;
  v4 = *((_QWORD *)v1 + 18);
  v100 = v4;
  if ( v3 )
  {
    v4 += v2 - *((_QWORD *)v1 + 19);
    v100 = v4;
  }
  v106 = 0.0;
  v5 = (__int64 (****)(void))((char *)v1 + 208);
  v97 = 0;
  v6 = *((_QWORD *)v1 + 26);
  v102[0] = 0LL;
  v107 = 0;
  v7 = 0;
  v8 = 0.0;
  v101[0] = v4;
  v9 = *(__int64 (***)(void))v6;
  v98 = 0.0;
  v10 = *v9;
  if ( (char *)v10 == (char *)CAnimation::GetPrimitivesCount
    && (v11 = *(_DWORD **)(v6 + 16),
        v10 = *(__int64 (**)(void))(*(_QWORD *)v11 + 32LL),
        (char *)v10 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount) )
  {
    v12 = v11[6] >> 5;
  }
  else
  {
    v12 = v10();
  }
  if ( !v12 )
    goto LABEL_151;
  v13 = *v5;
  v14 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(**v5)[1];
  if ( v14 != CAnimation::GetPrimitive
    || (v13 = (__int64 (***)(void))v13[2],
        v14 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v13)[3],
        v14 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive) )
  {
    v19 = ((__int64 (__fastcall *)(__int64 (***)(void), _QWORD, const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int)))v14)(
            v13,
            0LL,
            CSharedSectionAnimationPrimitiveBuffer::GetPrimitive);
    v99 = v19;
    goto LABEL_15;
  }
  v15 = v13[2];
  v16 = *((unsigned int *)v13 + 7);
  v17 = *((unsigned int *)v15 + 16);
  if ( v16 >= v17
    || *((unsigned int *)v13 + 6) > v17 - v16
    || (v18 = v15[9]) == 0LL
    || (v19 = (__int64)v18 + v16, (v99 = (__int64)v18 + v16) == 0) )
  {
LABEL_151:
    v99 = 0LL;
    v19 = 0LL;
  }
LABEL_15:
  v20 = ***v5;
  if ( (char *)v20 == (char *)CAnimation::GetPrimitivesCount
    && (v21 = (*v5)[2],
        v20 = (__int64 (*)(void))*((_QWORD *)*v21 + 4),
        (char *)v20 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount) )
  {
    v22 = *((_DWORD *)v21 + 6) >> 5;
  }
  else
  {
    v22 = v20();
  }
  v23 = v22 - 1;
  v24 = ***v5;
  if ( (char *)v24 == (char *)CAnimation::GetPrimitivesCount
    && (v25 = (*v5)[2],
        v24 = (__int64 (*)(void))*((_QWORD *)*v25 + 4),
        (char *)v24 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount) )
  {
    v26 = *((_DWORD *)v25 + 6) >> 5;
  }
  else
  {
    v26 = v24();
  }
  if ( v23 < v26 )
  {
    v27 = *v5;
    v28 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(**v5)[1];
    if ( v28 != CAnimation::GetPrimitive
      || (v27 = (__int64 (***)(void))v27[2],
          v28 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v27)[3],
          v28 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive) )
    {
      v33 = (__int64)v28((CAnimation *)v27, v23);
      goto LABEL_29;
    }
    v29 = v27[2];
    v30 = *((unsigned int *)v27 + 7);
    v31 = *((unsigned int *)v29 + 16);
    if ( v30 < v31 && *((unsigned int *)v27 + 6) <= v31 - v30 )
    {
      v32 = v29[9];
      if ( v32 )
      {
        if ( (__int64 (*)(void))((char *)v32 + v30) )
        {
          v33 = (__int64)v32 + 32 * v23 + v30;
          goto LABEL_29;
        }
      }
    }
  }
  v33 = 0LL;
LABEL_29:
  v34 = 1LL;
  v105 = 0;
  if ( !v19 )
  {
LABEL_129:
    AnimationValue = 0;
    goto LABEL_84;
  }
  v35 = *((unsigned int *)v1 + 54);
  if ( (_DWORD)v35 != -1 )
  {
    v36 = ***v5;
    if ( (char *)v36 == (char *)CAnimation::GetPrimitivesCount
      && (v37 = (*v5)[2],
          v34 = (unsigned __int64)CSharedSectionAnimationPrimitiveBuffer::GetCount,
          v36 = (__int64 (*)(void))*((_QWORD *)*v37 + 4),
          (char *)v36 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount) )
    {
      v38 = *((_DWORD *)v37 + 6) >> 5;
    }
    else
    {
      v38 = v36();
    }
    if ( (unsigned int)v35 < v38 )
    {
      v39 = *v5;
      v40 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(**v5)[1];
      if ( v40 != CAnimation::GetPrimitive
        || (v39 = (__int64 (***)(void))v39[2],
            v40 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(*v39)[3],
            v40 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive) )
      {
        v44 = (__int64)v40((CAnimation *)v39, v35);
        goto LABEL_42;
      }
      v41 = v39[2];
      v42 = *((unsigned int *)v39 + 7);
      v34 = *((unsigned int *)v41 + 16);
      if ( v42 < v34 )
      {
        v34 -= v42;
        if ( *((unsigned int *)v39 + 6) <= v34 )
        {
          v43 = v41[9];
          if ( v43 )
          {
            if ( (__int64 (*)(void))((char *)v43 + v42) )
            {
              v44 = (__int64)v43 + 32 * v35 + v42;
              goto LABEL_42;
            }
          }
        }
      }
    }
    v44 = 0LL;
LABEL_42:
    if ( *(_QWORD *)(v44 + 8) > v4 )
      *((_DWORD *)v1 + 54) = -1;
  }
  for ( i = *((_DWORD *)v1 + 54); ; *((_DWORD *)v1 + 54) = i )
  {
    v46 = *v5;
    ++i;
    v47 = ***v5;
    if ( (char *)v47 == (char *)CAnimation::GetPrimitivesCount
      && (v46 = (__int64 (***)(void))v46[2],
          v47 = (*v46)[4],
          (char *)v47 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount) )
    {
      v48 = (unsigned __int64)*((unsigned int *)v46 + 6) >> 5;
    }
    else
    {
      v48 = ((__int64 (__fastcall *)(__int64 (***)(void), unsigned __int64))v47)(v46, v34);
    }
    if ( i >= v48 )
      break;
    v83 = (CAnimation *)*v5;
    v84 = (unsigned __int64 (__fastcall *)(CAnimation *))***v5;
    v85 = v84 == CAnimation::GetPrimitivesCount
        ? CAnimation::GetPrimitivesCount(v83)
        : ((__int64 (__fastcall *)(CAnimation *, unsigned __int64))v84)(v83, v34);
    if ( i >= v85 )
    {
      v88 = 0LL;
    }
    else
    {
      v86 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v5;
      v87 = (const struct DwmAnimationPrimitive *(__fastcall *)(CAnimation *, unsigned int))(**v5)[1];
      v88 = v87 == CAnimation::GetPrimitive ? CAnimation::GetPrimitive((CAnimation *)v86, i) : v87((CAnimation *)v86, i);
    }
    if ( *((_QWORD *)v88 + 1) > v4 )
      break;
  }
  v49 = *((_DWORD *)v1 + 54);
  v7 = 0;
  v1 = this;
  v50 = v99;
  if ( v49 == -1 )
    goto LABEL_129;
  AnimationValue = 1;
  v52 = v99 + 32LL * v49;
  if ( *(_DWORD *)v52 == 4 || *(_DWORD *)v52 == 6 && v52 == v33 )
    v105 = 1;
LABEL_52:
  while ( 1 )
  {
    v53 = *(_DWORD *)v52;
    if ( ((*(_DWORD *)v52 - 3) & 0xFFFFFFFC) != 0 || v53 == 4 )
      break;
    if ( v50 == v52 )
      goto LABEL_161;
    v54 = 0LL;
    v55 = 0LL;
    v56 = ***v5;
    if ( (char *)v56 == (char *)CAnimation::GetPrimitivesCount
      && (v57 = (*v5)[2],
          v56 = (__int64 (*)(void))*((_QWORD *)*v57 + 4),
          (char *)v56 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount) )
    {
      v58 = *((_DWORD *)v57 + 6) >> 5;
    }
    else
    {
      v58 = v56();
    }
    if ( !v58 )
      goto LABEL_157;
    v59 = (unsigned __int64 (__fastcall ***)(CAnimation *))*v5;
    v60 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(**v5)[1];
    if ( v60 == CAnimation::GetPrimitive )
    {
      v59 = (unsigned __int64 (__fastcall ***)(CAnimation *))v59[2];
      v60 = (const struct DwmAnimationPrimitive *(__fastcall *)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*v59)[3];
      if ( v60 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
      {
        v61 = v59[2];
        v62 = *((unsigned int *)v59 + 7);
        v63 = *((unsigned int *)v61 + 16);
        if ( v62 < v63 && *((unsigned int *)v59 + 6) <= v63 - v62 )
        {
          v64 = v61[9];
          if ( v64 )
          {
            v65 = (__int64)v64 + v62;
            if ( (unsigned __int64 (__fastcall *)(CAnimation *))((char *)v64 + v62) )
              goto LABEL_65;
          }
        }
LABEL_157:
        v65 = 0LL;
        goto LABEL_65;
      }
    }
    v65 = (__int64)v60((CSharedSectionAnimationPrimitiveBuffer *)v59, 0);
LABEL_65:
    switch ( *(_DWORD *)v52 )
    {
      case 3:
        v66 = *(_QWORD *)(v52 + 16);
        if ( v66 )
        {
          v67 = v101[0] - *(_QWORD *)(v52 + 8);
          if ( v66 == 14259966 )
            v54 = v67 % 0xD996FE;
          else
            v54 = v67 % v66;
        }
        v55 = v54 + *(_QWORD *)(v52 + 8) - v66;
        if ( v55 < *(_QWORD *)(v65 + 8) )
          v55 = *(_QWORD *)(v52 + 8);
        break;
      case 5:
        v92 = *(_QWORD *)(v52 + 8);
        v93 = v101[0] - v92;
        if ( v101[0] - v92 > v92 - *(_QWORD *)(v65 + 8) )
          v93 = *(_QWORD *)(v52 + 8) - *(_QWORD *)(v65 + 8);
        v55 = v92 - v93;
        break;
      case 6:
        v55 = *(_QWORD *)(v52 + 8);
        break;
    }
    v101[0] = v55;
    if ( *(_QWORD *)(v52 + 8) < v55 )
    {
LABEL_161:
      AnimationValue = 0;
      goto LABEL_130;
    }
    v50 = v99;
    v52 -= 32LL;
    if ( *(_QWORD *)(v52 + 8) > v55 )
    {
      while ( v52 != v99 )
      {
        v52 -= 32LL;
        if ( *(_QWORD *)(v52 + 8) <= v55 )
          goto LABEL_52;
      }
      goto LABEL_129;
    }
  }
  switch ( v53 )
  {
    case 1:
      v68 = (**v5)[3];
      if ( (char *)v68 == (char *)CAnimation::GetQPCFrequency )
        v69 = g_qpcFrequency;
      else
        v69.QuadPart = v68();
      LowPart = (double)(int)v69.LowPart;
      if ( v69.QuadPart < 0 )
        LowPart = LowPart + 1.844674407370955e19;
      v71 = (double)(LODWORD(v101[0]) - *(_DWORD *)(v52 + 8)) / LowPart;
      v72 = *(float *)(v52 + 16) * (v71 * v71) * v71
          + *(float *)(v52 + 20) * (v71 * v71)
          + *(float *)(v52 + 24) * v71
          + *(float *)(v52 + 28);
      break;
    case 2:
      v72 = CAnimationInterpolator::InterpolateSinusoidal(
              (CAnimationInterpolator *)v5,
              (const struct DwmAnimationPrimitive *)v52,
              v101[0]);
      break;
    case 4:
      v72 = *(float *)(v52 + 16);
      break;
    default:
      goto LABEL_129;
  }
  if ( !_finite(v72) )
    goto LABEL_129;
  v7 = v105;
  v8 = v72;
  v98 = v72;
LABEL_84:
  if ( !AnimationValue )
    goto LABEL_130;
  v73 = *v5;
  v74 = (bool (__fastcall *)(CAnimation *, enum DwmAnimationHandoffType::Enum *, float *, unsigned __int64 *))(**v5)[2];
  if ( v74 == CAnimation::GetHandoffData )
  {
    v75 = v73[16];
    AnimationValue = 1;
    if ( !v75 )
      goto LABEL_87;
    v94 = v73[4];
    if ( (__int64 (**)(void))v75[17] > v94 )
      goto LABEL_87;
    v95 = (__int64)v73[18];
    if ( ((_BYTE)v73[1] & 0x20) == 0 )
      v95 += (char *)v94 - (char *)v73[19];
    AnimationValue = CAnimationInterpolator::GetAnimationValue(
                       (CAnimationInterpolator *)(v75 + 33),
                       v95,
                       (float *)v73 + 34,
                       0LL);
    if ( AnimationValue )
    {
      ReleaseInterface<IBitmapLock>(v73 + 16);
LABEL_87:
      v107 = *((_DWORD *)v73 + 28);
      v97 = *((_DWORD *)v73 + 34);
      v102[0] = v73[15];
      if ( ((_BYTE)v73[1] & 0x40) == 0 )
      {
        if ( *((_DWORD *)v73 + 49) )
        {
          v90 = *((unsigned int *)v73 + 48);
          if ( (_DWORD)v90 )
          {
            v101[0] = *((unsigned int *)v73 + 49);
            v91 = (__int64)*(v73 - 11);
            v101[1] = v90;
            CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v91 + 1352) + 56LL), v101, 2LL, 1LL, 1, &unk_1801D53D6);
            *((_BYTE *)v73 + 8) |= 0x40u;
          }
        }
      }
    }
  }
  else
  {
    AnimationValue = v74((CAnimation *)*v5, (enum DwmAnimationHandoffType::Enum *)&v107, (float *)&v97, v102);
  }
  if ( AnimationValue )
  {
    v76 = v100;
    if ( v107 )
    {
      AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue(v5, v100);
      v8 = v98;
      AnimationValue = AdjustedHandoffValue;
    }
    if ( AnimationValue )
      v106 = v8;
  }
  else
  {
LABEL_130:
    v76 = v100;
  }
  *((_BYTE *)v1 + 56) &= ~4u;
  *((_BYTE *)v1 + 56) |= 4 * (v7 & 1);
  if ( AnimationValue )
  {
    v77 = 0;
    for ( j = (double)(int)v76 / (double)(int)g_qpcFrequency.LowPart; v77 < *((_DWORD *)v1 + 8); ++v77 )
    {
      v78 = *((_QWORD *)v1 + 1);
      v79 = *(_QWORD *)(v78 + 16LL * v77);
      v80 = *(unsigned int *)(v78 + 16LL * v77 + 8);
      v81 = *(__int64 (__fastcall **)(__int64, int, int, float *))(*(_QWORD *)v79 + 80LL);
      if ( v81 == CKeyframeAnimation::SetProperty )
      {
        if ( (_DWORD)v80 == 22 )
        {
          *(float *)(*(_QWORD *)(v79 + 320) + 44LL) = fminf(fmaxf(v106, 0.0), 1.0);
          if ( (*(_BYTE *)(*(_QWORD *)(v79 + 328) + 112LL) & 4) != 0 )
          {
            if ( *(_DWORD *)(v79 + 380) )
            {
              updated = CKeyframeAnimation::UpdatePlaybackState(v79, 0, 0, 0LL);
              if ( updated < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x7E9u);
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x7EEu);
        }
      }
      else if ( v81 == CEffectGroup::SetProperty )
      {
        CEffectGroup::SetProperty(v79, v80, 18, &v106);
      }
      else if ( (char *)v81 == (char *)CPrimitiveColor::SetProperty )
      {
        CPrimitiveColor::SetProperty(v79, v80, 18LL, &v106);
      }
      else if ( v81 == CTranslateTransform::SetProperty )
      {
        CTranslateTransform::SetProperty(v79, v80, 18, &v106);
      }
      else
      {
        v81(v79, v80, 18, &v106);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xxxqf(
          *((_QWORD *)v1 + 1),
          v80,
          LODWORD(j),
          (_DWORD)v1 - 56,
          *(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL * v77),
          *(_DWORD *)(*((_QWORD *)v1 + 1) + 16LL * v77 + 8),
          SLOBYTE(v106));
    }
  }
  if ( *((_DWORD *)v1 + 61) && *((_DWORD *)v1 + 60) && *((_DWORD *)v1 + 32) < *((_DWORD *)v1 + 30) )
  {
    do
    {
      if ( *(_QWORD *)(*((_QWORD *)v1 + 12) + 16LL * *((unsigned int *)v1 + 32)) > v76 )
        break;
      v102[0] = *((unsigned int *)v1 + 61);
      v102[1] = *((unsigned int *)v1 + 60);
      CoreUICallSend(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 - 5) + 1352LL) + 56LL), v102, 2LL, 1LL, 0, &unk_1801D53D2);
      ++*((_DWORD *)v1 + 32);
    }
    while ( *((_DWORD *)v1 + 32) < *((_DWORD *)v1 + 30) );
  }
  if ( (*((_BYTE *)v1 + 56) & 0xC) == 4 )
    CAnimation::EndAnimation((CAnimation *)((char *)v1 - 56));
  return 1;
}
