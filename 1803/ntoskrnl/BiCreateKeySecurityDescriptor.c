/*
 * XREFs of BiCreateKeySecurityDescriptor @ 0x140608EA0
 * Callers:
 *     BiCreateKey @ 0x140608544 (BiCreateKey.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140541F10 (RtlSetOwnerSecurityDescriptor.c)
 */

ACL *__fastcall BiCreateKeySecurityDescriptor(int a1)
{
  PSID SeLocalSystemSid; // r14
  PSID Src; // rsi
  ULONG v4; // ebx
  ULONG v5; // ebp
  ULONG v6; // r15d
  ACL *PoolWithTag; // rax
  ACL *v8; // rdi
  ACL *v9; // rbx
  ULONG v10; // ebx
  char *v11; // rbx
  ULONG v12; // eax

  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  Src = SeExports->SeAliasAdminsSid;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v4 + RtlLengthSid(Src) + 24;
  v6 = v5 + RtlLengthSid(Src) + 40;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = PoolWithTag + 5;
    if ( RtlCreateAcl(PoolWithTag + 5, v5, 2u) >= 0
      && (int)RtlpAddKnownAce(v9, 2u, 0, a1, (unsigned __int8 *)Src, 0) >= 0
      && (int)RtlpAddKnownAce(v9, 2u, 0, 983103, (unsigned __int8 *)SeLocalSystemSid, 0) >= 0
      && RtlCreateSecurityDescriptor(v8, 1u) >= 0
      && RtlSetDaclSecurityDescriptor(v8, 1u, v9, 0) >= 0 )
    {
      v10 = RtlLengthSecurityDescriptor(v8);
      if ( RtlLengthSid(Src) + v10 >= v6 )
      {
        v11 = (char *)v8 + RtlLengthSecurityDescriptor(v8);
        v12 = RtlLengthSid(Src);
        memmove(v11, Src, v12);
        if ( RtlSetOwnerSecurityDescriptor(v8, v11, 0) >= 0 )
          return v8;
      }
    }
    ExFreePoolWithTag(v8, 0x4B444342u);
  }
  return 0LL;
}
