/*
 * XREFs of sfac_GetWinNTGlyphIDs @ 0x1C02CA41C
 * Callers:
 *     fs_WinNTGetGlyphIDs @ 0x1C02BC250 (fs_WinNTGetGlyphIDs.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 *     sfac_GetLongGlyphIDs @ 0x1C02C9BB8 (sfac_GetLongGlyphIDs.c)
 */

__int64 __fastcall sfac_GetWinNTGlyphIDs(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 result; // rax
  unsigned int LongGlyphIDs; // ebx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_WORD *)(a1 + 208) & 0xFFF9) != 0 )
    return 5130LL;
  result = sfac_GetDataPtr(a1, 0, -1, 8, 1, &v13);
  if ( !(_DWORD)result )
  {
    LongGlyphIDs = sfac_GetLongGlyphIDs(
                     *(_DWORD *)(a1 + 212),
                     (_WORD *)(v13 + *(unsigned int *)(a1 + 20)),
                     a1,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return LongGlyphIDs;
  }
  return result;
}
