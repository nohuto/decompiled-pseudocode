/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1800A2F18
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x1800A6930 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800E64C8 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
      *(_QWORD *)(v3 + 264) = 0LL;
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
  }
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 10) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( *((_QWORD *)this + 4) )
    ATL::CHandle::Close((CMonitorManager::CaptureMonitor *)((char *)this + 32));
}
