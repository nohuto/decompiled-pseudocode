/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008E60
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1350 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0009060 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00090A4 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C00092BC (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009338 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000969C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000971C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000977C (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00DF800 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00DF978 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm0
  int v9; // eax
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  int v16; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v18; // eax
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 Content; // rcx
  _QWORD *v26; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_DWORD *)this + 41) = 255;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v22);
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  VidPnTargetColorCoeffDynamicRanges = a4->VidPnTargetColorCoeffDynamicRanges;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = VidPnTargetColorCoeffDynamicRanges;
  *((_DWORD *)this + 46) = 1;
  v9 = DMMVIDPNPRESENTPATH::SetGammaRamp(this, &a4->GammaRamp);
  v10 = v9;
  if ( v9 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v23[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v23[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    v23[5] = v10;
LABEL_18:
    *((_DWORD *)this + 16) = v10;
    return this;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v11 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  v10 = v11;
  if ( v11 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v26[3] = a4->CopyProtection.CopyProtectionType;
    v26[4] = this;
    v26[5] = v10;
    WdLogEvent5_WdError(v26);
    goto LABEL_18;
  }
  *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
  DMMVIDPNPRESENTPATH::SetScalingSupport(this, &a4->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
  v14 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
  v10 = v14;
  if ( v14 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->Content;
LABEL_17:
    v24[3] = Content;
    v24[4] = *((unsigned int *)a2 + 6);
    v24[5] = *((unsigned int *)a3 + 6);
    v24[6] = v10;
    goto LABEL_18;
  }
  Scaling = a4->ContentTransformation.Scaling;
  if ( Scaling != D3DKMDT_VPPS_UNPINNED )
  {
    v16 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling);
    v10 = v16;
    if ( v16 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Scaling;
      goto LABEL_17;
    }
  }
  Rotation = a4->ContentTransformation.Rotation;
  if ( Rotation != D3DKMDT_VPPR_UNPINNED )
  {
    v18 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation);
    v10 = v18;
    if ( v18 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Rotation;
      goto LABEL_17;
    }
  }
  v19 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, a4->ImportanceOrdinal);
  v10 = v19;
  if ( v19 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->ImportanceOrdinal;
    goto LABEL_17;
  }
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
  *((_DWORD *)this + 20) = 2;
  return this;
}
