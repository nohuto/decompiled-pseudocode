/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x1801B0590
 * Callers:
 *     ??_G?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x1801B05C0 (--_G-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z.c)
 *     ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1801B0600 (--_GCLinkedShader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1801B0674 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLe.c)
 */

BOOL __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>(
        _QWORD *a1)
{
  *a1 = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::`vftable';
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef();
  return DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(a1 + 2));
}
