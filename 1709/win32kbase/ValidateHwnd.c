/*
 * XREFs of ValidateHwnd @ 0x1C00476D0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00E03A0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E0800 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(void *a1)
{
  return ValidateHwndEx(a1);
}
