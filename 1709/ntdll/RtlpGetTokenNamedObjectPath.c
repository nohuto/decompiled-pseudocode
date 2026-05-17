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

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v7; // r15
  PSID v8; // r14
  char v10; // r12
  char v11; // al
  int v12; // r13d
  int InformationToken; // ebx
  __int64 v14; // r14
  char v15; // r15
  int v16; // esi
  bool v17; // al
  int v18; // r14d
  __int64 v19; // rbx
  int v20; // r12d
  size_t v21; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v23; // rsi
  wchar_t *v25; // rcx
  wchar_t v26; // ax
  wchar_t v27; // ax
  int appended; // eax
  int v29; // eax
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v32[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+54h] [rbp-ACh]
  int v35; // [rsp+58h] [rbp-A8h]
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
  v42 = L"\\";
  if ( !a4 || !a1 )
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
  v31 = 0;
  v33 = 0;
  if ( a2 )
  {
    v7 = a2;
    v31 = 1;
  }
  else
  {
    InformationToken = NtQueryInformationToken(a1, 29LL, &v31, 4LL, v32);
    if ( InformationToken < 0 )
      goto LABEL_64;
    if ( v31 )
    {
      InformationToken = NtQueryInformationToken(a1, 31LL, &v45, 80LL, v32);
      if ( InformationToken < 0 )
        goto LABEL_64;
      v7 = v45;
      if ( !v45 )
      {
        InformationToken = -1073741823;
        goto LABEL_64;
      }
    }
  }
  InformationToken = NtQueryInformationToken(a1, 42LL, &v33, 4LL, v32);
  if ( InformationToken < 0 )
    goto LABEL_64;
  if ( v33 )
  {
    InformationToken = NtQueryInformationToken(a1, 1LL, v44, 88LL, v32);
    if ( InformationToken < 0 )
      goto LABEL_64;
    InformationToken = RtlConvertSidToUnicodeString(&v40, v44[0], 1u);
    if ( InformationToken < 0 )
      goto LABEL_64;
  }
  InformationToken = NtQueryInformationToken(a1, 12LL, &v38, 4LL, v32);
  if ( InformationToken < 0 )
    goto LABEL_64;
  v14 = 260LL;
  if ( v31 )
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
      InformationToken = RtlGetAppContainerParent((__int64)v7, (__int64 *)&Sid);
      if ( InformationToken >= 0 )
      {
        InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
        if ( InformationToken >= 0 )
        {
          InformationToken = RtlStringCchPrintfW(SourceString);
          if ( InformationToken >= 0 )
          {
            RtlFreeAnsiString(&UnicodeString);
            RtlInitUnicodeString(&UnicodeString, SourceString);
            v15 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    v8 = Sid;
LABEL_64:
    v15 = 1;
    goto LABEL_37;
  }
  v15 = 1;
LABEL_15:
  InformationToken = NtQueryInformationToken(a1, 44LL, &v47, 288LL, v32);
  if ( InformationToken >= 0 )
  {
    v16 = v38;
    v17 = !v33 && !v31 && v16 == (unsigned int)RtlGetCurrentServiceSessionId();
    if ( v10 )
    {
      if ( !v12 )
        goto LABEL_21;
      InformationToken = 0;
      v25 = Buffer;
      while ( v14 != -2147483386 )
      {
        v26 = *(wchar_t *)((char *)v25 + (char *)L"AppContainerNamedObjects" - (char *)Buffer);
        if ( !v26 )
          break;
        *v25++ = v26;
        if ( !--v14 )
        {
LABEL_53:
          --v25;
          InformationToken = -2147483643;
          break;
        }
      }
    }
    else
    {
      if ( !v17 )
      {
LABEL_21:
        InformationToken = RtlStringCchPrintfW(Buffer);
LABEL_22:
        if ( InformationToken >= 0 )
        {
          v39 = 0LL;
          InformationToken = RtlStringCbLengthW(Buffer, 520LL, &v39);
          if ( InformationToken >= 0 )
          {
            v18 = v34;
            if ( !v33 || v34 )
              v19 = v39;
            else
              v19 = v39 + v40.Length + 2LL;
            if ( v31 )
              v19 += UnicodeString.Length + 2LL;
            v20 = v35;
            if ( v48 && !v35 )
            {
              RtlInitUnicodeString(&DestinationString, v47);
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
              InformationToken = RtlAppendUnicodeToString(&a4->Length, Buffer);
              if ( InformationToken >= 0 )
              {
                if ( !v33
                  || v18
                  || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v41),
                      InformationToken >= 0)
                  && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v40),
                      InformationToken >= 0) )
                {
                  if ( !v31
                    || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v41),
                        InformationToken >= 0)
                    && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&UnicodeString),
                        InformationToken >= 0) )
                  {
                    if ( v48 )
                    {
                      if ( !v20 )
                      {
                        appended = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v41);
                        InformationToken = appended;
                        if ( appended >= 0 )
                        {
                          v29 = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&DestinationString);
                          v8 = Sid;
                          InformationToken = v29;
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
        goto LABEL_36;
      }
      InformationToken = 0;
      v25 = Buffer;
      while ( v14 != -2147483386 )
      {
        v27 = *(wchar_t *)((char *)v25 + (char *)L"\\BaseNamedObjects" - (char *)Buffer);
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
  v8 = Sid;
LABEL_37:
  RtlFreeAnsiString(&v40);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v15 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Sid);
  return (unsigned int)InformationToken;
}
