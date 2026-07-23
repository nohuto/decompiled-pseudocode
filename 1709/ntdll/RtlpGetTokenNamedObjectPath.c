/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x180053240
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18007A0D0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x1800877C0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetAppContainerParent @ 0x1800017E0 (RtlGetAppContainerParent.c)
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlConvertSidToUnicodeString @ 0x18002D250 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlStringCbLengthW @ 0x180079544 (RtlStringCbLengthW.c)
 *     RtlGetAppContainerSidType @ 0x18007D2B0 (RtlGetAppContainerSidType.c)
 *     RtlStringCchPrintfW @ 0x18007EC64 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A04E0 (NtQueryInformationToken.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, void *a2, char a3, _UNICODE_STRING *a4)
{
  void *v7; // r15
  PSID v8; // r14
  char v10; // r12
  char v11; // al
  int v12; // r13d
  NTSTATUS AppContainerParent; // ebx
  __int64 v14; // r14
  char v15; // r15
  int v16; // esi
  bool v17; // al
  int v18; // r14d
  __int64 v19; // rbx
  int v20; // r12d
  SIZE_T v21; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v23; // rsi
  WCHAR *v25; // rcx
  WCHAR v26; // ax
  WCHAR v27; // ax
  NTSTATUS appended; // eax
  NTSTATUS v29; // eax
  PSID AppContainerSidParent; // [rsp+40h] [rbp-C0h] BYREF
  int TokenInformation; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ReturnLength; // [rsp+4Ch] [rbp-B4h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+54h] [rbp-ACh]
  int v35; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING v40; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v41; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  void *v44; // [rsp+110h] [rbp+10h] BYREF
  WCHAR Source[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v46; // [rsp+370h] [rbp+270h] BYREF
  char v47; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v41.Length = 262146;
  v41.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v34 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3;
  v12 = a3 & 4;
  v35 = v11 & 8;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v40.Length = 0;
  v40.Buffer = 0LL;
  TokenInformation = 0;
  v33 = 0;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
  }
  else
  {
    AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_64;
    if ( TokenInformation )
    {
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Fu, &v44, 0x50u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_64;
      v7 = v44;
      if ( !v44 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_64;
      }
    }
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Au, &v33, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_64;
  if ( v33 )
  {
    AppContainerParent = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_64;
    AppContainerParent = RtlConvertSidToUnicodeString(&v40, Sid[0], 1u);
    if ( AppContainerParent < 0 )
      goto LABEL_64;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0xCu, &v38, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_64;
  v14 = 260LL;
  if ( TokenInformation )
  {
    AppContainerParent = RtlGetAppContainerSidType(v7, &AppContainerSidType);
    if ( AppContainerParent >= 0 )
    {
      if ( AppContainerSidType == ParentAppContainerSidType )
      {
        AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
        v15 = 1;
        if ( AppContainerParent < 0 )
          goto LABEL_36;
        goto LABEL_15;
      }
      AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
      if ( AppContainerParent >= 0 )
      {
        AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, AppContainerSidParent, 1u);
        if ( AppContainerParent >= 0 )
        {
          AppContainerParent = RtlStringCchPrintfW(SourceString);
          if ( AppContainerParent >= 0 )
          {
            RtlFreeAnsiString(&UnicodeString);
            RtlInitUnicodeString(&UnicodeString, SourceString);
            v15 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    v8 = AppContainerSidParent;
LABEL_64:
    v15 = 1;
    goto LABEL_37;
  }
  v15 = 1;
LABEL_15:
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Cu, &v46, 0x120u, &ReturnLength);
  if ( AppContainerParent >= 0 )
  {
    v16 = v38;
    v17 = !v33 && !TokenInformation && v16 == RtlGetCurrentServiceSessionId();
    if ( v10 )
    {
      if ( !v12 )
        goto LABEL_21;
      AppContainerParent = 0;
      v25 = Source;
      while ( v14 != -2147483386 )
      {
        v26 = *(WCHAR *)((char *)v25 + (char *)L"AppContainerNamedObjects" - (char *)Source);
        if ( !v26 )
          break;
        *v25++ = v26;
        if ( !--v14 )
        {
LABEL_53:
          --v25;
          AppContainerParent = -2147483643;
          break;
        }
      }
    }
    else
    {
      if ( !v17 )
      {
LABEL_21:
        AppContainerParent = RtlStringCchPrintfW(Source);
LABEL_22:
        if ( AppContainerParent >= 0 )
        {
          v39 = 0LL;
          AppContainerParent = RtlStringCbLengthW(Source, 520LL, &v39);
          if ( AppContainerParent >= 0 )
          {
            v18 = v34;
            if ( !v33 || v34 )
              v19 = v39;
            else
              v19 = v39 + v40.Length + 2LL;
            if ( TokenInformation )
              v19 += UnicodeString.Length + 2LL;
            v20 = v35;
            if ( v47 && !v35 )
            {
              RtlInitUnicodeString(&DestinationString, v46);
              v19 += DestinationString.Length + 2LL;
            }
            v21 = v19 + 2;
            StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v21);
            v23 = StringRoutine;
            if ( StringRoutine )
            {
              memset(StringRoutine, 0, v21);
              a4->Length = 0;
              a4->MaximumLength = v21;
              a4->Buffer = v23;
              AppContainerParent = RtlAppendUnicodeToString(a4, Source);
              if ( AppContainerParent >= 0 )
              {
                if ( !v33
                  || v18
                  || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41), AppContainerParent >= 0)
                  && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40), AppContainerParent >= 0) )
                {
                  if ( !TokenInformation
                    || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41), AppContainerParent >= 0)
                    && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerParent >= 0) )
                  {
                    if ( v47 )
                    {
                      if ( !v20 )
                      {
                        appended = RtlAppendUnicodeStringToString(a4, &v41);
                        AppContainerParent = appended;
                        if ( appended >= 0 )
                        {
                          v29 = RtlAppendUnicodeStringToString(a4, &DestinationString);
                          v8 = AppContainerSidParent;
                          AppContainerParent = v29;
                          goto LABEL_37;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              AppContainerParent = -1073741670;
            }
          }
        }
        goto LABEL_36;
      }
      AppContainerParent = 0;
      v25 = Source;
      while ( v14 != -2147483386 )
      {
        v27 = *(WCHAR *)((char *)v25 + (char *)L"\\BaseNamedObjects" - (char *)Source);
        if ( !v27 )
          break;
        *v25++ = v27;
        if ( !--v14 )
          goto LABEL_53;
      }
    }
    *v25 = 0;
    goto LABEL_22;
  }
LABEL_36:
  v8 = AppContainerSidParent;
LABEL_37:
  RtlFreeAnsiString(&v40);
  if ( AppContainerParent < 0 )
    RtlFreeAnsiString(a4);
  if ( v15 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
