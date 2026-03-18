/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x1404622D8
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140461CB4 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlGetCurrentServiceSessionId @ 0x140085340 (RtlGetCurrentServiceSessionId.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x1404A4820 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, int *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  NTSTATUS AppContainerSidType; // ebx
  PVOID v9; // r15
  unsigned int v10; // r12d
  UNICODE_STRING *p_UnicodeString; // r14
  unsigned int v12; // r13d
  NTSTATUS v13; // eax
  char *v14; // rdi
  struct _OBJECT_TYPE *v15; // rax
  __int64 v16; // rax
  char *v17; // rdi
  unsigned int v18; // edi
  void *v20; // r14
  PULONG v21; // rsi
  PULONG v22; // rdi
  PULONG v23; // rbx
  PULONG v24; // rax
  ULONG Object; // [rsp+20h] [rbp-E0h]
  ULONG HandleInformation; // [rsp+28h] [rbp-D8h]
  ULONG v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-A8h]
  HANDLE *v31; // [rsp+60h] [rbp-A0h]
  PVOID v32; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v36[8]; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING v37; // [rsp+A8h] [rbp-58h] BYREF
  char v38; // [rsp+B8h] [rbp-48h]
  wchar_t pszDest[256]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = 0;
  v31 = a4;
  v30 = a3;
  v28 = 0;
  v6 = *a2;
  AppContainerSidType = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      p_UnicodeString = 0LL;
LABEL_7:
      v12 = v30;
      if ( !v30 )
        goto LABEL_31;
      while ( 1 )
      {
        if ( v9 )
          ObfDereferenceObject(v9);
        v13 = ObReferenceObjectByHandle(*v31, 0, 0LL, 0, &v32, 0LL);
        v9 = v32;
        AppContainerSidType = v13;
        if ( v13 >= 0 )
        {
          v14 = (char *)v32 - 48;
          v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v32 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v32 - 48) >> 8)];
          if ( v15 != ObpSymbolicLinkObjectType
            && v15 != ObpDirectoryObjectType
            && (v15 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)v32 + 1) + 72LL) != 17) )
          {
            goto LABEL_49;
          }
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          AppContainerSidType = SepQueryNameString(v9, &P);
          if ( AppContainerSidType < 0 )
            goto LABEL_31;
          if ( !P || !*((_WORD *)P + 1) || (String2 = *(UNICODE_STRING *)P, !v10) )
          {
LABEL_49:
            AppContainerSidType = -1073741811;
            goto LABEL_31;
          }
          while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v4), &String2, 1u) )
          {
            if ( ++v4 >= v10 )
              goto LABEL_49;
          }
          v16 = v4;
          v4 = 0;
          if ( v36[24 * v16] )
          {
            if ( (v14[26] & 2) != 0 )
              v17 = &v14[-ObpInfoMaskToOffset[v14[26] & 3]];
            else
              v17 = 0LL;
            if ( !v17 || !*((_WORD *)v17 + 5) )
              goto LABEL_49;
            String2 = *(UNICODE_STRING *)(v17 + 8);
            if ( !RtlEqualUnicodeString(&String2, p_UnicodeString, 1u) )
            {
              v18 = 0;
              while ( !RtlEqualUnicodeString(&String2, (PCUNICODE_STRING)&AllowedCachedObjectNames + v18, 1u) )
              {
                if ( ++v18 >= 5 )
                  goto LABEL_49;
              }
            }
          }
        }
        ++v31;
        if ( ++v28 >= v12 )
          goto LABEL_31;
      }
    }
    p_UnicodeString = (UNICODE_STRING *)(a2 + 2);
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", *(unsigned int *)(a1 + 120));
    if ( AppContainerSidType < 0 )
      goto LABEL_31;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v36[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != (unsigned int)RtlGetCurrentServiceSessionId() )
      goto LABEL_7;
    RtlInitUnicodeString(&v37, L"\\BaseNamedObjects");
    v38 = 1;
LABEL_6:
    v10 = 2;
    goto LABEL_7;
  }
  AppContainerSidType = RtlGetAppContainerSidType(*((PSID *)a2 + 1));
  if ( AppContainerSidType >= 0 )
  {
    v20 = (void *)*((_QWORD *)a2 + 1);
    v21 = RtlSubAuthoritySid(v20, 0xBu);
    v22 = RtlSubAuthoritySid(v20, 0xAu);
    v23 = RtlSubAuthoritySid(v20, 9u);
    v24 = RtlSubAuthoritySid(v20, 8u);
    v27 = *v21;
    HandleInformation = *v22;
    Object = *v23;
    v4 = 0;
    AppContainerSidType = RtlStringCchPrintfW(
                            SourceString,
                            0x100uLL,
                            L"%u-%u-%u-%u",
                            *v24,
                            Object,
                            HandleInformation,
                            v27);
    if ( AppContainerSidType >= 0 )
    {
      RtlInitUnicodeString(&UnicodeString, SourceString);
      p_UnicodeString = &UnicodeString;
      AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", *(unsigned int *)(a1 + 120));
      if ( AppContainerSidType >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, pszDest);
        v36[0] = 1;
        RtlInitUnicodeString(&v37, L"\\Device\\NamedPipe");
        v38 = 0;
        goto LABEL_6;
      }
    }
  }
LABEL_31:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  return (unsigned int)AppContainerSidType;
}
