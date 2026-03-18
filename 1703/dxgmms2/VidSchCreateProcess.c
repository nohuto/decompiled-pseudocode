/*
 * XREFs of VidSchCreateProcess @ 0x1C004EC60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AB0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001AD0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

__int64 __fastcall VidSchCreateProcess(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v17);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xAB0uLL, 0x68536956u);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v19 = WdLogNewEntry5_WdWarning(v5, v4);
    WdLogEvent5_WdWarning(v19);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0xAB0uLL);
  *(_DWORD *)v6 = 1869762646;
  *(_QWORD *)(v6 + 8) = a1;
  *(_DWORD *)(v6 + 16) = *(_BYTE *)(a1 + 273) != 0 ? 5 : 2;
  TdrHistoryInit((struct _TDR_HISTORY *)(v6 + 32));
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v9 = ExAllocatePoolWithTag(PagedPool, 4 * ((unsigned __int64)(MaximumAdapterCount + 31) >> 5), 0x68536956u);
  *(_QWORD *)(v6 + 2616) = v9;
  if ( !v9 )
  {
    v18 = WdLogNewEntry5_WdWarning(v11, v10);
    WdLogEvent5_WdWarning(v18);
LABEL_13:
    ExFreePoolWithTag((PVOID)v6, 0);
    return 0LL;
  }
  memset(v9, 0, 4 * ((unsigned __int64)(MaximumAdapterCount + 31) >> 5));
  v12 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * MaximumAdapterCount, 0x68536956u);
  *(_QWORD *)(v6 + 24) = v12;
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdWarning(v14, v13);
    WdLogEvent5_WdWarning(v20);
    ExFreePoolWithTag(*(PVOID *)(v6 + 2616), 0);
    goto LABEL_13;
  }
  memset(v12, 0, 8LL * MaximumAdapterCount);
  *(_QWORD *)(v6 + 2632) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v6 + 2648) = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
    v15 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v6 + 2640) = v15;
  if ( *(_BYTE *)(a1 + 273) )
    g_pVidSchSystemProcess = v6;
  return v6;
}
