/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180078600 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013782C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x180137930 (-ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ @ 0x180137950 (-ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180137E60 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x180138884 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ @ 0x180139910 (-EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801832D0 (-ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 i; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 60); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 27) + 8 * i);
    ReleaseInterface<ID2D1Geometry>(&v3);
  }
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 216, 8u);
}
