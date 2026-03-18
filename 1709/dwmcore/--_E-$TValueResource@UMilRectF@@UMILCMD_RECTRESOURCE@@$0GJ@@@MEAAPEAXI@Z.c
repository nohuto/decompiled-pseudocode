/*
 * XREFs of ??_E?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0GJ@@@MEAAPEAXI@Z @ 0x1800B90D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilRectF,MILCMD_RECTRESOURCE,105>::`vector deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<MilRectF,MILCMD_RECTRESOURCE,105>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
