/*
 * XREFs of ndisSubmitIdleRequest @ 0x1C0071820
 * Callers:
 *     ndisSSIdleTimerWorkItem @ 0x1C0070B30 (ndisSSIdleTimerWorkItem.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00739F4 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0q @ 0x1C0040160 (McTemplateK0q.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     McTemplateK0qq @ 0x1C004E838 (McTemplateK0qq.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E2B8 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E958 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisClearIdleTimer @ 0x1C0070044 (ndisClearIdleTimer.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  char v3; // bp
  KIRQL v7; // r15
  int v8; // r12d
  __int64 v9; // rdx
  unsigned int Arg1; // r14d
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  KIRQL v12; // al
  KIRQL v13; // bl
  unsigned int Value; // edx
  bool v15; // bl

  SelectiveSuspend = a1->SelectiveSuspend;
  v3 = 0;
  if ( a2 || (a1->PMHardwareCapabilities.Flags & 4) == 0 || ndisShouldEngageNicAutoPowerSaver(a1) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    if ( (SelectiveSuspend->Flags.Value & 0x404) != 0 || !ndisReferenceMiniport((__int64)a1) )
    {
      v15 = (SelectiveSuspend->Flags.Value & 4) != 0;
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
      return v15 ? 259 : -1073676271;
    }
    else
    {
      v8 = a2;
      SelectiveSuspend->Flags.Value = SelectiveSuspend->Flags.Value ^ (SelectiveSuspend->Flags.Value ^ (a2 << 8)) & 0x100 | 4;
      KeClearEvent(&SelectiveSuspend->IdleNotificationCompleteEvent);
      KeClearEvent(&SelectiveSuspend->IdleNotificationDoneEvent);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
      LOBYTE(v9) = a2;
      Arg1 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v9);
      KeSetEvent(&SelectiveSuspend->IdleNotificationDoneEvent, 0, 0);
      if ( Arg1 == 259 )
      {
        if ( (unsigned __int8)byte_1C0098756 >= 4u )
          WPP_SF_qD(0xEu, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)a1, v8);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          McTemplateK0q((__int64)v11, &SSIdleDetected, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        ndisClearIdleTimer((__int64)a1);
        return 259LL;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098756 >= 2u )
          WPP_SF_dq(0xDu, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, Arg1, a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          McTemplateK0qq(v11, &SSIdleDeclined, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, Arg1);
        v12 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
        SelectiveSuspend->Flags.Value &= ~0x100u;
        v13 = v12;
        Value = SelectiveSuspend->Flags.Value;
        if ( (Value & 4) != 0 )
        {
          SelectiveSuspend->Flags.Value = Value & 0xFFFFFFFB;
          KeSetEvent(&SelectiveSuspend->IdleNotificationCompleteEvent, 0, 0);
          v3 = 1;
        }
        KeReleaseSpinLock(&SelectiveSuspend->Lock, v13);
        if ( v3 )
          ndisDereferenceMiniport((__int64)a1, 0x15u);
        return Arg1;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer(a1);
    return 3221291025LL;
  }
}
