/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800819A0
 * Callers:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003B61C (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180044AC0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2)
{
  const struct ID2DContextOwner *v3; // rdx
  CD2DContext *v4; // rcx
  void (__fastcall *v5)(CD2DContext *, const struct ID2DContextOwner *); // rax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start);
  v3 = (const struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  v4 = (CD2DContext *)*((_QWORD *)a2 + 48);
  v5 = *(void (__fastcall **)(CD2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)v4 + 64LL);
  if ( v5 == CD2DContext::PopLayer )
    CD2DContext::PopLayer(v4, v3);
  else
    v5(v4, v3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop);
  return 0LL;
}
