/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FBF0
 * Callers:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18000D164 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x18000FC60 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2)
{
  const struct ID2DContextOwner *v3; // rdx
  CD2DContext *v4; // rcx
  void (__fastcall *v5)(CD2DContext *__hidden, const struct ID2DContextOwner *); // rax
  __int64 v6; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start);
  v3 = (const struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  v4 = (CD2DContext *)*((_QWORD *)a2 + 49);
  v5 = *(void (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *))(*(_QWORD *)v4 + 64LL);
  if ( v5 == CD2DContext::PopLayer )
    CD2DContext::PopLayer(v4, v3);
  else
    v5(v4, v3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop);
  return 0LL;
}
