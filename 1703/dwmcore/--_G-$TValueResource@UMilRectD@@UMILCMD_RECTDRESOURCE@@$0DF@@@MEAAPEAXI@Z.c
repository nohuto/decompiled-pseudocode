/*
 * XREFs of ??_G?$TValueResource@UMilRectD@@UMILCMD_RECTDRESOURCE@@$0DF@@@MEAAPEAXI@Z @ 0x180153C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CResource *__fastcall TValueResource<MilRectD,MILCMD_RECTDRESOURCE,53>::`scalar deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<MilRectD,MILCMD_RECTDRESOURCE,53>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
