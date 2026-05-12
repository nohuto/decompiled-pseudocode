/*
 * XREFs of WPP_SF_qdd @ 0x1C002C218
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0007BE0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids);
}
