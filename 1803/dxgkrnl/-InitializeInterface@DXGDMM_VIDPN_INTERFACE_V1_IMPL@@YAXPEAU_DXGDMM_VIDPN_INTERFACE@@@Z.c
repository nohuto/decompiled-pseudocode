/*
 * XREFs of ?InitializeInterface@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C021B428
 * Callers:
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0217898 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct _DXGDMM_VIDPN_INTERFACE *a2)
{
  __int64 v3; // rax

  if ( !this )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v3);
  }
  *(_QWORD *)this = DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology;
  *((_QWORD *)this + 1) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet;
  *((_QWORD *)this + 2) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet;
  *((_QWORD *)this + 3) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet;
  *((_QWORD *)this + 4) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet;
  *((_QWORD *)this + 5) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet;
  *((_QWORD *)this + 6) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet;
}
