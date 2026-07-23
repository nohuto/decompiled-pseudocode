/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x1406EA6A0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14023C1C0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x1406E9B60 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     RtlGetCurrentServiceSessionId @ 0x140085340 (RtlGetCurrentServiceSessionId.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlGetAppContainerSidType @ 0x1404A4820 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlGetAppContainerParent @ 0x1406E9A30 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, char a3, UNICODE_STRING *a4)
{
  PSID v7; // r12
  PSID v8; // rdi
  int v10; // eax
  int v11; // esi
  char v12; // r15
  NTSTATUS appended; // ebx
  __int64 v14; // r15
  NTSTATUS AppContainerParent; // eax
  PULONG v16; // rsi
  PULONG v17; // rdi
  PULONG v18; // rbx
  ULONG CurrentServiceSessionId; // eax
  int v20; // r9d
  char v21; // al
  wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  wchar_t v24; // ax
  wchar_t v25; // ax
  int v26; // esi
  __int64 v27; // rbx
  int v28; // r15d
  SIZE_T v29; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v31; // rdi
  NTSTATUS v32; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v36; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  char v38; // [rsp+48h] [rbp-B8h]
  PSID AppContainerSidParent; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v40; // [rsp+58h] [rbp-A8h] BYREF
  int TokenInformation; // [rsp+5Ch] [rbp-A4h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch]
  int v44; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING pcbLength; // [rsp+80h] [rbp-80h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sida[12]; // [rsp+C0h] [rbp-40h] BYREF
  void *v51; // [rsp+120h] [rbp+20h] BYREF
  wchar_t psz[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR SourceString; // [rsp+380h] [rbp+280h] BYREF
  char v54; // [rsp+388h] [rbp+288h]
  wchar_t pszDest[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(psz, 0, 0x208uLL);
  memset(pszDest, 0, 0x208uLL);
  *(_DWORD *)&Source.Length = 262146;
  Source.Buffer = L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0LL;
  v38 = a3 & 1;
  *(_DWORD *)&DestinationString.Length = 0;
  v43 = a3 & 2;
  v10 = a3 & 8;
  DestinationString.Buffer = 0LL;
  v11 = a3 & 4;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v37 = 0;
  v12 = 1;
  v44 = v10;
  *(_DWORD *)&pcbLength.Length = v11;
  v36 = 1;
  TokenInformation = 0;
  if ( Sid )
  {
    v7 = Sid;
    v37 = 1;
    goto LABEL_5;
  }
  appended = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &v37, 4u, &v40);
  if ( appended >= 0 )
  {
    if ( !v37 )
      goto LABEL_5;
    appended = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, &v51, 0x50u, &v40);
    if ( appended >= 0 )
    {
      v7 = v51;
      if ( !v51 )
      {
        appended = -1073741823;
        goto LABEL_81;
      }
LABEL_5:
      appended = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &TokenInformation, 4u, &v40);
      if ( appended < 0 )
        goto LABEL_81;
      if ( TokenInformation )
      {
        appended = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v40);
        if ( appended < 0 )
          goto LABEL_81;
        appended = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
        if ( appended < 0 )
          goto LABEL_81;
      }
      appended = NtQueryInformationToken(TokenHandle, TokenSessionId, &v42, 4u, &v40);
      if ( appended < 0 )
        goto LABEL_81;
      v14 = 260LL;
      if ( v37 )
      {
        appended = RtlGetAppContainerSidType(v7, &AppContainerSidType);
        if ( appended >= 0 )
        {
          if ( AppContainerSidType == ParentAppContainerSidType )
          {
            appended = RtlConvertSidToUnicodeString(&DestinationString, v7, 1u);
            if ( appended >= 0 )
              goto LABEL_24;
          }
          else
          {
            AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
            v8 = AppContainerSidParent;
            appended = AppContainerParent;
            if ( AppContainerParent >= 0 )
            {
              appended = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u);
              if ( appended >= 0 )
              {
                v16 = RtlSubAuthoritySid(v7, 0xBu);
                v17 = RtlSubAuthoritySid(v7, 0xAu);
                v18 = RtlSubAuthoritySid(v7, 9u);
                LODWORD(ReturnLength) = *RtlSubAuthoritySid(v7, 8u);
                appended = RtlStringCchPrintfW(
                             pszDest,
                             0x104uLL,
                             L"%s\\%u-%u-%u-%u",
                             DestinationString.Buffer,
                             ReturnLength,
                             *v18,
                             *v17,
                             *v16);
                if ( appended >= 0 )
                {
                  RtlFreeUnicodeString(&DestinationString);
                  RtlInitUnicodeString(&DestinationString, pszDest);
                  v8 = AppContainerSidParent;
                  v11 = *(_DWORD *)&pcbLength.Length;
                  v36 = 0;
                  goto LABEL_24;
                }
                v8 = AppContainerSidParent;
              }
            }
          }
        }
        v12 = 1;
        goto LABEL_81;
      }
