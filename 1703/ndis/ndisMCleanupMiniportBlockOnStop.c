/*
 * XREFs of ndisMCleanupMiniportBlockOnStop @ 0x1C00BEB48
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00AB3E8 (ndisInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C00254E0 (ndisFreePerProcessorSlot.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C0025590 (NdisNblTrackerDeregisterComponent.c)
 *     EthDeleteFilter @ 0x1C00BECE8 (EthDeleteFilter.c)
 *     nullDeleteFilter @ 0x1C00E0E7C (nullDeleteFilter.c)
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
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx

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
  if ( !*(_DWORD *)(a1 + 464) && *(_QWORD *)(a1 + 400) )
  {
    EthDeleteFilter();
LABEL_10:
    *(_QWORD *)(a1 + 400) = 0LL;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(a1 + 400) )
  {
    nullDeleteFilter();
    goto LABEL_10;
  }
LABEL_11:
  if ( *(_QWORD *)(a1 + 600) )
  {
    nullDeleteFilter();
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  v5 = *(void **)(a1 + 1776);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 1776) = 0LL;
  }
  v6 = *(void **)(a1 + 496);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    *(_DWORD *)(a1 + 200) = 0;
  }
  v7 = *(void **)(a1 + 3096);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 3096) = 0LL;
    *(_DWORD *)(a1 + 3104) = 0;
  }
  v8 = *(void **)(a1 + 3416);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 3416) = 0LL;
    *(_DWORD *)(a1 + 3424) = 0;
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 360));
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_WORD *)(a1 + 360) = 0;
  }
  v9 = *(_QWORD *)(a1 + 4104);
  if ( v9 )
  {
    NdisNblTrackerDeregisterComponent(v9);
    *(_QWORD *)(a1 + 4104) = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 3928);
  if ( v10 )
  {
    NdisNblTrackerDeregisterComponent(v10);
    *(_QWORD *)(a1 + 3928) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 3312);
  if ( v11 )
  {
    ndisFreePerProcessorSlot(v11, 5403508);
    *(_QWORD *)(a1 + 3312) = 0LL;
  }
  v12 = *(void **)(a1 + 1984);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(a1 + 1984) = 0LL;
  }
}
