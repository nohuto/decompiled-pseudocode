/*
 * XREFs of ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000B260
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D9110 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01CB2CC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplGetDebugInfo @ 0x1C01CD520 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01CD60C (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplPresent @ 0x1C01CD6F8 (OutputDuplPresent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGADAPTER_REFERENCE::operator&(_QWORD *a1)
{
  __int64 v3; // rax

  if ( *a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v3 + 24) = 7258LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return a1;
}
