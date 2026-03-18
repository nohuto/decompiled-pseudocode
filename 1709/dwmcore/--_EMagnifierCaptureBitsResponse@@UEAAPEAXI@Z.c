/*
 * XREFs of ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18014A250
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18014A210 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 */

MagnifierCaptureBitsResponse *__fastcall MagnifierCaptureBitsResponse::`vector deleting destructor'(
        MagnifierCaptureBitsResponse *this,
        char a2)
{
  MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
