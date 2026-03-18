/*
 * XREFs of sub_140502354 @ 0x140502354
 * Callers:
 *     sub_140502134 @ 0x140502134 (sub_140502134.c)
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 *     WbCreateHeapExecutedBlock @ 0x140503894 (WbCreateHeapExecutedBlock.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140504DC0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeWarbirdProcess @ 0x140575EBC (WbFreeWarbirdProcess.c)
 *     WbHeapExecutionUnloadModule @ 0x140583BB0 (WbHeapExecutionUnloadModule.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WbFreeUserMemory @ 0x140577424 (WbFreeUserMemory.c)
 */

signed __int64 __fastcall sub_140502354(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        WbFreeUserMemory();
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      ExFreePoolWithTag((PVOID)a2, 0x42524157u);
    }
  }
  return v2;
}
