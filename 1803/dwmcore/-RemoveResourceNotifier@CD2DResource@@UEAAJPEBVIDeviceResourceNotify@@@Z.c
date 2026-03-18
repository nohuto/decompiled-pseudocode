/*
 * XREFs of ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0
 * Callers:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180045800 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180071BF0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x1800778FC (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800978F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@IEAAXXZ @ 0x18016F834 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x18016F8A4 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x180179C58 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18018DCE4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x18018F0E4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180190EF0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18019E090 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18019E3D4 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18019E840 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18019ED60 (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DResource::RemoveResourceNotifier(CD2DResource *this, const struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  __int64 v4; // r11
  unsigned int i; // r8d
  __int64 v8; // rcx

  v2 = *((_DWORD *)this + 16);
  v3 = 0;
  v4 = *((_QWORD *)this + 5);
  for ( i = 0; i < v2; ++i )
  {
    if ( a2 == *(const struct IDeviceResourceNotify **)(v4 + 8LL * i) )
      break;
  }
  if ( i >= v2 )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x45u);
  }
  else
  {
    for ( ; i < v2 - 1; v2 = *((_DWORD *)this + 16) )
    {
      v8 = i++;
      *(_QWORD *)(v4 + 8 * v8) = *(_QWORD *)(v4 + 8LL * i);
    }
    *((_DWORD *)this + 16) = v2 - 1;
  }
  return v3;
}
