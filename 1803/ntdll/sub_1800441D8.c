/*
 * XREFs of sub_1800441D8 @ 0x1800441D8
 * Callers:
 *     sub_1800441A8 @ 0x1800441A8 (sub_1800441A8.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180037E30 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x1800442A0 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

bool __fastcall sub_1800441D8(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  int v10; // ecx
  void *v11; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-68h] BYREF
  _DWORD Sid[12]; // [rsp+28h] [rbp-60h] BYREF

  v6 = *a2;
  if ( byte_180120D70[v6] != byte_180120D70[*a1] || byte_180120DD0[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  if ( !RtlEqualSid(a2 + 8, a1 + 8) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    memset(Sid, 0, sizeof(Sid));
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    Sid[2] = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, Sid) )
      return 0;
    v10 = *((_DWORD *)a1 + 4);
    if ( v10 )
    {
      if ( v10 != 1 || !a4 )
        return 0;
      v11 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v11 = a3;
    }
    return RtlEqualSid(a2 + 8, v11) != 0;
  }
  return 1;
}
