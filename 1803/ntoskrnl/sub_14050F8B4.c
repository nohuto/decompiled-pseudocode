/*
 * XREFs of sub_14050F8B4 @ 0x14050F8B4
 * Callers:
 *     WbHeapExecuteCall @ 0x14050EC60 (WbHeapExecuteCall.c)
 *     sub_14050F6D0 @ 0x14050F6D0 (sub_14050F6D0.c)
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 *     WbFreeWarbirdProcess @ 0x1405399A8 (WbFreeWarbirdProcess.c)
 *     WbCreateHeapExecutedBlock @ 0x140539C10 (WbCreateHeapExecutedBlock.c)
 *     WbHeapExecutionUnloadModule @ 0x14056EE2C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14056EF30 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WbFreeUserMemory @ 0x14056F130 (WbFreeUserMemory.c)
 */

signed __int64 __fastcall sub_14050F8B4(__int64 a1, __int64 a2)
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
