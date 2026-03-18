/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1401AA040
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14028E630 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x140711300 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
