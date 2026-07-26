/*
 * XREFs of ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00BF650
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF038 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF54C (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 */

void __fastcall Ndis::BindState::RemoveBindContext(Ndis::BindState *this, void *a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 m_numElements; // rcx
  unsigned __int64 v5; // rax
  unsigned int v6; // eax

  v3 = 0LL;
  m_numElements = this->m_bindContext.m_numElements;
  if ( m_numElements )
  {
    while ( 1 )
    {
      if ( v3 >= this->m_bindContext.m_numElements )
        __fastfail(0xBAD0FFu);
      if ( this->m_bindContext._p[v3] == a2 )
        break;
      if ( ++v3 >= m_numElements )
        return;
    }
    v5 = this->m_bindContext.m_numElements;
    if ( v3 >= v5 )
      __fastfail(0xBAD0FFu);
    v6 = v5 - v3 - 1;
    if ( v6 )
      memmove(&this->m_bindContext._p[(unsigned int)v3], &this->m_bindContext._p[(unsigned int)(v3 + 1)], 8LL * v6);
    --this->m_bindContext.m_numElements;
  }
}
