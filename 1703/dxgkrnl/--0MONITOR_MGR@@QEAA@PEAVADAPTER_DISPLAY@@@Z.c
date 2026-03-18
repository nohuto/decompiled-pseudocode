/*
 * XREFs of ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0010CFC
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C0117404 (MonitorCreateMonitorManager.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::MONITOR_MGR(MONITOR_MGR *this, struct ADAPTER_DISPLAY *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _DWORD *v7; // rax
  KIRQL v8; // al
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  __int64 v12; // rax

  *((_WORD *)this + 2) = 0;
  *((_DWORD *)this + 30) = 0;
  *(_DWORD *)this = 16777217;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_DWORD *)this + 40) = -1;
  *((_DWORD *)this + 70) = 0;
  *((_BYTE *)this + 164) = 1;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = *((_QWORD *)a2 + 2);
  ExInitializeResourceLite((PERESOURCE)((char *)this + 16));
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)this + 3);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)this + 4);
  v7 = operator new(0x30uLL, 0x4D677844u, (enum _POOL_TYPE)512);
  *((_QWORD *)this + 96) = v7;
  if ( v7 )
  {
    v7[4] = 1;
    *(_DWORD *)(*((_QWORD *)this + 96) + 20LL) = 0;
    KeInitializeEvent((PRKEVENT)(*((_QWORD *)this + 96) + 24LL), NotificationEvent, 1u);
    v8 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v9 = (_QWORD *)qword_1C0070B20;
    v10 = (_QWORD *)*((_QWORD *)this + 96);
    if ( *(struct _LIST_ENTRY **)qword_1C0070B20 != &MONITOR_MGR::_MonitorPendingEventTraceHead )
      __fastfail(3u);
    v10[1] = qword_1C0070B20;
    *v10 = &MONITOR_MGR::_MonitorPendingEventTraceHead;
    *v9 = v10;
    qword_1C0070B20 = (__int64)v10;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v8);
  }
  return this;
}
