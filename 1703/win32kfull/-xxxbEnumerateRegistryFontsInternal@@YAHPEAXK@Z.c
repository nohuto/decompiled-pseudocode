/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C003B5D0
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C000A2C0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C000A460 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C000A594 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxAddFontResourceW @ 0x1C003B590 (xxxAddFontResourceW.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C003B744 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     RtlStringCchCatW @ 0x1C01B2AC0 (RtlStringCchCatW.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle, unsigned int a2)
{
  ULONG v4; // r14d
  __int64 result; // rax
  __int64 v6; // rdi
  ULONG i; // esi
  NTSTATUS v8; // eax
  unsigned __int64 v9; // rax
  __int16 v10; // bx
  WCHAR *v11; // rbx
  __int64 v12; // rax
  void *v13; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v16[4]; // [rsp+50h] [rbp-39h] BYREF
  int v17; // [rsp+54h] [rbp-35h]
  wchar_t pszSrc[8]; // [rsp+A0h] [rbp+17h] BYREF

  v4 = 1074;
  wcscpy(pszSrc, L".FON");
  ResultLength = 0;
  result = Win32AllocPool(1074LL, 1919972181LL);
  v6 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v15, (__int64)Win32FreePool);
    for ( i = 0; ; ++i )
    {
      v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v6, v4 - 10, &ResultLength);
      if ( v8 != -2147483643 && v8 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v12 = Win32AllocPool(ResultLength, 1919972181LL);
      v13 = (void *)v12;
      if ( v12 )
      {
        ThreadLockExchange(v12, v15);
        Win32FreePool(v6);
        v4 = ResultLength;
        v6 = (__int64)v13;
        v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v13, ResultLength - 10, &ResultLength);
        if ( v8 != -2147483643 && v8 != -1073741789 )
        {
LABEL_5:
          if ( v8 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock((__int64)v15);
            return 1LL;
          }
          if ( *(_DWORD *)(v6 + 4) == 1 )
          {
            v9 = (unsigned __int64)*(unsigned int *)(v6 + 16) >> 1;
            v10 = *(_WORD *)(v6 + 2 * v9 + 20);
            *(_WORD *)(v6 + 2 * v9 + 20) = 0;
            vCheckMMInstance((STRSAFE_PCNZWCH)(v6 + 20), (struct tagDESIGNVECTOR *)v16);
            *(_WORD *)(v6 + 2 * ((unsigned __int64)*(unsigned int *)(v6 + 16) >> 1) + 20) = v10;
            v11 = (WCHAR *)(v6 + *(unsigned int *)(v6 + 8));
            if ( wcschr(v11, 0x2Eu) )
              xxxAddFontResourceW(v11, a2, (unsigned __int64)v16 & -(__int64)(v17 != 0));
            else
              RtlStringCchCatW(v11, (unsigned __int64)(v4 - *(_DWORD *)(v6 + 8)) >> 1, pszSrc);
          }
        }
      }
    }
  }
  return result;
}
