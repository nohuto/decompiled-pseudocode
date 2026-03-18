/*
 * XREFs of ?ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C002E0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C0029724 (-DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiPostMultiPlaneOverlayPresent(a1, a2, a3);
}
