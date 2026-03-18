/*
 * XREFs of ??_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z @ 0x180088620
 * Callers:
 *     ??_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z @ 0x1800C7230 (--_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18002B16C (--1CBitmapRealization@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CD2DBitmapCacheSourceRealization *__fastcall CD2DBitmapCacheSourceRealization::`scalar deleting destructor'(
        CD2DBitmapCacheSourceRealization *this,
        char a2)
{
  CBitmapRealization::~CBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
