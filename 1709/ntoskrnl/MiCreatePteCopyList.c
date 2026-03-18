/*
 * XREFs of MiCreatePteCopyList @ 0x140123E80
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiGetPteMappingPair @ 0x140234BEC (MiGetPteMappingPair.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406ED4E8 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x1406EE840 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR result; // rax
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
    result = MiReservePtes((__int64)&qword_140389360, *(unsigned int *)(a3 + 4), a3);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v5 = *(_DWORD *)(a3 + 4) == 2;
    *(_DWORD *)(a3 + 4) -= 2;
  }
  while ( !v5 );
  return result;
}
