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

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v4; // esi
  int v6; // ecx
  NTSTATUS v8; // ebx
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
  PSID v20; // r14
  PULONG v21; // rsi
  PULONG v22; // rdi
  PULONG v23; // rbx
  PULONG v24; // rax
  ULONG v25; // [rsp+30h] [rbp-D0h]
  char v26; // [rsp+40h] [rbp-C0h]
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-A8h]
  HANDLE *v31; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
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
  v6 = *(_DWORD *)a2;
  v26 = 0;
  v8 = 0;
  AppContainerSidType = NotAppContainerSidType;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( !v6 )
  {
    v8 = RtlGetAppContainerSidType(a2[1], &AppContainerSidType);
    if ( v8 < 0 )
      goto LABEL_33;
    if ( AppContainerSidType == ParentAppContainerSidType )
    {
      v8 = RtlConvertSidToUnicodeString(&UnicodeString, a2[1], 1u);
      if ( v8 < 0 )
        goto LABEL_33;
      v26 = 1;
    }
    else
    {
      v20 = a2[1];
      v21 = RtlSubAuthoritySid(v20, 0xBu);
      v22 = RtlSubAuthoritySid(v20, 0xAu);
      v23 = RtlSubAuthoritySid(v20, 9u);
      v24 = RtlSubAuthoritySid(v20, 8u);
      v25 = *v21;
      v4 = 0;
      v8 = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v24, *v23, *v22, v25);
      if ( v8 < 0 )
        goto LABEL_33;
      RtlInitUnicodeString(&UnicodeString, SourceString);
    }
    p_UnicodeString = &UnicodeString;
    v8 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", *(unsigned int *)(a1 + 120));
    if ( v8 < 0 )
      goto LABEL_33;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v36[0] = 1;
    RtlInitUnicodeString(&v37, L"\\Device\\NamedPipe");
    v38 = 0;
LABEL_8:
    v10 = 2;
    goto LABEL_9;
  }
  if ( v6 == 1 )
  {
    p_UnicodeString = (UNICODE_STRING *)(a2 + 1);
    v8 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", *(unsigned int *)(a1 + 120));
    if ( v8 < 0 )
      goto LABEL_33;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v36[0] = 1;
    v10 = 1;
    if ( *(_DWORD *)(a1 + 120) != RtlGetCurrentServiceSessionId() )
      goto LABEL_9;
    RtlInitUnicodeString(&v37, L"\\BaseNamedObjects");
    v38 = 1;
    goto LABEL_8;
  }
  p_UnicodeString = 0LL;
LABEL_9:
  v12 = v30;
  if ( !v30 )
    goto LABEL_33;
  while ( 1 )
  {
    if ( v9 )
      ObfDereferenceObject(v9);
    v13 = ObReferenceObjectByHandle(*v31, 0, 0LL, 0, &Object, 0LL);
    v9 = Object;
    v8 = v13;
    if ( v13 < 0 )
      goto LABEL_32;
    v14 = (char *)Object - 48;
    v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v15 != ObpSymbolicLinkObjectType
      && v15 != ObpDirectoryObjectType
      && (v15 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Object + 1) + 72LL) != 17) )
    {
      break;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v8 = SepQueryNameString(v9, &P);
    if ( v8 < 0 )
      goto LABEL_33;
    if ( !P )
      break;
    if ( !*((_WORD *)P + 1) )
      break;
    String2 = *(UNICODE_STRING *)P;
    if ( !v10 )
      break;
    while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v4), &String2, 1u) )
    {
      if ( ++v4 >= v10 )
        goto LABEL_53;
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
        break;
      String2 = *(UNICODE_STRING *)(v17 + 8);
      if ( !RtlEqualUnicodeString(&String2, p_UnicodeString, 1u) )
      {
        v18 = 0;
        while ( !RtlEqualUnicodeString(&String2, (PCUNICODE_STRING)&AllowedCachedObjectNames + v18, 1u) )
        {
          if ( ++v18 >= 5 )
            goto LABEL_53;
        }
      }
    }
LABEL_32:
    ++v31;
    if ( ++v28 >= v12 )
      goto LABEL_33;
  }
LABEL_53:
  v8 = -1073741811;
LABEL_33:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v26 )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
