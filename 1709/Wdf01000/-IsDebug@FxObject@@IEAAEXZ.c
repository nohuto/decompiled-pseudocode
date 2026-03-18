/*
 * XREFs of ?IsDebug@FxObject@@IEAAEXZ @ 0x1C000A570
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxObject::IsDebug(FxObject *this)
{
  return SLOBYTE(this->m_ObjectFlags) < 0;
}
