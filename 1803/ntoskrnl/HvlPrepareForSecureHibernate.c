/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x14022C094
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v5[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-80h]

  v2 = (_OWORD *)HvlpAcquireHypercallPage(v4, 1, 0LL, 88LL);
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  v6 = (unsigned __int64)v4[3].QuadPart >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(2u, 239LL, 0, (__int64)v5);
  HvlpReleaseHypercallPage((__int64)v4);
  return (unsigned int)a1;
}
