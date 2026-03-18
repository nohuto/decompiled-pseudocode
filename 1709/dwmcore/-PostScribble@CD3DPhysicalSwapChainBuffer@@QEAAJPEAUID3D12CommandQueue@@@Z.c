/*
 * XREFs of ?PostScribble@CD3DPhysicalSwapChainBuffer@@QEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801A91D4
 * Callers:
 *     ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C (-Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSupe.c)
 * Callees:
 *     McTemplateU0pp @ 0x18016A584 (McTemplateU0pp.c)
 */

__int64 __fastcall CD3DPhysicalSwapChainBuffer::PostScribble(
        CD3DPhysicalSwapChainBuffer *this,
        struct ID3D12CommandQueue *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pp(
      (__int64)this,
      &EVTDESC_POSTPRESENTSCRIBBLE_SCRIBBLE_Stop,
      *((_QWORD *)this + 15),
      *((_QWORD *)this + 27));
  return ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, _QWORD))a2->lpVtbl->Signal)(
           a2,
           *((_QWORD *)this + 21),
           *((_QWORD *)this + 27));
}
