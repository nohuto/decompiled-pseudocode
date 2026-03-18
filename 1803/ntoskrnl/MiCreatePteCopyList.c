/*
 * XREFs of MiCreatePteCopyList @ 0x1400C613C
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiGetPteMappingPair @ 0x14026D4A0 (MiGetPteMappingPair.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // eax
  bool v7; // zf

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 > a2 >> 1 )
    v4 = (unsigned int)a2 & 0xFFFFFFFE;
  else
    v4 = (unsigned int)(2 * a1);
  *(_DWORD *)(a3 + 4) = v4;
  do
  {
    result = MiReservePtes(&qword_1403CC5E0, v4);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v6 = *(_DWORD *)(a3 + 4);
    v7 = v6 == 2;
    result = (unsigned int)(v6 - 2);
    *(_DWORD *)(a3 + 4) = result;
    v4 = (unsigned int)result;
  }
  while ( !v7 );
  return result;
}
