/*
 * XREFs of ??_E?$TValueResource@UMilPoint2D@@UMILCMD_POINTRESOURCE@@$0DE@@@MEAAPEAXI@Z @ 0x180153C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CResource *__fastcall TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,52>::`vector deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,52>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
