/*
 * XREFs of ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C01EDFA0
 * Callers:
 *     xxxRemoteConsoleShadowStart @ 0x1C01EE840 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C0013AC8 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall FindMirrorDriver(PCWSTR SourceString, struct _DISPLAY_DEVICEW *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // r14d
  char v5; // si
  __int64 v6; // rax
  wchar_t *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rdx
  int v11; // r8d
  signed __int64 v12; // r11
  __int64 v13; // r9
  __int16 v14; // ax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  __int64 v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[133]; // [rsp+C0h] [rbp-40h] BYREF
  char v27; // [rsp+1CAh] [rbp+CAh] BYREF
  _BYTE v28[256]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  a2->cb = 840;
  if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88LL) + 120LL), 0LL, a2, 0, 0) >= 0 )
  {
    while ( 1 )
    {
      ++v4;
      if ( (a2->StateFlags & 8) == 0 || RtlStringCchCopyNW(pszDest, 0x85uLL, a2->DeviceKey, 0x80uLL) < 0 )
        goto LABEL_26;
      v6 = -1LL;
      while ( pszDest[++v6] != 0 )
        ;
      v8 = (wchar_t *)&DestinationString.Buffer + v6 + 3;
      if ( v8 <= pszDest )
      {
LABEL_9:
        if ( *v8 != 92 )
          goto LABEL_26;
      }
      else
      {
        while ( *v8 != 92 )
        {
          if ( --v8 <= pszDest )
            goto LABEL_9;
        }
      }
      v9 = (char *)(v8 + 1);
      QueryTable.QueryRoutine = 0LL;
      QueryTable.Flags = 288;
      QueryTable.EntryContext = &String1;
      QueryTable.Name = L"Service";
      QueryTable.DefaultType = 16777217;
      QueryTable.DefaultData = 0LL;
      v10 = (&v27 - v9) >> 1;
      v11 = 0;
      QueryTable.DefaultLength = 0;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0;
      if ( (unsigned __int64)(v10 - 1) > 0x7FFFFFFE )
        v11 = -1073741811;
      v23 = 0LL;
      v24 = 0;
      if ( v11 >= 0 )
        break;
      if ( v10 )
        goto LABEL_22;
LABEL_23:
      if ( v11 >= 0 )
      {
        memset(v28, 0, sizeof(v28));
        *(_DWORD *)&String1.Length = 0x1000000;
        String1.Buffer = (PWSTR)v28;
        if ( RtlQueryRegistryValues(0, pszDest, &QueryTable, 0LL, 0LL) >= 0
          && !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
        {
          v5 = 1;
          goto LABEL_29;
        }
      }
LABEL_26:
      if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88LL) + 120LL), v4, a2, 0, 0) < 0 )
        goto LABEL_29;
    }
    v11 = 0;
    if ( v10 )
    {
      v12 = (char *)L"Video" - v9;
      v13 = 2147483646 - v10;
      while ( v13 + v10 )
      {
        v14 = *(_WORD *)&v9[v12];
        if ( !v14 )
          break;
        *(_WORD *)v9 = v14;
        v9 += 2;
        if ( !--v10 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v9 -= 2;
      v11 = -2147483643;
    }
LABEL_22:
    *(_WORD *)v9 = 0;
    goto LABEL_23;
  }
LABEL_29:
  if ( !v5 )
    return (unsigned int)-1073741823;
  return v3;
}
