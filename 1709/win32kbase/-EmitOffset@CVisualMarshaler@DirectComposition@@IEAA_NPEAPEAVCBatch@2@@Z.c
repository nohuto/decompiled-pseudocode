/*
 * XREFs of ?EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002D170
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002C690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitOffset(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rax
  char *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 36;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x20uLL);
    *(_DWORD *)v5 = 335;
    *((_DWORD *)v5 + 1) = *((_DWORD *)this + 6);
    *((double *)v5 + 1) = *((float *)this + 14);
    *((double *)v5 + 2) = *((float *)this + 15);
    *((double *)v5 + 3) = *((float *)this + 16);
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
