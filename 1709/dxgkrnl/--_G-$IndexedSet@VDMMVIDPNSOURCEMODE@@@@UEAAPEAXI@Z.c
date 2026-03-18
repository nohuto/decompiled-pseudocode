/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C0035000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C001E070 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNSOURCEMODE>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
