/*
 * XREFs of sub_180095AC4 @ 0x180095AC4
 * Callers:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_180095AC4()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]
  unsigned int v3; // [rsp+38h] [rbp-40h]

  stru_18015AF70.Ptr = 0LL;
  result = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    qword_18015AF78 = v2;
    qword_18015AF68 = v3;
    return 0;
  }
  return result;
}
