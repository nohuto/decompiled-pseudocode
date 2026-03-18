/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C01F1C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct _IO_REMOVE_LOCK *a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6039);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v6 )
  {
    v12 = *(_QWORD *)(v6 + 48);
    if ( a2 )
    {
      if ( !*(_QWORD *)(v12 + 8) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v14);
      }
      v11 = MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(v12 + 8) + 16LL), a2, (void *)0x4E506456);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v13 + 24) = 0LL;
      WdLogEvent5_WdError(v13);
      v11 = -1071774943;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    v11 = -1071774973;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6039);
  return v11;
}
