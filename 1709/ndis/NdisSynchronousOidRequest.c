/*
 * XREFs of NdisSynchronousOidRequest @ 0x1C0042980
 * Callers:
 *     <none>
 * Callees:
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 */

__int64 __fastcall NdisSynchronousOidRequest(ULONG_PTR a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_BYTE *)(v1 + 56);
  if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(v1 + 57) < 0x50u) )
    ndisBugCheckEx(0x28uLL, 1uLL, 0LL, 0LL);
  return ndisSynchronousOidRequest(a1, *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16));
}
