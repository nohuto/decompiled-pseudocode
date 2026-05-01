/*
 * XREFs of s_ParseColorFormat @ 0x180191754
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP__@@@Z @ 0x18017E5F0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP.c)
 * Callees:
 *     GetNamedColor @ 0x1801916A4 (GetNamedColor.c)
 *     _o__wcstoui64_0 @ 0x180194E32 (_o__wcstoui64_0.c)
 */

__int64 __fastcall s_ParseColorFormat(LPCWCH lpString1, int a2, unsigned int *a3)
{
  int v6; // eax
  const wchar_t *v7; // rbp
  size_t v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rax
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  const WCHAR *v16; // [rsp+58h] [rbp+20h] BYREF

  if ( ((a2 - 8) & 0xFFFFFFFC) != 0 || a2 == 9 )
    return (unsigned int)GetNamedColor(lpString1, a2, a3);
  if ( *lpString1 != 35 )
  {
    if ( *lpString1 == 48 && lpString1[1] == 120 )
    {
      v6 = 2;
      goto LABEL_8;
    }
    return (unsigned int)GetNamedColor(lpString1, a2, a3);
  }
  v6 = 1;
LABEL_8:
  v7 = &lpString1[v6];
  v8 = wcsspn(v7, L"0123456789ABCDEFabcdef");
  if ( (v8 != 6 || a2 != 8) && (v8 != 8 || (unsigned int)(a2 - 10) > 1) )
    return (unsigned int)GetNamedColor(lpString1, a2, a3);
  v9 = 0;
  v16 = 0LL;
  v10 = o__wcstoui64_0(v7, &v16, 16LL);
  v11 = v10;
  if ( &lpString1[a2 - 1] != v16 || v10 == -1 )
    return (unsigned int)GetNamedColor(lpString1, a2, a3);
  v12 = BYTE1(v10) << 8;
  if ( a2 == 11 )
  {
    v13 = v12 | ((BYTE2(v11) | 0xFFFFFF00) << 16);
    v14 = (unsigned __int8)v11;
  }
  else
  {
    v13 = v12 | ((v11 | 0xFFFFFF00) << 16);
    v14 = BYTE2(v11);
  }
  *a3 = v14 | v13;
  return v9;
}
