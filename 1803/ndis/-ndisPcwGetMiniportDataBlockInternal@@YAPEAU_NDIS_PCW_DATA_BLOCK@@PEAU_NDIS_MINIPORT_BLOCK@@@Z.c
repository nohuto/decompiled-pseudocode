/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B1848
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001167C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F1774 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C000941C (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B1A10 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B1A80 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

struct _NDIS_PCW_DATA_BLOCK *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned int v4; // esi
  unsigned __int16 v5; // bp
  SIZE_T v6; // r14
  struct _NDIS_PCW_DATA_BLOCK *PoolWithTag; // rax
  struct _NDIS_PCW_DATA_BLOCK *v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // r14
  unsigned int v11; // esi
  char *v12; // r14
  unsigned int MiniportInstanceId; // eax
  __int64 v14; // r9
  int v15; // r9d
  unsigned int v16; // r10d
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a1->Reserved4.Buffer )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    v4 = ndisMaxNumberOfProcessors * ndisPcwPerCpuDataStride;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    v5 = pModifiedInstanceName->Length + 18;
    v6 = v4 + ndisPcwOffsetToPerCpuData + v5 * (ndisMaxNumberOfProcessors + 1);
    PoolWithTag = (struct _NDIS_PCW_DATA_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x7763444Eu);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v6);
      v9 = ndisMaxNumberOfProcessors;
      v10 = v4;
      v11 = 0;
      v12 = (char *)v8 + ndisPcwOffsetToPerCpuData + v10;
      v8->Miniport = a1;
      v8->ReferenceCount = 2;
      if ( v9 )
      {
        do
        {
          ndisPcwGetPerCpuDataForProcessor(v8, v11);
          MiniportInstanceId = ndisPcwGetMiniportInstanceId(a1, v11);
          *(_DWORD *)(v14 + 408) = MiniportInstanceId;
          *(_WORD *)(v14 + 416) = 0;
          *(_WORD *)(v14 + 418) = v5;
          *(_QWORD *)(v14 + 424) = &v12[v11 * v5];
          if ( ndisPcwGetInstanceName(a1, v11, (struct _UNICODE_STRING *)(v14 + 416)) < 0 )
            goto LABEL_11;
        }
        while ( ++v11 < ndisMaxNumberOfProcessors );
      }
      v8->TotalInstanceId = ndisPcwGetMiniportInstanceId(a1, 0xFFFu);
      v8->TotalInstanceName.Length = 0;
      v8->TotalInstanceName.MaximumLength = v5;
      v8->TotalInstanceName.Buffer = (wchar_t *)&v12[v15 * v5];
      if ( ndisPcwGetInstanceName(a1, v16, &v8->TotalInstanceName) < 0 )
      {
LABEL_11:
        ExFreePoolWithTag(v8, 0);
        return a1->PcwDataBlock;
      }
      a1->IfBlock->PcwDataBlock = v8;
      a1->Reserved4.Buffer = (wchar_t *)v8;
      _InterlockedOr(v17, 0);
      v8->Next = (_NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList;
      ndisPcwDataBlockList = v8;
    }
  }
  return a1->PcwDataBlock;
}
