/*
 * XREFs of ??A?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAAEAW4HwFlipState@DwmCoreAsimov@@_K@Z @ 0x1800CE584
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800CE118 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 * Callees:
 *     ?CreateNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x1800CE474 (-CreateNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits.c)
 *     ?GetNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1800CE4D4 (-GetNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
        __int64 *a1,
        __int64 a2)
{
  __int64 Node; // rax
  __int64 v4; // r11
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::GetNode(
           a1,
           a2,
           &v8,
           &v7,
           v6);
  if ( !Node )
    Node = ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::CreateNode(
             (__int64)a1,
             v4,
             v8,
             v7);
  return Node + 8;
}
