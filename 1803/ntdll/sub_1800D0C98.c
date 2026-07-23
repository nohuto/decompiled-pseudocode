/*
 * XREFs of sub_1800D0C98 @ 0x1800D0C98
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_1800D0C98()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]
  unsigned int v3; // [rsp+38h] [rbp-40h]

  stru_18015BF98.Ptr = 0LL;
  result = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    qword_18015BFA0 = v2;
    qword_18015BF90 = v3;
    return 0;
  }
  return result;
}
