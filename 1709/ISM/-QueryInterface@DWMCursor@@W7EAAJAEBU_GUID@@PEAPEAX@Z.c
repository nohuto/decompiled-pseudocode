/*
 * XREFs of ?QueryInterface@DWMCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800272D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DWMCursor::QueryInterface((DWMCursor *)(a1 - 8), a2, a3);
}
