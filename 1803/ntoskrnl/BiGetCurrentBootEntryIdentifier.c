/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x14060A27C
 * Callers:
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 */

NTSTATUS __fastcall BiGetCurrentBootEntryIdentifier(_OWORD *a1)
{
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF

  result = ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
    *a1 = SystemInformation;
  return result;
}
