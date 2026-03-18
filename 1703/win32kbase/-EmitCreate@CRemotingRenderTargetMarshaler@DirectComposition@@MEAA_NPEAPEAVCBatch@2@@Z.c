/*
 * XREFs of ?EmitCreate@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0144450
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

char __fastcall DirectComposition::CRemotingRenderTargetMarshaler::EmitCreate(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 36;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x20uLL);
    *(_DWORD *)v4 = 133;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *((_OWORD *)v4 + 1) = *(_OWORD *)((char *)this + 56);
    *((_QWORD *)v4 + 1) = *((_QWORD *)this + 5);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
