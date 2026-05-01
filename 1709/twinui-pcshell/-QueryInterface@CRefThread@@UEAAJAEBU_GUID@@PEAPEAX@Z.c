/*
 * XREFs of ?QueryInterface@CRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CRefThread::QueryInterface(CRefThread *this, const struct _GUID *a2, void **a3)
{
  return QISearch(this, &`CRefThread::QueryInterface'::`2'::qit, a2, a3);
}
