/*
 * XREFs of ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x1801564CC
 * Callers:
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180155820 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801563DC (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTA.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180156620 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180156CCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseFlipResources(CCaptureRenderTarget *this)
{
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 480);
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 488);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 496,
    0LL);
  CCaptureRenderTarget::ReleaseRenderingResources(this);
}
