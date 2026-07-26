/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006DB18
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 *     ndisSetBusySync @ 0x1C006FBE0 (ndisSetBusySync.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_qq @ 0x1C004FC94 (Template_qq.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006CB88 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006CDF4 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ndisCancelIdleRequestSync @ 0x1C006E724 (ndisCancelIdleRequestSync.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C006EB30 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  __int16 i; // bp
  KIRQL v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h]

  SelectiveSuspend = a1->SelectiveSuspend;
  for ( i = 0; ; ++i )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, 0LL) )
      break;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
    if ( !i )
    {
      if ( (unsigned __int8)byte_1C0092616 >= 4u )
        WPP_SF_qD(0x23u, &WPP_3059abd58ba5345e836db04510415190_Traceguids, (__int64)a1, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      {
        LODWORD(v12) = a2;
        Template_qq(v9, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v12);
      }
    }
    LOBYTE(v10) = 1;
    ndisCancelIdleRequestSync(a1, a2, a3, v10);
  }
  ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3);
  ndisSelectiveSuspendSetResumeBusyReason(v11, 0, a2, a3);
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
}
