/*
 * XREFs of ?QueryInterface@Win32kInterop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return Win32kInterop::QueryInterface((Win32kInterop *)(a1 - 24), a2, a3);
}
