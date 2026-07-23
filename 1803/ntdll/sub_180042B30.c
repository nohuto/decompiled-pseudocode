/*
 * XREFs of sub_180042B30 @ 0x180042B30
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1800438B0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x180082490 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_18004373C @ 0x18004373C (sub_18004373C.c)
 *     sub_1800437B0 @ 0x1800437B0 (sub_1800437B0.c)
 *     RtlGetAppContainerSidType @ 0x180043830 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180043B90 (RtlGetAppContainerParent.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180042B30(HANDLE TokenHandle, void *a2, char a3, _UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // r13
  char v10; // r15
  char v11; // al
  int v12; // r12d
  NTSTATUS AppContainerParent; // ebx
  __int64 v14; // r13
  char v15; // r14
  int v16; // edi
  bool v17; // al
  __int64 v18; // rbx
  int v19; // r12d
  SIZE_T v20; // rbx
  WCHAR *v21; // rax
  WCHAR *v22; // rdi
  WCHAR *v24; // rdx
  WCHAR v25; // ax
  WCHAR *v26; // rcx
  WCHAR v27; // ax
  WCHAR *v28; // rax
  NTSTATUS appended; // eax
  bool v30; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h]
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
  v41.Buffer = (PWCH)"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v10 = a3 & 1;
  v30 = (a3 & 2) == 0;
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
  v34 = 0;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
  }
  else
  {
    AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_60;
    if ( TokenInformation )
    {
      AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x1Fu, &v44, 0x50u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_60;
      v7 = v44;
      if ( !v44 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_60;
      }
    }
  }
  AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x2Au, &v34, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_60;
  if ( v34 )
  {
    AppContainerParent = ZwQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_60;
    AppContainerParent = RtlConvertSidToUnicodeString(&v40, Sid[0], 1u);
    if ( AppContainerParent < 0 )
      goto LABEL_60;
  }
  AppContainerParent = ZwQueryInformationToken(TokenHandle, 0xCu, &v38, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_60;
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
          AppContainerParent = sub_18004373C(SourceString);
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
LABEL_60:
    v15 = 1;
    goto LABEL_37;
  }
  v15 = 1;
LABEL_15:
  AppContainerParent = ZwQueryInformationToken(TokenHandle, 0x2Cu, &v46, 0x120u, &ReturnLength);
  if ( AppContainerParent >= 0 )
  {
    v16 = v38;
    v17 = !v34 && !TokenInformation && v16 == RtlGetCurrentServiceSessionId();
    if ( v10 )
    {
      if ( !v12 )
        goto LABEL_21;
      AppContainerParent = 0;
      v24 = Source;
      while ( v14 != -2147483386 )
      {
        v25 = *(WCHAR *)((char *)v24 + (char *)L"AppContainerNamedObjects" - (char *)Source);
        if ( !v25 )
          break;
        *v24++ = v25;
        if ( !--v14 )
        {
          --v24;
          AppContainerParent = -2147483643;
          break;
        }
      }
      *v24 = 0;
    }
    else
    {
      if ( !v17 )
      {
LABEL_21:
        AppContainerParent = sub_18004373C(Source);
        goto LABEL_22;
      }
      v26 = Source;
      do
      {
        if ( v14 == -2147483386 )
          break;
        v27 = *(WCHAR *)((char *)v26 + (char *)L"\\BaseNamedObjects" - (char *)Source);
        if ( !v27 )
          break;
        *v26++ = v27;
        --v14;
      }
      while ( v14 );
      v28 = v26 - 1;
      AppContainerParent = -2147483643;
      if ( v14 )
      {
        v28 = v26;
        AppContainerParent = 0;
      }
      *v28 = 0;
    }
LABEL_22:
    if ( AppContainerParent >= 0 )
    {
      v39 = 0LL;
      AppContainerParent = sub_1800437B0(Source, 520LL, &v39);
      if ( AppContainerParent >= 0 )
      {
        if ( v34 && v30 )
          v18 = v39 + v40.Length + 2LL;
        else
          v18 = v39;
        if ( TokenInformation )
          v18 += UnicodeString.Length + 2LL;
        v19 = v35;
        if ( v47 && !v35 )
        {
          RtlInitUnicodeString(&DestinationString, v46);
          v18 += DestinationString.Length + 2LL;
        }
        v20 = v18 + 2;
        v21 = (WCHAR *)sub_18003B5E0(v20);
        v22 = v21;
        if ( v21 )
        {
          memset(v21, 0, v20);
          a4->Length = 0;
          a4->MaximumLength = v20;
          a4->Buffer = v22;
          AppContainerParent = RtlAppendUnicodeToString(a4, Source);
          if ( AppContainerParent >= 0 )
          {
            if ( !v34
              || !v30
              || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41), AppContainerParent >= 0)
              && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40), AppContainerParent >= 0) )
            {
              if ( !TokenInformation
                || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41), AppContainerParent >= 0)
                && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerParent >= 0) )
              {
                if ( v47 )
                {
                  if ( !v19 )
                  {
                    AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41);
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
  }
LABEL_36:
  v8 = AppContainerSidParent;
LABEL_37:
  RtlFreeUnicodeString(&v40);
  if ( AppContainerParent < 0 )
    RtlFreeUnicodeString(a4);
  if ( v15 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
