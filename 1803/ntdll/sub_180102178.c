/*
 * XREFs of sub_180102178 @ 0x180102178
 * Callers:
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     sub_180104618 @ 0x180104618 (sub_180104618.c)
 *     sub_1801046E8 @ 0x1801046E8 (sub_1801046E8.c)
 */

NTSTATUS __fastcall sub_180102178(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v5; // [rsp+30h] [rbp-9h] BYREF
  _BYTE SystemInformation[40]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+68h] [rbp+2Fh]

  v5 = 0xF000000004000uLL;
  sub_180104618(a1, &v5);
  v5 = 0uLL;
  xmmword_18015A790 = 0uLL;
  result = ZwQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return sub_1801046E8(v3, v2, v4, v7 + 1);
  return result;
}
