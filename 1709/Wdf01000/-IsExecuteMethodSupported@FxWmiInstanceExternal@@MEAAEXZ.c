/*
 * XREFs of ?IsExecuteMethodSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x1C0071B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxWmiInstanceExternal::IsExecuteMethodSupported(FxWmiInstanceInternal *this)
{
  return this->m_ExecuteMethod != 0LL;
}
