/*
 * XREFs of ??0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x1800C9DC4
 * Callers:
 *     ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800C9CE4 (--0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ??0?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x1800C9D78 (--0-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@.c)
 *     ??0?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA@IMMMI@Z @ 0x1800C9E8C (--0-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 */

__int64 __fastcall DwmCoreAsimov::CDwmEventManager_Private::CDwmEventManager_Private(
        DwmCoreAsimov::CDwmEventManager_Private *this,
        const struct _TlgProvider_t *a2,
        int a3)
{
  int v3; // r10d
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v11; // xmm5_4
  __int64 v12; // r10

  DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>(
    this,
    (int)a2,
    a3);
  ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>(
    v3 + 96,
    v4,
    v5,
    v6,
    LODWORD(FLOAT_2_25));
  ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>(
    v7 + 168,
    v8,
    v9,
    v10,
    v11);
  return v12;
}
