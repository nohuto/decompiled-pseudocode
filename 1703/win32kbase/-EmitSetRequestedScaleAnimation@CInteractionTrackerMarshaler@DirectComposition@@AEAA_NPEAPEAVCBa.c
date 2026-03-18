/*
 * XREFs of ?EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145C80
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145A1C (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  _DWORD *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v9) )
  {
    v3 = (char *)v9;
    *(_DWORD *)v9 = 36;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x20uLL);
    *v4 = 257;
    v5 = *((_DWORD *)this + 6);
    v4[2] = 0;
    v4[1] = v5;
    LOBYTE(v5) = ~*((_BYTE *)this + 364);
    v4[3] = (v5 >> 1) & 1;
    v4[4] = *((_DWORD *)this + 40);
    v4[5] = *((_DWORD *)this + 41);
    v4[7] = *((_DWORD *)this + 39);
    v6 = *((_QWORD *)this + 24);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      if ( v7 )
        v4[2] = *(_DWORD *)(v7 + 24);
    }
    *((_BYTE *)this + 364) |= 2u;
    *((_DWORD *)this + 4) |= 0x40000u;
    return 1;
  }
  return 0;
}
