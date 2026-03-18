/*
 * XREFs of ??_E?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@MEAAPEAXI@Z @ 0x180023860
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CResource *__fastcall TValueResource<MilRectF,MILCMD_RECTRESOURCE,54>::`vector deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<MilRectF,MILCMD_RECTRESOURCE,54>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
