/*
 * XREFs of ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C01EC1F8
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00E4674 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01A284C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00A8B1C (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall DmmGetDefaultScaling(DXGADAPTER *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  VIDPN_MGR *v9; // rcx
  __int64 v10; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a1 + 288);
  if ( !v8 )
  {
    v4 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v4 + 24) = a1;
    goto LABEL_3;
  }
  v9 = *(VIDPN_MGR **)(v8 + 88);
  if ( v9 )
  {
    *a2 = VIDPN_MGR::GetAdapterDefaultScaling(v9);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192373LL;
  }
}
