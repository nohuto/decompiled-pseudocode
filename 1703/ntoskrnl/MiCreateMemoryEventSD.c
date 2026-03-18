/*
 * XREFs of MiCreateMemoryEventSD @ 0x1405A316C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 */

__int64 __fastcall MiCreateMemoryEventSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int Acl; // edi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebp
  ACL *PoolWithTag; // rax
  ACL *v9; // rbx

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(SeAllRestrictedAppPackagesSid);
    v4 = RtlLengthSid(SeAllAppPackagesSid) + v3;
    v5 = RtlLengthSid(SeWorldSid) + v4;
    v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
    v7 = v6 + RtlLengthSid(SeLocalSystemSid) + 68;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x6C636144u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v7, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v9, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v9, 2u, 0, 2031619, (unsigned __int8 *)SeAliasAdminsSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v9, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v9, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v9, 2u, 0, 1179649, (unsigned __int8 *)SeAllRestrictedAppPackagesSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
                  if ( Acl >= 0 )
                  {
                    v9 = 0LL;
                    Acl = 0;
                  }
                }
              }
            }
          }
        }
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
  }
  return (unsigned int)Acl;
}
