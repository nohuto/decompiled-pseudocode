/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01E7928
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01E6D90 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01E7A18 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v4; // rdi
  DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 i; // rdi
  _QWORD *v11; // rsi
  void *v12; // rcx
  void *v13; // rcx

  v4 = (__int64 **)((char *)this + 136);
  v5 = this;
  if ( *v4 != (__int64 *)v4 )
  {
    v6 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
    while ( *v4 != (__int64 *)v4 )
    {
      v7 = *v4;
      v8 = **v4;
      if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      *v4 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v4;
      this = (DXGMONITOR *)(v7 - 4);
      if ( v7 != (__int64 *)32 )
        ExFreePoolWithTag(this, 0);
    }
  }
  if ( *((_DWORD *)v5 + 28) )
  {
    if ( !*((_QWORD *)v5 + 15) )
    {
      v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v9);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 28); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD **)(*((_QWORD *)v5 + 15) + 8 * i);
      while ( v11 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        ExFreePoolWithTag(v12, 0);
      }
    }
    v13 = (void *)*((_QWORD *)v5 + 15);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    *((_QWORD *)v5 + 15) = 0LL;
    *((_DWORD *)v5 + 28) = 0;
    *((_QWORD *)v5 + 16) = 0LL;
  }
  return 0LL;
}
