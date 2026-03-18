/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x140103108
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 144) += a3;
  result = 0xFFFFF68000000000uLL;
  if ( a2 < 0xFFFFF68000000000uLL || (result = 0xFFFFF6FFFFFFFFFFuLL, a2 > 0xFFFFF6FFFFFFFFFFuLL) )
    *(_QWORD *)(a1 + 128) += a3;
  return result;
}
