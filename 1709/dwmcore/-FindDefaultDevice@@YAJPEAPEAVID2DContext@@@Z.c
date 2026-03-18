/*
 * XREFs of ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x180191CD4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x1801639E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180166BBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x1801685C0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021C80 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801A57A4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall FindDefaultDevice(struct ID2DContext **a1)
{
  signed int FirstAvailableD3DDevice; // eax
  CD3DDeviceLevel1 *v3; // rdi
  unsigned int v4; // ebx
  signed int Interface; // eax
  CD3DDeviceLevel1 *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v7);
  v3 = v7;
  v4 = FirstAvailableD3DDevice;
  if ( FirstAvailableD3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, FirstAvailableD3DDevice, 0x18u);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v7, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a1);
    v4 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Interface, 0x1Au);
  }
  if ( v3 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v3 + 472));
  return v4;
}
