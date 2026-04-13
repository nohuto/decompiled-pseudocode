/*
 * XREFs of ??_G?$numpunct@G@std@@MEAAPEAXI@Z @ 0x180036D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall std::numpunct<unsigned short>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::numpunct<unsigned short>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
