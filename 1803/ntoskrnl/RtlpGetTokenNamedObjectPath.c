/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x140785D38
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140287510 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x140785200 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlStringCbLengthW @ 0x140075A6C (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016D680 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     RtlGetAppContainerSidType @ 0x140540E30 (RtlGetAppContainerSidType.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     RtlGetAppContainerParent @ 0x1407850D0 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, char *Sid, char a3, UNICODE_STRING *a4)
{
  char *v7; // r12
  PSID v8; // rdi
  int v10; // eax
  int v11; // esi
  char v12; // r15
  int AppContainerSidType; // ebx
  __int64 v14; // r15
  int AppContainerParent; // eax
  PULONG v16; // rsi
  PULONG v17; // rdi
  PULONG v18; // rbx
  int CurrentServiceSessionId; // eax
  int v20; // r9d
  char v21; // al
  const wchar_t *v22; // rcx
  wchar_t *v23; // rcx
  wchar_t v24; // ax
  wchar_t *v25; // rax
  wchar_t *v26; // rdx
  wchar_t v27; // ax
  int v28; // esi
  __int64 v29; // rbx
  int v30; // r15d
  SIZE_T v31; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v33; // rdi
  NTSTATUS appended; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  PSID v40; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v41; // [rsp+50h] [rbp-B0h] BYREF
  int TokenInformation; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h]
  int v45; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING pcbLength; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+88h] [rbp-78h] BYREF
  int v49; // [rsp+8Ch] [rbp-74h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sida[12]; // [rsp+B0h] [rbp-50h] BYREF
  char *v53; // [rsp+110h] [rbp+10h] BYREF
  wchar_t psz[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR SourceString; // [rsp+370h] [rbp+270h] BYREF
  char v56; // [rsp+378h] [rbp+278h]
  wchar_t pszDest[264]; // [rsp+490h] [rbp+390h] BYREF

  v40 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(psz, 0, 0x208uLL);
  memset(pszDest, 0, 0x208uLL);
  *(_DWORD *)&Source.Length = 262146;
  Source.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0LL;
  *(_DWORD *)&pcbLength.Length = a3 & 1;
  *(_DWORD *)&DestinationString.Length = 0;
  v44 = a3 & 2;
  v10 = a3 & 8;
  DestinationString.Buffer = 0LL;
  v11 = a3 & 4;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v39 = 0;
  v12 = 1;
  v45 = v10;
  v49 = v11;
  v38 = 1;
  TokenInformation = 0;
  if ( Sid )
  {
    v7 = Sid;
    v39 = 1;
    goto LABEL_5;
  }
  AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &v39, 4u, &v41);
  if ( AppContainerSidType >= 0 )
  {
    if ( !v39 )
      goto LABEL_5;
    AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, &v53, 0x50u, &v41);
    if ( AppContainerSidType >= 0 )
    {
      v7 = v53;
      if ( !v53 )
      {
        AppContainerSidType = -1073741823;
        goto LABEL_82;
      }
LABEL_5:
      AppContainerSidType = NtQueryInformationToken(
                              TokenHandle,
                              TokenIsRestricted|TokenGroups,
                              &TokenInformation,
                              4u,
                              &v41);
      if ( AppContainerSidType < 0 )
        goto LABEL_82;
      if ( TokenInformation )
      {
        AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v41);
        if ( AppContainerSidType < 0 )
          goto LABEL_82;
        AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
        if ( AppContainerSidType < 0 )
          goto LABEL_82;
      }
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenSessionId, &v43, 4u, &v41);
      if ( AppContainerSidType < 0 )
        goto LABEL_82;
      v14 = 260LL;
      if ( v39 )
      {
        AppContainerSidType = RtlGetAppContainerSidType(v7, &v48);
        if ( AppContainerSidType >= 0 )
        {
          if ( v48 == 2 )
          {
            AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v7, 1u);
            if ( AppContainerSidType >= 0 )
              goto LABEL_24;
          }
          else
          {
            AppContainerParent = RtlGetAppContainerParent(v7, (ULONG **)&v40);
            v8 = v40;
            AppContainerSidType = AppContainerParent;
            if ( AppContainerParent >= 0 )
            {
              AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v40, 1u);
              if ( AppContainerSidType >= 0 )
              {
                v16 = RtlSubAuthoritySid(v7, 0xBu);
                v17 = RtlSubAuthoritySid(v7, 0xAu);
                v18 = RtlSubAuthoritySid(v7, 9u);
                LODWORD(ReturnLength) = *RtlSubAuthoritySid(v7, 8u);
                AppContainerSidType = RtlStringCchPrintfW(
                                        pszDest,
                                        0x104uLL,
                                        L"%s\\%u-%u-%u-%u",
                                        DestinationString.Buffer,
                                        ReturnLength,
                                        *v18,
                                        *v17,
                                        *v16);
                if ( AppContainerSidType >= 0 )
                {
                  RtlFreeAnsiString(&DestinationString);
                  RtlInitUnicodeString(&DestinationString, pszDest);
                  v8 = v40;
                  v11 = v49;
                  v38 = 0;
                  goto LABEL_24;
                }
                v8 = v40;
              }
            }
          }
        }
        v12 = 1;
        goto LABEL_82;
      }