LABEL_24:
      appended = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &SourceString, 0x120u, &v40);
      if ( appended < 0 )
      {
LABEL_66:
        v12 = v36;
        goto LABEL_81;
      }
      if ( TokenInformation || v37 )
      {
        v20 = v42;
      }
      else
      {
        CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
        v20 = v42;
        if ( v42 == CurrentServiceSessionId )
        {
          v21 = 1;
          goto LABEL_31;
        }
      }
      v21 = 0;
LABEL_31:
      if ( v38 )
      {
        if ( !v11 )
        {
          appended = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
          goto LABEL_52;
        }
        appended = 0;
        v22 = psz;
        while ( v14 != -2147483386 )
        {
          v25 = *(wchar_t *)((char *)v22 + (char *)L"AppContainerNamedObjects" - (char *)psz);
          if ( !v25 )
            break;
          *v22++ = v25;
          if ( !--v14 )
          {
LABEL_50:
            --v22;
            appended = -2147483643;
            break;
          }
        }
      }
      else
      {
        v22 = psz;
        if ( !v21 )
        {
          v23 = L"AppContainerNamedObjects";
          if ( !v37 )
            v23 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v20;
          appended = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v23);
LABEL_52:
          if ( appended >= 0 )
          {
            *(_QWORD *)&pcbLength.Length = 0LL;
            appended = RtlStringCbLengthW(psz, 0x208uLL, (size_t *)&pcbLength.Length);
            if ( appended >= 0 )
            {
              v26 = v43;
              if ( !TokenInformation || v43 )
                v27 = *(_QWORD *)&pcbLength.Length;
              else
                v27 = *(_QWORD *)&pcbLength.Length + UnicodeString.Length + 2LL;
              if ( v37 )
                v27 += DestinationString.Length + 2LL;
              v28 = v44;
              if ( v54 && !v44 )
              {
                RtlInitUnicodeString(&pcbLength, SourceString);
                v27 += pcbLength.Length + 2LL;
              }
              v29 = v27 + 2;
              StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v29);
              v31 = StringRoutine;
              if ( StringRoutine )
              {
                memset(StringRoutine, 0, v29);
                a4->Length = 0;
                a4->MaximumLength = v29;
                a4->Buffer = v31;
                appended = RtlAppendUnicodeToString(a4, psz);
                if ( appended >= 0 )
                {
                  if ( !TokenInformation
                    || v26
                    || (appended = RtlAppendUnicodeStringToString(a4, &Source), appended >= 0)
                    && (appended = RtlAppendUnicodeStringToString(a4, &UnicodeString), appended >= 0) )
                  {
                    if ( !v37
                      || (appended = RtlAppendUnicodeStringToString(a4, &Source), appended >= 0)
                      && (appended = RtlAppendUnicodeStringToString(a4, &DestinationString), appended >= 0) )
                    {
                      if ( v54 )
                      {
                        if ( !v28 )
                        {
                          appended = RtlAppendUnicodeStringToString(a4, &Source);
                          if ( appended >= 0 )
                          {
                            v32 = RtlAppendUnicodeStringToString(a4, &pcbLength);
                            v8 = AppContainerSidParent;
                            appended = v32;
                            v12 = v36;
                            goto LABEL_81;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                appended = -1073741670;
              }
              v8 = AppContainerSidParent;
            }
          }
          goto LABEL_66;
        }
        appended = 0;
        while ( v14 != -2147483386 )
        {
          v24 = *(wchar_t *)((char *)v22 + (char *)L"\\BaseNamedObjects" - (char *)psz);
          if ( !v24 )
            break;
          *v22++ = v24;
          if ( !--v14 )
            goto LABEL_50;
        }
      }
      *v22 = 0;
      goto LABEL_52;
    }
  }
LABEL_81:
  RtlFreeUnicodeString(&UnicodeString);
  if ( appended < 0 )
    RtlFreeUnicodeString(a4);
  if ( v12 )
    RtlFreeUnicodeString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
