/*
 * XREFs of ?EmitCreate@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitCreate(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 12;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 1) = 152;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
