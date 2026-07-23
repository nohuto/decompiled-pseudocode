/*
 * XREFs of SepCopyTokenAccessInformation @ 0x14054405C
 * Callers:
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14005C860 (RtlSidHashInitialize.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14006A1D4 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SeQueryMandatoryPolicyToken @ 0x1400A0A84 (SeQueryMandatoryPolicyToken.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x1405442F0 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1405445B0 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        int a12,
        int a13,
        char a14,
        unsigned __int8 *a15)
{
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rbp
  int v22; // eax
  ULONG v23; // r8d
  void *SidArea; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  ULONG v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // rdi
  ULONG v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int8 *v33; // rdx
  char *v34; // rbx
  char *v35; // rbx
  char *v36; // rdx
  PSID RemainingSidArea; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v18 = a2 + a3;
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v20 = *(_QWORD *)(v19 + 1080);
  v21 = 0LL;
  v22 = 0;
  if ( v20 )
    v22 = *(_DWORD *)(v20 + 40);
  v23 = a5 - a6;
  *(_DWORD *)(a2 + 48) = v22;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  SidArea = (void *)(a2 + 360 + a6);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v23,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    SidArea,
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(a2 + 360), *(_DWORD *)(a1 + 124), (PSID_AND_ATTRIBUTES_HASH)(a2 + 88));
  v25 = a2 + 360 + a5;
  *(_DWORD *)v25 = *(_DWORD *)(a1 + 128);
  v26 = v25 + 272;
  *(_QWORD *)(v25 + 8) = v25 + 272;
  *(_QWORD *)(a2 + 8) = v25;
  v27 = *(_DWORD *)(a1 + 128);
  if ( v27 )
  {
    RtlCopySidAndAttributesArray(
      v27,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      a7 - a8,
      (PSID_AND_ATTRIBUTES)(v25 + 272),
      (PSID)(v26 + a8),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v25 + 272), *(_DWORD *)(a1 + 128), (PSID_AND_ATTRIBUTES_HASH)v25);
  }
  v28 = v26 + a7;
  *(_DWORD *)v28 = *(_DWORD *)(a1 + 800);
  v29 = v28 + 272;
  *(_QWORD *)(v28 + 8) = v28 + 272;
  *(_QWORD *)(a2 + 64) = v28;
  v30 = *(_DWORD *)(a1 + 800);
  if ( v30 )
  {
    RtlCopySidAndAttributesArray(
      v30,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      a10 - a11,
      (PSID_AND_ATTRIBUTES)(v28 + 272),
      (PSID)(v29 + a11),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v28 + 272), *(_DWORD *)(a1 + 800), (PSID_AND_ATTRIBUTES_HASH)v28);
  }
  v31 = 0LL;
  v32 = v29 + a10;
  if ( a9 )
  {
    memmove(
      (void *)(v29 + a10),
      *(const void **)(a1 + 784),
      4 * (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v31 = v32;
  }
  v33 = a15;
  *(_QWORD *)(a2 + 56) = v31;
  if ( !a14 )
    v33 = *(unsigned __int8 **)(a1 + 1104);
  v34 = (char *)(a9 + v32);
  if ( a12 )
  {
    memmove(v34, v33, 4 * (unsigned int)v33[1] + 8);
    v21 = v34;
  }
  v35 = &v34[a12];
  *(_QWORD *)(a2 + 72) = v21;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v35,
    (unsigned int)(v18 - (_DWORD)v35),
    &RemainingSidArea);
  v36 = &v35[a13];
  *(_QWORD *)(a2 + 80) = v35;
  *(_DWORD *)v36 = a4;
  *(_QWORD *)(a2 + 16) = v36;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v36 + 4));
}
