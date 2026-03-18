/*
 * XREFs of MmAllocateNonCachedMemory @ 0x14074B6C0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 *     MmFreePagesFromMdl @ 0x1400CEF30 (MmFreePagesFromMdl.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rdi
  struct _MDL *PagesForMdl; // rsi
  ULONG_PTR v4; // rbx
  __int64 v5; // r9
  struct _MDL *v6; // r14
  __int64 v7; // rsi
  unsigned __int64 ValidPte; // rdx
  ULONG_PTR v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8

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
  v4 = MiReservePtes((__int64)&qword_1403CC5E0, v2);
  if ( !v4 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  v6 = PagesForMdl + 1;
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x57FFFFFFFF0LL) = PagesForMdl;
  v7 = (__int64)(v4 << 25) >> 16;
  ValidPte = MiMakeValidPte(v4, 0LL, 2684354572LL, v5);
  v9 = (ULONG_PTR)v6 - v4;
  do
  {
    *(_QWORD *)v4 = (ValidPte ^ (*(_QWORD *)(v9 + v4) << 12)) & 0xFFFFFFFFF000LL ^ ValidPte;
    if ( MiPteInShadowRange(v4) )
      MiWritePteShadow(v10, ValidPte, v11);
    v4 += 8LL;
    --v2;
  }
  while ( v2 );
  return (PVOID)v7;
}
