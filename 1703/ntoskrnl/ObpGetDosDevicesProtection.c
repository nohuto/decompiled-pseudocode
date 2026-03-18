/*
 * XREFs of ObpGetDosDevicesProtection @ 0x1405A2F64
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x1405A2CF4 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlGetAce @ 0x1400880C0 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *PoolWithTag; // rax
  ACL *v7; // rbp
  ACL *v8; // r8
  ULONG v10; // ebx
  ULONG v11; // ebp
  ACL *v12; // rax
  ACL *v13; // rbx
  PVOID Ace; // [rsp+48h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (ObpProtectionMode & 1) != 0 )
  {
    v2 = RtlLengthSid(SeLocalSystemSid);
    v3 = RtlLengthSid(SeWorldSid) + v2;
    v4 = RtlLengthSid(SeCreatorOwnerSid) + 80 + 2 * v3;
    v5 = RtlLengthSid(SeAliasAdminsSid) + v4;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x6C636144u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCreateAcl(PoolWithTag, v5, 2u);
      RtlpAddKnownAce(v7, 2u, 0, -1610612736, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlpAddKnownAce(v7, 2u, 0, 0x20000000, (unsigned __int8 *)SeWorldSid, 0);
      RtlGetAce(v7, 2u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeAliasAdminsSid, 0);
      RtlGetAce(v7, 3u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlGetAce(v7, 4u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeCreatorOwnerSid, 0);
      RtlGetAce(v7, 5u, &Ace);
      v8 = v7;
LABEL_4:
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0);
      return 0LL;
    }
  }
  else
  {
    v10 = RtlLengthSid(SeWorldSid);
    v11 = RtlLengthSid(SeLocalSystemSid) + 44 + 2 * v10;
    v12 = (ACL *)ExAllocatePoolWithTag(PagedPool, v11, 0x6C636144u);
    v13 = v12;
    if ( v12 )
    {
      RtlCreateAcl(v12, v11, 2u);
      RtlpAddKnownAce(v13, 2u, 0, -536870912, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce(v13, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlpAddKnownAce(v13, 2u, 0, 0x10000000, (unsigned __int8 *)SeWorldSid, 0);
      RtlGetAce(v13, 2u, &Ace);
      v8 = v13;
      goto LABEL_4;
    }
  }
  return 3221225495LL;
}
