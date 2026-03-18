/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x140067040
 * Callers:
 *     PopCreateNotificationName @ 0x1404596A4 (PopCreateNotificationName.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x14081B100 (SepVariableInitialization.c)
 *     DbgkpCreateNotificationEvent @ 0x14082109C (DbgkpCreateNotificationEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SymCryptSha256 @ 0x1401778AC (SymCryptSha256.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1404A47F0 (RtlInitializeSid.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

NTSTATUS __fastcall RtlDeriveCapabilitySidsFromName(PCUNICODE_STRING SourceString, char *Sid, PSID a3)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // edi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]

  if ( !SourceString || !Sid || !a3 )
    __fastfail(5u);
  memset(a3, 0, 0x30uLL);
  memset(Sid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, SourceString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v13);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v13;
    *((_DWORD *)Sid + 2) = 32;
    v8 = v14;
    *(_OWORD *)(Sid + 12) = v7;
    *(_OWORD *)(Sid + 28) = v8;
    v9 = 0;
    while ( !RtlEqualUnicodeString(
               &DestinationString,
               (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * v9],
               0) )
    {
      if ( ++v9 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)a3 + 2) = 3;
    *((_DWORD *)a3 + 3) = v9 + 1;
LABEL_8:
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v10 = v13;
      *((_DWORD *)a3 + 2) = 3;
      v11 = v14;
      *((_DWORD *)a3 + 3) = 1024;
      *((_OWORD *)a3 + 1) = v10;
      *((_OWORD *)a3 + 2) = v11;
    }
    return 0;
  }
  return result;
}
