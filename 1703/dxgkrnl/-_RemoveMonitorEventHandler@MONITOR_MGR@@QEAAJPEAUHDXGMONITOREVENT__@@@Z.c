/*
 * XREFs of ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C01E323C
 * Callers:
 *     MonitorUnregisterMonitorEventCallback @ 0x1C01E4510 (MonitorUnregisterMonitorEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorEventHandler(
        struct _FAST_MUTEX *this,
        struct HDXGMONITOREVENT__ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  struct HDXGMONITOREVENT__ **p_WaitListHead; // rcx
  struct HDXGMONITOREVENT__ *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v19; // rcx
  struct HDXGMONITOREVENT__ **v20; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  KeAcquireGuardedMutex(this + 4);
  p_WaitListHead = (struct HDXGMONITOREVENT__ **)&this[2].Event.Header.WaitListHead;
  if ( a2 && (v10 = *p_WaitListHead, *p_WaitListHead != (struct HDXGMONITOREVENT__ *)p_WaitListHead) )
  {
    while ( v10 != a2 )
    {
      if ( p_WaitListHead == (struct HDXGMONITOREVENT__ **)v10 )
        goto LABEL_7;
      v10 = *(struct HDXGMONITOREVENT__ **)v10;
    }
    v19 = *(_QWORD *)a2;
    v20 = (struct HDXGMONITOREVENT__ **)*((_QWORD *)a2 + 1);
    if ( *(struct HDXGMONITOREVENT__ **)(*(_QWORD *)a2 + 8LL) != a2 || *v20 != a2 )
      __fastfail(3u);
    *v20 = (struct HDXGMONITOREVENT__ *)v19;
    *(_QWORD *)(v19 + 8) = v20;
    ExFreePoolWithTag(a2, 0);
    v16 = 0;
  }
  else
  {
LABEL_7:
    v11 = WdLogNewEntry5_WdError(p_WaitListHead, v8);
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdError(v11);
    v16 = -1073741811;
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v17);
  }
  KeReleaseGuardedMutex(this + 4);
  return v16;
}
