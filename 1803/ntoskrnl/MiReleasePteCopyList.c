/*
 * XREFs of MiReleasePteCopyList @ 0x1400C8214
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x140757E44 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v1 )
    return MiReleasePtes(&qword_1403CC5E0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
