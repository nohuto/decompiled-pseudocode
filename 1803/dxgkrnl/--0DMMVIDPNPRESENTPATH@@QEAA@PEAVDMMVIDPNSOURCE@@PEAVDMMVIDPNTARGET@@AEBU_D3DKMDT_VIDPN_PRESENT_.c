/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0045590
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C021EA2C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0006358 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0006414 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0006654 (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006688 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000695C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000BFC4 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C0044FE4 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0045040 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0045B3C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00BF198 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  DXGK_GAMMA_RAMP *v10; // rax
  __int64 v11; // rcx
  DXGK_GAMMA_RAMP *v12; // rsi
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 ImportanceOrdinal; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 41) = 255;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v10 = (DXGK_GAMMA_RAMP *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
    v12 = v10;
    if ( v10 )
    {
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      *(_QWORD *)v10 = &ReferenceCounted::`vftable';
      *(_QWORD *)v10 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v10 + 2) = 1;
      *((_DWORD *)v10 + 4) = 1;
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v12 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11);
      v13[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v13[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v13[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v13);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    v14 = DXGK_GAMMA_RAMP::Initialize(v12, &a4->GammaRamp);
    v15 = v14;
    if ( v14 < 0 )
    {
      ReferenceCounted::Release(v12);
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      v20[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v20[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v20[5] = v15;
      *((_DWORD *)this + 16) = v15;
      return this;
    }
    *((_QWORD *)this + 23) = v12;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v21 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  v23 = v21;
  if ( v21 >= 0 )
  {
    *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
    DMMVIDPNPRESENTPATH::SetScalingSupport(
      (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)this,
      &a4->ContentTransformation.ScalingSupport);
    DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
    v25 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
    v23 = v25;
    if ( v25 >= 0 )
    {
      Scaling = a4->ContentTransformation.Scaling;
      if ( Scaling == D3DKMDT_VPPS_UNPINNED
        || (v33 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling), v23 = v33, v33 >= 0) )
      {
        Rotation = a4->ContentTransformation.Rotation;
        if ( Rotation == D3DKMDT_VPPR_UNPINNED
          || (v39 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation), v23 = v39, v39 >= 0) )
        {
          v44 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, a4->ImportanceOrdinal);
          v23 = v44;
          if ( v44 >= 0 )
          {
            DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
            *((_DWORD *)this + 20) = 2;
            return this;
          }
          v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
          ImportanceOrdinal = a4->ImportanceOrdinal;
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
          ImportanceOrdinal = a4->ContentTransformation.Rotation;
        }
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
        ImportanceOrdinal = a4->ContentTransformation.Scaling;
      }
    }
    else
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      ImportanceOrdinal = a4->Content;
    }
    v30[3] = ImportanceOrdinal;
    v30[4] = *((unsigned int *)a2 + 6);
    v30[5] = *((unsigned int *)a3 + 6);
    v30[6] = v23;
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v24[3] = a4->CopyProtection.CopyProtectionType;
    v24[4] = this;
    v24[5] = v23;
    WdLogEvent5_WdError(v24);
  }
  *((_DWORD *)this + 16) = v23;
  return this;
}
