/*
 * XREFs of ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01D80E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C0044E58 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     ?AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01DDB40 (-AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::FindClosestTargetMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a6)
{
  struct _D3DKMDT_VIDPN_TARGET_MODE *v6; // rsi
  DMMVIDPNTARGETMODESET *v8; // rax
  struct _D3DDDI_RATIONAL *v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r9
  DMMVIDPNTARGETMODESET *v13; // rbx
  __int64 v14; // rax
  const struct DMMVIDPNTARGETMODE *ClosestTargetMode; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  struct _D3DKMDT_VIDPN_TARGET_MODE *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax

  v6 = a6;
  if ( a6 && this )
  {
    *(_QWORD *)&a6->Id = 0LL;
    v8 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
    v13 = v8;
    if ( !v8 )
    {
      v14 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v14 + 24) = a2;
      WdLogEvent5_WdError(v14);
      return 3223192329LL;
    }
    ClosestTargetMode = DMMVIDPNTARGETMODESET::FindClosestTargetMode(
                          v8,
                          v9->Numerator,
                          v9->Denominator,
                          v9[2],
                          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)v9[3].Numerator,
                          v11,
                          v12,
                          a5);
    if ( !ClosestTargetMode )
      return 0LL;
    a6 = 0LL;
    v19 = DMMVIDPNTARGETMODESET::AcquireCachedModeInfoFromTargetMode(
            v13,
            ClosestTargetMode,
            (const struct _D3DKMDT_VIDPN_TARGET_MODE **)&a6);
    if ( v19 == -1071774902 )
    {
      v22 = WdLogNewEntry5_WdWarning(v18, v17, v20, v21);
      *(_QWORD *)(v22 + 24) = v13;
      WdLogEvent5_WdWarning(v22);
      if ( a6 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        WdLogEvent5_WdAssertion(v27);
      }
      return 1075708747LL;
    }
    else
    {
      if ( v19 >= 0 )
      {
        v29 = a6;
        if ( !a6 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v18, v17, v20, v21);
          WdLogEvent5_WdAssertion(v30);
        }
        *(_QWORD *)&v6->Id = v29;
        return 0LL;
      }
      v28 = WdLogNewEntry5_WdDmmEvent(v18, v17, v20, v21);
      *(_QWORD *)(v28 + 24) = v13;
      WdLogEvent5_WdDmmEvent(v28);
      return (unsigned int)v19;
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(this, this);
    *(_QWORD *)(v31 + 24) = a2;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
}
