/*
 * XREFs of ??_G?$TValueResource@UMilPoint2D@@UMILCMD_POINTRESOURCE@@$0GA@@@MEAAPEAXI@Z @ 0x180146940
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,96>::`scalar deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,96>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
