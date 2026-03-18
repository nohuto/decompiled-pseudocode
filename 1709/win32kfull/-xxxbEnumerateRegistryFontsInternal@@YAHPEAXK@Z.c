/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00589E0
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00BF910 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00BFAB0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00BFBE4 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C0058958 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     xxxAddFontResourceW @ 0x1C0058B54 (xxxAddFontResourceW.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     RtlStringCchCatW @ 0x1C01B5AD0 (RtlStringCchCatW.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle)
{
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rdi
  ULONG i; // esi
  NTSTATUS v6; // eax
  unsigned __int64 v7; // rax
  __int16 v8; // bx
  WCHAR *v9; // rbx
  __int64 v10; // rax
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v16[4]; // [rsp+50h] [rbp-39h] BYREF
  wchar_t pszSrc[8]; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 1074;
  wcscpy(pszSrc, L".FON");
  ResultLength = 0;
  result = Win32AllocPool(1074LL, 1919972181LL);
  v4 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v15, Win32FreePool);
    for ( i = 0; ; ++i )
    {
      v6 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v4, v2 - 10, &ResultLength);
      if ( v6 != -2147483643 && v6 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v10 = Win32AllocPool(ResultLength, 1919972181LL);
      v11 = (void *)v10;
      if ( v10 )
      {
        ThreadLockExchange(v10, v15);
        Win32FreePool(v4, v12, v13);
        v2 = ResultLength;
        v4 = (__int64)v11;
        v6 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v11, ResultLength - 10, &ResultLength);
        if ( v6 != -2147483643 && v6 != -1073741789 )
        {
LABEL_5:
          if ( v6 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock(v15);
            return 1LL;
          }
          if ( *(_DWORD *)(v4 + 4) == 1 )
          {
            v7 = (unsigned __int64)*(unsigned int *)(v4 + 16) >> 1;
            v8 = *(_WORD *)(v4 + 2 * v7 + 20);
            *(_WORD *)(v4 + 2 * v7 + 20) = 0;
            vCheckMMInstance((STRSAFE_PCNZWCH)(v4 + 20), (struct tagDESIGNVECTOR *)v16);
            *(_WORD *)(v4 + 2 * ((unsigned __int64)*(unsigned int *)(v4 + 16) >> 1) + 20) = v8;
            v9 = (WCHAR *)(v4 + *(unsigned int *)(v4 + 8));
            if ( wcschr(v9, 0x2Eu) )
              xxxAddFontResourceW(v9);
            else
              RtlStringCchCatW(v9, (unsigned __int64)(v2 - *(_DWORD *)(v4 + 8)) >> 1, pszSrc);
          }
        }
      }
    }
  }
  return result;
}
