/*
 * XREFs of ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508
 * Callers:
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180155820 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x180155D54 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x180156220 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTA.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x1801562A4 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x1801564CC (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ @ 0x180156610 (-ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180156994 (-TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180156C54 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseRenderingResources(__int64 **this)
{
  __int64 *v2; // rsi
  __int64 *i; // rdi
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 *v8; // rcx

  COffScreenRenderTarget::ReleaseRenderTargets((COffScreenRenderTarget *)this);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear(this + 70);
  if ( this[60] )
  {
    v2 = this[65];
    for ( i = this[64]; i != v2; ++i )
      (*(void (__fastcall **)(__int64 *, __int64))(*this[60] + 48))(this[60], *i);
  }
  v4 = this[65];
  v5 = this[64];
  if ( v5 != v4 )
  {
    do
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v5++);
    while ( v5 != v4 );
    v5 = this[64];
  }
  this[65] = v5;
  v6 = this[55];
  v7 = this[54];
  if ( v7 != v6 )
  {
    do
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v7 + 1);
      v7 += 2;
    }
    while ( v7 != v6 );
    v7 = this[54];
  }
  this[55] = v7;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(this + 57);
  v8 = this[58];
  this[58] = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
  this[59] = 0LL;
}
