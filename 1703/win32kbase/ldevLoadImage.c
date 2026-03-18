/*
 * XREFs of ldevLoadImage @ 0x1C005FB00
 * Callers:
 *     ldevLoadDriver @ 0x1C005F8A0 (ldevLoadDriver.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     MakeSystemRelativePath @ 0x1C005FD50 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C005FE54 (FreeSystemRelativePath.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008D588 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C009D390 (wcsrchr.c)
 *     _strnicmp @ 0x1C009D460 (_strnicmp.c)
 *     MakeSystemDriversRelativePath @ 0x1C00FDB10 (MakeSystemDriversRelativePath.c)
 */

struct _LDEV *__fastcall ldevLoadImage(PCWSTR Source, __int64 a2, _DWORD *a3, signed int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v8; // r12
  struct _LDEV *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  ULONG v12; // esi
  int v13; // r14d
  struct _LDEV *i; // rbx
  const UNICODE_STRING *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  UNICODE_STRING *v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // rsi
  int v23; // ebx
  ULONG v24; // r12d
  SYSTEM_INFORMATION_CLASS v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  NTSTATUS v29; // r14d
  int v30; // eax
  struct _LDEV *v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r12d
  wchar_t *v34; // rax
  const WCHAR *v35; // rax
  int v36; // ebx
  _DWORD *v37; // rax
  _DWORD *v38; // r15
  _DWORD *j; // rbx
  unsigned int v40; // eax
  char *v41; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-D8h] BYREF
  ULONG Size; // [rsp+38h] [rbp-C8h] BYREF
  _STRING AnsiString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int SystemInformation[76]; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a4;
  ReturnLength = a4;
  v8 = (int)a2;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(Source, a2);
  v10[3] = Source;
  v10[4] = v8;
  v10[5] = v5;
  WdLogEvent5_WdEvent(v10);
  *a3 = 0;
  if ( (unsigned int)MakeSystemRelativePath(Source, &String2) )
  {
    v12 = ReturnLength;
    v13 = 1;
    while ( 1 )
    {
      for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
      {
        v15 = (const UNICODE_STRING *)*((_QWORD *)i + 2);
        if ( v15
          && (*((_DWORD *)i + 6) == 5) == (_DWORD)v8
          && (*((_DWORD *)i + 8) & 4u) >> 2 == a5
          && RtlEqualUnicodeString(v15, &String2, 1u) )
        {
          v17 = WdLogNewEntry5_WdTrace(v16);
          WdLogEvent5_WdTrace(v17);
          ++*((_DWORD *)i + 7);
          v9 = i;
          *a3 = 1;
          goto LABEL_11;
        }
      }
      if ( ReturnLength )
        break;
      if ( !v13 )
      {
        if ( v12 )
        {
          FreeSystemRelativePath(&String2);
          if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
            goto LABEL_11;
        }
        break;
      }
      v13 = 0;
      FreeSystemRelativePath(&String2);
      if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
        break;
      v12 = 1;
    }
    v20 = (UNICODE_STRING *)PALLOCMEM2(0x38uLL, 1986292807LL, 0);
    v21 = PALLOCMEM2(0x390uLL, 1986292807LL, 1);
    v22 = (__int64)v21;
    v23 = 1;
    if ( v20 )
    {
      if ( v21 )
      {
        v24 = ReturnLength;
        v21[112] = v21 + 8;
        *((_DWORD *)v21 + 226) = 0;
        while ( 1 )
        {
          gulDriverFailureReason = 0;
          v25 = SystemLoadGdiDriverInformation;
          *v20 = String2;
          if ( !v24 )
            v25 = SystemLoadGdiDriverInSystemSpaceInformation;
          v29 = ZwSetSystemInformation(v25, v20, 0x38uLL);
          if ( v29 >= 0 )
            goto LABEL_20;
          if ( v29 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v24 )
            goto LABEL_59;
          if ( v29 != -1073741772 )
            break;
          if ( v23 )
          {
            v23 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_61;
        }
        if ( v29 == -1073741554 )
        {
          v33 = 0;
          v34 = wcsrchr(Source, 0x5Cu);
          v35 = v34 ? v34 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v35);
          v29 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v29 >= 0 )
          {
            v29 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v29 + 0x80000000) < 0 || v29 == -1073741820 )
            {
              v36 = 296 * SystemInformation[0];
              v37 = PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8), 1886221383LL, 0);
              v38 = v37;
              if ( v37 )
              {
                v29 = ZwQuerySystemInformation(SystemModuleInformation, v37, v36 + 8, &ReturnLength);
                if ( v29 >= 0 )
                {
                  if ( *v38 )
                  {
                    while ( strnicmp(
                              (const char *)&v38[74 * v33 + 12] + HIWORD(v38[74 * v33 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                    {
                      if ( ++v33 >= *v38 )
                        goto LABEL_48;
                    }
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v40 = j[3];
                      if ( !v40 || !*j )
                        break;
                      if ( !strnicmp((const char *)gpvWin32kImageBase + v40, AnsiString.Buffer, AnsiString.Length) )
                      {
                        v41 = *(char **)&v38[74 * v33 + 6];
                        v20[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v41, 1u, 0, &Size);
                        v33 = 1;
                        AddressOfEntryPoint = RtlImageNtHeader(v41)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v20[1].Length = v41;
                        *(_QWORD *)&v20[2].Length = &v41[AddressOfEntryPoint];
                        v20[1].Buffer = 0LL;
                        goto LABEL_49;
                      }
                    }
                  }
LABEL_48:
                  v33 = 0;
                }
LABEL_49:
                Win32FreePool((__int64)v38);
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v33 )
            {
              *(_DWORD *)(v22 + 32) |= 2u;
LABEL_20:
              *(_DWORD *)(v22 + 56) = -1;
              v30 = (*(_DWORD *)(v22 + 32) ^ (4 * a5)) & 4;
              *(_QWORD *)(v22 + 16) = v20;
              *(_DWORD *)(v22 + 32) ^= v30;
              *(_DWORD *)(v22 + 28) = 1;
              *(_DWORD *)(v22 + 24) = 5;
              v31 = gpldevDrivers;
              if ( gpldevDrivers )
              {
                *((_QWORD *)gpldevDrivers + 1) = v22;
                v31 = gpldevDrivers;
              }
              *(_QWORD *)v22 = v31;
              *(_QWORD *)(v22 + 8) = 0LL;
              gpldevDrivers = (struct _LDEV *)v22;
              v32 = WdLogNewEntry5_WdTrace(v27);
              *(_QWORD *)(v32 + 24) = v22;
              WdLogEvent5_WdTrace(v32);
              return (struct _LDEV *)v22;
            }
          }
        }
LABEL_59:
        if ( v29 == -1073741702 )
          DrvLogDisplayDriverEvent(3LL, v26, v28);
      }
LABEL_61:
      Win32FreePool((__int64)v20);
    }
    if ( v22 )
      Win32FreePool(v22);
LABEL_11:
    FreeSystemRelativePath(&String2);
  }
  v18 = WdLogNewEntry5_WdTrace(v11);
  *(_QWORD *)(v18 + 24) = v9;
  WdLogEvent5_WdTrace(v18);
  return v9;
}
