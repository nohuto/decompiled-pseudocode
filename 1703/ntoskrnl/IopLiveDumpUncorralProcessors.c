/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x140417138
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140416058 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1404163C0 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14041663C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     IopLiveDumpUnLockPages @ 0x1401F6508 (IopLiveDumpUnLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140416840 (IopLiveDumpInitiateCorralStateChange.c)
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
