/*
 * XREFs of ??_G?$moneypunct@_W$0A@@std@@MEAAPEAXI@Z @ 0x1800A2DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x1800B39EE (--_V@YAXPEAX@Z_0.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::moneypunct<wchar_t,0>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::moneypunct<wchar_t,1>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  operator delete[](a1[6]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
