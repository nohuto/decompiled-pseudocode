/*
 * XREFs of ?_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0108730
 * Callers:
 *     ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C01059F0 (-ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        __int64 a3,
        __int64 a4)
{
  DXGMONITOR *v5; // rdi
  DXGMONITOR **v6; // rdx
  DXGMONITOR *v7; // rax
  DXGMONITOR *v8; // rdx
  DXGMONITOR **DataSize; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v5 = this;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = (DXGMONITOR **)((char *)v5 + 136);
  if ( !a2 )
    goto LABEL_14;
  v7 = *v6;
  if ( *v6 == (DXGMONITOR *)v6 )
    goto LABEL_14;
  this = (DXGMONITOR *)&a2[1];
  while ( v7 != this )
  {
    if ( v6 == (DXGMONITOR **)v7 )
      goto LABEL_14;
    v7 = *(DXGMONITOR **)v7;
  }
  if ( *((_DWORD *)v5 + 28) <= a2->Id )
  {
LABEL_14:
    v12 = WdLogNewEntry5_WdError(this, v6);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = v5;
    WdLogEvent5_WdError(v12);
    return 3223192368LL;
  }
  else
  {
    v8 = *(DXGMONITOR **)this;
    DataSize = (DXGMONITOR **)a2[1].DataSize;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this || *DataSize != this )
      __fastfail(3u);
    *DataSize = v8;
    *((_QWORD *)v8 + 1) = DataSize;
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
}
