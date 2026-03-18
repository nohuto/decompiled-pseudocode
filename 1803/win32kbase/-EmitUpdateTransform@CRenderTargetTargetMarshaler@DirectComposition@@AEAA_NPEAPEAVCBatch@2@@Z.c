/*
 * XREFs of ?EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006BB50
 * Callers:
 *     ?EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006B9E0 (-EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateTransform(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 48;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x2CuLL);
    *(_DWORD *)v4 = 134;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 84);
    *(_OWORD *)(v4 + 24) = *(_OWORD *)((char *)this + 100);
    *((_DWORD *)v4 + 10) = *((_DWORD *)this + 29);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
