/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x180148CD0
 * Callers:
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x180129104 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180130F30 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x180148AA0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 636) )
  {
    *((_BYTE *)this + 636) = 0;
    *((_DWORD *)this + 155) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(this, &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop, *((_QWORD *)this + 37), *((unsigned int *)this + 154));
  }
  return *((unsigned int *)this + 160);
}
