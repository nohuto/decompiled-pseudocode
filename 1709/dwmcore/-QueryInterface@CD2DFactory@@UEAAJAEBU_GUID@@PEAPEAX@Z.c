/*
 * XREFs of ?QueryInterface@CD2DFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801919E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DFactory::QueryInterface(CD2DFactory *this, const struct _GUID *a2, void **a3)
{
  *a3 = 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x100u);
  return 2147500033LL;
}
