/*
 * XREFs of ??0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x180007724
 * Callers:
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800079F0 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180003F8C (--2@YAPEAX_K@Z.c)
 *     ??0?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA@IMMMI@Z @ 0x180007A68 (--0-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4DwmIni.c)
 */

void **__fastcall DwmInitAsimov::CDwmInitEventManager::CDwmInitEventManager(
        DwmInitAsimov::CDwmInitEventManager *this,
        const struct _TlgProvider_t *a2)
{
  int v2; // edx
  int v3; // r8d
  _QWORD *v4; // r9
  void *v5; // r9

  qword_1800129A8 = 0LL;
  v4 = operator new(0x60uLL);
  if ( v4 )
  {
    v4[1] = 0LL;
    v4[2] = 0LL;
    *v4 = &hProvider;
    ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>(
      (_DWORD)v4 + 24,
      v2,
      v3,
      (_DWORD)v4,
      LODWORD(FLOAT_2_25));
  }
  else
  {
    v5 = 0LL;
  }
  qword_1800129A8 = v5;
  return &qword_1800129A8;
}
