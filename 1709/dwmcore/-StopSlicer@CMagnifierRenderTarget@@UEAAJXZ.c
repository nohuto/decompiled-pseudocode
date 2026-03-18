/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x180138D20
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180138358 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x180138884 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x180138AF0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x1800784F8 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 636) )
  {
    *((_BYTE *)this + 636) = 0;
    *((_DWORD *)this + 155) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xq(this, &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop, *((_QWORD *)this + 37), *((unsigned int *)this + 154));
    COffScreenRenderTarget::SetNeedsFlush(this);
  }
  return *((unsigned int *)this + 160);
}
