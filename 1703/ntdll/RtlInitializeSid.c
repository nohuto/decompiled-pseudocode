/*
 * XREFs of RtlInitializeSid @ 0x180047610
 * Callers:
 *     RtlGetAppContainerParent @ 0x180002940 (RtlGetAppContainerParent.c)
 *     sub_180003F2C @ 0x180003F2C (sub_180003F2C.c)
 *     RtlInitializeSidEx @ 0x1800475B0 (RtlInitializeSidEx.c)
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800478B0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_180047C5C @ 0x180047C5C (sub_180047C5C.c)
 *     sub_18004A1C4 @ 0x18004A1C4 (sub_18004A1C4.c)
 *     RtlCreateServiceSid @ 0x18004D6F0 (RtlCreateServiceSid.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 *     RtlCreateVirtualAccountSid @ 0x180050760 (RtlCreateVirtualAccountSid.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 *     sub_1800E5B10 @ 0x1800E5B10 (sub_1800E5B10.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 *     sub_1800E6ED4 @ 0x1800E6ED4 (sub_1800E6ED4.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
