/*
 * XREFs of ndisMCleanupMiniportBlockOnStop @ 0x1C00B1FFC
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00C6B08 (ndisInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00120B0 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisRssV2Uninitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012378 (-ndisRssV2Uninitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFreePerProcessorSlot @ 0x1C0021C18 (ndisFreePerProcessorSlot.c)
 *     EthDeleteFilter @ 0x1C00B2B4C (EthDeleteFilter.c)
 *     nullDeleteFilter @ 0x1C00ED8C0 (nullDeleteFilter.c)
 */

void __fastcall ndisMCleanupMiniportBlockOnStop(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  ULONG_PTR v13; // rcx
  void *v14; // rcx
  void *v15; // rcx

  ndisRssV2Uninitialize((struct _NDIS_MINIPORT_BLOCK *)a1);
  v2 = *(void **)(a1 + 4120);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 4120) = 0LL;
  }
  v3 = *(void **)(a1 + 4296);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 4296) = 0LL;
  }
  v4 = *(void **)(a1 + 3160);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 3160) = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v5 = *(void **)(a1 + 400);
    if ( v5 )
    {
      EthDeleteFilter(v5);
LABEL_10:
      *(_QWORD *)(a1 + 400) = 0LL;
      goto LABEL_11;
    }
  }
  v15 = *(void **)(a1 + 400);
  if ( v15 )
  {
    nullDeleteFilter(v15);
    goto LABEL_10;
  }
LABEL_11:
  v6 = *(void **)(a1 + 600);
  if ( v6 )
  {
    nullDeleteFilter(v6);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  v7 = *(void **)(a1 + 1776);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 1776) = 0LL;
  }
  v8 = *(void **)(a1 + 496);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    *(_DWORD *)(a1 + 200) = 0;
  }
  v9 = *(void **)(a1 + 3096);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 3096) = 0LL;
    *(_DWORD *)(a1 + 3104) = 0;
  }
  v10 = *(void **)(a1 + 3416);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(a1 + 3416) = 0LL;
    *(_DWORD *)(a1 + 3424) = 0;
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 360));
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_WORD *)(a1 + 360) = 0;
  }
  v11 = *(_QWORD *)(a1 + 4104);
  if ( v11 )
  {
    NdisNblTrackerDeregisterComponent(v11);
    *(_QWORD *)(a1 + 4104) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 3928);
  if ( v12 )
  {
    NdisNblTrackerDeregisterComponent(v12);
    *(_QWORD *)(a1 + 3928) = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 3312);
  if ( v13 )
  {
    ndisFreePerProcessorSlot(v13, 0x527374uLL);
    *(_QWORD *)(a1 + 3312) = 0LL;
  }
  v14 = *(void **)(a1 + 1984);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a1 + 1984) = 0LL;
  }
}
