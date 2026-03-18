/*
 * XREFs of ?QueryDxgMiniportVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00E4B4C
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00F2DA0 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgMiniportVidPnSourceModeSetInterface(
        VIDPN_MGR *this,
        const struct _DXGK_VIDPNSOURCEMODESET_INTERFACE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = (const struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *)*((_QWORD *)this + 47);
}
