/*
 * XREFs of sub_1800470C4 @ 0x1800470C4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_180046F10 @ 0x180046F10 (sub_180046F10.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006C5C0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 */

__int64 __fastcall sub_1800470C4(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r8
  __int64 v7; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = a2;
  LOBYTE(a2) = a4;
  v7 = sub_180047104(a3, a2, v6);
  *a1 = v7;
  return v7 == 0 ? 0xC0000017 : 0;
}
