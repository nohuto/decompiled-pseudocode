/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0202244
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0201600 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0202364 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0014168 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(DXGMONITOR *this)
{
  char *v1; // rdi
  DXGMONITOR *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 i; // rdi
  _QWORD *v8; // rsi
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  v1 = (char *)this + 176;
  v2 = this;
  if ( *(char **)v1 != v1 )
  {
    v3 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v3 + 24) = v2;
    WdLogEvent5_WdError(v3);
    while ( *(char **)v1 != v1 )
    {
      v4 = *(__int64 **)v1;
      if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
        __fastfail(3u);
      *(_QWORD *)v1 = v5;
      *(_QWORD *)(v5 + 8) = v1;
      this = (DXGMONITOR *)(v4 - 4);
      if ( v4 != (__int64 *)32 )
        ExFreePoolWithTag(this, 0);
    }
  }
  if ( *((_DWORD *)v2 + 28) )
  {
    if ( !*((_QWORD *)v2 + 15) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v6);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 28); i = (unsigned int)(i + 1) )
    {
      v8 = *(_QWORD **)(*((_QWORD *)v2 + 15) + 8 * i);
      while ( v8 )
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
        ExFreePoolWithTag(v9, 0);
      }
    }
    v10 = (void *)*((_QWORD *)v2 + 15);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v2 + 15) = 0LL;
    *((_DWORD *)v2 + 28) = 0;
    *((_QWORD *)v2 + 16) = 0LL;
  }
  v11 = (void *)*((_QWORD *)v2 + 18);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v2 + 18) = 0LL;
    *((_DWORD *)v2 + 34) = 0;
    DisplayID_Initialize((DXGMONITOR *)((char *)v2 + 152), 0LL, 0);
  }
  return 0LL;
}
