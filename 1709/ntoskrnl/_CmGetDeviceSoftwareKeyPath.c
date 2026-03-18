/*
 * XREFs of _CmGetDeviceSoftwareKeyPath @ 0x140581770
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x140521A38 (_CmGetDeviceRegKeyPath.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _CmGetDeviceSoftwareKey @ 0x14058188C (_CmGetDeviceSoftwareKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  signed int DeviceSoftwareKey; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  _WORD v22[48]; // [rsp+50h] [rbp-88h] BYREF

  DeviceSoftwareKey = CmGetDeviceSoftwareKey(a1, a2, v22);
  if ( DeviceSoftwareKey >= 0 )
  {
    if ( (a3 & 0x200) != 0 )
    {
      if ( a4 )
      {
        if ( a4 == -1 )
          return (unsigned int)-1073741811;
        v19 = -1LL;
        do
          ++v19;
        while ( v22[v19] );
        v20 = v19 + 88;
        v21 = -1;
        if ( v20 <= 0xFFFFFFFF )
          v21 = v20;
        DeviceSoftwareKey = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v20 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v21;
          if ( v21 <= (unsigned int)cchDest )
            return (unsigned int)RtlStringCchPrintfExW(
                                   pszDest,
                                   (unsigned int)cchDest,
                                   0LL,
                                   0LL,
                                   0x800u,
                                   L"%s\\%04u\\%s\\%s",
                                   L"System\\CurrentControlSet\\Hardware Profiles",
                                   a4,
                                   L"System\\CurrentControlSet\\Control\\Class",
                                   v22);
          return (unsigned int)-1073741789;
        }
      }
      else
      {
        v16 = -1LL;
        do
          ++v16;
        while ( v22[v16] );
        v17 = v16 + 91;
        v18 = -1;
        if ( v17 <= 0xFFFFFFFF )
          v18 = v17;
        DeviceSoftwareKey = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v17 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v18;
          if ( v18 <= (unsigned int)cchDest )
            return (unsigned int)RtlStringCchPrintfExW(
                                   pszDest,
                                   (unsigned int)cchDest,
                                   0LL,
                                   0LL,
                                   0x800u,
                                   L"%s\\%s\\%s",
                                   L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                   L"System\\CurrentControlSet\\Control\\Class",
                                   v22);
          return (unsigned int)-1073741789;
        }
      }
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v22[v11] );
      v12 = v11 + 40;
      v13 = -1;
      if ( v12 <= 0xFFFFFFFF )
        v13 = v12;
      DeviceSoftwareKey = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v12 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v13;
        if ( v13 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s",
                                 L"System\\CurrentControlSet\\Control\\Class",
                                 v22);
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)DeviceSoftwareKey;
}
