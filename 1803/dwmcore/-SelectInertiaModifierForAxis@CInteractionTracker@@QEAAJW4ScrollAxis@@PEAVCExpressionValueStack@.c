/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18019552C
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z @ 0x1801BE5C4 (-SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x180187A7C (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187CD0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180188254 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x180192F1C (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x180192FAC (--$-4VCScalarForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCScalarFo.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x180194320 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x180195FE4 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18019C424 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?GetInitialValue@CScrollAnimation@@QEBAMXZ @ 0x1801BE160 (-GetInitialValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801BE2A0 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801CA004 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1801CB508 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1801CB6B4 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801CB7E8 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v6; // r12
  struct CExpressionValueStack *v8; // rsi
  __int64 v9; // rbx
  int v10; // r15d
  int IsAnyConditionSatisified; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  CScrollAnimation *v15; // rdi
  int v16; // esi
  int v17; // esi
  struct CBaseExpression *v18; // rbx
  int v19; // eax
  int ForceForAxis; // eax
  __int64 (__fastcall ***v21)(_QWORD); // rax
  LPVOID v23; // rax
  LPVOID v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  bool v28; // zf
  int Value; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  int v32; // xmm1_4
  int v33; // xmm0_4
  void (__fastcall **v34)(_QWORD); // rax
  CScalarForce *v35; // rax
  CScalarForce *v36; // rsi
  bool v37; // [rsp+30h] [rbp-50h] BYREF
  float v38; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 (__fastcall ***v39)(_QWORD); // [rsp+38h] [rbp-48h] BYREF
  struct CBaseExpression *v40; // [rsp+40h] [rbp-40h] BYREF
  CScrollAnimation *v41; // [rsp+48h] [rbp-38h] BYREF
  CScalarForce *v42; // [rsp+50h] [rbp-30h] BYREF
  CScalarForce *v43; // [rsp+60h] [rbp-20h] BYREF
  int v44; // [rsp+68h] [rbp-18h]
  bool v45; // [rsp+C0h] [rbp+40h] BYREF
  struct CExpressionValueStack *v46; // [rsp+D0h] [rbp+50h]

  v46 = a3;
  v39 = 0LL;
  v41 = 0LL;
  v6 = (int)a2;
  v8 = a3;
  if ( !(unsigned __int8)InteractionSourceManager::IsInertiaEnabledForAxis(a1 + 352, a2) )
    goto LABEL_35;
  v9 = *(_QWORD *)(a1 + 8 * v6 + 536);
  v10 = 0;
  if ( v9 )
  {
    CConditionalExpression::Reset(*(CConditionalExpression **)(a1 + 8 * v6 + 536));
    v45 = 0;
    IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(
                                 (CConditionalExpression *)v9,
                                 v8,
                                 a4,
                                 &v45);
    v12 = IsAnyConditionSatisified;
    if ( IsAnyConditionSatisified < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IsAnyConditionSatisified, 0xBEBu);
      goto LABEL_36;
    }
    v8 = v46;
    v10 = v45;
  }
  if ( (unsigned int)v6 > 1 )
  {
    if ( !v10 )
      goto LABEL_35;
    goto LABEL_15;
  }
  if ( v10 )
  {
LABEL_15:
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v6 + 568) + 4LL * *(int *)(v9 + 340));
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(a1 + 560);
  if ( !v9 )
    goto LABEL_35;
  v37 = 0;
  v13 = CConditionalExpression::IsAnyConditionSatisified((CConditionalExpression *)v9, v8, a4, &v37);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xBFEu);
    goto LABEL_36;
  }
  if ( !v37 )
    goto LABEL_35;
  v14 = 3;
  v10 = 2;
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  CInteractionTracker::GetAnimationForAxis((__int64 *)a1, v6, (__int64 *)&v41);
  v15 = v41;
  if ( (*(_BYTE *)(v9 + 208) & 0x40) != 0 )
  {
    LODWORD(v42) = *(_DWORD *)(v9 + 200);
    HIDWORD(v42) = *((_DWORD *)v41 + 46);
    v43 = v42;
    v44 = v14;
    CConditionalExpression::SetDebugTargetInfo(v9, &v43);
  }
  v16 = v14 - 1;
  if ( !v16 )
  {
    Value = CConditionalExpression::GetValue((VectorSubchannelMaskInfo **)v9, v46, a4, &v38);
    v12 = Value;
    if ( Value < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Value, 0xC27u);
      goto LABEL_36;
    }
    v30 = operator new(0x30uLL);
    v31 = v30;
    if ( v30 )
    {
      v30[1] = &CMILRefCountBase::`vftable';
      *((_DWORD *)v30 + 4) = 0;
      *v30 = &CSpringAccelerator::`vftable'{for `IAccelerator'};
      v30[1] = &CSpringAccelerator::`vftable'{for `CMILRefCountBase'};
    }
    else
    {
      v31 = 0LL;
    }
    if ( !v31 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC2Du);
      goto LABEL_37;
    }
    (*(void (__fastcall **)(_QWORD *))*v31)(v31);
    v32 = *(_DWORD *)(a1 + 696);
    v33 = *(_DWORD *)(a1 + 692);
    *((_DWORD *)v31 + 6) = *(_DWORD *)(a1 + 680);
    v34 = (void (__fastcall **)(_QWORD))*v31;
    *((_DWORD *)v31 + 7) = v33;
    *((_DWORD *)v31 + 8) = v32;
    ((void (__fastcall **)(_QWORD *))v34)[4](v31);
    v35 = (CScalarForce *)operator new(0x78uLL);
    if ( v35 )
      v36 = CScalarForce::CScalarForce(v35, (struct IAccelerator *)v31);
    else
      v36 = 0LL;
    v42 = v36;
    if ( v36 )
      (**(void (__fastcall ***)(CScalarForce *))v36)(v36);
    CScrollAnimation::GetVelocity(v15);
    CScrollAnimation::GetInitialValue(v15);
    CScalarForce::Initialize(v36, (_DWORD)v6 == 2);
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v15 + 280LL))(v15) + 144) = 1114636288;
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CScalarForce>(&v39, (__int64 (__fastcall ****)(_QWORD))&v42);
    if ( v36 )
      (*(void (__fastcall **)(CScalarForce *))(*(_QWORD *)v36 + 8LL))(v36);
    (*(void (__fastcall **)(_QWORD *))(*v31 + 8LL))(v31);
