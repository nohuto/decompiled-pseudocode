/*
 * XREFs of InSMode @ 0x140100C70
 * Callers:
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 */

char InSMode()
{
  char result; // al
  _QWORD SystemInformation[4]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( g_sModeChecked )
    return g_inSMode;
  result = ZwQuerySystemInformation(SystemCodeIntegrityPolicyInformation, SystemInformation, 0x20u, 0LL) >= 0
        && (SystemInformation[0] & 0xA0000000) != 0;
  g_inSMode = result;
  g_sModeChecked = 1;
  return result;
}
