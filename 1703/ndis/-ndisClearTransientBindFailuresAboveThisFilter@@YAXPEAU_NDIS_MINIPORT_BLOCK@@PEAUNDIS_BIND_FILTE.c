/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B7C24
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B7B68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF038 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  unsigned int m_numElements; // r12d
  bool v3; // r15
  __int64 i; // rdi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r14
  unsigned int v8; // r14d
  __int64 j; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v10; // r15
  NDIS_BIND_PROTOCOL_LINK *v11; // rdi
  int v12; // r8d
  NDIS_BIND_FILTER_LINK *Myptr; // rsi
  int m_unbindReasons; // r8d
  char v15; // al
  bool v16; // cf
  _QWORD v17[20]; // [rsp+20h] [rbp-D8h] BYREF

  m_numElements = a1->Bindings.Filters.m_numElements;
  v3 = 0;
  for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a1->Bindings.Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    p = a1->Bindings.Filters._p;
    if ( v3 )
    {
      Myptr = p[i]._Myptr;
      m_unbindReasons = Myptr->BindState.m_unbindReasons;
      Myptr->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
      if ( (m_unbindReasons != 0) == ((m_unbindReasons & 0xFFFBFFE3) != 0) && Myptr->BindState.Miniport )
      {
        v15 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(
            0xEu,
            &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids,
            m_unbindReasons,
            m_unbindReasons & 0xFFFBFFE3);
        Myptr->BindState.Miniport->BindEngine.m_isDirty = 1;
        v15 = 1;
      }
      if ( v15 && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v17);
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
          WPP_SF_Zq(0x16u, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, (const wchar_t *)v17[1], v17[0]);
      }
    }
    else
    {
      v3 = p[i]._Myptr == a2;
    }
  }
  v8 = a1->Bindings.Protocols.m_numElements;
  for ( j = 0LL; (_DWORD)j != v8; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= a1->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v10 = a1->Bindings.Protocols._p;
    v11 = v10[j]._Myptr;
    v12 = v11->BindState.m_unbindReasons;
    v11->BindState.m_unbindReasons = v12 & 0xFFFBFFE3;
    if ( (v12 != 0) != ((v12 & 0xFFFBFFE3) != 0) || !v11->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12, v12 & 0xFFFBFFE3);
      v16 = (unsigned __int8)byte_1C0092623 < 4u;
      v11->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v16 )
        WPP_SF_Zq(
          0x17u,
          &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids,
          &v10[j]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v10[j]._Myptr->BindState.Miniport);
    }
  }
}
