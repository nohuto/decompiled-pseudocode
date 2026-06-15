/*
 * XREFs of ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x14001A07C
 * Callers:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x14001A2B8 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140017110 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiCreatePort(HandleSendReceiveServer *this, PCWSTR *a2)
{
  unsigned __int16 *v4; // rax
  wchar_t *v5; // rbx
  ULONG v6; // eax
  ULONG v7; // r14d
  int v8; // ebx
  int inited; // esi
  PSECURITY_DESCRIPTOR v10; // r15
  int v11; // r12d
  int v12; // eax
  signed int LastError; // eax
  wchar_t *v15; // rbx
  bool v16; // zf
  int v17; // eax
  ULONG v18; // eax
  signed int v19; // eax
  __int64 v20; // [rsp+28h] [rbp-A1h]
  int v21; // [rsp+30h] [rbp-99h]
  ULONG Seed; // [rsp+34h] [rbp-95h] BYREF
  ULONG v23; // [rsp+38h] [rbp-91h] BYREF
  int v24; // [rsp+40h] [rbp-89h] BYREF
  __int64 v25; // [rsp+48h] [rbp-81h]
  _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-79h]
  int v27; // [rsp+58h] [rbp-71h]
  PSECURITY_DESCRIPTOR v28; // [rsp+60h] [rbp-69h]
  __int64 v29; // [rsp+68h] [rbp-61h]
  ULONG SecurityDescriptorSize; // [rsp+70h] [rbp-59h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-51h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v33[10]; // [rsp+90h] [rbp-39h] BYREF

  v21 = 0;
  if ( a2 )
  {
    v4 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
    *a2 = v4;
    if ( v4 )
    {
      *v4 = 0;
      v5 = (wchar_t *)*a2;
      Seed = MEMORY[0x7FFE0320];
      do
      {
        v6 = RtlRandomEx(&Seed);
        v7 = v6;
      }
      while ( !v6 );
      v8 = StringCchPrintfW(v5, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v6);
      if ( v8 >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, *a2);
        if ( inited < 0 )
          goto LABEL_33;
        v10 = 0LL;
        if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
               L"D:(A;;0x1;;;WD)(A;;0x1;;;S-1-15-2-1)(A;;0x1;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-35"
                "26593181-1159816984-2199008581-497492991)",
               1u,
               &SecurityDescriptor,
               &SecurityDescriptorSize) )
        {
          v10 = SecurityDescriptor;
          v8 = 0;
LABEL_9:
          v25 = 0LL;
          v24 = 48;
          v27 = 64;
          p_DestinationString = &DestinationString;
          v28 = v10;
          v29 = 0LL;
          memset(v33, 0, 0x48uLL);
          v33[2] = 48LL;
          v11 = 3;
          while ( 1 )
          {
            --v11;
            v12 = NtAlpcCreatePort((char *)this + 8, &v24, v33);
            inited = v12;
            if ( v12 != -1073741771 && v12 != 0x40000000 )
            {
LABEL_12:
              LocalFree(v10);
              goto LABEL_13;
            }
            v15 = (wchar_t *)*a2;
            v16 = v21 == -1;
            v17 = ++v21;
            if ( v16 )
            {
              v23 = MEMORY[0x7FFE0320];
              do
                v18 = RtlRandomEx(&v23);
              while ( !v18 );
              v7 = v18;
            }
            else
            {
              if ( !v7 )
              {
                v8 = -2147024809;
                goto LABEL_29;
              }
              v18 = v7 + v17;
            }
            LODWORD(v20) = v18;
            v8 = StringCchPrintfW(
                   v15,
                   64LL,
                   L"%ws%ws%ld",
                   L"\\BaseNamedObjects\\",
                   L"AudioEngineDuplicateHandleApiPort",
                   v20);
LABEL_29:
            if ( v8 >= 0 && RtlInitUnicodeStringEx(&DestinationString, *a2) >= 0 )
            {
              v25 = 0LL;
              v29 = 0LL;
              v24 = 48;
              v27 = 64;
              p_DestinationString = &DestinationString;
              v28 = v10;
              if ( v11 > 0 )
                continue;
            }
            goto LABEL_12;
          }
        }
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0x80070000;
        if ( v8 >= 0 )
          goto LABEL_9;
LABEL_13:
        if ( inited < 0 )
        {
LABEL_33:
          RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
          v19 = GetLastError();
          v8 = v19;
          if ( v19 > 0 )
            v8 = (unsigned __int16)v19 | 0x80070000;
          CoTaskMemFree((LPVOID)*a2);
          *a2 = 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v8;
}
