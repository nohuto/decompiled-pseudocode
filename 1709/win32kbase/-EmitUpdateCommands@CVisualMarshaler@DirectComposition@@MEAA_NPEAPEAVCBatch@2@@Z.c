/*
 * XREFs of ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002C690
 * Callers:
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028570 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028B50 (-EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007EDF0 (-EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AFCC (-EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B834 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOpacity@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CA3C (-EmitOpacity@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CAA8 (-EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CB58 (-EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CC5C (-EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CCD8 (-EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CD54 (-EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitWindowBackgroundTreatment@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CDD0 (-EmitWindowBackgroundTreatment@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CE4C (-EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CEC4 (-EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CF54 (-EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002CFCC (-EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002D050 (-EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002D0EC (-EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002D170 (-EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002D26C (-EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C002D32C (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  struct DirectComposition::CApplicationChannel *v4; // rsi
  char v5; // si
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // rcx
  char *v11; // rcx
  void *v12; // [rsp+50h] [rbp+30h] BYREF

  if ( !DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    || !DirectComposition::CPropertyChangeResourceMarshaler::EmitSetPropertyIdSet(this, a2) )
  {
    return 0;
  }
  v4 = (struct DirectComposition::CApplicationChannel *)*((_QWORD *)*a2 + 1);
  while ( *((_QWORD *)this + 21) && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
    DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(this, v4, v12);
  if ( *((_QWORD *)this + 21) )
    return 0;
  if ( (*((_DWORD *)this + 4) & 0x2000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v12) )
      return 0;
    v7 = (char *)v12;
    *(_DWORD *)v12 = 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 324;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 4) &= ~0x2000u;
  }
  if ( !DirectComposition::CVisualMarshaler::EmitInsertChildren(this, a2)
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
  v5 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return 0;
    v8 = (char *)v12;
    *(_DWORD *)v12 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 339;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = (*((unsigned __int8 *)this + 236) >> 2) & 1;
    *((_DWORD *)this + 4) &= ~0x40000u;
  }
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v12) )
      return 0;
    v9 = (char *)v12;
    *(_DWORD *)v12 = 32;
    *(_QWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 12) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *((_DWORD *)v9 + 7) = 0;
    *((_DWORD *)v9 + 1) = 332;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v9 + 7) = (*((unsigned __int8 *)this + 236) >> 1) & 1;
    *(__m128i *)(v9 + 12) = _mm_loadu_si128((const __m128i *)((char *)this + 220));
    *((_DWORD *)this + 4) &= ~0x20000u;
  }
  if ( !DirectComposition::CVisualMarshaler::EmitInteraction(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOpacity(this, a2) )
  {
    return 0;
  }
  if ( (*((_DWORD *)this + 4) & 0x2000000) == 0 )
    goto LABEL_25;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
    return 0;
  v10 = (char *)v12;
  *(_DWORD *)v12 = 16;
  *(_QWORD *)(v10 + 4) = 0LL;
  *((_DWORD *)v10 + 3) = 0;
  *((_DWORD *)v10 + 1) = 321;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v10 + 3) = *((_BYTE *)this + 236) & 1;
  *((_DWORD *)this + 4) &= ~0x2000000u;
LABEL_25:
  if ( (*((_DWORD *)this + 4) & 0x4000000) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
    {
      v11 = (char *)v12;
      *(_DWORD *)v12 = 16;
      *(_QWORD *)(v11 + 4) = 0LL;
      *((_DWORD *)v11 + 3) = 0;
      *((_DWORD *)v11 + 1) = 326;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v11 + 3) = *((_DWORD *)this + 54);
      *((_DWORD *)this + 4) &= ~0x4000000u;
      return v5;
    }
    return 0;
  }
  return v5;
}
