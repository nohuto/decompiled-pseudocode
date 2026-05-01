/*
 * XREFs of WPP_SF_D @ 0x1801BF47C
 * Callers:
 *     ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x1801BF4BC (-HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_D(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_db7edd900f3937e080d31da0f5aec8aa_Traceguids, 0xAu, &v5, 4LL, 0LL);
}
