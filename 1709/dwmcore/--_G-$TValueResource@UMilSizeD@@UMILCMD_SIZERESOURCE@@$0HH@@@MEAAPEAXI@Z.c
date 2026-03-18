/*
 * XREFs of ??_G?$TValueResource@UMilSizeD@@UMILCMD_SIZERESOURCE@@$0HH@@@MEAAPEAXI@Z @ 0x1800B9480
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilSizeD,MILCMD_SIZERESOURCE,119>::`scalar deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<MilSizeD,MILCMD_SIZERESOURCE,119>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
