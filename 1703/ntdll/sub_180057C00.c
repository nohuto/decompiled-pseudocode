/*
 * XREFs of sub_180057C00 @ 0x180057C00
 * Callers:
 *     RtlGetTokenNamedObjectPath @ 0x180055F80 (RtlGetTokenNamedObjectPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180057AA0 (RtlGetAppContainerNamedObjectPath.c)
 * Callees:
 *     RtlGetAppContainerParent @ 0x180002940 (RtlGetAppContainerParent.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180058124 @ 0x180058124 (sub_180058124.c)
 *     sub_180058198 @ 0x180058198 (sub_180058198.c)
 *     RtlGetAppContainerSidType @ 0x180058210 (RtlGetAppContainerSidType.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180057C00(HANDLE TokenHandle, void *a2, char a3, _UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  NTSTATUS AppContainerParent; // ebx
  __int64 v14; // rdi
  char v15; // r14
  int v16; // esi
  bool v17; // al
  int v18; // esi
  __int64 v19; // rbx
  int v20; // r12d
  SIZE_T v21; // rbx
  WCHAR *v22; // rax
  WCHAR *v23; // rdi
  WCHAR *v25; // rcx
  WCHAR v26; // ax
  WCHAR v27; // ax
  NTSTATUS appended; // eax
  PSID AppContainerSidParent; // [rsp+40h] [rbp-C0h] BYREF
  int TokenInformation; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ReturnLength; // [rsp+4Ch] [rbp-B4h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh]
  int v34; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING v39; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v40; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  void *v43; // [rsp+110h] [rbp+10h] BYREF
  WCHAR Source[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v45; // [rsp+370h] [rbp+270h] BYREF
  char v46; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v40.Length = 262146;
  v40.Buffer = (PWCH)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v10 = a3 & 1;
  v33 = a3 & 2;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v34 = v11;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v39.Length = 0;
  v39.Buffer = 0LL;
  TokenInformation = 0;
  v32 = 0;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
  }
  else
  {
    AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_58;
    if ( TokenInformation )
    {
      AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x1Fu, &v43, 0x50u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_58;
      v7 = v43;
      if ( !v43 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_58;
      }
    }
  }
  AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x2Au, &v32, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_58;
  if ( v32 )
  {
    AppContainerParent = ZwQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_58;
    AppContainerParent = RtlConvertSidToUnicodeString(&v39, Sid[0], 1u);
    if ( AppContainerParent < 0 )
      goto LABEL_58;
  }
  AppContainerParent = ZwQueryInformationToken(TokenHandle, 0xCu, &v37, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_58;
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
          AppContainerParent = sub_180058124(SourceString);
          if ( AppContainerParent >= 0 )
          {
            RtlFreeUnicodeString(&UnicodeString);
            RtlInitUnicodeString(&UnicodeString, SourceString);
            v15 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    v8 = AppContainerSidParent;
LABEL_58:
    v15 = 1;
    goto LABEL_37;
  }
  v15 = 1;
LABEL_15:
  AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x2Cu, &v45, 0x120u, &ReturnLength);
  if ( AppContainerParent >= 0 )
  {
    v16 = v37;
    v17 = !v32 && !TokenInformation && v16 == RtlGetCurrentServiceSessionId();
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
        AppContainerParent = sub_180058124(Source);
LABEL_22:
        if ( AppContainerParent >= 0 )
        {
          v38 = 0LL;
          AppContainerParent = sub_180058198(Source, 520LL, &v38);
          if ( AppContainerParent >= 0 )
          {
            v18 = v33;
            if ( !v32 || v33 )
              v19 = v38;
            else
              v19 = v38 + v39.Length + 2LL;
            if ( TokenInformation )
              v19 += UnicodeString.Length + 2LL;
            v20 = v34;
            if ( v46 && !v34 )
            {
              RtlInitUnicodeString(&DestinationString, v45);
              v19 += DestinationString.Length + 2LL;
            }
            v21 = v19 + 2;
            v22 = (WCHAR *)sub_180043FE0(v21);
            v23 = v22;
            if ( v22 )
            {
              memset(v22, 0, v21);
              a4->Length = 0;
              a4->MaximumLength = v21;
              a4->Buffer = v23;
              AppContainerParent = RtlAppendUnicodeToString(a4, Source);
              if ( AppContainerParent >= 0 )
              {
                if ( !v32
                  || v18
                  || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40), AppContainerParent >= 0)
                  && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v39), AppContainerParent >= 0) )
                {
                  if ( !TokenInformation
                    || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40), AppContainerParent >= 0)
                    && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerParent >= 0) )
                  {
                    if ( v46 )
                    {
                      if ( !v20 )
                      {
                        AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40);
                        if ( AppContainerParent >= 0 )
                        {
                          appended = RtlAppendUnicodeStringToString(a4, &DestinationString);
                          v8 = AppContainerSidParent;
                          AppContainerParent = appended;
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
  RtlFreeUnicodeString(&v39);
  if ( AppContainerParent < 0 )
    RtlFreeUnicodeString(a4);
  if ( v15 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
