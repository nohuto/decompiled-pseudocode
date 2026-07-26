/*
 * XREFs of ?Pop@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C00420A0
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Pop(__int64 a1)
{
  _QWORD *v2; // rcx

  if ( !*(_QWORD *)(a1 + 128) )
  {
    v2 = *(_QWORD **)(a1 + 120);
    if ( !*v2 )
      return 0LL;
    *(_QWORD *)(a1 + 120) = *v2;
    *(_QWORD *)(a1 + 128) = 6LL;
    ExFreePoolWithTag(v2, 0x4253444Eu);
  }
  return 16LL * (*(_QWORD *)(a1 + 128))-- + *(_QWORD *)(a1 + 120) + 8LL;
}
