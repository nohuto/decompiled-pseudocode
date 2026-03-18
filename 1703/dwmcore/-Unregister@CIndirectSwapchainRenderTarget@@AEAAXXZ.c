/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180129734
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B43CC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B44A8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801293EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180148F90 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180149090 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800274C8 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x180129710 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
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
    ReleaseInterfaceNoNULL<CD2DPencil>(*(_QWORD *)(*((_QWORD *)this + 43) + 16LL * i + 8));
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 344, 0x10u);
  v3 = *((_QWORD *)this + 58);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 58) = 0LL;
  }
  *((_BYTE *)this + 456) &= 0xF0u;
  *((_BYTE *)this + 288) = 0;
  *((_DWORD *)this + 112) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 424, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
}
