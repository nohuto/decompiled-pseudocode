/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x1400EACA4
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
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
