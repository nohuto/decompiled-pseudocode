/*
 * XREFs of DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0104B74
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0106EA8 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

void __fastcall DxgkInvalidateVidPnDisplayModeListCache(
        __int64 a1,
        unsigned int a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a3)
{
  ADAPTER_DISPLAY *v3; // rcx

  v3 = *(ADAPTER_DISPLAY **)(a1 + 2304);
  if ( v3 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v3, a2, a3);
}
