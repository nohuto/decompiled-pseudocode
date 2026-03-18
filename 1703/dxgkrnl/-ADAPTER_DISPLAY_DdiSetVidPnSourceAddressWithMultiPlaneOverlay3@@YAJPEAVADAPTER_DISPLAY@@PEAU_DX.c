/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0034270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
        struct ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2,
        __int64 a3,
        __int64 a4)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(this, a2, a3, a4);
}
