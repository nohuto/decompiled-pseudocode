/*
 * XREFs of ??_E?$messages@_W@std@@MEAAPEAXI@Z @ 0x1800A2EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 */

_QWORD *__fastcall std::messages<wchar_t>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
