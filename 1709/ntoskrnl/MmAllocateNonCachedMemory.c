/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1406E0780
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 *     MmFreePagesFromMdl @ 0x140130F50 (MmFreePagesFromMdl.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rdi
  struct _MDL *PagesForMdl; // rsi
  __int64 v4; // r8
  ULONG_PTR v5; // rbx
  struct _MDL *v6; // r14
  __int64 v7; // rsi
  unsigned __int64 ValidPte; // rdx
  ULONG_PTR v9; // r14

  if ( NumberOfBytes >= 0x100000000LL )
    return 0LL;
  v2 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (__int64)&MiSystemPartition,
                                 0LL,
                                 0xFFFFFFFFFFFFFFFFuLL,
                                 0LL,
                                 NumberOfBytes,
                                 0,
                                 *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192)
                                          + 146LL),
                                 4);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v2, v4);
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  v6 = PagesForMdl + 1;
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x57FFFFFFFF0LL) = PagesForMdl;
  v7 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, -1610612724);
  v9 = (ULONG_PTR)v6 - v5;
  do
  {
    ValidPte ^= (ValidPte ^ (*(_QWORD *)(v9 + v5) << 12)) & 0xFFFFFFFFF000LL;
    *(_QWORD *)v5 = ValidPte;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    v5 += 8LL;
    --v2;
  }
  while ( v2 );
  return (PVOID)v7;
}
