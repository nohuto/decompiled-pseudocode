/*
 * XREFs of ??_E?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x1801BD220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180070A7C (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

struct IDeviceResourceNotify *__fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::`vector deleting destructor'(
        struct IDeviceResourceNotify *a1,
        char a2)
{
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
