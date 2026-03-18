/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015B1E0
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015A828 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18015AD44 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015AFB0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18000DC64 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 692) )
  {
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 169) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xq(
        (__int64)this,
        &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop,
        *((_QWORD *)this + 44),
        *((_DWORD *)this + 168));
    COffScreenRenderTarget::SetNeedsFlush(this);
  }
  return *((unsigned int *)this + 174);
}
