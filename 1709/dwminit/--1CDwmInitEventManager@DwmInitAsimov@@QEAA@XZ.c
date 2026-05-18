/*
 * XREFs of ??1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ @ 0x180007798
 * Callers:
 *     j_??1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ @ 0x180009C50 (j_--1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180003FB0 (--3@YAXPEAX@Z.c)
 *     ??1?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA@XZ @ 0x180007AC8 (--1-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4DwmIni.c)
 */

void __fastcall DwmInitAsimov::CDwmInitEventManager::~CDwmInitEventManager(DwmInitAsimov::CDwmInitEventManager *this)
{
  void *v1; // rbx

  v1 = qword_1800129A8;
  if ( qword_1800129A8 )
  {
    ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::~CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>((char *)qword_1800129A8 + 24);
    operator delete(v1);
    qword_1800129A8 = 0LL;
  }
}
