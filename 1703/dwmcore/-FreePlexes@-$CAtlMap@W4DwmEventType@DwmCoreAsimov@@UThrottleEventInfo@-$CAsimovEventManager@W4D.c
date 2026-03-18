/*
 * XREFs of ?FreePlexes@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@AEAAXXZ @ 0x1800CE2B8
 * Callers:
 *     ?FreeNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800CE2E0 (-FreeNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W.c)
 *     ?FreeNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180187228 (-FreeNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits.c)
 *     ?RemoveAll@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@QEAAXXZ @ 0x1801879D8 (-RemoveAll@-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4Dw.c)
 *     ?RemoveAll@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAXXZ @ 0x180187AA4 (-RemoveAll@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrait.c)
 *     ?RemoveAll@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAXXZ @ 0x180187B34 (-RemoveAll@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x1800CE5D0 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::FreePlexes(
        __int64 a1)
{
  ATL::CAtlPlex *v2; // rcx

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = *(ATL::CAtlPlex **)(a1 + 56);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
