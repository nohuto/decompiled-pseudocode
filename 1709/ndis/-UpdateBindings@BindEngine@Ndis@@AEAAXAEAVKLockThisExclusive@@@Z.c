/*
 * XREFs of ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4
 * Callers:
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BACA0 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 * Callees:
 *     ndisSetMediaDisconnectTimer @ 0x1C001EADC (ndisSetMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0070D84 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00720A8 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B5080 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00C3B58 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindings(Ndis::BindEngine *this, struct KLockThisExclusive *a2)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rdi
  KPushLockBase *m_Lock; // rcx
  bool v6; // zf
  bool v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0098763 >= 5u )
    WPP_SF_q(0xBu, &WPP_3377ebe788883e87541e6391b8d6bd11_Traceguids, (__int64)this->m_miniport);
  do
  {
    ExReleasePushLockExclusiveEx(a2->m_Lock, 0LL);
    a2->m_State = Unlocked;
    a2->m_Region.m_Entered = 0;
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    ndisMDisableOpportunisticPowerSavings(this->m_miniport, &v7);
    while ( Ndis::BindEngine::Iterate(this) )
      ;
    m_miniport = this->m_miniport;
    if ( this->m_miniport->MediaConnectState == MediaConnectStateDisconnected )
      ndisSetMediaDisconnectTimer((__int64)this->m_miniport);
    if ( m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)m_miniport, 8);
    if ( v7 )
    {
      v6 = m_miniport->AoAc == 0LL;
      m_miniport->PmInterruptedByPnp = 0;
      if ( !v6 )
        ndisAoAcClearStop(m_miniport, NdisSSPnPOp);
    }
    if ( _InterlockedExchangeAdd(
           (volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress,
           0xFFFFFFFF) <= 1 )
      ndisBindEnumerateProtocolDrivers(
        (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_,
        0LL);
    KeEnterCriticalRegion();
    m_Lock = a2->m_Lock;
    a2->m_Region.m_Entered = 1;
    ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
    a2->m_State = Exclusive;
  }
  while ( this->m_isDirty );
  this->m_bindThread = 0LL;
  KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
  if ( (unsigned __int8)byte_1C0098763 >= 5u )
    WPP_SF_q(0xCu, &WPP_3377ebe788883e87541e6391b8d6bd11_Traceguids, (__int64)this->m_miniport);
}
