/*
 * XREFs of WakeRITForShutdown @ 0x1C0108ED0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WakeRITForShutdown(__int64 a1)
{
  if ( PsGetCurrentProcess(a1) != gpepCSRSS || !gpkeRITEvent )
    return 0LL;
  gdwHydraHint |= 0x2000000u;
  WakeRIT(8LL);
  return 1LL;
}
