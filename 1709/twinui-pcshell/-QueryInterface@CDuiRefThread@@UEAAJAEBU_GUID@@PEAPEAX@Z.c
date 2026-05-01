/*
 * XREFs of ?QueryInterface@CDuiRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE590
 * Callers:
 *     ?QueryInterface@CDuiRefThread@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E05D0 (-QueryInterface@CDuiRefThread@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CDuiRefThread::QueryInterface(CDuiRefThread *this, IID *riid, void **ppv)
{
  HRESULT result; // eax

  result = QISearch(this, &`CDuiRefThread::QueryInterface'::`2'::qit, riid, ppv);
  if ( result == -2147467262 )
    return QISearch(this, &`CRefThread::QueryInterface'::`2'::qit, riid, ppv);
  return result;
}
