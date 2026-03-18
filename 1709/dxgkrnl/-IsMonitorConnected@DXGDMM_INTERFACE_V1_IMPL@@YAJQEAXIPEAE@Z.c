/*
 * XREFs of ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C00E5DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     MonitorIsMonitorConnected @ 0x1C00E5FD0 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsMonitorConnected(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        _BYTE *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int IsMonitorConnected; // ebx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v5 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6057);
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdError(v12);
    IsMonitorConnected = -1073741811;
    goto LABEL_8;
  }
  *a3 = 0;
  if ( !this )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v13);
    IsMonitorConnected = -1071775742;
    goto LABEL_8;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = this;
    goto LABEL_15;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(this, v5, 0);
LABEL_8:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v10, 6057);
  return IsMonitorConnected;
}
