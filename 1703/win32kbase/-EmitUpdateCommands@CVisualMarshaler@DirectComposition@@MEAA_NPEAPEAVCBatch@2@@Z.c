/*
 * XREFs of ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017D50
 * Callers:
 *     ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003280 (-EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021C00 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007F9A0 (-EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitOpacity@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016490 (-EmitOpacity@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00164FC (-EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016598 (-EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00166A0 (-EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001671C (-EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016798 (-EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitWindowBackgroundTreatment@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016814 (-EmitWindowBackgroundTreatment@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016890 (-EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016908 (-EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016998 (-EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016A10 (-EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016A94 (-EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016B30 (-EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016BB4 (-EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016C50 (-EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016CB4 (-EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016D74 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E320 (-EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // si
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return 0;
    v6 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 247;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitSetPropertyIdSet(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitPendingRemoves(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRemoveAllChildren(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitInsertChildren(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOffset(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitSize(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRelativeOffset(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRelativeSize(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitTransform(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitTransformParent(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitEffect(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitWindowBackgroundTreatment(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitClip(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitContent(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRenderOptions(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOptions(this, a2) )
  {
    return 0;
  }
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return 0;
    v7 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 64;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = (*((unsigned __int8 *)this + 232) >> 2) & 1;
    *((_DWORD *)this + 4) &= ~0x40000u;
  }
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v10) )
    {
      v8 = (char *)v10;
      *(_DWORD *)v10 = 32;
      *(_QWORD *)(v8 + 4) = 0LL;
      *(_QWORD *)(v8 + 12) = 0LL;
      *(_QWORD *)(v8 + 20) = 0LL;
      *((_DWORD *)v8 + 7) = 0;
      *((_DWORD *)v8 + 1) = 63;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v8 + 7) = (*((unsigned __int8 *)this + 232) >> 1) & 1;
      *(__m128i *)(v8 + 12) = _mm_loadu_si128((const __m128i *)((char *)this + 216));
      *((_DWORD *)this + 4) &= ~0x20000u;
      goto LABEL_20;
    }
    return 0;
  }
LABEL_20:
  if ( !DirectComposition::CVisualMarshaler::EmitInteraction(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOpacity(this, a2) )
  {
    return 0;
  }
  if ( (*((_DWORD *)this + 4) & 0x2000000) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
    {
      v9 = (char *)v10;
      *(_DWORD *)v10 = 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 70;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v9 + 3) = *((_BYTE *)this + 232) & 1;
      *((_DWORD *)this + 4) &= ~0x2000000u;
      return v4;
    }
    return 0;
  }
  return v4;
}
