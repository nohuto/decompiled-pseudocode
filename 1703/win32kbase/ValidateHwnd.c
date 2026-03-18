/*
 * XREFs of ValidateHwnd @ 0x1C00715E0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C004A470 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C004A880 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateHwnd(void *a1)
{
  return ValidateHwndEx(a1);
}
