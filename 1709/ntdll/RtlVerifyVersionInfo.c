/*
 * XREFs of RtlVerifyVersionInfo @ 0x180085B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x180007970 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x180007A5C (RtlpVerGetConditionMask.c)
 *     RtlGetVersion @ 0x180007C00 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  bool v8; // al
  int v9; // edi
  bool v10; // zf
  WORD wSuiteMask; // ax
  unsigned int v12; // r10d
  int v13; // r11d
  int v14; // r9d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOEXW VersionInformationa; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(&VersionInformationa, 0, sizeof(VersionInformationa));
  VersionInformationa.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformationa);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInformation->wSuiteMask;
      if ( wSuiteMask )
      {
        v12 = 0;
        v13 = wSuiteMask;
        do
        {
          v14 = 1 << v12;
          if ( (v13 & (1 << v12)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
              v15 = 0;
            else
              v15 = RtlpVerGetConditionMask(ConditionMask, 0x40u);
            v16 = v15 - 6;
            if ( v16 )
            {
              if ( v16 != 1 )
                return -1073741811;
              if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v14) != 0 )
                v6 = 1;
            }
            else if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v14) == 0 )
            {
              return -1073741735;
            }
          }
          ++v12;
        }
        while ( v12 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 0x40u) == 7 && !v6 )
          return -1073741735;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 4);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 2u);
      v10 = !RtlpVerCompare(v9, VersionInformation->dwMajorVersion, VersionInformationa.dwMajorVersion, v20, 0);
      v8 = v20[0];
      if ( v10 )
      {
        if ( !v20[0] )
          return -1073741735;
      }
      else if ( !v20[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 1u);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v10 = !RtlpVerCompare(v9, VersionInformation->dwMinorVersion, VersionInformationa.dwMinorVersion, v20, 1);
    v8 = v20[0];
    if ( v10 )
    {
      if ( !v20[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          v9 = RtlpVerGetConditionMask(ConditionMask, 0x20u);
        else
          v9 = 0;
      }
      if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMajor, VersionInformationa.wServicePackMajor, v20, 0) )
      {
        if ( !v20[0] )
          return -1073741735;
        goto LABEL_9;
      }
      v8 = v20[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
            v9 = RtlpVerGetConditionMask(ConditionMask, 0x10u);
          else
            v9 = 0;
        }
        if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMinor, VersionInformationa.wServicePackMinor, v20, 1) )
          return -1073741735;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v18 = (ConditionMask & 0x8000000000000000uLL) != 0LL
          ? RtlpVerGetConditionMask(ConditionMask, 4u)
          : BYTE2(ConditionMask);
      if ( !RtlpVerCompare(v18, VersionInformation->dwBuildNumber, VersionInformationa.dwBuildNumber, v20, 0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v19 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8u) : 0;
      if ( !RtlpVerCompare(v19, VersionInformation->dwPlatformId, VersionInformationa.dwPlatformId, v20, 0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v17 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 0x80u);
      if ( !RtlpVerCompare(v17, VersionInformation->wProductType, VersionInformationa.wProductType, v20, 0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
