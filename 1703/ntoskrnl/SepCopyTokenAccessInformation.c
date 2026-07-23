/*
 * XREFs of SepCopyTokenAccessInformation @ 0x14046EA9C
 * Callers:
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     SeQueryMandatoryPolicyToken @ 0x14003F2EC (SeQueryMandatoryPolicyToken.c)
 *     RtlSidHashInitialize @ 0x140093A10 (RtlSidHashInitialize.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x14046ED30 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x14046F000 (AuthzBasepQueryInternalSecurityAttributesToken.c)
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
        int a9,
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
  ULONG v22; // r8d
  void *SidArea; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  ULONG v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rdi
  ULONG v29; // ecx
  char *v30; // rbx
  char *v31; // rdi
  unsigned __int8 *v32; // rdx
  char *v33; // rbx
  char *v34; // rbx
  char *v35; // rdx
  PSID RemainingSidArea; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v18 = a2 + a3;
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v20 = *(_QWORD *)(v19 + 1080);
  v21 = 0LL;
  if ( v20 )
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(v20 + 40);
  else
    *(_DWORD *)(a2 + 48) = 0;
  v22 = a5 - a6;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  SidArea = (void *)(a2 + 360 + a6);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v22,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    SidArea,
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(a2 + 360), *(_DWORD *)(a1 + 124), (PSID_AND_ATTRIBUTES_HASH)(a2 + 88));
  v24 = a2 + 360 + a5;
  *(_DWORD *)v24 = *(_DWORD *)(a1 + 128);
  v25 = v24 + 272;
  *(_QWORD *)(v24 + 8) = v24 + 272;
  *(_QWORD *)(a2 + 8) = v24;
  v26 = *(_DWORD *)(a1 + 128);
  if ( v26 )
  {
    RtlCopySidAndAttributesArray(
      v26,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      a7 - a8,
      (PSID_AND_ATTRIBUTES)(v24 + 272),
      (PSID)(v25 + a8),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v24 + 272), *(_DWORD *)(a1 + 128), (PSID_AND_ATTRIBUTES_HASH)v24);
  }
  v27 = v25 + a7;
  *(_DWORD *)v27 = *(_DWORD *)(a1 + 800);
  v28 = v27 + 272;
  *(_QWORD *)(v27 + 8) = v27 + 272;
  *(_QWORD *)(a2 + 64) = v27;
  v29 = *(_DWORD *)(a1 + 800);
  if ( v29 )
  {
    RtlCopySidAndAttributesArray(
      v29,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      a10 - a11,
      (PSID_AND_ATTRIBUTES)(v27 + 272),
      (PSID)(v28 + a11),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v27 + 272), *(_DWORD *)(a1 + 800), (PSID_AND_ATTRIBUTES_HASH)v27);
  }
  v30 = (char *)(v28 + a10);
  v31 = 0LL;
  if ( a9 )
  {
    v31 = v30;
    memmove(v30, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
  }
  v32 = a15;
  *(_QWORD *)(a2 + 56) = v31;
  if ( !a14 )
    v32 = *(unsigned __int8 **)(a1 + 1104);
  v33 = &v30[a9];
  if ( a12 )
  {
    v21 = v33;
    memmove(v33, v32, 4LL * v32[1] + 8);
  }
  v34 = &v33[a12];
  *(_QWORD *)(a2 + 72) = v21;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v34,
    (unsigned int)(v18 - (_DWORD)v34),
    &RemainingSidArea);
  v35 = &v34[a13];
  *(_QWORD *)(a2 + 80) = v34;
  *(_DWORD *)v35 = a4;
  *(_QWORD *)(a2 + 16) = v35;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v35 + 4));
}
