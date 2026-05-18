/*
 * XREFs of ??1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ @ 0x180005748
 * Callers:
 *     _DwmInitAsimov::CDwmInitEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__ @ 0x180007720 (_DwmInitAsimov--CDwmInitEventManager--GetManager_--_2_--_dynamic_atexit_destructor_for__manager_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180003EE0 (--3@YAXPEAX@Z.c)
 *     ??1?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA@XZ @ 0x180005A44 (--1-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4DwmIni.c)
 */

void __fastcall DwmInitAsimov::CDwmInitEventManager::~CDwmInitEventManager(DwmInitAsimov::CDwmInitEventManager *this)
{
  void *v1; // rbx

  v1 = qword_18000EFC8;
  if ( qword_18000EFC8 )
  {
    ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::~CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>((char *)qword_18000EFC8 + 24);
    operator delete(v1);
    qword_18000EFC8 = 0LL;
  }
}
