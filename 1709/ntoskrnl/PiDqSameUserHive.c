/*
 * XREFs of PiDqSameUserHive @ 0x1406C4974
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 */

__int64 __fastcall PiDqSameUserHive(__int64 *a1, __int64 *a2, BOOLEAN *a3)
{
  _BYTE Sid2[80]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE Sid1[80]; // [rsp+70h] [rbp-68h] BYREF

  if ( !*a1 )
    a1 += 2;
  SeQueryUserSidToken(*a1, Sid1, 0x44u, 0LL);
  if ( !*a2 )
    a2 += 2;
  SeQueryUserSidToken(*a2, Sid2, 0x44u, 0LL);
  *a3 = RtlEqualSid(Sid1, Sid2);
  return 0LL;
}
