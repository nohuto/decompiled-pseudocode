/*
 * XREFs of ??_G?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@MEAAPEAXI@Z @ 0x1801468C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<double,MILCMD_DOUBLERESOURCE,42>::`scalar deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<double,MILCMD_DOUBLERESOURCE,42>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
