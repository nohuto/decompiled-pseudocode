/*
 * XREFs of rimHidKeyboardIsButtonDevice @ 0x1C01147D4
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0114064 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall rimHidKeyboardIsButtonDevice(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  struct _HIDP_BUTTON_CAPS *v7; // rdi
  struct _HIDP_PREPARSED_DATA *v8; // r14
  unsigned __int16 *v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // r13
  struct _HIDP_PREPARSED_DATA *v12; // r14
  unsigned __int16 *v13; // r12
  int v14; // r15d
  __int64 v15; // r13
  unsigned __int16 v17; // [rsp+40h] [rbp-30h] BYREF
  struct _HIDP_PREPARSED_DATA *v18; // [rsp+48h] [rbp-28h]
  _DWORD *v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h] BYREF
  int v21; // [rsp+60h] [rbp-10h]

  v5 = 0;
  v18 = a3;
  v19 = a5;
  v20 = 0LL;
  v21 = 0;
  if ( a5 )
  {
    v17 = *(_WORD *)(a4 + 46);
    v7 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged(72LL * v17, 0x626B4852u);
    if ( v7 )
    {
      memset(v7, 0, 72LL * v17);
      v8 = v18;
      v9 = (unsigned __int16 *)&v20;
      LODWORD(v20) = 3932219;
      WORD2(v20) = 41;
      v10 = 0;
      v11 = 3LL;
      do
      {
        v17 = *(_WORD *)(a4 + 46);
        memset(v7, 0, 72LL * v17);
        if ( rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v9, v7, &v17, v8) >= 0 )
          ++v10;
        ++v9;
        --v11;
      }
      while ( v11 );
      if ( v10 < 2 || *(_WORD *)(a4 + 46) > 3u )
      {
        memset(v7, 0, 72LL * v17);
        v12 = v18;
        v13 = (unsigned __int16 *)&v20;
        v20 = 0x3F004200430068LL;
        v14 = 0;
        LOWORD(v21) = 64;
        v15 = 5LL;
        do
        {
          v17 = *(_WORD *)(a4 + 46);
          memset(v7, 0, 72LL * v17);
          if ( rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v13, v7, &v17, v12) >= 0 )
            ++v14;
          ++v13;
          --v15;
        }
        while ( v15 );
        if ( v14 == 5 && *(_WORD *)(a4 + 46) >= 5u )
          *v19 = 2;
      }
      else
      {
        *v19 = 3;
      }
      Win32FreePool((__int64)v7);
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
  return v5;
}
