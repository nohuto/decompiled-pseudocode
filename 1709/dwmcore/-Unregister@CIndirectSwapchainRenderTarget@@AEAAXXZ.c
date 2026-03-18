/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180136DA8 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180137474 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013782C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x180137930 (-ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180137960 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137B88 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1801372F4 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 59) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v5, &v4);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 58) + 64LL))(*((_QWORD *)this + 58), v4, v5);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 16LL))(*((_QWORD *)this + 59));
    *((_QWORD *)this + 59) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 92); ++i )
    ReleaseInterfaceNoNULL<CManipulationManager>(*(_QWORD *)(*((_QWORD *)this + 43) + 16LL * i + 8));
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 344, 0x10u);
  v3 = *((_QWORD *)this + 58);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 58) = 0LL;
  }
  *((_BYTE *)this + 456) &= 0xF0u;
  *((_BYTE *)this + 210) = 0;
  *((_DWORD *)this + 112) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 424, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), this);
}
