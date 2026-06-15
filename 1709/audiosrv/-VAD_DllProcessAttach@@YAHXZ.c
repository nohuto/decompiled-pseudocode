/*
 * XREFs of ?VAD_DllProcessAttach@@YAHXZ @ 0x180064824
 * Callers:
 *     DllMain @ 0x18003541C (DllMain.c)
 * Callees:
 *     <none>
 */

_BOOL8 VAD_DllProcessAttach(void)
{
  return !ATL::CAtlBaseModule::m_bInitFailed;
}
