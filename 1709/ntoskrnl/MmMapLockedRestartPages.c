/*
 * XREFs of MmMapLockedRestartPages @ 0x1406DF2D0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned __int64 v7; // rdx
  int v8; // r8d

  if ( (a3 & 0xBFFFFFFF) != 0 )
    return 0LL;
  v7 = MiReserveDriverPtes(0, (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12);
  if ( !v7 )
    return 0LL;
  if ( (MiFlags & 0x10000) != 0 || (v8 = 6, (a3 & 0x40000000) != 0) )
    v8 = 4;
  return MiMapMdlCommon((__int64)a1, v7, v8, a2);
}
