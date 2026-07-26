/*
 * XREFs of ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00C3C08
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zqq @ 0x1C004EC74 (WPP_SF_Zqq.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AB254 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00C3CDC (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 */

void __fastcall ndisPauseProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  __int64 m_numElements; // r14
  unsigned __int64 i; // rdi
  void **p; // rax
  struct _NDIS_OPEN_BLOCK *v7; // rbp

  if ( a2->BindDriver._p->_t.RunningDriver->MajorNdisVersion < 6u )
  {
    ndisUnbindEachProtocolOpenOnMiniport(a1, a2);
  }
  else
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    for ( i = 0LL; i != m_numElements; ++i )
    {
      if ( i >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(5u);
      p = a2->BindState.m_bindContext._p;
      v7 = (struct _NDIS_OPEN_BLOCK *)p[i];
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
        WPP_SF_Zqq(
          0x12u,
          &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          p[i]);
      ndisPauseProtocolInner(v7, (unsigned int)a2);
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
        WPP_SF_Zqq(
          0x13u,
          &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          v7);
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::ApplyRules(&a1->BindEngine);
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
}
