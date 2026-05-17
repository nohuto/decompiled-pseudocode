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

__int64 __fastcall sub_180042B30(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // r13
  char v10; // r15
  char v11; // al
  int v12; // r12d
  int InformationToken; // ebx
  __int64 v14; // r13
  char v15; // r14
  int v16; // edi
  bool v17; // al
  __int64 v18; // rbx
  int v19; // r12d
  size_t v20; // rbx
  wchar_t *v21; // rax
  wchar_t *v22; // rdi
  wchar_t *v24; // rdx
  wchar_t v25; // ax
  wchar_t *v26; // rcx
  wchar_t v27; // ax
  wchar_t *v28; // rax
  int appended; // eax
  bool v30; // [rsp+40h] [rbp-C0h]
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v33[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v40; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v42; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PSID v44[12]; // [rsp+B0h] [rbp-50h] BYREF
  void *v45; // [rsp+110h] [rbp+10h] BYREF
  wchar_t Buffer[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v47; // [rsp+370h] [rbp+270h] BYREF
  char v48; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  Sid = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Buffer, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  v41 = 262146;
  v42 = "\\";
  if ( !a4 || !a1 )
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
  v32 = 0;
  v34 = 0;
  if ( a2 )
  {
    v7 = a2;
    v32 = 1;
  }
  else
  {
    InformationToken = ZwQueryInformationToken(a1, 29LL, &v32, 4LL, v33);
    if ( InformationToken < 0 )
      goto LABEL_60;
    if ( v32 )
    {
      InformationToken = ZwQueryInformationToken(a1, 31LL, &v45, 80LL, v33);
      if ( InformationToken < 0 )
        goto LABEL_60;
      v7 = v45;
      if ( !v45 )
      {
        InformationToken = -1073741823;
        goto LABEL_60;
      }
    }
  }
  InformationToken = ZwQueryInformationToken(a1, 42LL, &v34, 4LL, v33);
  if ( InformationToken < 0 )
    goto LABEL_60;
  if ( v34 )
  {
    InformationToken = ZwQueryInformationToken(a1, 1LL, v44, 88LL, v33);
    if ( InformationToken < 0 )
      goto LABEL_60;
    InformationToken = RtlConvertSidToUnicodeString(&v40, v44[0], 1u);
    if ( InformationToken < 0 )
      goto LABEL_60;
  }
  InformationToken = ZwQueryInformationToken(a1, 12LL, &v38, 4LL, v33);
  if ( InformationToken < 0 )
    goto LABEL_60;
  v14 = 260LL;
  if ( v32 )
  {
    InformationToken = RtlGetAppContainerSidType(v7, &v37);
    if ( InformationToken >= 0 )
    {
      if ( v37 == 2 )
      {
        InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
        v15 = 1;
        if ( InformationToken < 0 )
          goto LABEL_36;
        goto LABEL_15;
      }
      InformationToken = RtlGetAppContainerParent(v7, &Sid);
      if ( InformationToken >= 0 )
      {
        InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
        if ( InformationToken >= 0 )
        {
          InformationToken = sub_18004373C(SourceString);
          if ( InformationToken >= 0 )
          {
            RtlFreeUnicodeString(&UnicodeString);
            RtlInitUnicodeString(&UnicodeString, SourceString);
            v15 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    v8 = Sid;
LABEL_60:
    v15 = 1;
    goto LABEL_37;
  }
  v15 = 1;
LABEL_15:
  InformationToken = ZwQueryInformationToken(a1, 44LL, &v47, 288LL, v33);
  if ( InformationToken >= 0 )
  {
    v16 = v38;
    v17 = !v34 && !v32 && v16 == (unsigned int)RtlGetCurrentServiceSessionId();
    if ( v10 )
    {
      if ( !v12 )
        goto LABEL_21;
      InformationToken = 0;
      v24 = Buffer;
      while ( v14 != -2147483386 )
      {
        v25 = *(wchar_t *)((char *)v24 + (char *)L"AppContainerNamedObjects" - (char *)Buffer);
        if ( !v25 )
          break;
        *v24++ = v25;
        if ( !--v14 )
        {
          --v24;
          InformationToken = -2147483643;
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
        InformationToken = sub_18004373C(Buffer);
        goto LABEL_22;
      }
      v26 = Buffer;
      do
      {
        if ( v14 == -2147483386 )
          break;
        v27 = *(wchar_t *)((char *)v26 + (char *)L"\\BaseNamedObjects" - (char *)Buffer);
        if ( !v27 )
          break;
        *v26++ = v27;
        --v14;
      }
      while ( v14 );
      v28 = v26 - 1;
      InformationToken = -2147483643;
      if ( v14 )
      {
        v28 = v26;
        InformationToken = 0;
      }
      *v28 = 0;
    }
LABEL_22:
    if ( InformationToken >= 0 )
    {
      v39 = 0LL;
      InformationToken = sub_1800437B0(Buffer, 520LL, &v39);
      if ( InformationToken >= 0 )
      {
        if ( v34 && v30 )
          v18 = v39 + v40.Length + 2LL;
        else
          v18 = v39;
        if ( v32 )
          v18 += UnicodeString.Length + 2LL;
        v19 = v35;
        if ( v48 && !v35 )
        {
          RtlInitUnicodeString(&DestinationString, v47);
          v18 += DestinationString.Length + 2LL;
        }
        v20 = v18 + 2;
        v21 = (wchar_t *)sub_18003B5E0(v20);
        v22 = v21;
        if ( v21 )
        {
          memset(v21, 0, v20);
          a4->Length = 0;
          a4->MaximumLength = v20;
          a4->Buffer = v22;
          InformationToken = RtlAppendUnicodeToString(&a4->Length, Buffer);
          if ( InformationToken >= 0 )
          {
            if ( !v34
              || !v30
              || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v41), InformationToken >= 0)
              && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v40), InformationToken >= 0) )
            {
              if ( !v32
                || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v41),
                    InformationToken >= 0)
                && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&UnicodeString),
                    InformationToken >= 0) )
              {
                if ( v48 )
                {
                  if ( !v19 )
                  {
                    InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v41);
                    if ( InformationToken >= 0 )
                    {
                      appended = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&DestinationString);
                      v8 = Sid;
                      InformationToken = appended;
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
          InformationToken = -1073741670;
        }
      }
    }
  }
LABEL_36:
  v8 = Sid;
LABEL_37:
  RtlFreeUnicodeString(&v40);
  if ( InformationToken < 0 )
    RtlFreeUnicodeString(a4);
  if ( v15 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Sid);
  return (unsigned int)InformationToken;
}
