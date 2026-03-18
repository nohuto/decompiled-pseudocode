/*
 * XREFs of ?EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D0B4
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014DCD0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitConfigureInternalProperties(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rcx
  char *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000000) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 48;
      v5 = v4 + 12;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 226;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      memset(v4 + 12, 0, 0x24uLL);
      *(_OWORD *)v5 = *((_OWORD *)this + 22);
      *((_OWORD *)v5 + 1) = *((_OWORD *)this + 23);
      *((_DWORD *)v5 + 8) = *((_DWORD *)this + 96);
      *((_DWORD *)this + 4) |= 0x1000000u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
