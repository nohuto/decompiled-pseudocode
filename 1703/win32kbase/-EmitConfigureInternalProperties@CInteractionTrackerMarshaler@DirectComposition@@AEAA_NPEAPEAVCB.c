/*
 * XREFs of ?EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145138
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145D50 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitConfigureInternalProperties(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rcx
  char *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800000) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 48;
      v5 = v4 + 12;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 252;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      memset(v4 + 12, 0, 0x24uLL);
      *(_OWORD *)v5 = *(_OWORD *)((char *)this + 328);
      *((_OWORD *)v5 + 1) = *(_OWORD *)((char *)this + 344);
      *((_DWORD *)v5 + 8) = *((_DWORD *)this + 90);
      *((_DWORD *)this + 4) |= 0x800000u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
