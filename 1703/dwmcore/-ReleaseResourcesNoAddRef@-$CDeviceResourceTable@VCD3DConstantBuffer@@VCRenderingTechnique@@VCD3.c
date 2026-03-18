/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180017F54
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180017F2C (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@X.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180180A68 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceL.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004C070 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(
        struct IDeviceResourceNotify *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx

  if ( *((_DWORD *)a1 + 10) )
  {
    v2 = *((unsigned int *)a1 + 10);
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v3 + *((_QWORD *)a1 + 2));
      CD3DResource::RemoveResourceNotifier((CD3DResource *)(v4 + 24), a1);
      CMILPoolResource::Release((CMILPoolResource *)v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)a1 + 10) = 0;
  return DynArrayImpl<0>::ShrinkToSize((char *)a1 + 16, 8LL);
}
