/*
 * XREFs of ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C01E6E44
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01E6D90 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_CleanupMonitorCCDName(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx

  if ( *((_QWORD *)this + 63) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v5 = *((_QWORD *)this + 63);
    if ( (*(_DWORD *)(v5 + 16))-- == 1 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 63);
      v8 = *v7;
      v9 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = (void *)*((_QWORD *)this + 63);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    *((_QWORD *)this + 63) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 452) )
  {
    if ( !*((_QWORD *)this + 58) )
    {
      v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v11);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 456));
    *((_QWORD *)this + 58) = 0LL;
    *((_BYTE *)this + 452) = 0;
  }
  *((_QWORD *)this + 60) = 0LL;
  v12 = (void *)*((_QWORD *)this + 62);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)this + 62) = 0LL;
  }
}
