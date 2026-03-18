/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z @ 0x180189184 (-SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTargetObjectHandle@CBaseExpression@@QEBAIXZ @ 0x180158474 (-GetTargetObjectHandle@CBaseExpression@@QEBAIXZ.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x18015E8E8 (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18015E950 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18015EB30 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x18015F0B8 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x18016A5F0 (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x18016A680 (--$-4VCScalarForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCScalarFo.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x18016B8C0 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18016C1E4 (-IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x18016DDA8 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801731BC (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?GetInitialValue@CScrollAnimation@@QEBAMXZ @ 0x180188CF0 (-GetInitialValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188E3C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180192758 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1801928F4 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180192A38 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        int a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        _QWORD *a5)
{
  struct CExpressionValueStack *v6; // rsi
  __int64 v7; // r12
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // r14d
  signed int IsAnyConditionSatisified; // eax
  int v13; // esi
  signed int v14; // eax
  int v15; // esi
  CScrollAnimation *v16; // rdi
  int v17; // esi
  int v18; // esi
  struct CBaseExpression *v19; // rbx
  signed int v20; // eax
  signed int ForceForAxis; // eax
  __int64 (__fastcall ***v22)(_QWORD); // rax
  LPVOID v24; // rax
  LPVOID v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  bool v29; // zf
  signed int Value; // eax
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  int v33; // xmm1_4
  int v34; // xmm0_4
  void (__fastcall **v35)(_QWORD); // rax
  CScalarForce *v36; // rax
  CScalarForce *v37; // rsi
  bool v38; // [rsp+38h] [rbp-31h] BYREF
  bool v39; // [rsp+39h] [rbp-30h] BYREF
  __int64 (__fastcall ***v40)(_QWORD); // [rsp+40h] [rbp-29h] BYREF
  struct CBaseExpression *v41; // [rsp+48h] [rbp-21h] BYREF
  CScrollAnimation *v42; // [rsp+50h] [rbp-19h] BYREF
  float v43; // [rsp+58h] [rbp-11h] BYREF
  CScalarForce *v44; // [rsp+60h] [rbp-9h] BYREF
  CScalarForce *v45; // [rsp+78h] [rbp+Fh] BYREF
  int v46; // [rsp+80h] [rbp+17h]

  v40 = 0LL;
  v42 = 0LL;
  v6 = a3;
  v7 = a2;
  if ( !CInteractionTracker::IsInertiaEnabledForAxis(a1, a2) )
    goto LABEL_35;
  v10 = *(_QWORD *)(v9 + 8 * v7 + 440);
  v11 = 0;
  if ( v10 )
  {
    CConditionalExpression::Reset(*(CConditionalExpression **)(v9 + 8 * v7 + 440));
    v38 = 0;
    IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(
                                 (CConditionalExpression *)v10,
                                 v6,
                                 a4,
                                 &v38);
    v13 = IsAnyConditionSatisified;
    if ( IsAnyConditionSatisified < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, IsAnyConditionSatisified, 0xDF2u);
      goto LABEL_36;
    }
    v6 = a3;
    v11 = v38;
  }
  if ( (unsigned int)v7 > 1 )
  {
    if ( !v11 )
      goto LABEL_35;
    goto LABEL_15;
  }
  if ( v11 )
  {
LABEL_15:
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 472) + 4LL * *(int *)(v10 + 324));
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a1 + 464);
  if ( !v10 )
    goto LABEL_35;
  v39 = 0;
  v14 = CConditionalExpression::IsAnyConditionSatisified((CConditionalExpression *)v10, v6, a4, &v39);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xE05u);
    goto LABEL_36;
  }
  if ( !v39 )
    goto LABEL_35;
  v15 = 3;
  v11 = 2;
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  CInteractionTracker::GetAnimationForAxis((__int64 *)a1, v7, (__int64 *)&v42);
  v16 = v42;
  if ( (*(_BYTE *)(v10 + 192) & 0x40) != 0 )
  {
    LODWORD(v44) = CBaseExpression::GetTargetObjectHandle((CBaseExpression *)v10);
    HIDWORD(v44) = *((_DWORD *)v16 + 44);
    v45 = v44;
    v46 = v15;
    CConditionalExpression::SetDebugTargetInfo(v10, &v45);
  }
  v17 = v15 - 1;
  if ( !v17 )
  {
    Value = CConditionalExpression::GetValue((int **)v10, a3, a4, &v43);
    v13 = Value;
    if ( Value < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Value, 0xE2Eu);
      goto LABEL_36;
    }
    v31 = operator new(0x30uLL);
    v32 = v31;
    if ( v31 )
    {
      v31[1] = &CMILRefCountBase::`vftable';
      *((_DWORD *)v31 + 4) = 0;
      *v31 = &CSpringAccelerator::`vftable'{for `IAccelerator'};
      v31[1] = &CAttractionAccelerator::`vftable'{for `CMILRefCountBase'};
    }
    else
    {
      v32 = 0LL;
    }
    if ( !v32 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xE34u);
      goto LABEL_37;
    }
    (*(void (__fastcall **)(_QWORD *))*v32)(v32);
    v33 = *(_DWORD *)(a1 + 640);
    v34 = *(_DWORD *)(a1 + 636);
    *((_DWORD *)v32 + 6) = *(_DWORD *)(a1 + 624);
    v35 = (void (__fastcall **)(_QWORD))*v32;
    *((_DWORD *)v32 + 7) = v34;
    *((_DWORD *)v32 + 8) = v33;
    ((void (__fastcall **)(_QWORD *))v35)[4](v32);
    v36 = (CScalarForce *)operator new(0x78uLL);
    if ( v36 )
      v37 = CScalarForce::CScalarForce(v36, (struct IAccelerator *)v32);
    else
      v37 = 0LL;
    v44 = v37;
    if ( v37 )
      (**(void (__fastcall ***)(CScalarForce *))v37)(v37);
    CScrollAnimation::GetVelocity(v16);
    CScrollAnimation::GetInitialValue(v16);
    CScalarForce::Initialize(v37, (_DWORD)v7 == 2);
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v16 + 280LL))(v16) + 144) = 1114636288;
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CScalarForce>(&v40, (__int64 (__fastcall ****)(_QWORD))&v44);
    if ( v37 )
      (*(void (__fastcall **)(CScalarForce *))(*(_QWORD *)v37 + 8LL))(v37);
    (*(void (__fastcall **)(_QWORD *))(*v32 + 8LL))(v32);
