/*
 * XREFs of ??0?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x1800C9D78
 * Callers:
 *     ??0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x1800C9DC4 (--0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ??0?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA@IMMMI@Z @ 0x1800C9E8C (--0-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 */

__int64 __fastcall DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>(
        _QWORD *a1,
        int a2,
        int a3)
{
  __int64 v3; // r9

  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = &hProvider;
  ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>(
    (_DWORD)a1 + 24,
    a2,
    a3,
    (_DWORD)a1,
    LODWORD(FLOAT_2_25));
  return v3;
}
