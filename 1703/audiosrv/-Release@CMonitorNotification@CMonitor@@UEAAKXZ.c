/*
 * XREFs of ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x1800B4740
 * Callers:
 *     ??1?$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x1800B14B0 (--1-$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x1800B532C (--1CMonitor@@IEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x1800B5654 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x1800B7508 (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CMonitor::CMonitorNotification::Release(CMonitor::CMonitorNotification *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 5);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &CMonitor::CMonitorNotification::`vftable';
    operator delete(this);
  }
  return v1;
}
