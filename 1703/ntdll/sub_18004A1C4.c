/*
 * XREFs of sub_18004A1C4 @ 0x18004A1C4
 * Callers:
 *     sub_18004A198 @ 0x18004A198 (sub_18004A198.c)
 * Callees:
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlEqualPrefixSid @ 0x180049F80 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x18004A290 (RtlEqualSid.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

bool __fastcall sub_18004A1C4(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  int v10; // ecx
  void *v11; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-68h] BYREF
  _DWORD Sid[12]; // [rsp+28h] [rbp-60h] BYREF

  v6 = *a2;
  if ( byte_180120FA0[v6] != byte_180120FA0[*a1] || byte_180121000[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
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
