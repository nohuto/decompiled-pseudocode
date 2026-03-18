/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x14042C168
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x14042B098 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEndMirroringCallback @ 0x14042B400 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14042B67C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1401FC280 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpUnLockPages @ 0x1401FC348 (IopLiveDumpUnLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x14042B874 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpUncorralProcessors(__int64 a1, char a2)
{
  IopLiveDumpInitiateCorralStateChange(a1, 5);
  IopLiveDumpInitiateCorralStateChange(a1, 6);
  PoAllProcIntrDisabled = 0;
  IopLiveDumpInitiateCorralStateChange(a1, -1);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)(a1 + 96));
  if ( a2 == 1 )
    __writecr8(*(unsigned __int8 *)(a1 + 88));
  IopLiveDumpUnLockPages();
  *(_DWORD *)(a1 + 8) &= ~1u;
  return IopLiveDumpTraceSystemQuiesceEnd();
}
