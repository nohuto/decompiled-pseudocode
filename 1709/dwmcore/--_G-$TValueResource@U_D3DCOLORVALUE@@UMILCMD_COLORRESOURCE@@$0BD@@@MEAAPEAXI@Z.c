/*
 * XREFs of ??_G?$TValueResource@U_D3DCOLORVALUE@@UMILCMD_COLORRESOURCE@@$0BD@@@MEAAPEAXI@Z @ 0x1801469C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,19>::`scalar deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,19>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
