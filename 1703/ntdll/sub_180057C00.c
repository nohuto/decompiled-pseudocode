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

__int64 __fastcall sub_180057C00(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  int InformationToken; // ebx
  __int64 v14; // rdi
  char v15; // r14
  int v16; // esi
  bool v17; // al
  int v18; // esi
  __int64 v19; // rbx
  int v20; // r12d
  size_t v21; // rbx
  wchar_t *v22; // rax
  wchar_t *v23; // rdi
  wchar_t *v25; // rcx
  wchar_t v26; // ax
  wchar_t v27; // ax
  int appended; // eax
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh]
  int v33; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v40; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PSID v42[12]; // [rsp+B0h] [rbp-50h] BYREF
  void *v43; // [rsp+110h] [rbp+10h] BYREF
  wchar_t Buffer[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v45; // [rsp+370h] [rbp+270h] BYREF
  char v46; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  Sid = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Buffer, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  v39 = 262146;
  v40 = L"\\";
  if ( !a4 || !a1 )
    return 3221225485LL;
  v10 = a3 & 1;
  v32 = a3 & 2;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v33 = v11;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v38.Length = 0;
  v38.Buffer = 0LL;
  v30 = 0;
  v31 = 0;
  if ( a2 )
  {
    v7 = a2;
    v30 = 1;
  }
  else
  {
    InformationToken = ZwQueryInformationToken(a1, 29LL, &v30);
    if ( InformationToken < 0 )
      goto LABEL_58;
    if ( v30 )
    {
      InformationToken = ZwQueryInformationToken(a1, 31LL, &v43);
      if ( InformationToken < 0 )
        goto LABEL_58;
      v7 = v43;
      if ( !v43 )
      {
        InformationToken = -1073741823;
        goto LABEL_58;
      }
    }
  }
  InformationToken = ZwQueryInformationToken(a1, 42LL, &v31);
  if ( InformationToken < 0 )
    goto LABEL_58;
  if ( v31 )
  {
    InformationToken = ZwQueryInformationToken(a1, 1LL, v42);
    if ( InformationToken < 0 )
      goto LABEL_58;
    InformationToken = RtlConvertSidToUnicodeString(&v38, v42[0], 1u);
    if ( InformationToken < 0 )
      goto LABEL_58;
  }
  InformationToken = ZwQueryInformationToken(a1, 12LL, &v36);
  if ( InformationToken < 0 )
    goto LABEL_58;
  v14 = 260LL;
  if ( v30 )
  {
    InformationToken = RtlGetAppContainerSidType(v7, &v35);
    if ( InformationToken >= 0 )
    {
      if ( v35 == 2 )
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
          InformationToken = sub_180058124(SourceString);
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
LABEL_58:
    v15 = 1;
    goto LABEL_37;
  }
  v15 = 1;
LABEL_15:
  InformationToken = ZwQueryInformationToken(a1, 44LL, &v45);
  if ( InformationToken >= 0 )
  {
    v16 = v36;
    v17 = !v31 && !v30 && v16 == (unsigned int)RtlGetCurrentServiceSessionId();
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
        InformationToken = sub_180058124(Buffer);
LABEL_22:
        if ( InformationToken >= 0 )
        {
          v37 = 0LL;
          InformationToken = sub_180058198(Buffer, 520LL, &v37);
          if ( InformationToken >= 0 )
          {
            v18 = v32;
            if ( !v31 || v32 )
              v19 = v37;
            else
              v19 = v37 + v38.Length + 2LL;
            if ( v30 )
              v19 += UnicodeString.Length + 2LL;
            v20 = v33;
            if ( v46 && !v33 )
            {
              RtlInitUnicodeString(&DestinationString, v45);
              v19 += DestinationString.Length + 2LL;
            }
            v21 = v19 + 2;
            v22 = (wchar_t *)sub_180043FE0(v21);
            v23 = v22;
            if ( v22 )
            {
              memset(v22, 0, v21);
              a4->Length = 0;
              a4->MaximumLength = v21;
              a4->Buffer = v23;
              InformationToken = RtlAppendUnicodeToString(&a4->Length, Buffer);
              if ( InformationToken >= 0 )
              {
                if ( !v31
                  || v18
                  || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v39),
                      InformationToken >= 0)
                  && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v38),
                      InformationToken >= 0) )
                {
                  if ( !v30
                    || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v39),
                        InformationToken >= 0)
                    && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&UnicodeString),
                        InformationToken >= 0) )
                  {
                    if ( v46 )
                    {
                      if ( !v20 )
                      {
                        InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v39);
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
  RtlFreeUnicodeString(&v38);
  if ( InformationToken < 0 )
    RtlFreeUnicodeString(a4);
  if ( v15 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Sid);
  return (unsigned int)InformationToken;
}
