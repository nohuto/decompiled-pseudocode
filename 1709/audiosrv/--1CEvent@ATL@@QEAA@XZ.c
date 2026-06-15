/*
 * XREFs of ??1CEvent@ATL@@QEAA@XZ @ 0x1800A2F04
 * Callers:
 *     _CMonitor::CMonitor_::_1_::dtor$7 @ 0x1800A2CCF (_CMonitor--CMonitor_--_1_--dtor$7.c)
 *     _CMonitor::CMonitor_::_1_::dtor$17 @ 0x1800A2D8A (_CMonitor--CMonitor_--_1_--dtor$17.c)
 *     _CMonitor::CMonitor_::_1_::dtor$18 @ 0x1800A2D9D (_CMonitor--CMonitor_--_1_--dtor$18.c)
 *     _CMonitor::CMonitor_::_1_::dtor$19 @ 0x1800A2DB0 (_CMonitor--CMonitor_--_1_--dtor$19.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$0 @ 0x1800A2E69 (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800E64C8 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CEvent::~CEvent(ATL::CEvent *this)
{
  if ( *(_QWORD *)this )
    ATL::CHandle::Close(this);
}
