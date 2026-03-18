/*
 * XREFs of MiLogMapFileEvent @ 0x1406B3024
 * Callers:
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x14020E170 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1406B2E54 (MiFillMapFileInfo.c)
 */

unsigned __int8 __fastcall MiLogMapFileEvent(__int64 a1, __int16 a2)
{
  unsigned __int8 result; // al
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  result = *(_DWORD *)(a1 + 48) & 7;
  if ( result != 1 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    return (unsigned __int8)MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
  return result;
}
