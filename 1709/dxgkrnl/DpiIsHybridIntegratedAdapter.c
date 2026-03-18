/*
 * XREFs of DpiIsHybridIntegratedAdapter @ 0x1C002E36C
 * Callers:
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsHybridIntegratedAdapter(__int64 a1)
{
  return qword_1C0060868 == a1;
}
