/*
 * XREFs of ??_G?$TValueResource@U_MilMatrix3x2D@@UMILCMD_MATRIXRESOURCE@@$0FI@@@MEAAPEAXI@Z @ 0x180146A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,88>::`scalar deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,88>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
