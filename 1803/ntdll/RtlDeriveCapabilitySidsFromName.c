/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1800380F0
 * Callers:
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x180040B10 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     sub_180044814 @ 0x180044814 (sub_180044814.c)
 *     sub_180044954 @ 0x180044954 (sub_180044954.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v14[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v15; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v16; // [rsp+B0h] [rbp+27h]

  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  memset(CapabilitySid, 0, 0x30uLL);
  memset(CapabilityGroupSid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    v14[8] = 0;
    v14[9] = 0;
    v14[0] = 1779033703;
    v14[1] = -1150833019;
    v14[2] = 1013904242;
    v14[3] = -1521486534;
    v14[4] = 1359893119;
    v14[5] = -1694144372;
    v14[6] = 528734635;
    v14[7] = 1541459225;
    sub_180044954(v14, DestinationString.Buffer, DestinationString.Length);
    sub_180044814(v14, &v15);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&stru_180114790, 9u);
    v7 = v15;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    v8 = v16;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v8;
    v9 = 0;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PUNICODE_STRING)&unk_180110260 + v9, 0) )
        break;
      ++v9;
      if ( v10 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v10;
LABEL_8:
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 0xAu);
      v11 = v15;
      *((_DWORD *)CapabilitySid + 2) = 3;
      v12 = v16;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v11;
      *((_OWORD *)CapabilitySid + 2) = v12;
    }
    return 0;
  }
  return result;
}
