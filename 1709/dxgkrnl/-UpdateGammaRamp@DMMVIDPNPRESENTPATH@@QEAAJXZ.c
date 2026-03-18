/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C007C464
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C007B228 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00A8B60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00154C8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C001635C (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0016488 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C00379F4 (ColorSpaceTransformCombine.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  int *v9; // r14
  size_t *v10; // rax
  __int64 v11; // rcx
  size_t *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  const struct DXGK_GAMMA_RAMP *v19; // rdx
  const struct DXGK_GAMMA_RAMP *v20; // rdx

  LODWORD(v1) = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 128LL);
  if ( v3 )
  {
    if ( !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v3 + 16)) )
    {
      v5 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v5);
    }
    if ( *(_DWORD *)(v3 + 16) == 4 )
      goto LABEL_27;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v7 = *(_QWORD *)(v6 + 528);
  if ( !v7 )
  {
LABEL_27:
    v20 = (const struct DXGK_GAMMA_RAMP *)v3;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v7 + 16) != 4 || *(_QWORD *)(v7 + 24) != 49204LL || !*(_QWORD *)(v7 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !v3 || (v9 = (int *)(v3 + 16), *(_DWORD *)(v3 + 16) == 1) )
  {
    v20 = (const struct DXGK_GAMMA_RAMP *)v7;
LABEL_28:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, v20);
    return (unsigned int)v1;
  }
  v10 = (size_t *)operator new(0x28uLL, 0x4B677844u, PagedPool);
  v12 = v10;
  if ( v10 )
  {
    v10[3] = 0LL;
    v10[4] = 0LL;
    *v10 = (size_t)&ReferenceCounted::`vftable';
    *v10 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v10 + 2) = 1;
    *((_DWORD *)v10 + 4) = 1;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v13 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdLowResource(v13);
    LODWORD(v1) = -1073741801;
LABEL_22:
    v19 = (const struct DXGK_GAMMA_RAMP *)v7;
    goto LABEL_24;
  }
  v14 = DXGK_GAMMA_RAMP::Initialize(v12, 4u, 0LL);
  v1 = v14;
  if ( v14 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v16[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v16[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    v16[5] = v1;
LABEL_21:
    WdLogEvent5_WdError(v16);
    goto LABEL_22;
  }
  v17 = ColorSpaceTransformCombine(*(char **)(v7 + 32), v9, (_DWORD *)v12[4]);
  v1 = v17;
  if ( v17 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v16[3] = v1;
    goto LABEL_21;
  }
  v19 = (const struct DXGK_GAMMA_RAMP *)v12;
LABEL_24:
  DMMVIDPNPRESENTPATH::SetGammaRamp(this, v19);
  if ( v12 )
    ReferenceCounted::Release((ReferenceCounted *)v12);
  return (unsigned int)v1;
}
