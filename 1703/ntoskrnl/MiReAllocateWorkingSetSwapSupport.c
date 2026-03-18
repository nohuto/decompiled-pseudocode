/*
 * XREFs of MiReAllocateWorkingSetSwapSupport @ 0x14007D260
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiAllocateWorkingSetSwapSupport @ 0x14007D2B8 (MiAllocateWorkingSetSwapSupport.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall MiReAllocateWorkingSetSwapSupport(__int64 a1)
{
  __int64 WorkingSetSwapSupport; // rax
  __int64 v3; // rbx
  void *v4; // rcx

  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(*(_QWORD *)(a1 + 16));
  v3 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v4 = *(void **)WorkingSetSwapSupport;
    *(_QWORD *)(WorkingSetSwapSupport + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(WorkingSetSwapSupport + 24) = *(_QWORD *)(a1 + 24);
    memmove(v4, *(const void **)a1, 16LL * *(_QWORD *)(a1 + 16));
  }
  return v3;
}
