/*
 * XREFs of SepCheckCapabilities @ 0x14053EE14
 * Callers:
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405091A8 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14005C810 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 */

__int64 __fastcall SepCheckCapabilities(PACCESS_TOKEN Token, unsigned int a2, __int64 a3, __int64 a4, char *a5)
{
  char v8; // r12
  PSID *v10; // rdi
  NTSTATUS v11; // esi
  NTSTATUS v12; // eax
  _DWORD *v13; // r14
  char i; // bl
  unsigned int v15; // ebp
  PVOID v16; // rax
  __int64 v17; // r12
  NTSTATUS v19; // eax
  PSID v20; // rbx
  PULONG v21; // rbx
  PULONG v22; // rax
  PVOID v23; // [rsp+20h] [rbp-58h] BYREF
  PVOID v24; // [rsp+28h] [rbp-50h] BYREF
  PVOID TokenInformation; // [rsp+30h] [rbp-48h] BYREF
  char v28; // [rsp+98h] [rbp+20h]
  unsigned int v29; // [rsp+A0h] [rbp+28h]

  TokenInformation = 0LL;
  v24 = 0LL;
  v8 = 1;
  LODWORD(v23) = 0;
  v28 = 1;
  *a5 = 0;
  v10 = 0LL;
  v11 = SeQueryInformationToken(Token, TokenIsAppContainer, &v23);
  if ( v11 >= 0 )
  {
    if ( (_DWORD)v23 )
    {
      v12 = SeQueryInformationToken(Token, TokenCapabilities, &TokenInformation);
      v13 = TokenInformation;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v29 = 0;
        for ( i = 1; v29 < a2; ++v29 )
        {
          i = 0;
          v15 = 0;
          LODWORD(v23) = *v13;
          if ( (_DWORD)v23 )
          {
            v16 = *(PVOID *)a3;
            for ( TokenInformation = *(PVOID *)a3; ; v16 = TokenInformation )
            {
              v17 = 4LL * v15;
              if ( RtlEqualSid(*(PSID *)&v13[v17 + 2], v16) && v13[v17 + 4] == *(_DWORD *)(a3 + 8) )
              {
                v8 = v28;
                i = 1;
                goto LABEL_12;
              }
              if ( ++v15 >= (unsigned int)v23 )
                break;
            }
            v8 = v28;
          }
          if ( *(_BYTE *)(*(_QWORD *)a3 + 1LL) != 9 || *RtlSubAuthoritySid(*(PSID *)a3, 0) != 3 )
            break;
          if ( !v10 )
          {
            v19 = SeQueryInformationToken(Token, TokenAppContainerSid, &v24);
            v10 = (PSID *)v24;
            v11 = v19;
            if ( v19 < 0 )
              goto LABEL_14;
          }
          v20 = *v10;
          if ( *RtlSubAuthorityCountSid(*v10) < 8u
            || (v21 = RtlSubAuthoritySid(v20, 1u),
                v22 = RtlSubAuthoritySid(*(PSID *)a3, 1u),
                RtlCompareMemory(v22, v21, 0x1CuLL) != 28) )
          {
            v8 = 0;
            v28 = 0;
          }
          i = v8;
          if ( !v8 )
            break;
LABEL_12:
          a3 += 16LL;
        }
        *a5 = i;
      }
LABEL_14:
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    else
    {
      *a5 = 1;
    }
  }
  return (unsigned int)v11;
}
