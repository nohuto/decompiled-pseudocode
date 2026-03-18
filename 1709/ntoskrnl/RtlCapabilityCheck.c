/*
 * XREFs of RtlCapabilityCheck @ 0x1407215D0
 * Callers:
 *     PopCapabilityCheck @ 0x14023D29C (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140721870 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400FA7B0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembership @ 0x1400FA8F0 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x1402516C0 (RtlCheckTokenCapability.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *SourceString, _BYTE *a3)
{
  HANDLE v4; // rcx
  int v7; // ebx
  PULONG v8; // rsi
  int v9; // eax
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-CFh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[16]; // [rsp+A0h] [rbp-60h] BYREF
  char Owner[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v21[48]; // [rsp+E0h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v12[0] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0LL;
  KeyHandle = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v11 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( SourceString && a3 )
  {
    *a3 = 0;
    v7 = RtlDeriveCapabilitySidsFromName(SourceString, Owner, v21);
    if ( v7 < 0 )
      goto LABEL_19;
    if ( RtlIsMultiSessionSku()
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          ObjectAttributes.Length = 48,
          ObjectAttributes.ObjectName = &DestinationString,
          ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.Attributes = 576,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
      && ZwQueryValueKey(KeyHandle, SourceString, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v8 = RtlSubAuthoritySid(Sid, 0);
      *v8 = 18;
      v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Owner, 2, &v11);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( v11 )
        goto LABEL_17;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v8 = RtlSubAuthoritySid(Sid, 0);
      *v8 = 18;
      v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( v11 )
        goto LABEL_17;
      *v8 = 4;
      v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v11);
    }
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( v11
        || (RtlInitializeSid(Sid, &IdentifierAuthority, 2u),
            *v8 = 32,
            *RtlSubAuthoritySid(Sid, 1u) = 544,
            v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid),
            v7 >= 0)
        && v11 )
      {
LABEL_17:
        v7 = RtlCheckTokenCapability(ExistingTokenHandle, v21, v12);
        if ( v7 >= 0 )
          *a3 = v12[0];
      }
    }
LABEL_19:
    v4 = KeyHandle;
    goto LABEL_21;
  }
  v7 = -1073741811;
LABEL_21:
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v7;
}
