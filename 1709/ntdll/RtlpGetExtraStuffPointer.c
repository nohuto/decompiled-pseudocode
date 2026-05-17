/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x180077C6C
 * Callers:
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180077630 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077A10 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801053B8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetExtraStuffPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
