/*
 * XREFs of IopLiveDumpEstimateMemoryPages @ 0x14042B67C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x14010C850 (RtlClearAllBitsEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlCalculateLivedumpSize @ 0x1401EF970 (HvlCalculateLivedumpSize.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x1401FBDC0 (IopLiveDumpTraceBufferEstimation.c)
 *     RtlNumberOfSetBitsEx @ 0x140253360 (RtlNumberOfSetBitsEx.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x14042ACD0 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpUncorralProcessors @ 0x14042C168 (IopLiveDumpUncorralProcessors.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 */

__int64 __fastcall IopLiveDumpEstimateMemoryPages(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebp
  unsigned __int64 v4; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+78h] [rbp+10h]

  memset(&v6[1], 0, 0x20uLL);
  *(_DWORD *)(a1 + 80) |= 1u;
  IopLiveDumpCallRemovePagesCallbacks(a1);
  LODWORD(v6[4]) = 17;
  v6[0] = IopLiveDumpStartMirroringCallback;
  v6[1] = IopLiveDumpEndMirroringCallback;
  v6[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v2 = 0LL;
  v3 = MmDuplicateMemory(v6);
  if ( v3 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
      IopLiveDumpUncorralProcessors(a1 + 240);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  else
  {
    v4 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
    *(_QWORD *)(a1 + 96) = v4 + (v4 >> 4);
    if ( (*(_DWORD *)(a1 + 44) & 1) != 0 && (int)HvlCalculateLivedumpSize((__int64)&v7) >= 0 )
    {
      *(_QWORD *)(a1 + 112) = (v7 >> 12) + ((v7 & 0xFFF) != 0);
      LOBYTE(v2) = (v8 & 0xFFF) != 0;
      v2 += v8 >> 12;
    }
    else
    {
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    *(_QWORD *)(a1 + 120) = v2;
    IopLiveDumpTraceBufferEstimation();
  }
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 368));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 424));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 464));
  *(_DWORD *)(a1 + 80) &= ~1u;
  return (unsigned int)v3;
}
