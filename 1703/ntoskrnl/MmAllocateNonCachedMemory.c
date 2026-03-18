/*
 * XREFs of MmAllocateNonCachedMemory @ 0x1406B4790
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x140033E40 (MmFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rdi
  struct _MDL *PagesForMdl; // rsi
  unsigned __int64 v4; // r8
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
  v5 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v2, v4);
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
    *(_QWORD *)v5 = (ValidPte ^ (*(_QWORD *)(v9 + v5) << 12)) & 0xFFFFFFFFF000LL ^ ValidPte;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow();
    v5 += 8LL;
    --v2;
  }
  while ( v2 );
  return (PVOID)v7;
}
