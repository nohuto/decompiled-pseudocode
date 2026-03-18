/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x180180A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1)
{
  return CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources(a1);
}
