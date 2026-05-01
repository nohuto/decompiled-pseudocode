/*
 * XREFs of WPP_SF_D @ 0x1802FBBC0
 * Callers:
 *     ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x180008DD8 (-HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_D(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_f622bcc20d5e3568a2be3c0923672d69_Traceguids, 0xAu, &v5, 4LL, 0LL);
}
