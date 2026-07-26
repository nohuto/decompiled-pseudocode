/*
 * XREFs of ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00AB358
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AAD20 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AB254 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 */

void __fastcall Ndis::BindState::RemoveBindContext(Ndis::BindState *this, void *a2)
{
  __int64 v2; // r9
  unsigned __int64 m_numElements; // rax
  void **p; // rcx
  unsigned int v6; // eax

  v2 = 0LL;
  if ( this->m_bindContext.m_numElements )
  {
    m_numElements = this->m_bindContext.m_numElements;
    while ( 1 )
    {
      p = this->m_bindContext._p;
      if ( p[v2] == a2 )
        break;
      if ( ++v2 >= m_numElements )
        return;
    }
    v6 = m_numElements - v2 - 1;
    if ( v6 )
      memmove(&p[(unsigned int)v2], &p[(unsigned int)(v2 + 1)], 8LL * v6);
    --this->m_bindContext.m_numElements;
  }
}
