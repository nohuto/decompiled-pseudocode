/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x14003DE8C
 * Callers:
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140087F40 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x1400880C0 (RtlGetAce.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepExpandDynamic @ 0x14046A140 (SepExpandDynamic.c)
 *     SepFreeDefaultDacl @ 0x14046A228 (SepFreeDefaultDacl.c)
 *     SepAppendDefaultDacl @ 0x14046A274 (SepAppendDefaultDacl.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     RtlQueryInformationAcl @ 0x1404F4D10 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1404F5B60 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, unsigned __int8 *a2)
{
  ACL *v2; // rbp
  ACL *v3; // rsi
  int AclSize; // ebx
  NTSTATUS InformationAcl; // edi
  ULONG v8; // r15d
  ACL *PoolWithTag; // rax
  ULONG v10; // ebx
  ULONG Information; // [rsp+30h] [rbp-58h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v14[4]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+44h] [rbp-44h]

  v2 = *(ACL **)(a1 + 184);
  v3 = 0LL;
  Ace = 0LL;
  if ( !v2 )
  {
    InformationAcl = 0;
LABEL_12:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (unsigned int)InformationAcl;
  }
  if ( RtlFindAceBySid(v2, a2, 0LL) )
    return 0;
  AclSize = v2->AclSize;
  InformationAcl = RtlQueryInformationAcl(v2, &Information, 4u, AclRevisionInformation);
  if ( InformationAcl >= 0 )
  {
    InformationAcl = RtlQueryInformationAcl(v2, v14, 0xCu, AclSizeInformation);
    if ( InformationAcl >= 0 )
    {
      v8 = (AclSize + 4 * a2[1] + 19) & 0xFFFFFFFC;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x63416553u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      v10 = Information;
      InformationAcl = RtlCreateAcl(PoolWithTag, v8, Information);
      if ( InformationAcl >= 0 )
      {
        InformationAcl = RtlGetAce(v2, 0, &Ace);
        if ( InformationAcl >= 0 )
        {
          InformationAcl = RtlAddAce(v3, v10, 0, Ace, v15 - 8);
          if ( InformationAcl >= 0 )
          {
            InformationAcl = RtlAddAccessAllowedAce(v3, v10, 0x10000000u, a2);
            if ( InformationAcl >= 0 )
            {
              InformationAcl = SepExpandDynamic(
                                 a1,
                                 (v8 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
              if ( InformationAcl >= 0 )
              {
                SepFreeDefaultDacl(a1);
                SepAppendDefaultDacl(a1, v3);
              }
            }
          }
        }
      }
      goto LABEL_12;
    }
  }
  return (unsigned int)InformationAcl;
}
