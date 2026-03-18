/*
 * XREFs of ?_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C010B5AC
 * Callers:
 *     ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C01230F0 (-ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2)
{
  DXGMONITOR *v3; // rdi
  DXGMONITOR **v4; // rdx
  DXGMONITOR *v5; // rax
  DXGMONITOR *v6; // rdx
  DXGMONITOR **DataSize; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = this;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v4 = (DXGMONITOR **)((char *)v3 + 176);
  if ( !a2 )
    goto LABEL_14;
  v5 = *v4;
  if ( *v4 == (DXGMONITOR *)v4 )
    goto LABEL_14;
  this = (DXGMONITOR *)&a2[1];
  while ( v5 != this )
  {
    if ( v4 == (DXGMONITOR **)v5 )
      goto LABEL_14;
    v5 = *(DXGMONITOR **)v5;
  }
  if ( *((_DWORD *)v3 + 28) <= a2->Id )
  {
LABEL_14:
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v3;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  else
  {
    v6 = *(DXGMONITOR **)this;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this
      || (DataSize = (DXGMONITOR **)a2[1].DataSize, *DataSize != this) )
    {
      __fastfail(3u);
    }
    *DataSize = v6;
    *((_QWORD *)v6 + 1) = DataSize;
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
}
