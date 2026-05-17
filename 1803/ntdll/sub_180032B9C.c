/*
 * XREFs of sub_180032B9C @ 0x180032B9C
 * Callers:
 *     sub_1800316A8 @ 0x1800316A8 (sub_1800316A8.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 */

__int64 __fastcall sub_180032B9C(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r8
  __int64 v7; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = a2;
  LOBYTE(a2) = a4;
  v7 = sub_180032BDC(a3, a2, v6);
  *a1 = v7;
  return v7 == 0 ? 0xC0000017 : 0;
}
