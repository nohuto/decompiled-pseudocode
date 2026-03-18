/*
 * XREFs of ??1CD2DCommandList@@MEAA@XZ @ 0x1800B597C
 * Callers:
 *     ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x1800B58A0 (--_GCD2DCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?RemoveAll@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAXXZ @ 0x1800B59E4 (-RemoveAll@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCP.c)
 */

void __fastcall CD2DCommandList::~CD2DCommandList(CD2DCommandList *this)
{
  int v1; // edi
  __int64 v3; // rsi

  v1 = 0;
  *(_QWORD *)this = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( *((int *)this + 30) > 0 )
  {
    v3 = 0LL;
    do
    {
      ReleaseInterfaceNoNULL<CManipulationManager>(*(_QWORD *)(v3 + *((_QWORD *)this + 14)));
      ++v1;
      v3 += 8LL;
    }
    while ( v1 < *((_DWORD *)this + 30) );
  }
  CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll((char *)this + 104);
  CD2DResource::~CD2DResource(this);
}
