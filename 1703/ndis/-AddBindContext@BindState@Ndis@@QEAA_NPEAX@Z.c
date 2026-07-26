/*
 * XREFs of ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00B35BC
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?grow@?$KArray@PEAX@Rtl@@AEAA_N_K@Z @ 0x1C00B5AB4 (-grow@-$KArray@PEAX@Rtl@@AEAA_N_K@Z.c)
 */

char __fastcall Ndis::BindState::AddBindContext(Ndis::BindState *this, void *a2)
{
  Rtl::KArray<void *> *p_m_bindContext; // rbx
  char v4; // al
  char v5; // r8
  void **v6; // rdx

  p_m_bindContext = &this->m_bindContext;
  v4 = Rtl::KArray<void *>::grow(&this->m_bindContext, this->m_bindContext.m_numElements + 1);
  v5 = 0;
  if ( v4 )
  {
    v6 = &p_m_bindContext->_p[p_m_bindContext->m_numElements];
    if ( v6 )
      *v6 = a2;
    ++p_m_bindContext->m_numElements;
    return 1;
  }
  return v5;
}
