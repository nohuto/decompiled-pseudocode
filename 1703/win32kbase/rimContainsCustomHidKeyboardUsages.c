/*
 * XREFs of rimContainsCustomHidKeyboardUsages @ 0x1C0114344
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0114064 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall rimContainsCustomHidKeyboardUsages(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v7; // ebx
  struct _HIDP_BUTTON_CAPS *v8; // rsi
  unsigned __int8 v9; // di
  int SpecificButtonCaps; // eax
  unsigned __int16 v12; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-40h]

  v13[0] = 0LL;
  if ( a5 )
  {
    v12 = *(_WORD *)(a4 + 46);
    v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged(72LL * v12, 0x626B4852u);
    if ( v8 )
    {
      memset(v8, 0, 72LL * v12);
      *a5 = 0;
      v9 = 0;
      v13[0] = 0xF300F400F100F0LL;
      while ( 1 )
      {
        v12 = *(_WORD *)(a4 + 46);
        memset(v8, 0, 72LL * v12);
        SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *((_WORD *)v13 + v9), v8, &v12, a3);
        v7 = SpecificButtonCaps;
        if ( SpecificButtonCaps < 0 )
          break;
        if ( ++v9 >= 4u )
        {
          *a5 = 1;
          goto LABEL_11;
        }
      }
      if ( SpecificButtonCaps == -1072627708 )
        v7 = 0;
LABEL_11:
      Win32FreePool((__int64)v8);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
