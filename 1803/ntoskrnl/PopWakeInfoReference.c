/*
 * XREFs of PopWakeInfoReference @ 0x1400D2F14
 * Callers:
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
