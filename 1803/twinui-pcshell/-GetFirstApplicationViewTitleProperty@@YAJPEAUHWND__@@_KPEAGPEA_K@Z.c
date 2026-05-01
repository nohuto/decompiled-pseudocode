/*
 * XREFs of ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x1800834B0
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180047960 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800835D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall GetFirstApplicationViewTitleProperty(HWND hWnd, __int64 a2, unsigned __int16 *a3, LPARAM *a4)
{
  unsigned __int16 *v4; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rcx
  wchar_t *i; // rax
  int v11; // edx
  char *v12; // rcx
  unsigned __int16 v13; // ax
  LPARAM lParam; // [rsp+20h] [rbp-248h] BYREF
  wchar_t Buffer[260]; // [rsp+28h] [rbp-240h] BYREF

  v4 = a3;
  *a4 = 0LL;
  *a3 = 0;
  memset_0(&lParam, 0, 0x208uLL);
  v7 = 255LL;
  result = StringCchPrintfW(Buffer, 0xFFuLL, L"ApplicationView_CustomWindowTitle#%u#", (unsigned int)hWnd);
  if ( (int)result >= 0 )
  {
    v9 = 255LL;
    for ( i = Buffer; *i; ++i )
    {
      if ( !--v9 )
        return 2147942487LL;
    }
    lParam = 255 - v9;
    if ( EnumPropsExW(hWnd, ApplicationViewTitleEnum, (LPARAM)&lParam) )
    {
      return 2147943568LL;
    }
    else
    {
      v11 = 0;
      v12 = (char *)((char *)Buffer - (char *)v4);
      while ( v7 != -2147483391 )
      {
        v13 = *(unsigned __int16 *)((char *)v4 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v4++ = v13;
        if ( !--v7 )
        {
          --v4;
          v11 = -2147024774;
          break;
        }
      }
      *v4 = 0;
      result = (unsigned int)v11;
      if ( v11 >= 0 )
        *a4 = lParam;
    }
  }
  return result;
}
