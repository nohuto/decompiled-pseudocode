/*
 * XREFs of ?QueryInterface@PTPProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006F5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return PTPProcessor::QueryInterface((PTPProcessor *)(a1 - 16), a2, a3);
}
