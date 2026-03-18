/*
 * XREFs of ?InitializeInterface@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C0117270
 * Callers:
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0113C1C (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::InitializeInterface(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( !this )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  *(_QWORD *)this = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::GetNumTargets;
  *((_QWORD *)this + 1) = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo;
  *((_QWORD *)this + 2) = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo;
  *((_QWORD *)this + 3) = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
}
