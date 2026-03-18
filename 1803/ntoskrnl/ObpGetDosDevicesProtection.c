/*
 * XREFs of ObpGetDosDevicesProtection @ 0x14061D22C
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14061CFBC (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     RtlGetAce @ 0x1400A0E40 (RtlGetAce.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // esi
  ULONG v5; // esi
  ACL *PoolWithTag; // rax
  ACL *v7; // rbx
  ULONG v8; // edx
  ULONG v10; // ebx
  ULONG v11; // esi
  ACL *v12; // rax
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
      v8 = 5;
LABEL_4:
      RtlGetAce(v7, v8, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
      return 0LL;
    }
  }
  else
  {
    v10 = RtlLengthSid(SeWorldSid);
    v11 = RtlLengthSid(SeLocalSystemSid) + 44 + 2 * v10;
    v12 = (ACL *)ExAllocatePoolWithTag(PagedPool, v11, 0x6C636144u);
    v7 = v12;
    if ( v12 )
    {
      RtlCreateAcl(v12, v11, 2u);
      RtlpAddKnownAce(v7, 2u, 0, -536870912, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SeWorldSid, 0);
      v8 = 2;
      goto LABEL_4;
    }
  }
  return 3221225495LL;
}
