/*
 * XREFs of ?EmitUpdateCommands@CMatrixTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0157E00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

bool __fastcall DirectComposition::CMatrixTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 76;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x48uLL);
  *(_DWORD *)v4 = 466;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  result = 1;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 40);
  *(_OWORD *)(v4 + 24) = *(_OWORD *)((char *)this + 56);
  *(_OWORD *)(v4 + 40) = *(_OWORD *)((char *)this + 72);
  *(_OWORD *)(v4 + 56) = *(_OWORD *)((char *)this + 88);
  return result;
}
