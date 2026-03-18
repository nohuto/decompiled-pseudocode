/*
 * XREFs of ?GetPixelFormat@CDesktopRenderTarget@@WDA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800D55C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::GetPixelFormat(__int64 a1, enum DXGI_FORMAT *a2)
{
  return CDesktopRenderTarget::GetPixelFormat((CDesktopRenderTarget *)(a1 - 48), a2);
}
