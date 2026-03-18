/*
 * XREFs of ViInitializeLocalSystemDescriptor @ 0x1408142A0
 * Callers:
 *     VfUtilIsLocalSystem @ 0x140813FA8 (VfUtilIsLocalSystem.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140541520 (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 */

PSECURITY_DESCRIPTOR ViInitializeLocalSystemDescriptor()
{
  PVOID PoolWithTag; // rax
  void *v1; // rdi
  ULONG v2; // ebx
  ACL *v3; // rax
  ACL *v4; // rsi
  NTSTATUS Acl; // ebx

  if ( !ViLocalSystemDescriptor )
  {
    if ( SeLocalSystemSid )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x55667256u);
      v1 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( RtlCreateSecurityDescriptor(PoolWithTag, 1u) < 0 )
          goto LABEL_13;
        v2 = RtlLengthSid(SeLocalSystemSid) + 20;
        v3 = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x55667256u);
        v4 = v3;
        if ( !v3 )
          goto LABEL_13;
        Acl = RtlCreateAcl(v3, v2, 2u);
        if ( Acl < 0 )
          goto LABEL_17;
        Acl = RtlAddAccessAllowedAce(v4, 2u, 1u, SeLocalSystemSid);
        if ( Acl < 0 )
          goto LABEL_17;
        Acl = RtlSetDaclSecurityDescriptor(v1, 1u, v4, 0);
        if ( Acl < 0 )
          goto LABEL_17;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ViLocalSystemDescriptor, (signed __int64)v1, 0LL) )
          Acl = -1073741595;
        if ( Acl < 0 )
        {
LABEL_17:
          ExFreePoolWithTag(v4, 0x55667256u);
          if ( Acl < 0 )
LABEL_13:
            ExFreePoolWithTag(v1, 0x55667256u);
        }
      }
    }
  }
  return ViLocalSystemDescriptor;
}
