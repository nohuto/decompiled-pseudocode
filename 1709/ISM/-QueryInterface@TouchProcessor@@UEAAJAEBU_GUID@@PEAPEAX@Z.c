/*
 * XREFs of ?QueryInterface@TouchProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180072DC0
 * Callers:
 *     ?QueryInterface@TouchProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073B00 (-QueryInterface@TouchProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TouchProcessor@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073B10 (-QueryInterface@TouchProcessor@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TouchProcessor::QueryInterface(TouchProcessor *this, const struct _GUID *a2, void **a3)
{
  return PointerProcessor::QueryInterface(this, a2, a3);
}
