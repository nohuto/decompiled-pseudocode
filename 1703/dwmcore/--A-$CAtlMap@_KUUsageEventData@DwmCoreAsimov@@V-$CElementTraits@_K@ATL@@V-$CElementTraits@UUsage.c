/*
 * XREFs of ??A?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAAEAUUsageEventData@DwmCoreAsimov@@_K@Z @ 0x1801870B4
 * Callers:
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800CE118 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180187C10 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1800CE684 (-GetNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 *     ?CreateNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x18018712C (-CreateNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrai.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::operator[](
        __int64 *a1,
        __int64 a2)
{
  __int64 Node; // rax
  __int64 v4; // r11
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::GetNode(
           a1,
           a2,
           &v8,
           &v7,
           v6);
  if ( !Node )
    Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::CreateNode(
             a1,
             v4,
             v8,
             v7);
  return Node + 8;
}
