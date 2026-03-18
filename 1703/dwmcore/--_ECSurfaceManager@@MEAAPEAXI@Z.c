/*
 * XREFs of ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x180145380
 * Callers:
 *     ??_ECSurfaceManager@@OBA@EAAPEAXI@Z @ 0x1800D5540 (--_ECSurfaceManager@@OBA@EAAPEAXI@Z.c)
 *     ??_ECSurfaceManager@@OGA@EAAPEAXI@Z @ 0x1800D5550 (--_ECSurfaceManager@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180145104 (--1CSurfaceManager@@MEAA@XZ.c)
 */

CSurfaceManager *__fastcall CSurfaceManager::`vector deleting destructor'(CSurfaceManager *this, char a2)
{
  CSurfaceManager::~CSurfaceManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
