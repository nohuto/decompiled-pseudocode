/*
 * XREFs of MmMapLockedRestartPages @ 0x1406B3320
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(0, (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12);
  if ( result )
    return MiMapMdlCommon((__int64)a1, result, ~(2 * BYTE2(MiFlags)) & 2 | 4u, a2);
  return result;
}
