/*
 * XREFs of fs_WinNTGetGlyphIDs @ 0x1C02B6064
 * Callers:
 *     Fixup5cRun @ 0x1C0227380 (Fixup5cRun.c)
 *     cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C022AB00 (cjComputeGLYPHSET_MSFT_UNICODE.c)
 *     cjComputeGLYPHSET_TEMPLATE @ 0x1C022B018 (cjComputeGLYPHSET_TEMPLATE.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B5FE4 (fs_SetUpKey.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C02C4244 (sfac_GetWinNTGlyphIDs.c)
 */

__int64 __fastcall fs_WinNTGetGlyphIDs(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax
  int v9; // r11d
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF

  v8 = fs_SetUpKey(a1, 2, v11);
  if ( v8 )
    return sfac_GetWinNTGlyphIDs(v8, *(unsigned __int16 *)(v8 + 392), a2, a3, v9, a5, a6);
  else
    return v11[0];
}
