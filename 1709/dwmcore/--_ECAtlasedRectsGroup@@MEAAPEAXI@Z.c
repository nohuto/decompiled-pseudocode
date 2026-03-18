/*
 * XREFs of ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x18006A510
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x18006AE40 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::`vector deleting destructor'(CAtlasedRectsGroup *this, char a2)
{
  CAtlasedRectsGroup::~CAtlasedRectsGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
