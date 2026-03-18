/*
 * XREFs of ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E3D0
 * Callers:
 *     ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002E30 (-EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CVisualCaptureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00036A0 (-EmitUpdateCommands@CVisualCaptureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E8D0 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001F9F0 (-EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021A80 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E320 (-EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
        DirectComposition::CPropertyChangeResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
      return v2;
    v6 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 247;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitSetPropertyIdSet(this, a2) )
    return 1;
  return v2;
}
