/*
 * XREFs of ?Discard@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x1801EC900
 * Callers:
 *     ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x1801E6640 (-Discard@CHwTextureRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DiscardResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@@Z @ 0x1801DFBD0 (-DiscardResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@@Z.c)
 */

void __fastcall CHwSurfaceRenderTarget::Discard(CHwSurfaceRenderTarget *this)
{
  CD3DDeviceLevel1 *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)this + 256LL))(this, &v2) >= 0 )
    CD3DDeviceLevel1::DiscardResource(v2, *(struct ID3D11Resource **)(*((_QWORD *)this + 25) + 128LL));
}
