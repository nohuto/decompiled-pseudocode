/*
 * XREFs of McTemplateU0 @ 0x1400044EC
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F50 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002050 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x14000447C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0(__int64 a1, __int128 *a2)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  return McGenEventWriteUM(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, 1LL, (__int64)v3);
}
