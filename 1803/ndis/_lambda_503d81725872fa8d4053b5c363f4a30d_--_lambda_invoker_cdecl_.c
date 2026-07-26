/*
 * XREFs of _lambda_503d81725872fa8d4053b5c363f4a30d_::_lambda_invoker_cdecl_ @ 0x1C00C10D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_503d81725872fa8d4053b5c363f4a30d_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  unsigned int m_unbindReasons; // r8d
  bool v4; // cf

  Miniport = a1->BindState.Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  m_unbindReasons = a1->BindState.m_unbindReasons;
  a1->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
  if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFBFFE3) != 0) || !a1->BindState.Miniport )
  {
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
      WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFBFFE3);
    v4 = (unsigned __int8)byte_1C0099623 < 4u;
    a1->BindState.Miniport->BindEngine.m_isDirty = 1;
    if ( !v4 )
      WPP_SF_Zq(0x14u, &WPP_8d98bde3000d344f77c1d3be10f8ac4f_Traceguids, 0LL, 0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine);
}
