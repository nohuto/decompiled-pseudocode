/*
 * XREFs of MiSelectBitMapForImage @ 0x140495F78
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x140495C30 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 *     MiSelectCfgBitMap @ 0x14049B378 (MiSelectCfgBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectBitMapForImage(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 14) & 0x40) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v1 + 51) & 0x10) != 0 && (*(_WORD *)(v1 + 44) & 0x2000) != 0 )
    return 3LL;
  return 2 - (unsigned int)(*(_QWORD *)(a1 + 32) < 0x100000000uLL);
}
