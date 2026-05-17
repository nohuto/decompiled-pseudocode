/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x180089AD8
 * Callers:
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapWatermarks(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // rdx
  unsigned int v3; // eax

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    ++*(_DWORD *)(a1 + 608);
    v1 = *(_DWORD *)(a1 + 616);
    if ( *(_DWORD *)(a1 + 608) > v1 )
    {
      v2 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 608) = 0;
      if ( v2 > *(_QWORD *)(a1 + 640) )
        *(_QWORD *)(a1 + 640) = v2;
      *(_QWORD *)(a1 + 648) = v2;
    }
    if ( ++*(_DWORD *)(a1 + 620) >= 0x1000u )
    {
      v3 = 16;
      if ( *(_BYTE *)(a1 + 386) == 2 && *(_DWORD *)(a1 + 624) > 0x10u )
        v3 = 256;
      if ( *(_DWORD *)(a1 + 612) > v3 && v1 < 0x10000 )
        *(_DWORD *)(a1 + 616) = 2 * v1;
      *(_DWORD *)(a1 + 612) = 0;
      *(_DWORD *)(a1 + 620) = 0;
    }
  }
}
