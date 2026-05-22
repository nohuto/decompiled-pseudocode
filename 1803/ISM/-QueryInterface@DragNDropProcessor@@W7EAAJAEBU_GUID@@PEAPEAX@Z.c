/*
 * XREFs of ?QueryInterface@DragNDropProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragNDropProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return ComboButtonProcessor::QueryInterface((ComboButtonProcessor *)(a1 - 8), a2, a3);
}
