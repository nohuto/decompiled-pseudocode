/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18015922C (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180159888 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159CC0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x180159DC0 (-ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180159DF0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015A00C (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18015977C (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 136);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 32LL))(v3, (char *)this + 80);
    ReleaseInterface<IBitmapLock>(v1);
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 66) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v7, &v6);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 65) + 64LL))(*((_QWORD *)this + 65), v6, v7);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 16LL))(*((_QWORD *)this + 66));
    *((_QWORD *)this + 66) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
    ReleaseInterfaceNoNULL<IWICBitmap>(*(_QWORD *)(*((_QWORD *)this + 50) + 16LL * i + 8));
  *((_DWORD *)this + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 400, 0x10u);
  v5 = *((_QWORD *)this + 65);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 65) = 0LL;
  }
  *((_WORD *)this + 256) = 0;
  *((_BYTE *)this + 266) = 0;
  *((_BYTE *)this + 514) = 0;
  *((_DWORD *)this + 126) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 480, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), this);
}
