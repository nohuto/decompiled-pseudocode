/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006F1B0
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C64 (ndisMResetMiniportInternal.c)
 *     ndisSetBusySync @ 0x1C00713A0 (ndisSetBusySync.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0qq @ 0x1C004E838 (McTemplateK0qq.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006E1A8 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006E470 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ndisCancelIdleRequestSync @ 0x1C006FDF4 (ndisCancelIdleRequestSync.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C00702A0 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  __int16 i; // bp
  KIRQL v8; // r14
  __int64 v9; // r9
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  __int64 v11; // r9
  _DWORD *v12; // rcx

  SelectiveSuspend = a1->SelectiveSuspend;
  for ( i = 0; ; ++i )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, 0LL) )
      break;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
    if ( !i )
    {
      if ( (unsigned __int8)byte_1C0098756 >= 4u )
        WPP_SF_qD(0x23u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)a1, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        McTemplateK0qq(v10, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, a2);
    }
    LOBYTE(v11) = 1;
    ndisCancelIdleRequestSync(a1, a2, a3, v11);
  }
  ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3, v9);
  ndisSelectiveSuspendSetResumeBusyReason(v12, 0, a2, a3);
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
}
