/*
 * XREFs of ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BBD34
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zqq @ 0x1C00500AC (WPP_SF_Zqq.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00BBDF0 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF54C (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 */

void __fastcall ndisPauseProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  unsigned int m_numElements; // r14d
  __int64 i; // rsi
  void **p; // rax
  struct _NDIS_OPEN_BLOCK *v7; // rbp

  if ( a2->BindDriver._p->_t.RunningDriver->MajorNdisVersion < 6u )
  {
    ndisUnbindEachProtocolOpenOnMiniport(a1, a2);
  }
  else
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(0xBAD0FFu);
      p = a2->BindState.m_bindContext._p;
      v7 = (struct _NDIS_OPEN_BLOCK *)p[i];
      if ( (unsigned __int8)byte_1C0092623 >= 4u )
        WPP_SF_Zqq(
          0x12u,
          &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          p[i]);
      ndisPauseProtocolInner(v7, (unsigned int)a2);
      if ( (unsigned __int8)byte_1C0092623 >= 4u )
        WPP_SF_Zqq(
          0x13u,
          &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          v7);
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
