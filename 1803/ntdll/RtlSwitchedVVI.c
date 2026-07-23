/*
 * XREFs of RtlSwitchedVVI @ 0x18005A320
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005A65C @ 0x18005A65C (sub_18005A65C.c)
 *     sub_18005A74C @ 0x18005A74C (sub_18005A74C.c)
 *     sub_18005A768 @ 0x18005A768 (sub_18005A768.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // bl
  DWORD result; // eax
  char v8; // al
  int v9; // ebx
  bool v10; // zf
  ULONGLONG v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  WORD wSuiteMask; // ax
  unsigned int v16; // r10d
  int v17; // r11d
  int v18; // r9d
  int v19; // eax
  int v20; // eax
  _BYTE v21[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v22[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(v22, 0, 0x11CuLL);
  v22[0] = 284;
  result = sub_18005A768(v22);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( wSuiteMask )
      {
        v16 = 0;
        v17 = wSuiteMask;
        do
        {
          v18 = 1 << v16;
          if ( (v17 & (1 << v16)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
              v19 = 0;
            else
              v19 = sub_18005A74C(ConditionMask, 64LL);
            v20 = v19 - 6;
            if ( v20 )
            {
              if ( v20 != 1 )
                return -1073741811;
              if ( (v22[70] & (unsigned __int16)v18) != 0 )
                v6 = 1;
            }
            else if ( (v22[70] & (unsigned __int16)v18) == 0 )
            {
              return -1073741735;
            }
          }
          ++v16;
        }
        while ( v16 < 0x10 );
        if ( (unsigned int)sub_18005A74C(ConditionMask, 64LL) == 7 && !v6 )
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
        v9 = sub_18005A74C(ConditionMask, 2LL);
      v10 = (unsigned __int8)sub_18005A65C(v9, VersionInfo->dwMajorVersion, v22[1], (unsigned int)v21, 0) == 0;
      v8 = v21[0];
      if ( v10 )
      {
        if ( !v21[0] )
          return -1073741735;
      }
      else if ( !v21[0] )
      {
        goto LABEL_14;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_10;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 2);
      else
        v9 = sub_18005A74C(ConditionMask, 1LL);
    }
    v10 = (unsigned __int8)sub_18005A65C(v9, VersionInfo->dwMinorVersion, v22[2], (unsigned int)v21, 1) == 0;
    v8 = v21[0];
    if ( v10 )
    {
      if ( !v21[0] )
        return -1073741735;
    }
    else
    {
LABEL_10:
      if ( !v8 )
        goto LABEL_14;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_12;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = sub_18005A74C(ConditionMask, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)sub_18005A65C(v9, VersionInfo->wServicePackMajor, LOWORD(v22[69]), (unsigned int)v21, 0) )
    {
      v8 = v21[0];
LABEL_12:
      if ( v8 )
      {
LABEL_13:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v9 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v9 = sub_18005A74C(ConditionMask, 16LL);
            else
              v9 = 0;
          }
          if ( !(unsigned __int8)sub_18005A65C(
                                   v9,
                                   VersionInfo->wServicePackMinor,
                                   HIWORD(v22[69]),
                                   (unsigned int)v21,
                                   1) )
            return -1073741735;
        }
      }
LABEL_14:
      v11 = ConditionMask & 0x8000000000000000uLL;
      if ( (v4 & 4) != 0 )
      {
        v14 = v11 ? sub_18005A74C(ConditionMask, 4LL) : BYTE2(ConditionMask);
        if ( !(unsigned __int8)sub_18005A65C(v14, VersionInfo->dwBuildNumber, v22[3], (unsigned int)v21, 0) )
          return -1073741735;
      }
      if ( (v4 & 8) != 0 )
      {
        v13 = v11 ? sub_18005A74C(ConditionMask, 8LL) : 0;
        if ( !(unsigned __int8)sub_18005A65C(v13, VersionInfo->dwPlatformId, v22[4], (unsigned int)v21, 0) )
          return -1073741735;
      }
      if ( v4 < 0 )
      {
        v12 = v11 ? sub_18005A74C(ConditionMask, 128LL) : 0;
        if ( !(unsigned __int8)sub_18005A65C(v12, VersionInfo->wProductType, BYTE2(v22[70]), (unsigned int)v21, 0) )
          return -1073741735;
      }
      return 0;
    }
    if ( v21[0] )
      goto LABEL_13;
    return -1073741735;
  }
  return result;
}
