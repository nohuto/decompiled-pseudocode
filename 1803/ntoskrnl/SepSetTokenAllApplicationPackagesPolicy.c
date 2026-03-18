/*
 * XREFs of SepSetTokenAllApplicationPackagesPolicy @ 0x1402A0CE8
 * Callers:
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall SepSetTokenAllApplicationPackagesPolicy(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+70h] [rbp+10h] BYREF
  int v9; // [rsp+78h] [rbp+18h] BYREF

  v2 = a2;
  memset(DestinationString, 0, 0x28uLL);
  v8 = v2;
  RtlInitUnicodeString(DestinationString, L"WIN://NOALLAPPPKG");
  *(_QWORD *)&DestinationString[1].Length = 2LL;
  LODWORD(DestinationString[1].Buffer) = 1;
  *(_QWORD *)&DestinationString[2].Length = &v8;
  v6[0] = 0x100000001LL;
  v4 = *(_QWORD *)(a1 + 776);
  v6[1] = DestinationString;
  v9 = 4;
  return AuthzBasepSetSecurityAttributesToken(v4, &v9, (__int64)v6);
}
