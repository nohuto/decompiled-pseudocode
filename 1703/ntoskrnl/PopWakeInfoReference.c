/*
 * XREFs of PopWakeInfoReference @ 0x14003CCFC
 * Callers:
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
