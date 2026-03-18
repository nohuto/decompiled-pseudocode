/*
 * XREFs of ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18007F930
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x18007F960 (--1CaptureBitsResponse@@UEAA@XZ.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::`scalar deleting destructor'(CaptureBitsResponse *this, char a2)
{
  CaptureBitsResponse::~CaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
