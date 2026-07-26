/*
 * XREFs of ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BBDC8
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00B1E84 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Ndis::BindState::AddBindContext(Ndis::BindState *this, void *a2)
{
  Rtl::KArray<void *,1> *p_m_bindContext; // rbx
  char v3; // di
  unsigned __int64 m_bufferSize; // r8
  unsigned __int64 v6; // rcx
  void **v7; // rdx
  unsigned __int64 v9; // rdx

  p_m_bindContext = &this->m_bindContext;
  v3 = 0;
  m_bufferSize = this->m_bindContext.m_bufferSize;
  v6 = this->m_bindContext.m_numElements + 1;
  if ( m_bufferSize >= v6 )
    goto LABEL_2;
  if ( v6 < 4 )
    v6 = 4LL;
  v9 = (unsigned int)m_bufferSize + ((unsigned int)m_bufferSize >> 1);
  if ( v6 >= v9 )
    v9 = v6;
  if ( Rtl::KArray<void *,1>::reserve(&p_m_bindContext->m_bufferSize, v9) )
  {
LABEL_2:
    v7 = &p_m_bindContext->_p[p_m_bindContext->m_numElements];
    if ( v7 )
      *v7 = a2;
    ++p_m_bindContext->m_numElements;
    return 1;
  }
  return v3;
}
