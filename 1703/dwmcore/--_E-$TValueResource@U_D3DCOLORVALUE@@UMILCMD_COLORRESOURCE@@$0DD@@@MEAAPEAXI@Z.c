/*
 * XREFs of ??_E?$TValueResource@U_D3DCOLORVALUE@@UMILCMD_COLORRESOURCE@@$0DD@@@MEAAPEAXI@Z @ 0x180153CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CResource *__fastcall TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,51>::`vector deleting destructor'(
        CResource *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,51>::`vftable';
  CResource::~CResource(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
