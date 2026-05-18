/*
 * XREFs of ??0?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA@IMMMI@Z @ 0x1800059E4
 * Callers:
 *     ??0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800056D4 (--0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ?SetOptimalLoad@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXMMM_N@Z @ 0x180005CB8 (-SetOptimalLoad@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventMan.c)
 */

__int64 __fastcall ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5)
{
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 16) = 17;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 28) = a5;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 10;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::SetOptimalLoad();
  return v5;
}
