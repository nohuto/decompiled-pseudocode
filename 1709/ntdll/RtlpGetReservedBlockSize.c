/*
 * XREFs of RtlpGetReservedBlockSize @ 0x180106330
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpWalkLFHBlock @ 0x1801067C8 (RtlpWalkLFHBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetReservedBlockSize(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 38) & 3) != 0 )
    return (((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
  else
    return *(unsigned __int16 *)(a1 + 36);
}