LABEL_35:
    v22 = v40;
    v40 = 0LL;
    v13 = 0;
    *a5 = v22;
    goto LABEL_36;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v24 = operator new(0x98uLL);
    v25 = v24;
    if ( v24 )
    {
      CScrollAnimation::GetVelocity(v16);
      CScrollAnimation::GetInitialValue(v16);
      v24 = (LPVOID)CExpressionForce::CExpressionForce(v25, v26, v27, v10, v7);
    }
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CExpressionForce>(&v40, (__int64)v24);
    v28 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v16 + 280LL))(v16);
    v29 = v40 == 0LL;
    *(_DWORD *)(v28 + 144) = 1101004800;
    if ( v29 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xE57u);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  if ( v18 != 1 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0xE7Du);
    goto LABEL_37;
  }
  v41 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  CConditionalExpression::GetSampledConditionAnimation((CConditionalExpression *)v10, &v41);
  v19 = v41;
  if ( v41 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v41 + 8LL))(v41);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v40);
  CScrollAnimation::GetVelocity(v16);
  CScrollAnimation::GetInitialValue(v16);
  if ( v11 != 1 )
  {
    ForceForAxis = CNaturalAnimation::GetForceForAxis(v19, (unsigned int)v7);
    v13 = ForceForAxis;
    if ( ForceForAxis < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ForceForAxis, 0xE72u);
      goto LABEL_28;
    }
    goto LABEL_32;
  }
  v20 = CNaturalAnimation::GetForceForAxis(v19, 0LL);
  v13 = v20;
  if ( v20 >= 0 )
  {
LABEL_32:
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v16 + 280LL))(v16) + 144) = 1114636288;
    if ( v19 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v19 + 16LL))(v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xE69u);
LABEL_28:
  if ( v19 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v19 + 16LL))(v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
LABEL_36:
  if ( v13 < 0 )
LABEL_37:
    *a5 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v40);
  return (unsigned int)v13;
}
