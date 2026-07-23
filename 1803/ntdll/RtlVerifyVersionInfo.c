/*
 * XREFs of RtlVerifyVersionInfo @ 0x180081850
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x18002DAB0 (RtlGetVersion.c)
 *     sub_18005A65C @ 0x18005A65C (sub_18005A65C.c)
 *     sub_18005A74C @ 0x18005A74C (sub_18005A74C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // bl
  NTSTATUS result; // eax
  bool v8; // al
  int v9; // ebx
  ULONGLONG v10; // rbx
  int v11; // eax
  bool v12; // zf
  WORD wSuiteMask; // ax
  unsigned int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  bool v21[16]; // [rsp+30h] [rbp-D0h] BYREF
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
        v14 = 0;
        v15 = wSuiteMask;
        do
        {
          v16 = 1 << v14;
          if ( (v15 & (1 << v14)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
              v17 = 0;
            else
              v17 = sub_18005A74C(ConditionMask, 0x40u);
            v18 = v17 - 6;
            if ( v18 )
            {
              if ( v18 != 1 )
                return -1073741811;
              if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v16) != 0 )
                v6 = 1;
            }
            else if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v16) == 0 )
            {
              return -1073741735;
            }
          }
          ++v14;
        }
        while ( v14 < 0x10 );
        if ( (unsigned int)sub_18005A74C(ConditionMask, 0x40u) == 7 && !v6 )
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
        v9 = sub_18005A74C(ConditionMask, 2u);
      v12 = !sub_18005A65C(v9, VersionInformation->dwMajorVersion, VersionInformationa.dwMajorVersion, v21, 0);
      v8 = v21[0];
      if ( v12 )
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
        v9 = sub_18005A74C(ConditionMask, 1u);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v12 = !sub_18005A65C(v9, VersionInformation->dwMinorVersion, VersionInformationa.dwMinorVersion, v21, 1);
    v8 = v21[0];
    if ( v12 )
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
          v9 = sub_18005A74C(ConditionMask, 0x20u);
        else
          v9 = 0;
      }
      if ( !sub_18005A65C(v9, VersionInformation->wServicePackMajor, VersionInformationa.wServicePackMajor, v21, 0) )
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
            v9 = sub_18005A74C(ConditionMask, 0x10u);
          else
            v9 = 0;
        }
        if ( !sub_18005A65C(v9, VersionInformation->wServicePackMinor, VersionInformationa.wServicePackMinor, v21, 1) )
          return -1073741735;
      }
    }
LABEL_10:
    v10 = ConditionMask & 0x8000000000000000uLL;
    if ( (v4 & 4) != 0 )
    {
      v19 = v10 ? sub_18005A74C(ConditionMask, 4u) : BYTE2(ConditionMask);
      if ( !sub_18005A65C(v19, VersionInformation->dwBuildNumber, VersionInformationa.dwBuildNumber, v21, 0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v20 = v10 ? sub_18005A74C(ConditionMask, 8u) : 0;
      if ( !sub_18005A65C(v20, VersionInformation->dwPlatformId, VersionInformationa.dwPlatformId, v21, 0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v11 = v10 ? sub_18005A74C(ConditionMask, 0x80u) : 0;
      if ( !sub_18005A65C(v11, VersionInformation->wProductType, VersionInformationa.wProductType, v21, 0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
