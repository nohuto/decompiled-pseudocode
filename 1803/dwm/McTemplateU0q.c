/*
 * XREFs of McTemplateU0q @ 0x140004528
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002050 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x14000447C (McGenEventWriteUM.c)
 */

__int64 McTemplateU0q()
{
  int v1; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v2[16]; // [rsp+28h] [rbp-30h] BYREF
  int *v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v1 = 0;
  v5 = 0;
  v3 = &v1;
  v4 = 4;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Dwm_Provider_Context, &StartDWMTransport, 2LL, (__int64)v2);
}
