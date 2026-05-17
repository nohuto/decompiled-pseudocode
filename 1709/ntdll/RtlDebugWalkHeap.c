/*
 * XREFs of RtlDebugWalkHeap @ 0x180104A64
 * Callers:
 *     RtlpWalkHeap @ 0x1800F111C (RtlpWalkHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 */

char __fastcall RtlDebugWalkHeap(_DWORD *a1)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlWalkHeap") )
    return RtlpValidateHeap(a1, 0LL);
  return v2;
}
