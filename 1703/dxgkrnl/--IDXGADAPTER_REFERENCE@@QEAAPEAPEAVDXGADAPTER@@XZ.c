/*
 * XREFs of ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C003A590
 * Callers:
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplGetDebugInfo @ 0x1C01B01F0 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01B02D0 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplPresent @ 0x1C01B03B0 (OutputDuplPresent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGADAPTER_REFERENCE::operator&(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( *a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 6528LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return a1;
}
