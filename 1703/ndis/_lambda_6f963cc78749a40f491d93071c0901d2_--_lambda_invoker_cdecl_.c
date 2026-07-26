/*
 * XREFs of _lambda_6f963cc78749a40f491d93071c0901d2_::_lambda_invoker_cdecl_ @ 0x1C00BD0F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 */

void __fastcall lambda_6f963cc78749a40f491d93071c0901d2_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  unsigned int m_unbindReasons; // r8d
  char v4; // cl

  Miniport = a1->BindState.Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  m_unbindReasons = a1->BindState.m_unbindReasons;
  a1->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
  if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFBFFE3) != 0) || !a1->BindState.Miniport )
  {
    v4 = byte_1C0092623;
    if ( (unsigned __int8)byte_1C0092623 >= 5u )
    {
      WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFBFFE3);
      v4 = byte_1C0092623;
    }
    a1->BindState.Miniport->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)v4 >= 4u )
      WPP_SF_Zq(0x14u, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids, 0LL, 0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine);
}
