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

bool __fastcall sub_18004A1C4(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-68h] BYREF
  __int16 v13; // [rsp+24h] [rbp-64h]
  _DWORD v14[12]; // [rsp+28h] [rbp-60h] BYREF

  v6 = *a2;
  if ( byte_180120FA0[v6] != byte_180120FA0[*a1] || byte_180121000[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  if ( !(unsigned __int8)RtlEqualSid(a2 + 8, a1 + 8) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    v12 = 0;
    v13 = 768;
    memset(v14, 0, sizeof(v14));
    if ( (int)RtlInitializeSid((__int64)v14, (__int64)&v12, 1u) < 0 )
      return 0;
    v14[2] = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, v14) )
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
    return (unsigned __int8)RtlEqualSid(a2 + 8, v11) != 0;
  }
  return 1;
}
