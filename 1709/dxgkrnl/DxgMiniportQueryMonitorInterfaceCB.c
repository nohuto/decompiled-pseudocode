/*
 * XREFs of DxgMiniportQueryMonitorInterfaceCB @ 0x1C01234C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTER *DxgAdapter; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  void *v14; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7057);
  v6 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
    if ( !DxgAdapter )
      goto LABEL_18;
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
      v19 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_QWORD *)DxgAdapter + 288) )
    {
      v13 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 == 1 )
      {
        v14 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
      }
      else
      {
        if ( (_DWORD)v4 != 2 )
        {
          v21 = WdLogNewEntry5_WdWarning(v13, v11, v12);
          *(_QWORD *)(v21 + 24) = v4;
          WdLogEvent5_WdWarning(v21);
          v6 = -1073741637;
          goto LABEL_11;
        }
        v14 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
      }
      *a3 = v14;
    }
    else
    {
LABEL_18:
      v20 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdError(v20);
      v6 = -1071775742;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v16[3] = 0LL;
    v16[4] = v4;
    v16[5] = a1;
    WdLogEvent5_WdError(v16);
    v6 = -1073741811;
  }
LABEL_11:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v12, 7057);
  return v6;
}
