/*
 * XREFs of DxgMiniportQueryMonitorInterfaceCB @ 0x1C0122D60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTER *DxgAdapter; // rdi
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  void *v14; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = (int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7057);
  v6 = 0;
  if ( !a3 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v16[3] = 0LL;
    v16[4] = v4;
    v16[5] = a1;
    WdLogEvent5_WdError(v16);
    v6 = -1073741811;
    goto LABEL_12;
  }
  *a3 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  if ( !DxgAdapter )
    goto LABEL_19;
  if ( KeGetCurrentIrql() )
  {
    v17 = *(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL) >= 0x2003u )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v7, v10);
      v18[3] = 275LL;
      v18[4] = 20LL;
      v18[5] = DxgAdapter;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8, v7, v11, v12);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*((_QWORD *)DxgAdapter + 285) )
  {
LABEL_19:
    v20 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    v6 = -1071775742;
    goto LABEL_12;
  }
  v13 = (unsigned int)(v4 - 1);
  if ( (_DWORD)v4 == 1 )
  {
    v14 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
  }
  else
  {
    if ( (_DWORD)v4 != 2 )
      goto LABEL_22;
    v14 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
  }
  if ( !v14 )
  {
LABEL_22:
    v21 = WdLogNewEntry5_WdWarning(v13, v7, v11, v12);
    *(_QWORD *)(v21 + 24) = v4;
    WdLogEvent5_WdWarning(v21);
    v6 = -1073741637;
    goto LABEL_12;
  }
  *a3 = v14;
LABEL_12:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v11, 7057);
  return v6;
}
