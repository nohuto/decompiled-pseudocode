/*
 * XREFs of RtlProtectHeap @ 0x18004C5A0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlpCallVectoredHandlers @ 0x18006CBA8 (RtlpCallVectoredHandlers.c)
 *     RtlDeleteFunctionTable @ 0x180072F20 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800730E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180073620 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800738C0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180073C20 (RtlAddGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180075888 (RtlpAddVectoredHandler.c)
 *     RtlSetProtectedPolicy @ 0x1800823C0 (RtlSetProtectedPolicy.c)
 *     RtlpRemoveVectoredHandler @ 0x180086748 (RtlpRemoveVectoredHandler.c)
 *     RtlGrowFunctionTable @ 0x1800E0160 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlpProtectHeap @ 0x18004C67C (RtlpProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18004C75C (RtlpMoveHeapBetweenLists.c)
 *     RtlpHpHeapProtect @ 0x180102D14 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // eax
  ULONG v5; // edi
  int v6; // eax
  int v7; // eax

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         HeapHandle,
                         (*((_DWORD *)HeapHandle + 5) & 0x40000000) != 0 ? 64 : 4);
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle, 1);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 2LL);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v7 = RtlpHpHeapProtect(HeapHandle, v5);
    else
      v7 = RtlpProtectHeap(HeapHandle, v5);
    if ( v7 >= 0 && !MakeReadOnly )
      RtlpMoveHeapBetweenLists(HeapHandle, 2LL, 1LL);
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
