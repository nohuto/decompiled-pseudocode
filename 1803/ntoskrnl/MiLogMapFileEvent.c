/*
 * XREFs of MiLogMapFileEvent @ 0x140749E78
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x140253750 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x140749CA4 (MiFillMapFileInfo.c)
 */

char __fastcall MiLogMapFileEvent(__int64 a1, __int16 a2)
{
  char result; // al
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  result = *(_DWORD *)(a1 + 48) & 7;
  if ( result != 1 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    return MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
  return result;
}
