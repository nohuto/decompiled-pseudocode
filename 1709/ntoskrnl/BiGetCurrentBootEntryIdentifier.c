/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x1405B1A40
 * Callers:
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
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
