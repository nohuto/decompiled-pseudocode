/*
 * XREFs of ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180070070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetMultiplaneOverlayCaps(
        CHwFullScreenRenderTarget *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(**((_QWORD **)this + 5) + 168LL))(
           *((_QWORD *)this + 5),
           a2);
}
