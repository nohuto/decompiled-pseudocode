/*
 * XREFs of ?QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return MouseProcessor::QueryInterface((MouseProcessor *)(a1 - 8), a2, a3);
}
