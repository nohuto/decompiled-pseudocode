/*
 * XREFs of RtlVerifyVersionInfo @ 0x14016AC50
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140639AE4 (WdipSemLoadScenarioTable.c)
 *     AslpFileGetVersionBlock @ 0x1407DD710 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlpVerGetConditionMask @ 0x14016AF10 (RtlpVerGetConditionMask.c)
 *     RtlpVerCompare @ 0x14016AF30 (RtlpVerCompare.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlGetVersion @ 0x140571860 (RtlGetVersion.c)
 */

NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // bl
  NTSTATUS result; // eax
  char v8; // al
  int v9; // ebx
  ULONGLONG v10; // rbx
  WORD wSuiteMask; // ax
  unsigned int v12; // r10d
  int v13; // r11d
  int v14; // r9d
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _BYTE v21[16]; // [rsp+30h] [rbp-D0h] BYREF
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
              v15 = RtlpVerGetConditionMask(ConditionMask, 64LL);
            v16 = v15 - 6;
            if ( v16 )
            {
              if ( v16 != 1 )
                return -1073741811;
              if ( (*(_WORD *)&VersionInformation[280] & (unsigned __int16)v14) != 0 )
                v6 = 1;
            }
            else if ( (*(_WORD *)&VersionInformation[280] & (unsigned __int16)v14) == 0 )
            {
              return -1073741735;
            }
          }
          ++v12;
        }
        while ( v12 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
          return -1073741735;
      }
    }
    v8 = 1;
    v21[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 4);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      v17 = (unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->dwMajorVersion,
                               *(_DWORD *)&VersionInformation[4],
                               (unsigned int)v21,
                               0) == 0;
      v8 = v21[0];
      if ( v17 )
      {
        if ( !v21[0] )
          return -1073741735;
      }
      else if ( !v21[0] )
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
    v17 = (unsigned __int8)RtlpVerCompare(
                             v9,
                             VersionInfo->dwMinorVersion,
                             *(_DWORD *)&VersionInformation[8],
                             (unsigned int)v21,
                             1) == 0;
    v8 = v21[0];
    if ( v17 )
    {
      if ( !v21[0] )
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
                               (unsigned int)v21,
                               0) )
      {
        if ( !v21[0] )
          return -1073741735;
        goto LABEL_9;
      }
      v8 = v21[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
            v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
          else
            v9 = 0;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v9,
                                 VersionInfo->wServicePackMinor,
                                 *(unsigned __int16 *)&VersionInformation[278],
                                 (unsigned int)v21,
                                 1) )
          return -1073741735;
      }
    }
LABEL_10:
    v10 = ConditionMask & 0x8000000000000000uLL;
    if ( (v4 & 4) != 0 )
    {
      v19 = v10 ? RtlpVerGetConditionMask(ConditionMask, 4LL) : BYTE2(ConditionMask);
      if ( !(unsigned __int8)RtlpVerCompare(
                               v19,
                               VersionInfo->dwBuildNumber,
                               *(_DWORD *)&VersionInformation[12],
                               (unsigned int)v21,
                               0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v20 = v10 ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
      if ( !(unsigned __int8)RtlpVerCompare(
                               v20,
                               VersionInfo->dwPlatformId,
                               *(_DWORD *)&VersionInformation[16],
                               (unsigned int)v21,
                               0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v18 = v10 ? RtlpVerGetConditionMask(ConditionMask, 128LL) : 0;
      if ( !(unsigned __int8)RtlpVerCompare(
                               v18,
                               VersionInfo->wProductType,
                               VersionInformation[282],
                               (unsigned int)v21,
                               0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
