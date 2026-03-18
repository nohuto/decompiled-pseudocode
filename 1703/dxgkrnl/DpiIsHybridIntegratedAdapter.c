/*
 * XREFs of DpiIsHybridIntegratedAdapter @ 0x1C003D82C
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsHybridIntegratedAdapter(__int64 a1)
{
  return qword_1C006F9E8 == a1;
}
