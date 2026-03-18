/*
 * XREFs of ??1CDwmEventManager@DwmCoreAsimov@@QEAA@XZ @ 0x1800D2BB8
 * Callers:
 *     _DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__ @ 0x1800D6D70 (_DwmCoreAsimov--CDwmEventManager--GetManager_--_2_--_dynamic_atexit_destructor_for__manager__.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ @ 0x180186F88 (--1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager::~CDwmEventManager(DwmCoreAsimov::CDwmEventManager *this)
{
  DwmCoreAsimov::CDwmEventManager_Private *v1; // rbx

  v1 = qword_180241320;
  if ( qword_180241320 )
  {
    DwmCoreAsimov::CDwmEventManager_Private::~CDwmEventManager_Private(qword_180241320);
    WPF::ProcessHeapImpl::Free(v1);
  }
}
