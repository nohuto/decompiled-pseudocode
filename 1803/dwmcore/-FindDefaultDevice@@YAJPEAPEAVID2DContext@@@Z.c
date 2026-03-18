/*
 * XREFs of ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801C8ABC
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18018DCE4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x18018F0E4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180190EF0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800768D0 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall FindDefaultDevice(struct ID2DContext **a1)
{
  int DefaultD3DDevice; // eax
  CD3DDeviceLevel1 *v3; // rdi
  unsigned int v4; // ebx
  int Interface; // eax
  CD3DDeviceLevel1 *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v7);
  v3 = v7;
  v4 = DefaultD3DDevice;
  if ( DefaultD3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD3DDevice, 0x18u);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v7, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a1);
    v4 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Interface, 0x1Au);
  }
  if ( v3 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v3 + 472));
  return v4;
}
