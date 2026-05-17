/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x180061908
 * Callers:
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x180061978 (RtlpWalkHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x180062050 (RtlpHpTaggableHeap.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  signed __int64 v2; // r8
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 && (unsigned int)RtlpHpTaggableHeap() )
  {
    memset(v3, 0, 0x30uLL);
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal(a1, v3, v2) < 0 )
        break;
      if ( (BYTE2(v3[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_18015D918 + 8LL * LOWORD(v3[4]) - 8) + 32LL),
               -v3[1]);
    }
  }
}
