/*
 * XREFs of ?QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00E4B18
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00F4630 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        VIDPN_MGR *this,
        const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE *)*((_QWORD *)this + 48);
}
