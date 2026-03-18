/*
 * XREFs of ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1801CBD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::`vector deleting destructor'(
        CRoundedRectangleShape *this,
        char a2)
{
  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 7);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
