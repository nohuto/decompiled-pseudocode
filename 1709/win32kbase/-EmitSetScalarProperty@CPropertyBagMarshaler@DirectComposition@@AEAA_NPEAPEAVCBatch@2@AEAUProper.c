/*
 * XREFs of ?EmitSetScalarProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C002AB78
 * Callers:
 *     ?EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AC04 (-EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPropertyBagMarshaler::EmitSetScalarProperty(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CBatch **a2,
        struct PropertyUpdate *a3)
{
  char v5; // bl
  char *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = 1;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v10) )
    return 0;
  v6 = (char *)v10;
  v7 = *((unsigned int *)a3 + 2);
  *(_DWORD *)v10 = 24;
  *(_QWORD *)(v6 + 4) = 0LL;
  *(_QWORD *)(v6 + 12) = 0LL;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 1) = 283;
  *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
  v8 = *((_QWORD *)this + 6) + v7;
  *((_DWORD *)v6 + 3) = *(_DWORD *)(v8 + 8);
  *((_DWORD *)v6 + 4) = *((_DWORD *)a3 + 1);
  *((_DWORD *)v6 + 5) = *(_DWORD *)(v8 + 12);
  return v5;
}
