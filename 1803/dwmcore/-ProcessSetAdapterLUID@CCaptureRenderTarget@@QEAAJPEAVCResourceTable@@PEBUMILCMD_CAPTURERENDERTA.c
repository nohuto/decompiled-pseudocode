/*
 * XREFs of ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x180156220
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180156CA8 (-reset@-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetAdapterLUID(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETADAPTERLUID *a3)
{
  __int64 v5; // rcx

  CCaptureRenderTarget::ReleaseRenderingResources(this);
  *((_QWORD *)this + 51) = *((_QWORD *)a3 + 1);
  wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::reset((char *)this + 400);
  wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::reset((char *)this + 400);
  if ( (int)CD3DDeviceManager::GetD3DDevice(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              *(struct _LUID *)((char *)this + 408),
              (struct CD3DDeviceLevel1 **)this + 50) >= 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 50) + 712LL);
    if ( !*(_BYTE *)(v5 + 344) && !*(_BYTE *)(v5 + 345) )
      wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::reset((char *)this + 400);
  }
  return 0LL;
}
