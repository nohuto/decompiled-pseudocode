/*
 * XREFs of ??_ECHolographicComposition@@MEAAPEAXI@Z @ 0x1801BCED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CHolographicComposition *__fastcall CHolographicComposition::`vector deleting destructor'(
        CHolographicComposition *this,
        char a2)
{
  *(_QWORD *)this = &CHolographicComposition::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
