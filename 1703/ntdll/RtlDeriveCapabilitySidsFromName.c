/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1800478B0
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x18004A6F0 (RtlUpcaseUnicodeString.c)
 *     sub_18004D914 @ 0x18004D914 (sub_18004D914.c)
 *     sub_18004DA54 @ 0x18004DA54 (sub_18004DA54.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  unsigned int v3; // ebx
  NTSTATUS result; // eax
  __int64 Length; // r15
  PWCH Buffer; // r14
  __int128 v10; // xmm0
  unsigned __int16 *v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  PWCH v15; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v17[7]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+4Ch] [rbp-4Dh]
  int v19; // [rsp+54h] [rbp-45h]
  __int128 v20; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v21; // [rsp+B0h] [rbp+17h]

  v3 = 0;
  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  memset(CapabilitySid, 0, 0x30uLL);
  memset(CapabilityGroupSid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result < 0 )
    return result;
  Length = DestinationString.Length;
  Buffer = DestinationString.Buffer;
  v17[0] = 1779033703;
  v17[1] = -1150833019;
  v17[2] = 1013904242;
  v17[3] = -1521486534;
  v17[4] = 1359893119;
  v17[5] = -1694144372;
  v17[6] = 528734635;
  v18 = 1541459225LL;
  v19 = 0;
  sub_18004DA54(v17, DestinationString.Buffer, DestinationString.Length);
  sub_18004D914(v17, &v20);
  RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 9u);
  v10 = v20;
  *((_DWORD *)CapabilityGroupSid + 2) = 32;
  v11 = (unsigned __int16 *)&unk_180110000;
  v12 = v21;
  *(_OWORD *)((char *)CapabilityGroupSid + 12) = v10;
  *(_OWORD *)((char *)CapabilityGroupSid + 28) = v12;
  while ( (_DWORD)Length != *v11 )
  {
LABEL_7:
    ++v3;
    v11 += 8;
    if ( v3 >= 0xC )
      goto LABEL_8;
  }
  v15 = Buffer;
  if ( Buffer < (PWCH)((char *)Buffer + Length) )
  {
    while ( *v15 == *(PWCH)((char *)v15 + *((_QWORD *)v11 + 1) - (_QWORD)Buffer) )
    {
      if ( ++v15 >= (PWCH)((char *)Buffer + Length) )
        goto LABEL_15;
    }
    goto LABEL_7;
  }
LABEL_15:
  RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u);
  *((_DWORD *)CapabilitySid + 2) = 3;
  *((_DWORD *)CapabilitySid + 3) = v3 + 1;
LABEL_8:
  RtlFreeUnicodeString(&DestinationString);
  if ( v3 == 12 )
  {
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 0xAu);
    v13 = v20;
    *((_DWORD *)CapabilitySid + 2) = 3;
    v14 = v21;
    *((_DWORD *)CapabilitySid + 3) = 1024;
    *((_OWORD *)CapabilitySid + 1) = v13;
    *((_OWORD *)CapabilitySid + 2) = v14;
  }
  return 0;
}
