/*
 * XREFs of ?GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z @ 0x1C01ACD98
 * Callers:
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01ACD28 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C01AD21C (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDiagnosticBufferSize(OUTPUTDUPL_MGR *this, int a2)
{
  int v2; // eax

  if ( a2 )
    v2 = g_IsInternalReleaseOrDbg != 0 ? 32 : 4;
  else
    v2 = g_IsInternalReleaseOrDbg != 0 ? 0x200 : 0;
  return (unsigned int)(v2 << 10);
}
