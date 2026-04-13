/*
 * XREFs of ??_G?$collate@G@std@@MEAAPEAXI@Z @ 0x1800B0030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800C0E7F (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::collate<unsigned short>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::collate<unsigned short>::`vftable';
  free(a1[3]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
