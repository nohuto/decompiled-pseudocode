/*
 * XREFs of bInitStockFontsInternal @ 0x1C038801C
 * Callers:
 *     bInitStockFonts @ 0x1C0388010 (bInitStockFonts.c)
 * Callees:
 *     GreSetLFONTOwner @ 0x1C000C7F0 (GreSetLFONTOwner.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C000C954 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C000EBB4 (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     hfontCreate @ 0x1C002B4D0 (hfontCreate.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     bInitOneStockFont @ 0x1C038859C (bInitOneStockFont.c)
 *     hfontInitDefaultGuiFont @ 0x1C038873C (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C038A16C (bInitSystemFont.c)
 */

unsigned __int16 *bInitStockFontsInternal()
{
  unsigned int v0; // ebx
  unsigned __int16 *result; // rax
  unsigned __int16 *v2; // rsi
  struct HOBJ__ *v3; // rax
  struct HOBJ__ *v4; // rax
  struct HOBJ__ *v5; // rax
  struct HOBJ__ *v6; // rax
  struct HOBJ__ *v7; // rax
  void *inited; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  void *v11; // rcx
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
    v3 = hfontCreate(Src, 1, 2, 0LL);
    if ( !bSetStockObject(v3, 13, 0) && !G_fConsole )
      goto LABEL_31;
    memset(Src, 0, 0x1A4uLL);
    Src[1] = 8;
    Src[0] = 12;
    Src[4] = 400;
    *(_DWORD *)((char *)&Src[5] + 3) = 33686015;
    HIBYTE(Src[6]) = 49;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"Terminal");
    v4 = hfontCreate(Src, 3, 2, 0LL);
    if ( !bSetStockObject(v4, 10, 0) && !G_fConsole )
      goto LABEL_31;
    DcAttrDefault[22] = gahStockObjects[13];
    memset(Src, 0, 0x1A4uLL);
    HIBYTE(Src[6]) = 1;
    v5 = hfontCreate(Src, 4, 3, 0LL);
    if ( !bSetStockObject(v5, 14, 0) && !G_fConsole )
      goto LABEL_31;
    if ( ((memset(Src, 0, 0x1A4uLL), HIBYTE(Src[6]) = 2, v6 = hfontCreate(Src, 5, 3, 0LL), bSetStockObject(v6, 12, 0))
       || G_fConsole)
      && ((memset(Src, 0, 0x1A4uLL), HIBYTE(Src[6]) = 1, v7 = hfontCreate(Src, 6, 3, 0LL), bSetStockObject(v7, 11, 0))
       || G_fConsole)
      && ((inited = (void *)hfontInitDefaultGuiFont(), bSetStockObject(inited, 17, 0)) || G_fConsole)
      && ((unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[13], 0, v9)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[10], 0, v10)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[14], 0, v10)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[11], 0, v10)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[12], 0, v10)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[17], 0, v10)
       || G_fConsole) )
    {
      v11 = gahStockObjects[16];
      if ( v11 )
        GreSetLFONTOwner((__int64)v11, 0, v10);
    }
    else
    {
LABEL_31:
      v0 = 0;
    }
    Win32FreePool(v2);
    return (unsigned __int16 *)v0;
  }
  return result;
}
