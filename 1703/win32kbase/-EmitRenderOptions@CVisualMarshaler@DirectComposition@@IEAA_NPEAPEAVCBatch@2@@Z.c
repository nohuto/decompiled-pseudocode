/*
 * XREFs of ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016598
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017D50 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRenderOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD *v4; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x8000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v5) )
  {
    v4 = (char *)v5 + 4;
    *(_DWORD *)v5 = 52;
    memset(v4, 0, 0x30uLL);
    *v4 = 52;
    v4[1] = *((_DWORD *)this + 6);
    if ( *((_DWORD *)this + 49) != -1 )
    {
      v4[2] |= 2u;
      v4[3] = *((_DWORD *)this + 49);
    }
    if ( *((_DWORD *)this + 48) != -1 )
    {
      v4[2] |= 8u;
      v4[4] = *((_DWORD *)this + 48);
    }
    if ( *((_DWORD *)this + 50) != -1 )
    {
      v4[2] |= 0x10u;
      v4[7] = *((_DWORD *)this + 50);
    }
    if ( *((_DWORD *)this + 51) != -1 )
    {
      v4[2] |= 0x20u;
      v4[8] = *((_DWORD *)this + 51);
    }
    if ( *((_DWORD *)this + 52) != -1 )
    {
      v4[2] |= 0x40u;
      v4[9] = *((_DWORD *)this + 52);
    }
    if ( *((_DWORD *)this + 53) != -1 )
    {
      v4[2] |= 0x80u;
      v4[10] = *((_DWORD *)this + 53);
    }
    *((_DWORD *)this + 4) &= ~0x8000u;
    return 1;
  }
  return 0;
}
