/*
 * XREFs of MiReleasePteCopyList @ 0x140125EF4
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406ED4E8 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x1406EE968 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r8d
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
    return MiReleasePtes((__int64)&qword_140389360, *(_QWORD *)(a1 + 16), v4, a4);
  return result;
}
