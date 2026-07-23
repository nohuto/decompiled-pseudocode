/*
 * XREFs of CMFCreateSecurityDescriptor @ 0x140760F4C
 * Callers:
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x140485620 (RtlValidSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlValidAcl @ 0x1404BC590 (RtlValidAcl.c)
 *     RtlMapGenericMask @ 0x1404C0550 (RtlMapGenericMask.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140549980 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14057BC40 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, GENERIC_MAPPING *a2)
{
  unsigned __int8 *v3; // r14
  unsigned __int8 *Src; // r12
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // r15
  int Acl; // ebx
  PVOID PoolWithTag; // rax
  unsigned __int8 *v9; // r13
  PVOID *v10; // rdi
  int v11; // ebx
  unsigned __int8 *v12; // rax
  PVOID v13; // rax
  PULONG v14; // rax
  int v15; // ecx
  unsigned __int8 *v16; // rax
  PULONG v17; // rax
  int v18; // ecx
  unsigned __int8 *v19; // rax
  PULONG v20; // rax
  int v21; // ecx
  ULONG v22; // ebx
  ACL *v23; // rax
  ACL *v24; // rsi
  int v25; // r13d
  int v26; // r9d
  int v27; // r13d
  int v28; // r9d
  int v29; // r9d
  PVOID v30; // rax
  _SID_IDENTIFIER_AUTHORITY v32; // [rsp+30h] [rbp-40h] BYREF
  void *v33; // [rsp+38h] [rbp-38h]
  void *v34; // [rsp+40h] [rbp-30h]
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-28h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v38; // [rsp+C8h] [rbp+58h] BYREF

  *(_WORD *)&v32.Value[4] = 1280;
  *(_DWORD *)v32.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  Src = 0LL;
  *(_DWORD *)v38.Value = 0;
  v5 = 0LL;
  *(_WORD *)&v38.Value[4] = 3840;
  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  *a1 = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (Acl & 0xC0000000) == 0xC0000000 )
  {
    v10 = a1;
    goto LABEL_57;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x636D6650u);
  v33 = PoolWithTag;
  v9 = (unsigned __int8 *)PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      *RtlSubAuthoritySid(v9, 0) = 0;
      v11 = 4 * v9[1];
      v12 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x636D6650u);
      Src = v12;
      if ( !v12 )
        goto LABEL_8;
      RtlInitializeSid(v12, &v32, 6u);
      *RtlSubAuthoritySid(Src, 0) = 80;
      *RtlSubAuthoritySid(Src, 1u) = 956008885;
      *RtlSubAuthoritySid(Src, 2u) = -876444647;
      *RtlSubAuthoritySid(Src, 3u) = 1831038044;
      *RtlSubAuthoritySid(Src, 4u) = 1853292631;
      *RtlSubAuthoritySid(Src, 5u) = -2023488832;
      *(_DWORD *)IdentifierAuthority.Value = v11 + 4 * Src[1];
      v13 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v34 = v13;
      v5 = (unsigned __int8 *)v13;
      if ( !v13 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v13, &v38, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v5, 0) = 2;
      v14 = RtlSubAuthoritySid(v5, 1u);
      v15 = *(_DWORD *)IdentifierAuthority.Value;
      *v14 = 1;
      *(_DWORD *)IdentifierAuthority.Value = v15 + 4 * v5[1];
      v16 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v6 = v16;
      if ( !v16 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v16, &v38, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v6, 0) = 2;
      v17 = RtlSubAuthoritySid(v6, 1u);
      v18 = *(_DWORD *)IdentifierAuthority.Value;
      *v17 = 2;
      *(_DWORD *)IdentifierAuthority.Value = v18 + 4 * v6[1];
      v19 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v3 = v19;
      if ( v19 )
      {
        Acl = RtlInitializeSid(v19, &v32, 2u);
        if ( (Acl & 0xC0000000) != 0xC0000000 )
        {
          *RtlSubAuthoritySid(v3, 0) = 32;
          v20 = RtlSubAuthoritySid(v3, 1u);
          v21 = *(_DWORD *)IdentifierAuthority.Value + 108;
          *v20 = 544;
          v22 = v21 + 4 * v3[1];
          v23 = (ACL *)ExAllocatePoolWithTag(PagedPool, v22, 0x636D6650u);
          v24 = v23;
          if ( !v23 )
          {
            v5 = (unsigned __int8 *)v34;
            Acl = -1073741801;
            goto LABEL_9;
          }
          Acl = RtlCreateAcl(v23, v22, 2u);
          if ( (Acl & 0xC0000000) != 0xC0000000 )
          {
            v25 = 0x10000000;
            *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
            v26 = 0x10000000;
            if ( a2 )
            {
              RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
              v26 = *(_DWORD *)IdentifierAuthority.Value;
            }
            Acl = RtlpAddKnownAce(v24, 2u, 3, v26, Src, 0);
            if ( (Acl & 0xC0000000) != 0xC0000000 )
            {
              *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
              if ( a2 )
              {
                RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                v25 = *(_DWORD *)IdentifierAuthority.Value;
              }
              Acl = RtlpAddKnownAce(v24, 2u, 3, v25, v3, 0);
              if ( (Acl & 0xC0000000) != 0xC0000000 )
              {
                v27 = 0x80000000;
                *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                v28 = 0x80000000;
                if ( a2 )
                {
                  RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                  v28 = *(_DWORD *)IdentifierAuthority.Value;
                }
                Acl = RtlpAddKnownAce(v24, 2u, 3, v28, (unsigned __int8 *)v33, 0);
                if ( (Acl & 0xC0000000) != 0xC0000000 )
                {
                  *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                  v29 = 0x80000000;
                  if ( a2 )
                  {
                    RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                    v29 = *(_DWORD *)IdentifierAuthority.Value;
                  }
                  Acl = RtlpAddKnownAce(v24, 2u, 3, v29, (unsigned __int8 *)v34, 0);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                    if ( a2 )
                    {
                      RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                      v27 = *(_DWORD *)IdentifierAuthority.Value;
                    }
                    Acl = RtlpAddKnownAce(v24, 2u, 3, v27, v6, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      if ( RtlValidAcl(v24) )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v24, 0);
                        if ( (Acl & 0xC0000000) != 0xC0000000 )
                        {
                          Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Src, 0);
                          if ( (Acl & 0xC0000000) != 0xC0000000 )
                          {
                            if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                            {
                              *(_DWORD *)IdentifierAuthority.Value = 0;
                              Acl = RtlAbsoluteToSelfRelativeSD(
                                      SecurityDescriptor,
                                      0LL,
                                      (PULONG)IdentifierAuthority.Value);
                              if ( *(_DWORD *)IdentifierAuthority.Value )
                              {
                                v30 = ExAllocatePoolWithTag(
                                        PagedPool,
                                        *(unsigned int *)IdentifierAuthority.Value,
                                        0x636D6650u);
                                v10 = a1;
                                *a1 = v30;
                                if ( v30 )
                                  Acl = RtlAbsoluteToSelfRelativeSD(
                                          SecurityDescriptor,
                                          v30,
                                          (PULONG)IdentifierAuthority.Value);
                                else
                                  Acl = -1073741801;
                                v9 = (unsigned __int8 *)v33;
                                goto LABEL_46;
                              }
                            }
                            else
                            {
                              Acl = -1073741703;
                            }
                          }
                        }
                      }
                      else
                      {
                        Acl = -1073741705;
                      }
                    }
                  }
                }
              }
            }
            v9 = (unsigned __int8 *)v33;
          }
          v10 = a1;
LABEL_46:
          ExFreePoolWithTag(v24, 0);
          v5 = (unsigned __int8 *)v34;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_8:
        Acl = -1073741801;
      }
    }
LABEL_9:
    v10 = a1;
LABEL_10:
    ExFreePoolWithTag(v9, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
LABEL_57:
    if ( Acl >= 0 )
      return (unsigned int)Acl;
    goto LABEL_58;
  }
  v10 = a1;
  Acl = -1073741801;
LABEL_58:
  if ( *v10 )
  {
    ExFreePoolWithTag(*v10, 0);
    *v10 = 0LL;
  }
  return (unsigned int)Acl;
}
