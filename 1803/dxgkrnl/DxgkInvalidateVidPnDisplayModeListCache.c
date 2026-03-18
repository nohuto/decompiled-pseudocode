/*
 * XREFs of DxgkInvalidateVidPnDisplayModeListCache @ 0x1C015C590
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0155AE8 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

void __fastcall DxgkInvalidateVidPnDisplayModeListCache(
        __int64 a1,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a3)
{
  PERESOURCE **v3; // rcx

  v3 = *(PERESOURCE ***)(a1 + 2456);
  if ( v3 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v3, a2, a3);
}
