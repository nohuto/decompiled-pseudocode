/*
 * XREFs of ?EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008F594
 * Callers:
 *     ?EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008F4A0 (-EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitCreate(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v5; // rax
  char *v6; // rbx
  char *v7; // rcx
  char *v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v9) )
      return 0;
    v5 = (char *)v9;
    *(_DWORD *)v9 = 48;
    v6 = v5 + 4;
    memset(v5 + 4, 0, 0x2CuLL);
    *(_DWORD *)v6 = 106;
    *((_DWORD *)v6 + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 5) = 1;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 10);
    *((_QWORD *)v6 + 3) = *((_QWORD *)this + 6);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)v6 + 8) = *((_DWORD *)this + 17);
    *((_DWORD *)v6 + 9) = *((_DWORD *)this + 18);
    *((_DWORD *)v6 + 10) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      return 0;
    v7 = (char *)v9;
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 107;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
  {
    v8 = (char *)v9;
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 105;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = *((_DWORD *)this + 31);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}
