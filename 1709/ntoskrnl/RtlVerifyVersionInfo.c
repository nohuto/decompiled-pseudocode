/*
 * XREFs of RtlVerifyVersionInfo @ 0x1400F92B0
 * Callers:
 *     AslpFileGetVersionBlock @ 0x1407749CC (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlpVerGetConditionMask @ 0x1400F9548 (RtlpVerGetConditionMask.c)
 *     RtlpVerCompare @ 0x1400F95D8 (RtlpVerCompare.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlGetVersion @ 0x140541B60 (RtlGetVersion.c)
 */

NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  char v8; // al
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  WORD wSuiteMask; // ax
  unsigned int v13; // r10d
  int v14; // r11d
  int v15; // r9d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE VersionInformation[284]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(VersionInformation, 0, sizeof(VersionInformation));
  *(_DWORD *)VersionInformation = 284;
  result = RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( wSuiteMask )
      {
        v13 = 0;
        v14 = wSuiteMask;
        do
        {
          v15 = 1 << v13;
          if ( (v14 & (1 << v13)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
              v16 = 0;
            else
              v16 = RtlpVerGetConditionMask(ConditionMask, 64LL);
            v17 = v16 - 6;
            if ( v17 )
            {
              if ( v17 != 1 )
                return -1073741811;
              if ( (*(_WORD *)&VersionInformation[280] & (unsigned __int16)v15) != 0 )
                v6 = 1;
            }
            else if ( (*(_WORD *)&VersionInformation[280] & (unsigned __int16)v15) == 0 )
            {
              return -1073741735;
            }
          }
          ++v13;
        }
        while ( v13 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
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
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      v11 = (unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->dwMajorVersion,
                               *(_DWORD *)&VersionInformation[4],
                               (unsigned int)v20,
                               0) == 0;
      v8 = v20[0];
      if ( v11 )
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
        v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v11 = (unsigned __int8)RtlpVerCompare(
                             v9,
                             VersionInfo->dwMinorVersion,
                             *(_DWORD *)&VersionInformation[8],
                             (unsigned int)v20,
                             1) == 0;
    v8 = v20[0];
    if ( v11 )
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
          v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
        else
          v9 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->wServicePackMajor,
                               *(unsigned __int16 *)&VersionInformation[276],
                               (unsigned int)v20,
                               0) )
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
            v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
          else
            v9 = 0;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v9,
                                 VersionInfo->wServicePackMinor,
                                 *(unsigned __int16 *)&VersionInformation[278],
                                 (unsigned int)v20,
                                 1) )
          return -1073741735;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v18 = (ConditionMask & 0x8000000000000000uLL) == 0LL
          ? BYTE2(ConditionMask)
          : RtlpVerGetConditionMask(ConditionMask, 4LL);
      if ( !(unsigned __int8)RtlpVerCompare(
                               v18,
                               VersionInfo->dwBuildNumber,
                               *(_DWORD *)&VersionInformation[12],
                               (unsigned int)v20,
                               0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v19 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
      if ( !(unsigned __int8)RtlpVerCompare(
                               v19,
                               VersionInfo->dwPlatformId,
                               *(_DWORD *)&VersionInformation[16],
                               (unsigned int)v20,
                               0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v10 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 128LL);
      if ( !(unsigned __int8)RtlpVerCompare(
                               v10,
                               VersionInfo->wProductType,
                               VersionInformation[282],
                               (unsigned int)v20,
                               0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
