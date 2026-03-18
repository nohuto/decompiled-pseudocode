/*
 * XREFs of ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016CB4
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017D50 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitInsertChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v5; // rbx
  int v6; // esi
  char *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x4000) == 0 )
    return 1;
  v5 = *((_QWORD *)this + 18);
  v6 = 0;
  while ( 1 )
  {
    if ( !v5 )
    {
      *((_DWORD *)this + 4) &= ~0x4000u;
      return 1;
    }
    if ( (*(_BYTE *)(v5 + 232) & 0x40) != 0 )
      break;
LABEL_10:
    v5 = *(_QWORD *)(v5 + 152);
  }
  if ( (*(_DWORD *)(v5 + 16) & 0x10) != 0 )
  {
LABEL_9:
    ++v6;
    goto LABEL_10;
  }
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
  {
    v7 = (char *)v8;
    *(_DWORD *)v8 = 20;
    *(_QWORD *)(v7 + 4) = 0LL;
    *(_QWORD *)(v7 + 12) = 0LL;
    *((_DWORD *)v7 + 1) = 58;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *(_DWORD *)(v5 + 24);
    *((_DWORD *)v7 + 4) = v6;
    *(_DWORD *)(v5 + 16) |= 0x10u;
    goto LABEL_9;
  }
  return 0;
}
