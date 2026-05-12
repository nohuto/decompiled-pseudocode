/*
 * XREFs of StorpUpdateUncachedExtensionAllocationRegion @ 0x1C003638C
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C0018E80 (StorPortGetUncachedExtension.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x1C0018FB8 (RaidDmaAllocateUncachedExtension.c)
 *     StorFreeContiguousMemory @ 0x1C005F914 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorpUpdateUncachedExtensionAllocationRegion(__int64 a1, int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  __int64 v4; // r15
  int UncachedExtension; // edi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rcx

  v2 = a1 + 728;
  v3 = 0x80000000;
  v4 = a1 + 696;
  while ( 1 )
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v3,
                          *(_QWORD *)(a1 + 4376),
                          *(_QWORD *)(a1 + 4368),
                          *(_QWORD *)(a1 + 4384),
                          *(_DWORD *)(a1 + 4360),
                          *a2,
                          v2);
    if ( UncachedExtension < 0 )
    {
      v3 >>= 1;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 736) & 0xFFFFFFFF00000000uLL;
      v9 = *(_QWORD *)(a1 + 736) | 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 4376) = v8;
      *(_QWORD *)(a1 + 4368) = v9;
      StorFreeContiguousMemory(v8, v2);
    }
    if ( UncachedExtension >= 0 )
      break;
    if ( v3 < 0x8000000 )
    {
      if ( *a2 != 0x80000000 )
      {
        v10 = 0x80000000;
        do
        {
          UncachedExtension = RaidDmaAllocateUncachedExtension(
                                v4,
                                v10,
                                *(_QWORD *)(a1 + 4376),
                                *(_QWORD *)(a1 + 4368),
                                *(_QWORD *)(a1 + 4384),
                                *(_DWORD *)(a1 + 4360),
                                0x80000000,
                                v2);
          if ( UncachedExtension < 0 )
          {
            v10 >>= 1;
          }
          else
          {
            v11 = *(_QWORD *)(a1 + 736);
            *a2 = 0x80000000;
            *(_QWORD *)(a1 + 4376) = v11 & 0xFFFFFFFF00000000uLL;
            v11 |= 0xFFFFFFFFuLL;
            *(_QWORD *)(a1 + 4368) = v11;
            StorFreeContiguousMemory(v11, v2);
          }
        }
        while ( UncachedExtension < 0 && v10 >= 0x8000000 );
      }
      return (unsigned int)UncachedExtension;
    }
  }
  return (unsigned int)UncachedExtension;
}
