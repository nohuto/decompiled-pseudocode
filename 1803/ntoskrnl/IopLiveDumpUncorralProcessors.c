/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x140482C98
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140481BA4 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140481F00 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14048217C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140238F54 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpUnLockPages @ 0x140239024 (IopLiveDumpUnLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140482394 (IopLiveDumpInitiateCorralStateChange.c)
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
