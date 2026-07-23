/*
 * XREFs of _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x140485620 (RtlValidSecurityDescriptor.c)
 *     RtlValidSid @ 0x140486030 (RtlValidSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C0030 (RtlLengthSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140549920 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140549980 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14057BC40 (RtlAbsoluteToSelfRelativeSD.c)
 */

void *PnpGetPropertiesSecurityDescriptor()
{
  void *v0; // rsi
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  ULONG v4; // eax
  ULONG v5; // r14d
  PVOID v6; // rax
  void *v7; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-50h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+38h] [rbp-48h] BYREF
  __int16 v11; // [rsp+3Ah] [rbp-46h]
  unsigned __int8 Sid[16]; // [rsp+60h] [rbp-20h] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      v1 = RtlLengthSid(Sid) + 16;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x52504E50u);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( RtlCreateAcl(PoolWithTag, v1, 2u) >= 0
          && (int)RtlpAddKnownAce(v3, 2u, 2, 983103, Sid, 0) >= 0
          && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0) >= 0
          && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0
          && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0 )
        {
          v11 |= 0x1400u;
          if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            v4 = RtlLengthSecurityDescriptor(SecurityDescriptor);
            *(_DWORD *)IdentifierAuthority.Value = v4;
            if ( v4 >= 0x28 )
            {
              v5 = v4;
              v6 = ExAllocatePoolWithTag(PagedPool, v4, 0x52504E50u);
              v7 = v6;
              if ( v6 )
              {
                memset(v6, 0, v5);
                if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v7, (PULONG)IdentifierAuthority.Value) >= 0 )
                {
                  v0 = v7;
                  v7 = 0LL;
                }
                if ( v7 )
                  ExFreePoolWithTag(v7, 0);
              }
            }
          }
        }
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
  return v0;
}
