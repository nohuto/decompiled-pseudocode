/*
 * XREFs of MiLogMapFileEvent @ 0x1406DEFF0
 * Callers:
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x140215890 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1406DEE20 (MiFillMapFileInfo.c)
 */

void __fastcall MiLogMapFileEvent(__int64 a1, unsigned __int16 a2)
{
  _BYTE v3[56]; // [rsp+30h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(a1 + 48) & 7) != 1 )
  {
    MiFillMapFileInfo(a1, (__int64)v3);
    MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v3, 44, 4200707);
  }
}
