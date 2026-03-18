/*
 * XREFs of ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00E4A7C
 * Callers:
 *     ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00AD2E0 (-GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOL.c)
 *     BmlPinPathContentRotation @ 0x1C00F2724 (BmlPinPathContentRotation.c)
 *     BmlInternalTryPinningScaling @ 0x1C00F2BC4 (BmlInternalTryPinningScaling.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C01DF5A4 (BmlUnPinPartialPathModalityOnPath.c)
 *     BmlUnPinSourceMode @ 0x1C01DF7DC (BmlUnPinSourceMode.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(
        VIDPN_MGR *this,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)*((_QWORD *)this + 53);
}
