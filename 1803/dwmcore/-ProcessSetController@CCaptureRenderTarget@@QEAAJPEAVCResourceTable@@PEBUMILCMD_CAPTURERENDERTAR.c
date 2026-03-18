/*
 * XREFs of ?ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETCONTROLLER@@@Z @ 0x1801563A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18015688C (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetController(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETCONTROLLER *a3)
{
  struct CCaptureController *Resource; // rax
  unsigned int v5; // edx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = (struct CCaptureController *)CResourceTable::GetResource((__int64)a2, v5, 0x10u);
  CCaptureRenderTarget::SetController(this, Resource);
  return 0LL;
}
