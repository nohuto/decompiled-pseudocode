/*
 * XREFs of ??_E?$time_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEAAPEAXI@Z @ 0x1800A3000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::`vector deleting destructor'(
        void **a1,
        char a2)
{
  *a1 = &std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::`vftable';
  free(a1[2]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
