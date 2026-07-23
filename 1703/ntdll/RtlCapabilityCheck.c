/*
 * XREFs of RtlCapabilityCheck @ 0x180047640
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800478B0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlIsMultiSessionSku @ 0x18006EB40 (RtlIsMultiSessionSku.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  HANDLE v4; // rcx
  int v7; // ebx
  ULONG v9; // r8d
  BOOLEAN IsMember; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN HasCapabilitya[3]; // [rsp+31h] [rbp-CFh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v19; // [rsp+A8h] [rbp-58h]
  int v20; // [rsp+ACh] [rbp-54h]
  _BYTE CapabilityGroupSid[48]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+E8h] [rbp-18h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  HasCapabilitya[0] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0LL;
  KeyHandle = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  IsMember = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( CapabilityName && HasCapability )
  {
    *HasCapability = 0;
    v7 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
    if ( v7 < 0 )
      goto LABEL_13;
    if ( RtlIsMultiSessionSku()
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          ObjectAttributes.Length = 48,
          ObjectAttributes.ObjectName = &DestinationString,
          ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.Attributes = 64,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
      && ZwQueryValueKey(
           KeyHandle,
           CapabilityName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x10u,
           &ResultLength) >= 0 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v9 = 0;
      v19 = 18;
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &IsMember);
      if ( v7 < 0 )
        goto LABEL_13;
      if ( IsMember )
        goto LABEL_11;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v19 = 18;
      v7 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &IsMember);
      if ( v7 < 0 )
        goto LABEL_13;
      if ( IsMember )
        goto LABEL_11;
      v19 = 4;
      v9 = 2;
    }
    v7 = RtlCheckTokenMembershipEx(TokenHandle, Sid, v9, &IsMember);
    if ( v7 >= 0 )
    {
      if ( IsMember
        || (RtlInitializeSid(Sid, &IdentifierAuthority, 2u),
            v19 = 32,
            v20 = 544,
            v7 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &IsMember),
            v7 >= 0)
        && IsMember )
      {
LABEL_11:
        v7 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, HasCapabilitya);
        if ( v7 >= 0 )
          *HasCapability = HasCapabilitya[0];
      }
    }
LABEL_13:
    v4 = KeyHandle;
    goto LABEL_14;
  }
  v7 = -1073741811;
LABEL_14:
  if ( v4 )
    ZwClose(v4);
  return v7;
}
