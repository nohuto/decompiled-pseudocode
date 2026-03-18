/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0027680
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003C60 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0003F80 (NtDCompositionSetChildRootVisual.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000544C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F230 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionSurfaceBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0025350 (-EmitUpdateCommands@CCompositionSurfaceBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00279FC (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C006FF00 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013F330 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C00276C0 (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, v3, a2);
}
