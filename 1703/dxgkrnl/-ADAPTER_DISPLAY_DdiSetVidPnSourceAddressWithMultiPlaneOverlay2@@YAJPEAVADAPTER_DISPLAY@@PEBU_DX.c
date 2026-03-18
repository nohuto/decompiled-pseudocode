/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0034260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *a2,
        __int64 a3,
        __int64 a4)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(this, a2, a3, a4);
}
