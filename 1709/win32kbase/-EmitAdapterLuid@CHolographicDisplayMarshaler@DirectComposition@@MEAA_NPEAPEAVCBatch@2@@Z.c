/*
 * XREFs of ?EmitAdapterLuid@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitAdapterLuid(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_QWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 12) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 154;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v3 + 12) = *((_QWORD *)this + 8);
    *(_QWORD *)(v3 + 20) = *((_QWORD *)this + 9);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
