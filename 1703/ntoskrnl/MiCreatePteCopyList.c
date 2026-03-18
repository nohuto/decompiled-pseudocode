/*
 * XREFs of MiCreatePteCopyList @ 0x14002A77C
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiGetPteMappingPair @ 0x140225D84 (MiGetPteMappingPair.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x1406BFEE8 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  bool v5; // zf

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 > a2 >> 1 )
    *(_DWORD *)(a3 + 4) = a2 & 0xFFFFFFFE;
  else
    *(_DWORD *)(a3 + 4) = 2 * a1;
  do
  {
    result = MiReservePtes(&qword_14036D0A0, *(unsigned int *)(a3 + 4));
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v5 = *(_DWORD *)(a3 + 4) == 2;
    *(_DWORD *)(a3 + 4) -= 2;
  }
  while ( !v5 );
  return result;
}
