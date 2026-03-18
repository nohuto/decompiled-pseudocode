/*
 * XREFs of MiSelectBitMapForImage @ 0x1404F1C00
 * Callers:
 *     MiSelectCfgBitMap @ 0x1404B5BBC (MiSelectCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1404F18A8 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectBitMapForImage(__int64 a1)
{
  __int64 v1; // rdx

  if ( (*(_BYTE *)(a1 + 14) & 0x40) != 0 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v1 + 51) & 0x10) != 0 && (*(_WORD *)(v1 + 44) & 0x2000) != 0 )
    return 3LL;
  else
    return 2 - (unsigned int)(*(_QWORD *)(a1 + 32) < 0x100000000uLL);
}
