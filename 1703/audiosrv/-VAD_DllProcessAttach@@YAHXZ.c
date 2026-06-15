/*
 * XREFs of ?VAD_DllProcessAttach@@YAHXZ @ 0x180038AC8
 * Callers:
 *     DllMain @ 0x18004B674 (DllMain.c)
 * Callees:
 *     <none>
 */

_BOOL8 VAD_DllProcessAttach(void)
{
  return !ATL::CAtlBaseModule::m_bInitFailed;
}
