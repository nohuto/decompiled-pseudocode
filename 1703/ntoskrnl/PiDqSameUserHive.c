/*
 * XREFs of PiDqSameUserHive @ 0x140698B50
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
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
