/*
 * XREFs of ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x1801C94B8
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x1800659F0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180002A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002BAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall GetFirstApplicationViewTitleProperty(HWND hWnd, __int64 a2, char *a3, unsigned __int64 *a4)
{
  signed int v7; // ecx
  __int64 v8; // r8
  LPARAM *v9; // rax
  __int64 v10; // r9
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
    v10 = v8 ? 255 - v8 : 0LL;
    lParam[0] = v10 & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64);
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
