/*
 * XREFs of ndisQueuedStatusUnbindAdapter @ 0x1C00E8000
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(PVOID P, __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rbx
  __int64 v6; // r14
  Ndis::BindState *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x4Fu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)P);
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
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      WPP_SF_Zq(
        0x50u,
        &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * i) + 80LL) + 24LL),
        **(_QWORD **)(v6 + 8 * i));
    }
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 0);
  ndisDereferenceMiniport(a2, 0x36u, v9, v10);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x51u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a2);
}
