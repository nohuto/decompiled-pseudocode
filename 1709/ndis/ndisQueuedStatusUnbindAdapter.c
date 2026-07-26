/*
 * XREFs of ndisQueuedStatusUnbindAdapter @ 0x1C00E6690
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(PVOID P, __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rbx
  __int64 v6; // r14
  Ndis::BindState *v7; // rcx
  __int64 v8; // rdx

  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x4Fu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)P);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a2 + 5160, 0LL);
  v4 = *(unsigned int *)(a2 + 5036);
  for ( i = 0LL; i != v4; ++i )
  {
    if ( i >= *(unsigned int *)(a2 + 5036) )
      __fastfail(5u);
    v6 = *(_QWORD *)(a2 + 5040);
    v7 = *(Ndis::BindState **)(v6 + 8 * i);
    v8 = *((_QWORD *)v7[1].m_AdditionalContext + 5);
    if ( v8
      && *(_BYTE *)(v8 + 56) < 6u
      && Ndis::BindState::SetBinding(v7, BindingDisabled, Reason_RebindNeeded)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_Zq(
        0x50u,
        &WPP_4a5d38b576c633146a968e2982301690_Traceguids,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * i) + 80LL) + 24LL),
        **(_QWORD **)(v6 + 8 * i));
    }
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 0);
  ndisDereferenceMiniport(a2, 0x36u);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x51u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a2);
}
