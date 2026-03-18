/*
 * XREFs of ?GetMultiplaneOverlayCaps@CHwStereoFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800D6D30
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetMultiplaneOverlayCaps(
        CHwStereoFullScreenRenderTarget *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  memset_0(a2, 0, 0x2CuLL);
  *(_DWORD *)a2 = 1;
  *((_DWORD *)a2 + 1) = 1;
  *((_DWORD *)a2 + 4) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  return 0LL;
}
