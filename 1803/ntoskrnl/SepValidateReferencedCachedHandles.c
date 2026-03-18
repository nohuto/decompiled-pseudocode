/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x14053FA28
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14053F3B4 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016D680 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     SepQueryNameString @ 0x14053FE24 (SepQueryNameString.c)
 *     RtlGetAppContainerSidType @ 0x140540E30 (RtlGetAppContainerSidType.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  NTSTATUS AppContainerSidType; // ebx
  PVOID v9; // r14
  unsigned int v10; // r12d
  PSID v11; // r12
  __int64 v12; // r9
  const UNICODE_STRING *v13; // r13
  NTSTATUS v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdi
  struct _OBJECT_TYPE *v18; // rdx
  __int64 v19; // rax
  char *v20; // rdi
  unsigned int v21; // edi
  PULONG v23; // rsi
  PULONG v24; // rdi
  PULONG v25; // rbx
  PULONG v26; // rax
  __int64 v27; // r9
  ULONG Object; // [rsp+20h] [rbp-E0h]
  ULONG HandleInformation; // [rsp+28h] [rbp-D8h]
  ULONG v30; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+44h] [rbp-BCh]
  int v33; // [rsp+48h] [rbp-B8h]
  unsigned int v34; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID p_UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v37; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v41[8]; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v42; // [rsp+A0h] [rbp-60h] BYREF
  char v43; // [rsp+B0h] [rbp-50h]
  wchar_t pszDest[256]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = 0;
  v37 = a4;
  v34 = a3;
  v33 = 0;
  v6 = *(_DWORD *)a2;
  v31 = 0;
  AppContainerSidType = 0;
  v32 = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  p_UnicodeString = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_7;
    v27 = *(unsigned int *)(a1 + 120);
    p_UnicodeString = a2 + 1;
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v27);
    if ( AppContainerSidType < 0 )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v41[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId() )
      goto LABEL_7;
    RtlInitUnicodeString(&v42, L"\\BaseNamedObjects");
    v43 = 1;
LABEL_6:
    v10 = 2;
LABEL_7:
    if ( !v34 )
      goto LABEL_32;
    v13 = (const UNICODE_STRING *)p_UnicodeString;
    while ( 1 )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      v14 = ObReferenceObjectByHandle(*v37, 0, 0LL, 0, &p_UnicodeString, 0LL);
      v9 = p_UnicodeString;
      AppContainerSidType = v14;
      if ( v14 >= 0 )
      {
        v17 = (char *)p_UnicodeString - 48;
        v18 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)p_UnicodeString - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)p_UnicodeString - 48) >> 8)];
        if ( v18 != ObpDirectoryObjectType
          && v18 != ObpSymbolicLinkObjectType
          && (v18 != (struct _OBJECT_TYPE *)IoFileObjectType
           || *(_DWORD *)(*((_QWORD *)p_UnicodeString + 1) + 72LL) != 17) )
        {
          goto LABEL_51;
        }
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
        AppContainerSidType = SepQueryNameString(v9, &P, v15, v16);
        if ( AppContainerSidType < 0 )
          goto LABEL_32;
        if ( !P || !*((_WORD *)P + 1) || (String2 = *(UNICODE_STRING *)P, !v10) )
        {
LABEL_51:
          AppContainerSidType = -1073741811;
          goto LABEL_32;
        }
        while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v4), &String2, 1u) )
        {
          if ( ++v4 >= v10 )
            goto LABEL_51;
        }
        v19 = 3LL * v4;
        v4 = 0;
        if ( v41[8 * v19] )
        {
          if ( (v17[26] & 2) != 0 )
            v20 = &v17[-ObpInfoMaskToOffset[v17[26] & 3]];
          else
            v20 = 0LL;
          if ( !v20 || !*((_WORD *)v20 + 5) )
            goto LABEL_51;
          String2 = *(UNICODE_STRING *)(v20 + 8);
          if ( !RtlEqualUnicodeString(&String2, v13, 1u) )
          {
            v21 = 0;
            while ( !RtlEqualUnicodeString(&String2, (PCUNICODE_STRING)&AllowedCachedObjectNames + v21, 1u) )
            {
              if ( ++v21 >= 5 )
                goto LABEL_51;
            }
          }
        }
      }
      ++v37;
      if ( ++v33 >= v34 )
        goto LABEL_32;
    }
  }
  AppContainerSidType = RtlGetAppContainerSidType(a2[1]);
  if ( AppContainerSidType >= 0 )
  {
    v11 = a2[1];
    v23 = RtlSubAuthoritySid(a2[1], 0xBu);
    v24 = RtlSubAuthoritySid(v11, 0xAu);
    v25 = RtlSubAuthoritySid(v11, 9u);
    v26 = RtlSubAuthoritySid(v11, 8u);
    v30 = *v23;
    HandleInformation = *v24;
    Object = *v25;
    v4 = 0;
    AppContainerSidType = RtlStringCchPrintfW(
                            SourceString,
                            0x100uLL,
                            L"%u-%u-%u-%u",
                            *v26,
                            Object,
                            HandleInformation,
                            v30);
    if ( AppContainerSidType >= 0 )
    {
      RtlInitUnicodeString(&UnicodeString, SourceString);
      v12 = *(unsigned int *)(a1 + 120);
      p_UnicodeString = &UnicodeString;
      AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
      if ( AppContainerSidType >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, pszDest);
        v41[0] = 1;
        RtlInitUnicodeString(&v42, L"\\Device\\NamedPipe");
        v43 = 0;
        goto LABEL_6;
      }
    }
  }
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v31 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)AppContainerSidType;
}
