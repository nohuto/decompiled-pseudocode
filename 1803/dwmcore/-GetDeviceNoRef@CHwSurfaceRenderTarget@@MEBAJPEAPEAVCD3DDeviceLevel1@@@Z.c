/*
 * XREFs of ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180078A70
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180078190 (-GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180078D10 (-GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180078A30 (-IsValid@CHwTextureRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetDeviceNoRef(CHwSurfaceRenderTarget *this, struct CD3DDeviceLevel1 **a2)
{
  unsigned int v4; // edi
  __int64 (*v5)(void); // rax
  char IsValid; // al

  *a2 = 0LL;
  v4 = -2003304307;
  v5 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
  if ( (char *)v5 == (char *)CHwTextureRenderTarget::IsValid )
    IsValid = CHwTextureRenderTarget::IsValid(this);
  else
    IsValid = v5();
  if ( IsValid )
  {
    v4 = 0;
    *a2 = *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 25) + 16LL) + 80LL);
  }
  return v4;
}
