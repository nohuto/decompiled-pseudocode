/*
 * XREFs of ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C0201770
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0201600 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_CleanupMonitorCCDName(struct _UNICODE_STRING *this)
{
  __int64 v2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  void *v7; // rcx
  __int64 v8; // rax
  wchar_t *Buffer; // rcx

  if ( *(_QWORD *)&this[34].Length )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v2 = *(_QWORD *)&this[34].Length;
    if ( (*(_DWORD *)(v2 + 16))-- == 1 )
    {
      v4 = *(_QWORD **)&this[34].Length;
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      v7 = *(void **)&this[34].Length;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
    }
    *(_QWORD *)&this[34].Length = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( BYTE4(this[30].Buffer) )
  {
    if ( !this[31].Buffer )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v8);
    }
    RtlFreeUnicodeString(this + 31);
    this[31].Buffer = 0LL;
    BYTE4(this[30].Buffer) = 0;
  }
  this[32].Buffer = 0LL;
  Buffer = this[33].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    this[33].Buffer = 0LL;
  }
}
