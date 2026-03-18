/*
 * XREFs of BgpTxtDisplayCharacter @ 0x14014076C
 * Callers:
 *     BgpDisplayCharacterEx @ 0x140266350 (BgpDisplayCharacterEx.c)
 *     AnFwpProgressAnimationManual @ 0x1407551BC (AnFwpProgressAnimationManual.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407577C0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     TxtpGetCacheEntry @ 0x1401409AC (TxtpGetCacheEntry.c)
 *     BgpGxDrawRectangle @ 0x140140A34 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     BgpRasPrintGlyph @ 0x140140DFC (BgpRasPrintGlyph.c)
 *     BgpGxFillRectangle @ 0x1401413A0 (BgpGxFillRectangle.c)
 *     BgpGxConvertRectangleEx @ 0x14014141C (BgpGxConvertRectangleEx.c)
 *     BgpFoGetTextMetrics @ 0x140141528 (BgpFoGetTextMetrics.c)
 *     TxtpAddCacheEntry @ 0x140757C08 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x140757D34 (BgpGxRectangleDestroy.c)
 *     BgpGxBlendRectangle @ 0x14075A828 (BgpGxBlendRectangle.c)
 *     TxtpJustifyRectangle @ 0x14075ADB0 (TxtpJustifyRectangle.c)
 */

__int64 BgpTxtDisplayCharacter(__int64 a1, __int64 a2, char a3, _DWORD *a4, _DWORD *a5, ...)
{
  _DWORD *v6; // rbx
  int v7; // r9d
  __int64 v8; // rcx
  _DWORD *v9; // r14
  unsigned int *v10; // r8
  _DWORD *v11; // r12
  char v12; // r15
  int v13; // edi
  int v14; // r13d
  char v15; // si
  __int64 CacheEntry; // rax
  __int64 result; // rax
  __int64 v18; // rsi
  int v19; // eax
  unsigned int BitsPerPixel; // eax
  __int64 v21; // r10
  int v22; // eax
  int v23; // [rsp+58h] [rbp-51h]
  __int64 v24; // [rsp+60h] [rbp-49h] BYREF
  int v25; // [rsp+68h] [rbp-41h] BYREF
  __int64 v26; // [rsp+70h] [rbp-39h]
  int v27; // [rsp+78h] [rbp-31h]
  int v28; // [rsp+7Ch] [rbp-2Dh]
  _DWORD *v29; // [rsp+80h] [rbp-29h] BYREF
  _DWORD *v30; // [rsp+88h] [rbp-21h] BYREF
  __int64 v31; // [rsp+90h] [rbp-19h]
  __int64 v32; // [rsp+98h] [rbp-11h]
  unsigned __int16 v34; // [rsp+100h] [rbp+57h]
  __int64 v37; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  va_list va1; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v37 = va_arg(va1, _QWORD);
  v34 = a2;
  v6 = 0LL;
  v32 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  v8 = 0LL;
  v23 = 0;
  v9 = *(_DWORD **)(a1 + 32);
  v10 = (unsigned int *)(a1 + 40);
  v11 = 0LL;
  v12 = *(_BYTE *)(a1 + 60) & 1;
  v24 = 0LL;
  v27 = 0;
  v13 = 0;
  v28 = 0;
  v14 = 0;
  v30 = 0LL;
  LOBYTE(v37) = 0;
  v25 = 0;
  v15 = v12;
  v26 = 0LL;
  v29 = 0LL;
  v31 = a1 + 40;
  if ( (unsigned __int16)a2 < 0x20u )
    goto LABEL_12;
  if ( v12 )
  {
    CacheEntry = TxtpGetCacheEntry(&TxtpTextCache, a2, v10, 0LL);
    v26 = CacheEntry;
    if ( CacheEntry )
    {
      v6 = *(_DWORD **)(CacheEntry + 48);
      v15 = 0;
      goto LABEL_5;
    }
  }
  BgpGxFillRectangle(v9, *v10);
  v18 = v31;
  v28 = v9[1];
  v27 = *v9;
  v19 = BgpRasPrintGlyph((_DWORD)v9, v31, v34, v24, HIDWORD(v24), 1, (__int64)&v25);
  v13 = v19;
  if ( v19 < 0 )
  {
    DbgPrintEx(0x65u, 0, "BGFX internal font error %x char %x!\n", v19, v34);
    v14 = v25;
    v7 = 0;
    v15 = v12;
    goto LABEL_11;
  }
  v14 = v25;
  if ( !v12 )
  {
    result = BgpFoGetTextMetrics(v18, (__int64 *)va);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v23 = HIDWORD(v37);
    *v9 = HIDWORD(v37);
    v9[1] = v14;
    LOBYTE(v37) = 1;
  }
  if ( v32 )
  {
    TxtpJustifyRectangle(a1, a1 + 8, &v24);
    v22 = BgpGxBlendRectangle(v21, v9, &v24, &v29);
    v6 = v29;
    v13 = v22;
    v15 = v12;
    if ( v22 < 0 )
      goto LABEL_10;
  }
  else
  {
    v6 = v9;
  }
  v15 = v12;
  if ( !v12 )
    goto LABEL_5;
  BitsPerPixel = BgpGetBitsPerPixel();
  if ( v6 != v9 && BitsPerPixel == v6[2] )
  {
    v11 = v6;
LABEL_32:
    v15 = v12;
LABEL_5:
    HIDWORD(v24) = *(_DWORD *)(a1 + 4);
    LODWORD(v24) = *(_DWORD *)a1 + v24;
    if ( (a3 & 1) != 0 || (dword_140341A30 & 0x1000000) != 0 || (v13 = BgpGxDrawRectangle(v6, &v24), v13 >= 0) )
    {
      if ( v15 )
        v13 = TxtpAddCacheEntry(&TxtpTextCache, v34, v31, v11);
    }
    goto LABEL_10;
  }
  v13 = BgpGxConvertRectangleEx(v6, BitsPerPixel, &v30, 0LL);
  v15 = v12;
  if ( v13 >= 0 )
  {
    if ( v6 != v9 )
      BgpGxRectangleDestroy(v6);
    v11 = v30;
    v6 = v30;
    goto LABEL_32;
  }
LABEL_10:
  v7 = v23;
LABEL_11:
  v8 = v26;
LABEL_12:
  if ( a4 )
    *a4 = v14;
  if ( a5 )
    *a5 = v7;
  if ( v6 != v9 && !v8 && (!v15 || v13 < 0) && v6 )
    BgpGxRectangleDestroy(v6);
  if ( (_BYTE)v37 )
  {
    *v9 = v27;
    v9[1] = v28;
  }
  return (unsigned int)v13;
}
