/*
 * XREFs of ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00BBDBC
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisCloseAdapter @ 0x1C00FF0F0 (NdisCloseAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

struct NDIS_BIND_LINK_BASE *__fastcall Ndis::BindEngine::GetCurrentLink(Ndis::BindEngine *this)
{
  return this->m_currentOperation;
}
