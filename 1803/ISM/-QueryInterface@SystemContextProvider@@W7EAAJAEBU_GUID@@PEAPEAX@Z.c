/*
 * XREFs of ?QueryInterface@SystemContextProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemContextProvider::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return TouchInfoAdapter::QueryInterface((TouchInfoAdapter *)(a1 - 8), a2, a3);
}
