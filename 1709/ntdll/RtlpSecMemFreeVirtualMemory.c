/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x18004A630
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x180006FD8 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlpDecommitBlock @ 0x18004A4B4 (RtlpDecommitBlock.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180061354 (RtlpDestroyHeapSegment.c)
 *     RtlValidateProcessHeaps @ 0x1800EFB20 (RtlValidateProcessHeaps.c)
 *     RtlDebugDestroyHeap @ 0x1801039B0 (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F3D60 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi

  v4 = a4;
  v7 = ZwFreeVirtualMemory(-1LL, a2, a3, a4);
  if ( v7 == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory(-1LL, a2, a3, v4);
  else
    return v7;
}
