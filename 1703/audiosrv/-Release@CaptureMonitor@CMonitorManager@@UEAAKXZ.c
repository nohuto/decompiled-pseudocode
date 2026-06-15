/*
 * XREFs of ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x1800B4770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1800B14DC (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::Release(CMonitorManager::CaptureMonitor *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitorManager::CaptureMonitor::~CaptureMonitor(this);
    operator delete(this);
  }
  return v2;
}
