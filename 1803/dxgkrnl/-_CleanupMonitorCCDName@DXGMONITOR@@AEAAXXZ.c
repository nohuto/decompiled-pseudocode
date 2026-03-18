/*
 * XREFs of ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C02357B0
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0235428 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_CleanupMonitorCCDName(DXGMONITOR *this)
{
  __int64 v2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  void *v8; // rcx

  if ( *((_QWORD *)this + 70) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v2 = *((_QWORD *)this + 70);
    if ( (*(_DWORD *)(v2 + 16))-- == 1 )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 70);
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      operator delete[](*((void **)this + 70));
    }
    *((_QWORD *)this + 70) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 508) )
  {
    if ( !*((_QWORD *)this + 65) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v7);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)this + 32);
    *((_QWORD *)this + 65) = 0LL;
    *((_BYTE *)this + 508) = 0;
  }
  *((_QWORD *)this + 67) = 0LL;
  v8 = (void *)*((_QWORD *)this + 69);
  if ( v8 )
  {
    operator delete[](v8);
    *((_QWORD *)this + 69) = 0LL;
  }
}
