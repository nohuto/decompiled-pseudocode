/*
 * XREFs of bInitStockFontsInternal @ 0x1C038220C
 * Callers:
 *     bInitStockFonts @ 0x1C03821D0 (bInitStockFonts.c)
 * Callees:
 *     hfontCreate @ 0x1C00B1A10 (hfontCreate.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00C0724 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00C0834 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00C09A4 (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     bInitOneStockFont @ 0x1C03826F0 (bInitOneStockFont.c)
 *     hfontInitDefaultGuiFont @ 0x1C038287C (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C038420C (bInitSystemFont.c)
 */

unsigned __int16 *bInitStockFontsInternal()
{
  BOOL v0; // ebx
  unsigned __int16 *result; // rax
  unsigned __int16 *v2; // rsi
  struct HOBJ__ *v3; // rax
  __int64 v4; // rdx
  struct HOBJ__ *v5; // rax
  struct HOBJ__ *v6; // rax
  struct HOBJ__ *v7; // rax
  struct HOBJ__ *v8; // rax
  void *inited; // rax
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD Src[108]; // [rsp+58h] [rbp-B0h] BYREF

  memset(Src, 0, 0x1A4uLL);
  v0 = 1;
  result = (unsigned __int16 *)PALLOCMEM2(0x254uLL, 1718838855LL, 1);
  v2 = result;
  if ( result )
  {
    memmove(result, L"\\SystemRoot\\Fonts\\", 0x26uLL);
    if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", Handle) )
    {
      if ( bQueryValueKey(
             L"SystemFontSize",
             Handle[0],
             (PVOID)((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u)
        && bQueryValueKey(
             L"SystemFont",
             Handle[0],
             (PVOID)((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u) )
      {
        memmove(
          v2 + 18,
          (const void *)(((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 12),
          *(unsigned int *)(((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 8));
        bInitSystemFont(v2);
      }
      ZwClose(Handle[0]);
    }
    if ( bOpenKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
           Handle)
      || bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", Handle) )
    {
      if ( !gahStockObjects[13] )
        bInitOneStockFont(L"FONTS.FON", 1LL, 13LL, Handle[0], (unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"OEMFONT.FON", 3LL, 10LL, Handle[0], (unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"FIXEDFON.FON", 2LL, 16LL, Handle[0], (unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      ZwClose(Handle[0]);
    }
    memset(Src, 0, 0x1A4uLL);
    Src[0] = 16;
    Src[1] = 7;
    Src[4] = 700;
    Src[6] = 570556929;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"System");
    v3 = hfontCreate(Src, 1, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v3, 13, 0) && !G_fConsole )
      goto LABEL_24;
    memset(Src, 0, 0x1A4uLL);
    Src[0] = 12;
    Src[1] = 8;
    Src[4] = 400;
    *(_DWORD *)((char *)&Src[5] + 3) = 33686015;
    HIBYTE(Src[6]) = 49;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"Terminal");
    v5 = hfontCreate(Src, 3, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v5, 10, 0) && !G_fConsole )
      goto LABEL_24;
    DcAttrDefault[22] = gahStockObjects[13];
    memset(Src, 0, 0x1A4uLL);
    HIBYTE(Src[6]) = 1;
    v6 = hfontCreate(Src, 4, 3, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v6, 14, 0) && !G_fConsole )
      goto LABEL_24;
    if ( ((memset(Src, 0, 0x1A4uLL),
           HIBYTE(Src[6]) = 2,
           v7 = hfontCreate(Src, 5, 3, 0LL, 0x48u),
           (unsigned int)bSetStockFont(v7, 12, 0))
       || G_fConsole)
      && ((memset(Src, 0, 0x1A4uLL),
           HIBYTE(Src[6]) = 1,
           v8 = hfontCreate(Src, 6, 3, 0LL, 0x48u),
           (unsigned int)bSetStockFont(v8, 11, 0))
       || G_fConsole) )
    {
      inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
      if ( !(unsigned int)bSetStockFont(inited, 17, 0) )
        v0 = G_fConsole != 0;
    }
    else
    {
LABEL_24:
      v0 = 0;
    }
    Win32FreePool(v2, v4);
    return (unsigned __int16 *)v0;
  }
  return result;
}
