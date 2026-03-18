/*
 * XREFs of ?ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETROOT@@@Z @ 0x180182E70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801568D4 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050 (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 */

__int64 __fastcall CCaptureController::ProcessSetRoot(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURECONTROLLER_SETROOT *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // edx
  struct CVisual **v7; // rdi
  bool v8; // r8
  CCaptureRenderTarget **v9; // rsi
  CCaptureRenderTarget **i; // rbx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x97u);
  v7 = (struct CVisual **)((char *)this + 80);
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((char *)this + 80, Resource);
  v9 = (CCaptureRenderTarget **)*((_QWORD *)this + 8);
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 7); i != v9; ++i )
    CCaptureRenderTarget::SetRootVisual(*i, *v7, v8);
  return 0LL;
}
