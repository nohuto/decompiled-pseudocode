/*
 * XREFs of ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C00A7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     MonitorIsMonitorConnected @ 0x1C00A9484 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsMonitorConnected(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        _BYTE *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int IsMonitorConnected; // ebx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6057);
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    IsMonitorConnected = -1073741811;
    goto LABEL_8;
  }
  *a3 = 0;
  if ( !this )
  {
    v16 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v16);
    IsMonitorConnected = -1071775742;
    goto LABEL_8;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !*((_QWORD *)this + 285) )
  {
    v16 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v16 + 24) = this;
    goto LABEL_15;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(this, v5, 0);
LABEL_8:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v13, 6057);
  return IsMonitorConnected;
}
