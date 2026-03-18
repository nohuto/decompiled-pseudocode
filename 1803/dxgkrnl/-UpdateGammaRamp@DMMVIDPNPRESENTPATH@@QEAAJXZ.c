/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00BF36C
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00B838C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00DD764 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00064C4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000BB4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000BFC4 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ColorSpaceTransformCombine @ 0x1C0048DF8 (ColorSpaceTransformCombine.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C019EB38 (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(const struct DXGK_GAMMA_RAMP **this)
{
  __int64 v1; // rbp
  DMMVIDPNPRESENTPATH *v2; // rsi
  __int64 v3; // rbx
  const struct DXGK_GAMMA_RAMP *DefaultColorSpaceTransform; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r14
  const struct DXGK_GAMMA_RAMP *v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  DXGGLOBAL *Global; // rax
  int *v22; // r14
  size_t *v23; // rax
  __int64 v24; // rcx
  size_t *v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v1) = 0;
  v2 = (DMMVIDPNPRESENTPATH *)this;
  v3 = *(_QWORD *)(*((_QWORD *)this[11] + 12) + 128LL);
  if ( v3 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v3 + 16)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  DefaultColorSpaceTransform = 0LL;
  if ( !v3 || *(_DWORD *)(v3 + 16) != 4 )
  {
    this = *(const struct DXGK_GAMMA_RAMP ***)(*((_QWORD *)v2 + 12) + 96LL);
    DefaultColorSpaceTransform = this[66];
    if ( DefaultColorSpaceTransform )
    {
      if ( *((_DWORD *)DefaultColorSpaceTransform + 4) != 4
        || *((_QWORD *)DefaultColorSpaceTransform + 3) != 49204LL
        || !*((_QWORD *)DefaultColorSpaceTransform + 4) )
      {
        v13 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v13);
      }
    }
  }
  v5 = *(_QWORD *)(*((_QWORD *)v2 + 12) + 96LL);
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
    v6 = *(_QWORD *)(v5 + 40);
  }
  v7 = *(_QWORD *)(v6 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
    v8 = *(_QWORD *)(v7 + 8);
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( v3 && *(_DWORD *)(v3 + 16) != 1 )
  {
    if ( DefaultColorSpaceTransform )
      goto LABEL_34;
    if ( (*(_DWORD *)(v9 + 1816) & 0x18) == 0 )
      goto LABEL_17;
    v16 = *((_QWORD *)v2 + 12);
    v17 = 4;
    v18 = *(_QWORD *)(v16 + 104);
    if ( v18 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v18 + 96), 1u);
      v18 = *(_QWORD *)(v16 + 104);
    }
    v19 = *(_QWORD *)(v18 + 144);
    v32 = v18;
    if ( v19 )
      v17 = *(_DWORD *)(v19 + 136);
    if ( (auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, 0LL), v17 != 12) && v17 != 32
      || (*(_DWORD *)(v9 + 1816) & 0x10) == 0 )
    {
      if ( v17 != 30 || (*(_DWORD *)(v9 + 1816) & 8) == 0 )
        goto LABEL_17;
    }
    Global = DXGGLOBAL::GetGlobal(v20);
    DefaultColorSpaceTransform = DXGGLOBAL::GetDefaultColorSpaceTransform(Global);
  }
  if ( !DefaultColorSpaceTransform )
  {
LABEL_17:
    v10 = (const struct DXGK_GAMMA_RAMP *)v3;
LABEL_18:
    DMMVIDPNPRESENTPATH::SetGammaRamp(v2, v10);
    return (unsigned int)v1;
  }
LABEL_34:
  if ( !v3 || (v22 = (int *)(v3 + 16), *(_DWORD *)(v3 + 16) == 1) )
  {
    v10 = DefaultColorSpaceTransform;
    goto LABEL_18;
  }
  v23 = (size_t *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
  v25 = v23;
  if ( v23 )
  {
    v23[3] = 0LL;
    v23[4] = 0LL;
    *v23 = (size_t)&ReferenceCounted::`vftable';
    *v23 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v23 + 2) = 1;
    *((_DWORD *)v23 + 4) = 1;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v25 )
  {
    v27 = DXGK_GAMMA_RAMP::Initialize(v25, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
    v1 = v27;
    if ( v27 >= 0 )
    {
      v30 = ColorSpaceTransformCombine(*((char **)DefaultColorSpaceTransform + 4), v22, (_DWORD *)v25[4]);
      v1 = v30;
      if ( v30 >= 0 )
        goto LABEL_46;
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v29[3] = v1;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v29[3] = *(unsigned int *)(*((_QWORD *)v2 + 11) + 24LL);
      v29[4] = *(unsigned int *)(*((_QWORD *)v2 + 12) + 24LL);
      v29[5] = v1;
    }
    WdLogEvent5_WdError(v29);
    goto LABEL_46;
  }
  v26 = WdLogNewEntry5_WdLowResource(v24);
  *(_QWORD *)(v26 + 24) = *(unsigned int *)(*((_QWORD *)v2 + 11) + 24LL);
  *(_QWORD *)(v26 + 32) = *(unsigned int *)(*((_QWORD *)v2 + 12) + 24LL);
  WdLogEvent5_WdLowResource(v26);
  LODWORD(v1) = -1073741801;
LABEL_46:
  if ( (int)v1 >= 0 )
    DefaultColorSpaceTransform = (const struct DXGK_GAMMA_RAMP *)v25;
  DMMVIDPNPRESENTPATH::SetGammaRamp(v2, DefaultColorSpaceTransform);
  if ( v25 )
    ReferenceCounted::Release((ReferenceCounted *)v25);
  return (unsigned int)v1;
}
