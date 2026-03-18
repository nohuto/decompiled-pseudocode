/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@IEAAXXZ @ 0x18016F834
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x18016D914 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x18016F770 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEA.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::ReleaseResourcesNoAddRef(
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
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v4 + 16), a1);
      CMILCOMBase::InternalRelease((CMILCOMBase *)v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)a1 + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a1 + 16, 8u);
}
