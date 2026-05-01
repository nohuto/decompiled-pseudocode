/*
 * XREFs of _dynamic_initializer_for__CMultitaskingViewElementBase::s_nullDragProvider__ @ 0x180003670
 * Callers:
 *     <none>
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x18009770C (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

IApplicationViewChangeListener *dynamic_initializer_for__CMultitaskingViewElementBase::s_nullDragProvider__()
{
  IApplicationViewChangeListener *result; // rax

  result = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)CMultitaskingViewElementBase::s_nullDragProvider);
  CMultitaskingViewElementBase::s_nullDragProvider[0] = &CMultitaskingViewElementBase::CNullDragProvider::`vftable';
  return result;
}
