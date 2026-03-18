/*
 * XREFs of ?EmitTargetFrameRate@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014CD80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitTargetFrameRate(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 20;
    *(_QWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 12) = 0LL;
    *((_DWORD *)v3 + 1) = 158;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v3 + 3) = HIDWORD(*((_QWORD *)this + 10));
    *((_DWORD *)v3 + 4) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return 0;
}
