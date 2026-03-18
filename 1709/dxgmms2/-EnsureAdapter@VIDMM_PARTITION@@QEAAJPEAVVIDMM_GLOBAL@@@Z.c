/*
 * XREFs of ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0016298
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0081250 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000EF90 (RtlStringCbPrintfW.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0012F5C (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00164C0 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C005824C (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 */

__int64 __fastcall VIDMM_PARTITION::EnsureAdapter(VIDMM_PARTITION *this, struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  unsigned __int64 v5; // rdx
  struct VIDMM_PARTITION_ADAPTER_INFO *v6; // rbx
  unsigned __int64 v7; // rsi
  PVOID PoolWithTag; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  wchar_t *v12; // rbp
  unsigned int v13; // esi
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  __int64 v15; // rdx
  PPCW_INSTANCE *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v19; // ebx
  struct _PCW_REGISTRATION *v20; // rdx
  struct _PCW_DATA *v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  struct _PCW_DATA v29; // [rsp+40h] [rbp-48h] BYREF
  PPCW_INSTANCE *v30; // [rsp+50h] [rbp-38h] BYREF
  int v31; // [rsp+58h] [rbp-30h]
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-28h] BYREF
  NTSTATUS v33; // [rsp+A0h] [rbp+18h]

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, a2);
  v6 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
    return 0LL;
  v7 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v7 > 1 )
  {
    v5 = 0xFFFFFFFFFFFFFFFFuLL % v7;
    v9 = *((unsigned int *)a2 + 1604);
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x148 )
    {
LABEL_22:
      _InterlockedIncrement(&dword_1C00406AC);
      v23 = WdLogNewEntry5_WdLowResource(v9, v5);
      *(_QWORD *)(v23 + 24) = 383LL;
      WdLogEvent5_WdLowResource(v23);
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 328 * v7, 0x6D4D6956u);
  }
  else
  {
    PoolWithTag = (char *)AdapterInfo + 32;
  }
  *((_QWORD *)v6 + 3) = PoolWithTag;
  v9 = (unsigned __int64)PoolWithTag;
  *((_DWORD *)v6 + 90) = v7;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 328 * v7);
  if ( !*((_QWORD *)v6 + 3) )
    goto LABEL_22;
  *((_QWORD *)v6 + 1) = a2;
  *(_QWORD *)v6 = this;
  VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(a2, this, v6);
  v12 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v12 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v24);
    return 3221225495LL;
  }
  v13 = 0;
  if ( !*((_DWORD *)a2 + 1604) )
  {
    v19 = v33;
    goto LABEL_14;
  }
  while ( 1 )
  {
    SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(a2, v13, this);
    v15 = *((_QWORD *)a2 + 3);
    v16 = (PPCW_INSTANCE *)SegmentGroupStateForPartition;
    LODWORD(v28) = *((_DWORD *)this + 6);
    LODWORD(v27) = v13;
    LODWORD(Data) = *(_DWORD *)(v15 + 268);
    v19 = RtlStringCbPrintfW(
            v12,
            0x208uLL,
            L"luid_0x%08X_0x%08X_phys_%u_part_%u",
            *(unsigned int *)(v15 + 272),
            Data,
            v27,
            v28);
    if ( v19 < 0 )
      break;
    RtlInitUnicodeString(&DestinationString, v12);
    if ( *(_DWORD *)v16 )
    {
      if ( *(_DWORD *)v16 != 1 )
        goto LABEL_13;
      v20 = GpuPerformanceCounterSetNonLocalAdapterMemory;
      v21 = (struct _PCW_DATA *)&v30;
      v30 = v16;
      v31 = 328;
    }
    else
    {
      v20 = GpuPerformanceCounterSetLocalAdapterMemory;
      v21 = &v29;
      v29.Data = v16;
      v29.Size = 328;
    }
    v19 = PcwCreateInstance(v16 + 40, v20, &DestinationString, 1u, v21);
    if ( v19 < 0 )
      break;
LABEL_13:
    if ( ++v13 >= *((_DWORD *)a2 + 1604) )
      goto LABEL_14;
  }
  v25 = WdLogNewEntry5_WdAssertion(v18, v17);
  WdLogEvent5_WdAssertion(v25);
LABEL_14:
  ExFreePoolWithTag(v12, 0);
  if ( v19 < 0 )
    return (unsigned int)v19;
  else
    return 0LL;
}
