/*
 * XREFs of ?QueryInterface@CAudioStream@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::QueryInterface(__int64 a1, const struct _GUID *a2, char **a3)
{
  return CAudioStream::QueryInterface((CAudioStream *)(a1 - 24), a2, a3);
}
