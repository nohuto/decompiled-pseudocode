/*
 * XREFs of PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC
 * Callers:
 *     PiDrvDbResolveKeyFilePaths @ 0x14073DA4C (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14073DAB4 (PiDrvDbResolveNodeFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x1405D7F64 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405D7FB4 (_PnpCtxRegQueryInfoKey.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 *     PiDevCfgAppendMultiSz @ 0x14072ADB8 (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14073D35C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14073DB74 (PiDrvDbResolveSystemFilePath.c)
 */

__int64 __fastcall PiDrvDbResolveFilePathKeyValues(__int64 a1, UNICODE_STRING *a2)
{
  unsigned int v2; // r13d
  unsigned int v5; // r12d
  void *v6; // r15
  SIZE_T v7; // r14
  wchar_t *v8; // rdi
  int v9; // eax
  int appended; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rax
  const wchar_t *v15; // r13
  const WCHAR *v16; // rsi
  ULONG *v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // ecx
  const WCHAR *v20; // rsi
  unsigned __int64 v21; // rax
  ULONG v22; // eax
  int v23; // r12d
  int v24; // eax
  unsigned __int16 Length; // ax
  const void **p_UnicodeString; // rdx
  wchar_t *Buffer; // r9
  const WCHAR *v28; // rdx
  unsigned int v29; // ecx
  const WCHAR *v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-61h]
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v38; // [rsp+68h] [rbp-41h] BYREF
  int v39; // [rsp+70h] [rbp-39h] BYREF
  wchar_t *v40; // [rsp+78h] [rbp-31h]
  PVOID PoolWithTag; // [rsp+80h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  PVOID P; // [rsp+98h] [rbp-11h] BYREF
  UNICODE_STRING SourceString; // [rsp+A0h] [rbp-9h] BYREF
  UNICODE_STRING v45; // [rsp+B0h] [rbp+7h] BYREF
  SIZE_T v48; // [rsp+120h] [rbp+77h] BYREF
  int v49; // [rsp+128h] [rbp+7Fh]

  v2 = 0;
  v38 = 0LL;
  LODWORD(v48) = 0;
  NumberOfBytes = 0LL;
  v5 = 0;
  v6 = 0LL;
  PoolWithTag = 0LL;
  LODWORD(v7) = 0;
  v49 = 0;
  v8 = 0LL;
  v40 = 0LL;
  Handle = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v45, 0LL);
  v9 = SysCtxRegOpenKey(0LL, a1, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&v38);
  appended = v9;
  if ( v9 == -1073741772 )
  {
    appended = 0;
    goto LABEL_76;
  }
  if ( v9 >= 0 )
  {
    appended = PiDrvDbQuerySystemPathWin32(a2, &DestinationString);
    if ( appended < 0 )
    {
      appended = 0;
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( (int)PnpCtxRegQueryInfoKey(v11, (int)v38, 0, 0, 0LL, (__int64)&v48, (__int64)&NumberOfBytes) < 0 )
      goto LABEL_14;
    v7 = (unsigned int)NumberOfBytes;
    v49 = NumberOfBytes;
    v5 = 2 * v48 + 2;
    HIDWORD(NumberOfBytes) = v5;
    if ( 2 * (_DWORD)v48 != -2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x62647050u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        appended = -1073741670;
        goto LABEL_76;
      }
    }
    if ( !(_DWORD)v7 || (v40 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x62647050u), (v8 = v40) != 0LL) )
    {
LABEL_14:
      while ( 1 )
      {
        v35 = v2;
        LODWORD(NumberOfBytes) = v5 >> 1;
        LODWORD(v48) = v7;
        v13 = PnpCtxRegEnumValue(
                v12,
                (__int64)v38,
                v2,
                (__int64)v6,
                (__int64)&NumberOfBytes,
                (__int64)&v39,
                (__int64)v8,
                (__int64)&v48);
        if ( v13 == -2147483622 )
          goto LABEL_72;
        if ( v13 == -1073741789 )
          break;
        v12 = 0LL;
        if ( v13 < 0 )
          goto LABEL_71;
        if ( v39 == 7 && (unsigned int)v48 >= 4 )
        {
          v14 = (unsigned __int64)(unsigned int)v48 >> 1;
          if ( !v8[v14 - 1] && !v8[v14 - 2] )
          {
            v13 = SysCtxRegOpenKey(0LL, a1, (__int64)v6, 0, 0x2001Fu, (__int64)&Handle);
            if ( v13 != -1073741772 )
            {
              if ( v13 < 0 )
              {
LABEL_71:
                appended = v13;
                goto LABEL_72;
              }
              v15 = v8;
              if ( !*v8 )
                goto LABEL_67;
              while ( 2 )
              {
                v16 = &word_140657F20;
                if ( wcsicmp(v15, L" ") )
                  v16 = v15;
                v48 = (SIZE_T)v16;
                if ( IopGetRegistryValue(Handle, v16, 0, &P) >= 0 )
                {
                  v17 = (ULONG *)P;
                  v18 = *((_DWORD *)P + 1);
                  if ( v18 )
                  {
                    if ( v18 <= 2 )
                    {
                      v29 = *((_DWORD *)P + 3);
                      v30 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
                      if ( v29 - 3 <= 0xFFFB && !v30[((unsigned __int64)v29 >> 1) - 1] )
                      {
                        RtlInitUnicodeString(&SourceString, v30);
                        UnicodeString.Length = 0;
                        v31 = PiDrvDbResolveSystemFilePath(&SourceString, a2);
                        appended = v31;
                        if ( v31 == -1073741275 || v31 == -1073741637 )
                        {
                          appended = 0;
                        }
                        else if ( v31 >= 0 )
                        {
                          v28 = v16;
                          Buffer = UnicodeString.Buffer;
                          v22 = UnicodeString.Length + 2;
LABEL_54:
                          appended = RegRtlSetValue(Handle, v28, v17[1], Buffer, v22);
                        }
                      }
                    }
                    else if ( v18 == 7 )
                    {
                      v19 = *((_DWORD *)P + 3);
                      v20 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
                      if ( v19 - 4 <= 0xFFFA )
                      {
                        v21 = (unsigned __int64)v19 >> 1;
                        if ( !v20[v21 - 1] && !v20[v21 - 2] )
                        {
                          LOWORD(v22) = 0;
                          v23 = 0;
                          v45.Length = 0;
                          if ( *v20 )
                          {
                            while ( 1 )
                            {
                              RtlInitUnicodeString(&SourceString, v20);
                              UnicodeString.Length = 0;
                              v24 = PiDrvDbResolveSystemFilePath(&SourceString, a2);
                              appended = v24;
                              if ( v24 == -1073741275 || v24 == -1073741637 )
                              {
                                Length = 0;
                                UnicodeString.Length = 0;
                              }
                              else
                              {
                                if ( v24 < 0 )
                                  goto LABEL_62;
                                Length = UnicodeString.Length;
                                ++v23;
                              }
                              p_UnicodeString = (const void **)&UnicodeString;
                              if ( !Length )
                                p_UnicodeString = (const void **)&SourceString;
                              appended = PiDevCfgAppendMultiSz(&v45, p_UnicodeString, 0LL, 1);
                              if ( appended < 0 )
                                goto LABEL_62;
                              v20 += ((unsigned __int64)SourceString.Length >> 1) + 1;
                              if ( !*v20 )
                              {
                                LOWORD(v22) = v45.Length;
                                break;
                              }
                            }
                          }
                          if ( v23 )
                          {
                            Buffer = v45.Buffer;
                            v28 = (const WCHAR *)v48;
                            v22 = (unsigned __int16)v22;
                            goto LABEL_54;
                          }
                        }
                      }
                    }
                  }
LABEL_62:
                  ExFreePoolWithTag(v17, 0);
                  if ( appended < 0 )
                    goto LABEL_66;
                }
                v32 = -1LL;
                do
                  ++v32;
                while ( v15[v32] );
                v15 += v32 + 1;
                if ( !*v15 )
                {
LABEL_66:
                  v8 = v40;
                  v6 = PoolWithTag;
                  LODWORD(v7) = v49;
                  v5 = HIDWORD(NumberOfBytes);
LABEL_67:
                  ZwClose(Handle);
                  if ( appended >= 0 )
                  {
                    v2 = v35;
                    break;
                  }
LABEL_72:
                  if ( v6 )
                    ExFreePoolWithTag(v6, 0);
LABEL_74:
                  if ( v8 )
                    ExFreePoolWithTag(v8, 0);
                  goto LABEL_76;
                }
                continue;
              }
            }
          }
        }
LABEL_69:
        ++v2;
      }
      if ( (unsigned int)NumberOfBytes > v5 >> 1 )
      {
        v5 = 2 * NumberOfBytes;
        HIDWORD(NumberOfBytes) = 2 * NumberOfBytes;
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x62647050u);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
        {
          appended = -1073741670;
          goto LABEL_74;
        }
      }
      if ( (unsigned int)v48 <= (unsigned int)v7 )
        goto LABEL_23;
      v7 = (unsigned int)v48;
      v49 = v48;
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      v40 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x62647050u);
      v8 = v40;
      if ( v40 )
      {
LABEL_23:
        --v2;
        goto LABEL_69;
      }
    }
    appended = -1073741670;
    goto LABEL_72;
  }
LABEL_76:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v45);
  if ( v38 )
    ZwClose(v38);
  return (unsigned int)appended;
}
