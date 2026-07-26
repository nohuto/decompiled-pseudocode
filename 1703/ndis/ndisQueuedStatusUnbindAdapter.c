/*
 * XREFs of ndisQueuedStatusUnbindAdapter @ 0x1C00DC770
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(PVOID P, __int64 a2)
{
  int v4; // r15d
  __int64 i; // rbx
  __int64 v6; // r14
  Ndis::BindState *v7; // rcx
  __int64 v8; // rdx

  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x4Fu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)P);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a2 + 5160, 0LL);
  v4 = *(_DWORD *)(a2 + 5036);
  for ( i = 0LL; (_DWORD)i != v4; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a2 + 5036) )
      __fastfail(0xBAD0FFu);
    v6 = *(_QWORD *)(a2 + 5040);
    v7 = *(Ndis::BindState **)(v6 + 8 * i);
    v8 = *((_QWORD *)v7[1].m_AdditionalContext + 6);
    if ( v8
      && *(_BYTE *)(v8 + 56) < 6u
      && Ndis::BindState::SetBinding(v7, BindingDisabled, Reason_RebindNeeded)
      && (unsigned __int8)byte_1C0092623 >= 4u )
    {
      WPP_SF_Zq(
        0x50u,
        &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * i) + 80LL) + 32LL),
        **(_QWORD **)(v6 + 8 * i));
    }
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 0);
  ndisDereferenceMiniport(a2, 0x36u);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x51u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a2);
}
