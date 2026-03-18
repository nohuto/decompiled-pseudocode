/*
 * XREFs of ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x14017F2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
