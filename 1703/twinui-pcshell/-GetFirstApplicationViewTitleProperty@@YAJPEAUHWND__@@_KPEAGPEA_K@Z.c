/*
 * XREFs of ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x18017C6E8
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180063D30 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800028C8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002A54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall GetFirstApplicationViewTitleProperty(HWND hWnd, __int64 a2, char *a3, unsigned __int64 *a4)
{
  signed int v7; // ecx
  __int64 v8; // rdx
  LPARAM *v9; // rax
  LPARAM v10; // rax
  LPARAM lParam[66]; // [rsp+20h] [rbp-248h] BYREF

  *a4 = 0LL;
  *(_WORD *)a3 = 0;
  memset(lParam, 0, 0x208uLL);
  v7 = StringCchPrintfW((wchar_t *)&lParam[1], 255LL, L"ApplicationView_CustomWindowTitle#%u#", (unsigned int)hWnd);
  if ( v7 >= 0 )
  {
    v8 = 255LL;
    v9 = &lParam[1];
    do
    {
      if ( !*(_WORD *)v9 )
        break;
      v9 = (LPARAM *)((char *)v9 + 2);
      --v8;
    }
    while ( v8 );
    v7 = v8 == 0 ? 0x80070057 : 0;
    if ( v8 )
      v10 = 255 - v8;
    else
      v10 = 0LL;
    if ( !v8 )
      v10 = 0LL;
    lParam[0] = v10;
    if ( v8 )
    {
      if ( EnumPropsExW(hWnd, (PROPENUMPROCEXW)ApplicationViewTitleEnum, (LPARAM)lParam) )
      {
        return (unsigned int)-2147023728;
      }
      else
      {
        v7 = StringCchCopyW(a3, 255LL, (char *)&lParam[1]);
        if ( v7 >= 0 )
          *a4 = lParam[0];
      }
    }
  }
  return (unsigned int)v7;
}
