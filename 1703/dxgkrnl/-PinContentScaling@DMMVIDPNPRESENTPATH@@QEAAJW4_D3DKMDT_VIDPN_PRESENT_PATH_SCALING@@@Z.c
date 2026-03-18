/*
 * XREFs of ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009338
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008E60 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00F6860 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01D3250 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00093E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00095F8 (-IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALIN.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009668 (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF914 (-IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentScaling(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax

  v2 = (int)a2;
  if ( (_DWORD)a2 == 253 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v22[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v22[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
LABEL_13:
    WdLogEvent5_WdError(v22);
    return 3223192389LL;
  }
  if ( DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 255 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v24 + 24) = 635LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 5 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v25 + 24) = 638LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 4 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v26 + 24) = 639LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v2) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v22[3] = v2;
    v22[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v22[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    goto LABEL_13;
  }
  if ( DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(this, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v2) )
  {
    v18 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 28) = v2;
    if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(this) )
      return 0LL;
    v23 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v23 + 24) = v2;
    *(_QWORD *)(v23 + 32) = this;
    WdLogEvent5_WdError(v23);
    *((_DWORD *)this + 28) = v18;
    return 3223192389LL;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning();
  v27[3] = v2;
  v27[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v27[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v27);
  return 3223192326LL;
}
