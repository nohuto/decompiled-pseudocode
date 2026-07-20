/*
 * XREFs of SmpCreateDynamicEnvironmentVariables @ 0x1400078A0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C58 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpCreateDynamicEnvironmentVariables(HANDLE KeyHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  __int64 *v4; // rcx
  ULONG DataSize; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandlea; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING v18; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING v19; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING v20; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING v21; // [rsp+B8h] [rbp-50h] BYREF
  int v22; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v25; // [rsp+E0h] [rbp-28h]
  int v26; // [rsp+E8h] [rbp-20h] BYREF
  const wchar_t *v27; // [rsp+F0h] [rbp-18h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-10h] BYREF
  _WORD SystemInformation[2]; // [rsp+128h] [rbp+20h] BYREF
  int v30; // [rsp+12Ch] [rbp+24h]
  __int64 v31; // [rsp+138h] [rbp+30h] BYREF
  wchar_t v32; // [rsp+140h] [rbp+38h]
  __int64 v33; // [rsp+148h] [rbp+40h] BYREF
  __int64 v34; // [rsp+150h] [rbp+48h] BYREF
  __int64 v35; // [rsp+158h] [rbp+50h] BYREF
  int v36; // [rsp+160h] [rbp+58h]
  __int64 v37; // [rsp+168h] [rbp+60h] BYREF
  int v38; // [rsp+170h] [rbp+68h]
  __int128 Data; // [rsp+178h] [rbp+70h] BYREF
  int v40; // [rsp+188h] [rbp+80h]
  wchar_t v41; // [rsp+18Ch] [rbp+84h]
  __int128 v42; // [rsp+190h] [rbp+88h] BYREF
  wchar_t pszDest[6]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t v44[250]; // [rsp+1B4h] [rbp+ACh] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE v46[500]; // [rsp+3B4h] [rbp+2ACh] BYREF

  v40 = *(_DWORD *)L"NT";
  v41 = aWindowsNt[10];
  Data = *(_OWORD *)L"Windows_NT";
  v34 = 0x3600380078LL;
  v32 = aIa64[4];
  v38 = *(_DWORD *)L"4";
  v33 = 0x4D00520041LL;
  v36 = *(_DWORD *)L"4";
  ValueName.Buffer = L"OS";
  v17[1] = L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0";
  v15.Buffer = L"PROCESSOR_ARCHITECTURE";
  v16.Buffer = L"PROCESSOR_LEVEL";
  v31 = *(_QWORD *)L"IA64";
  v20.Buffer = L"PROCESSOR_IDENTIFIER";
  v37 = *(_QWORD *)L"AMD64";
  v21.Buffer = L"PROCESSOR_REVISION";
  v35 = *(_QWORD *)L"ARM64";
  v18.Buffer = L"Identifier";
  v19.Buffer = L"VendorIdentifier";
  v42 = *(_OWORD *)L"Unknown";
  *(_DWORD *)&ValueName.Length = 393220;
  LODWORD(v17[0]) = 8519808;
  *(_DWORD *)&v15.Length = 3014700;
  *(_DWORD *)&v16.Length = 2097182;
  *(_DWORD *)&v20.Length = 2752552;
  *(_DWORD *)&v21.Length = 2490404;
  *(_DWORD *)&v18.Length = 1441812;
  *(_DWORD *)&v19.Length = 2228256;
  result = NtQuerySystemInformation(SystemProcessorInformation, SystemInformation, 0xCu, 0LL);
  if ( result >= 0 )
  {
    v3 = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, &Data, 0x16u);
    if ( v3 < 0 )
      return v3;
    if ( SystemInformation[0] )
    {
      if ( SystemInformation[0] != 5 )
      {
        switch ( SystemInformation[0] )
        {
          case 6:
            v4 = &v31;
            DataSize = 10;
            goto LABEL_9;
          case 9:
            v4 = &v37;
            break;
          case 0xC:
            v4 = &v35;
            break;
          default:
            v4 = (__int64 *)&v42;
            DataSize = 16;
            goto LABEL_9;
        }
        DataSize = 12;
LABEL_9:
        ResultLength[0] = DataSize;
        v3 = NtSetValueKey(KeyHandle, &v15, 0, 1u, v4, DataSize);
        if ( v3 >= 0 )
        {
          RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", SystemInformation[1]);
          v6 = -1LL;
          v7 = -1LL;
          do
            ++v7;
          while ( pszDest[v7] );
          v3 = NtSetValueKey(KeyHandle, &v16, 0, 1u, pszDest, 2 * v7 + 2);
          if ( v3 >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v3 = NtOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
            if ( v3 >= 0 )
            {
              v3 = NtQueryValueKey(KeyHandlea, &v18, KeyValuePartialInformation, pszDest, 0x200u, ResultLength);
              if ( v3 < 0 )
              {
                NtClose(KeyHandlea);
              }
              else
              {
                v8 = NtQueryValueKey(
                       KeyHandlea,
                       &v19,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       0x200u,
                       ResultLength);
                NtClose(KeyHandlea);
                if ( v8 < 0 )
                  goto LABEL_54;
                v9 = -1LL;
                do
                  ++v9;
                while ( v44[v9] );
                v3 = RtlStringCbPrintfW(&v44[v9], 2 * (250 - v9), L", %ws", v46);
                if ( v3 >= 0 )
                {
LABEL_54:
                  v10 = -1LL;
                  do
                    ++v10;
                  while ( v44[v10] );
                  v3 = NtSetValueKey(KeyHandle, &v20, 0, 1u, v44, 2 * v10 + 2);
                  if ( v3 >= 0 )
                  {
                    if ( SystemInformation[0] )
                    {
                      if ( SystemInformation[0] <= 4u
                        || SystemInformation[0] != 9 && SystemInformation[0] > 6u && SystemInformation[0] != 12 )
                      {
                        RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned __int16)v30);
                        goto LABEL_26;
                      }
                    }
                    else if ( (v30 & 0xFF00) == 0xFF00 )
                    {
                      RtlStringCbPrintfW(pszDest, 0x200uLL, L"%02x", (unsigned __int8)v30);
                      _wcsupr_s(pszDest, 0x100uLL);
                      do
LABEL_26:
                        ++v6;
                      while ( pszDest[v6] );
                      v3 = NtSetValueKey(KeyHandle, &v21, 0, 1u, pszDest, 2 * v6 + 2);
                      if ( v3 >= 0 )
                      {
                        if ( SmpSafeBootOption == -1 )
                          return 0;
                        v26 = 1048590;
                        v27 = L"NETWORK";
                        v25 = L"DSREPAIR";
                        v23 = L"MINIMAL";
                        v24 = 1179664;
                        v22 = 1048590;
                        if ( SmpSafeBootOption == 2 )
                          v11 = &v26;
                        else
                          v11 = SmpSafeBootOption == 3 ? &v24 : &v22;
                        v3 = NtSetValueKey(
                               KeyHandle,
                               (PUNICODE_STRING)&SmpSafeBootEnvironmentValue,
                               0,
                               1u,
                               *((PVOID *)v11 + 1),
                               *((unsigned __int16 *)v11 + 1));
                        if ( v3 >= 0 )
                          return 0;
                      }
                      return v3;
                    }
                    RtlStringCbPrintfW(pszDest, 0x200uLL, L"%04x", (unsigned __int16)v30);
                    goto LABEL_26;
                  }
                }
              }
            }
          }
        }
        return v3;
      }
      v4 = &v33;
    }
    else
    {
      v4 = &v34;
    }
    DataSize = 8;
    goto LABEL_9;
  }
  return result;
}
