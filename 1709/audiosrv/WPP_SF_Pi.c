/*
 * XREFs of WPP_SF_Pi @ 0x18009C82C
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x18009B5B0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pi(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, 33LL, (__int64 *)va);
}
