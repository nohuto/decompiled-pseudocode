/*
 * XREFs of ??1KRegKey@@QEAA@XZ @ 0x1C0004100
 * Callers:
 *     ?CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ @ 0x1C00AA080 (-CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00B0330 (ndisCheckNetworkInterfaceDataMismatch.c)
 * Callees:
 *     <none>
 */

void __fastcall KRegKey::~KRegKey(KRegKey *this)
{
  void *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
    ZwClose(m_ptr);
}
