/*
 * XREFs of ??1CEvent@ATL@@QEAA@XZ @ 0x1800DE100
 * Callers:
 *     _CMonitor::CMonitor_::_1_::dtor$7 @ 0x1800DDECB (_CMonitor--CMonitor_--_1_--dtor$7.c)
 *     _CMonitor::CMonitor_::_1_::dtor$17 @ 0x1800DDF86 (_CMonitor--CMonitor_--_1_--dtor$17.c)
 *     _CMonitor::CMonitor_::_1_::dtor$18 @ 0x1800DDF99 (_CMonitor--CMonitor_--_1_--dtor$18.c)
 *     _CMonitor::CMonitor_::_1_::dtor$19 @ 0x1800DDFAC (_CMonitor--CMonitor_--_1_--dtor$19.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$0 @ 0x1800DE065 (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180113428 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CEvent::~CEvent(ATL::CEvent *this)
{
  if ( *(_QWORD *)this )
    ATL::CHandle::Close(this);
}
