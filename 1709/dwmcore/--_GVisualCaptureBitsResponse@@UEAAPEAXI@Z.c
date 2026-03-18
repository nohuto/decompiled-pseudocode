/*
 * XREFs of ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18013B950
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18013B914 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::`scalar deleting destructor'(
        VisualCaptureBitsResponse *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  VisualCaptureBitsResponse::~VisualCaptureBitsResponse(this, a2);
  if ( (v2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
