/*
 * XREFs of ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00A1B14
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0099618 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A0EB8 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C00A9A54 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 */

char __fastcall VIDMM_SEGMENT::FreeSpaceForSecureResource(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int8 (*v11)(void *, void *); // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+38h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 436) )
    return 1;
  v6 = ~*(_QWORD *)(a1 + 424) & (*(_QWORD *)(a1 + 424) + *(_QWORD *)(a3 + 16));
  if ( a4 != 5 )
  {
    if ( *(_QWORD *)(a1 + 440) - *(_QWORD *)(a1 + 408) >= v6 )
    {
      v9 = *(_QWORD *)(a1 + 440);
      v8 = v9 - v6;
      goto LABEL_12;
    }
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 456);
  if ( v7 )
  {
    if ( v7 >= v6 )
    {
      v8 = *(_QWORD *)(a1 + 440);
      goto LABEL_9;
    }
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 448) - v6;
LABEL_9:
  v9 = *(_QWORD *)(a1 + 448);
LABEL_12:
  v12 = a2;
  v13 = 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(v6);
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 32) = v9;
  }
  VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(*(VIDMM_LINEAR_POOL **)(a1 + 176), v8, v9, &v12, v11);
  return v13;
}
