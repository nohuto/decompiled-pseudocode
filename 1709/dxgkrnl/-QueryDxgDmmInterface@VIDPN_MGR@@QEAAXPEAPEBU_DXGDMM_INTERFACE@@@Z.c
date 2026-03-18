/*
 * XREFs of ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C00A87E8
 * Callers:
 *     DxgkQueryDmmInterface @ 0x1C00E1BAC (DxgkQueryDmmInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmInterface(VIDPN_MGR *this, const struct _DXGDMM_INTERFACE **a2)
{
  __int64 v4; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *a2 = (const struct _DXGDMM_INTERFACE *)*((_QWORD *)this + 50);
}
