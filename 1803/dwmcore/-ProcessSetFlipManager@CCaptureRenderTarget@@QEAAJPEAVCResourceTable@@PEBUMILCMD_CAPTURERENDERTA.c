/*
 * XREFs of ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801563DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x1801564CC (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180156CCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetFlipManager(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER *a3)
{
  char *v3; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rsi
  int v9; // eax

  v3 = (char *)*((_QWORD *)a3 + 1);
  CCaptureRenderTarget::ReleaseFlipResources(this);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 496,
    0LL);
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 480);
  v6 = OpenFlipProducer(*((_QWORD *)a3 + 1), (char *)this + 480, (char *)this + 496);
  if ( v6 >= 0 )
  {
    v8 = *((_QWORD *)this + 60);
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 488);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v8 + 32LL))(
           v8,
           0LL,
           0LL,
           (char *)this + 488);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2Eu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2Au);
    v7 = 0;
  }
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  return v7;
}