LABEL_24:
      AppContainerSidType = NtQueryInformationToken(
                              TokenHandle,
                              TokenIsRestricted|TokenOwner,
                              &SourceString,
                              0x120u,
                              &v41);
      if ( AppContainerSidType < 0 )
      {
LABEL_67:
        v12 = v38;
        goto LABEL_82;
      }
      if ( TokenInformation || v39 )
      {
        v20 = v43;
      }
      else
      {
        CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
        v20 = v43;
        if ( v43 == CurrentServiceSessionId )
        {
          v21 = 1;
          goto LABEL_31;
        }
      }
      v21 = 0;
LABEL_31:
      if ( LOBYTE(pcbLength.Length) )
      {
        if ( !v11 )
        {
          AppContainerSidType = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
          goto LABEL_53;
        }
        v26 = psz;
        do
        {
          if ( v14 == -2147483386 )
            break;
          v27 = *(wchar_t *)((char *)v26 + (char *)L"AppContainerNamedObjects" - (char *)psz);
          if ( !v27 )
            break;
          *v26++ = v27;
          --v14;
        }
        while ( v14 );
        v25 = v26 - 1;
        if ( v14 )
          v25 = v26;
      }
      else
      {
        if ( !v21 )
        {
          v22 = L"AppContainerNamedObjects";
          if ( !v39 )
            v22 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v20;
          AppContainerSidType = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v22);
          goto LABEL_53;
        }
        v23 = psz;
        do
        {
          if ( v14 == -2147483386 )
            break;
          v24 = *(wchar_t *)((char *)v23 + (char *)L"\\BaseNamedObjects" - (char *)psz);
          if ( !v24 )
            break;
          *v23++ = v24;
          --v14;
        }
        while ( v14 );
        v25 = v23 - 1;
        if ( v14 )
          v25 = v23;
      }
      AppContainerSidType = -2147483643;
      *v25 = 0;
      if ( v14 )
        AppContainerSidType = 0;
LABEL_53:
      if ( AppContainerSidType >= 0 )
      {
        *(_QWORD *)&pcbLength.Length = 0LL;
        AppContainerSidType = RtlStringCbLengthW(psz, 0x208uLL, (size_t *)&pcbLength.Length);
        if ( AppContainerSidType >= 0 )
        {
          v28 = v44;
          if ( !TokenInformation || v44 )
            v29 = *(_QWORD *)&pcbLength.Length;
          else
            v29 = *(_QWORD *)&pcbLength.Length + UnicodeString.Length + 2LL;
          if ( v39 )
            v29 += DestinationString.Length + 2LL;
          v30 = v45;
          if ( v56 && !v45 )
          {
            RtlInitUnicodeString(&pcbLength, SourceString);
            v29 += pcbLength.Length + 2LL;
          }
          v31 = v29 + 2;
          StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v31);
          v33 = StringRoutine;
          if ( StringRoutine )
          {
            memset(StringRoutine, 0, v31);
            a4->Length = 0;
            a4->MaximumLength = v31;
            a4->Buffer = v33;
            AppContainerSidType = RtlAppendUnicodeToString(a4, psz);
            if ( AppContainerSidType >= 0 )
            {
              if ( !TokenInformation
                || v28
                || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerSidType >= 0) )
              {
                if ( !v39
                  || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                  && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &DestinationString),
                      AppContainerSidType >= 0) )
                {
                  if ( v56 )
                  {
                    if ( !v30 )
                    {
                      AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source);
                      if ( AppContainerSidType >= 0 )
                      {
                        appended = RtlAppendUnicodeStringToString(a4, &pcbLength);
                        v8 = v40;
                        AppContainerSidType = appended;
                        v12 = v38;
                        goto LABEL_82;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            AppContainerSidType = -1073741670;
          }
          v8 = v40;
        }
      }
      goto LABEL_67;
    }
  }
LABEL_82:
  RtlFreeAnsiString(&UnicodeString);
  if ( AppContainerSidType < 0 )
    RtlFreeAnsiString(a4);
  if ( v12 )
    RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)AppContainerSidType;
}
