/*
 * XREFs of MiReleasePteCopyList @ 0x14002EDD4
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x1406BFF98 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v1 )
    return MiReleasePtes(&qword_14036D0A0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
