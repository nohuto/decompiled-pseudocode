/*
 * XREFs of sub_140548560 @ 0x140548560
 * Callers:
 *     WbHeapExecutionUnloadModule @ 0x1404514C4 (WbHeapExecutionUnloadModule.c)
 *     WbPopStackEntries @ 0x14045B590 (WbPopStackEntries.c)
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14054801C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbCreateHeapExecutedBlock @ 0x1405481A0 (WbCreateHeapExecutedBlock.c)
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 */

signed __int64 __fastcall sub_140548560(__int64 a1, __int64 a2)
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
        WbFreeUserMemory(a1);
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
