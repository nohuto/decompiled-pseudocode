/*
 * XREFs of ?reset@?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180156CA8
 * Callers:
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x180156220 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTA.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?Render@CDwm3DRECallbackRenderer@@UEAAJXZ @ 0x18017BA70 (-Render@CDwm3DRECallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CMILPoolResource::Release((CMILPoolResource *)(result + 472));
  return result;
}
