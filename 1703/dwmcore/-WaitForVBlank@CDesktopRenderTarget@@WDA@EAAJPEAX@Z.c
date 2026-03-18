/*
 * XREFs of ?WaitForVBlank@CDesktopRenderTarget@@WDA@EAAJPEAX@Z @ 0x1800D55E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::WaitForVBlank(__int64 a1)
{
  return COffScreenRenderTarget::CheckDeviceState((COffScreenRenderTarget *)(a1 - 48));
}
