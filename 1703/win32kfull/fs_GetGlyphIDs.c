/*
 * XREFs of fs_GetGlyphIDs @ 0x1C02BBDAC
 * Callers:
 *     cjComputeGLYPHSET_OLDBIDI @ 0x1C0229870 (cjComputeGLYPHSET_OLDBIDI.c)
 *     vFillIFICharsets @ 0x1C0229E74 (vFillIFICharsets.c)
 *     pvHandleKerningPairs @ 0x1C022E254 (pvHandleKerningPairs.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02BC1D0 (fs_SetUpKey.c)
 */

__int64 __fastcall fs_GetGlyphIDs(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // r9d
  unsigned __int16 v8; // r11
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(v10) = a2;
  v5 = fs_SetUpKey(a1, 2LL, &v10);
  if ( v5 )
    return sfac_GetMultiGlyphIDs(v5, v6, v8, v7, a5);
  else
    return v10;
}
