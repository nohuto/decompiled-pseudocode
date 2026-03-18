/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800274C8
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180027524 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B43CC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x180129104 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180129734 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180147E70 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ @ 0x180148A90 (-ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 i; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 58); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 26) + 8 * i);
    ReleaseInterface<ID2D1Geometry>(&v3);
  }
  *((_DWORD *)this + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 208, 8LL);
}