LABEL_35:
    v21 = v39;
    v39 = 0LL;
    v12 = 0;
    *a5 = v21;
    goto LABEL_36;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v23 = operator new(0x98uLL);
    v24 = v23;
    if ( v23 )
    {
      CScrollAnimation::GetVelocity(v15);
      CScrollAnimation::GetInitialValue(v15);
      v23 = (LPVOID)CExpressionForce::CExpressionForce(v24, v25, v26, v9, v6);
    }
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CExpressionForce>(&v39, (__int64)v23);
    v27 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v15 + 280LL))(v15);
    v28 = v39 == 0LL;
    *(_DWORD *)(v27 + 144) = 1101004800;
    if ( v28 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC50u);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  if ( v17 != 1 )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0xC76u);
    goto LABEL_37;
  }
  v40 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
  CConditionalExpression::GetSampledConditionAnimation((CConditionalExpression *)v9, &v40);
  v18 = v40;
  if ( v40 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v40 + 8LL))(v40);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v39);
  CScrollAnimation::GetVelocity(v15);
  CScrollAnimation::GetInitialValue(v15);
  if ( v10 != 1 )
  {
    ForceForAxis = CNaturalAnimation::GetForceForAxis(v18, (unsigned int)v6);
    v12 = ForceForAxis;
    if ( ForceForAxis < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ForceForAxis, 0xC6Bu);
      goto LABEL_28;
    }
    goto LABEL_32;
  }
  v19 = CNaturalAnimation::GetForceForAxis(v18, 0LL);
  v12 = v19;
  if ( v19 >= 0 )
  {
LABEL_32:
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v15 + 280LL))(v15) + 144) = 1114636288;
    if ( v18 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v18 + 16LL))(v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC62u);
LABEL_28:
  if ( v18 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v18 + 16LL))(v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
LABEL_36:
  if ( v12 < 0 )
LABEL_37:
    *a5 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v39);
  return (unsigned int)v12;
}
