/*
 * XREFs of ndisMResetMiniportInternal @ 0x1C0060C24
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C000FBD0 (ndisQueuedCheckForHang.c)
 *     ndisQueuedResetMiniport @ 0x1C0060F50 (ndisQueuedResetMiniport.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C474 (ndisMSwapOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     NdisMResetComplete @ 0x1C005E610 (NdisMResetComplete.c)
 *     Template_jqxzqq @ 0x1C005EB18 (Template_jqxzqq.c)
 *     ndisMInvokeReset @ 0x1C005FDFC (ndisMInvokeReset.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006D794 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006DB18 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 */

void __fastcall ndisMResetMiniportInternal(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // r15
  bool v5; // zf
  unsigned __int64 *p_Lock; // rcx
  __int64 v7; // rcx
  NDIS_STATUS v8; // edi
  KIRQL v9; // r14
  BOOLEAN AddressingReset[16]; // [rsp+50h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  if ( (unsigned __int8)byte_1C0092618 >= 4u )
    WPP_SF_qD(0xDBu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)a1, a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v5 = (a1->Flags & 0x81200000) == 0;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 734888;
  if ( !v5 || (a1->PnPFlags & 0x80000) != 0 || (unsigned int)(a1->DriverPowerState - 2) <= 2 )
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v4);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++a1->InternalResetCount;
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      ++a1->MiniportResetCount;
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x200000000000LL) != 0 )
      Template_jqxzqq(
        a1->InternalResetCount + (unsigned int)a1->MiniportResetCount,
        &MiniportReset,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->pAdapterInstanceName->Buffer,
        a2,
        a1->InternalResetCount + a1->MiniportResetCount);
    a1->Flags |= 0x200000u;
    a1->ResetOpen = 0LL;
    ndisMSwapOpenHandlers((__int64)a1, 1u);
    a1->Flags |= 0x80000u;
    while ( 1 )
    {
      v5 = a1->RequestCount == 0;
      a1->MiniportThread = 0LL;
      p_Lock = &a1->Lock;
      a1->LockDbg = 0;
      if ( v5 )
        break;
      KeReleaseSpinLock(p_Lock, v4);
      NdisMSleep(0x32u);
      v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 734939;
    }
    KeReleaseSpinLock(p_Lock, v4);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807364;
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
      Template_jqxq(
        v7,
        &CallMiniportReset,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        237);
    if ( a1->SelectiveSuspend )
    {
      if ( (a1->Flags & 0x80u) == 0 )
        ndisWdmSetBusySync(a1, NdisBusyReset, 0);
      else
        ndisWdfSetBusySync(a1, NdisBusyReset, 0);
    }
    if ( a1->MajorNdisVersion < 6u )
    {
      if ( (unsigned __int8)byte_1C0092618 >= 4u )
        WPP_SF_(0xDCu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids);
      v9 = KfRaiseIrql(2u);
      v8 = ((__int64 (__fastcall *)(BOOLEAN *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
             AddressingReset,
             a1->MiniportAdapterContext);
      if ( v9 != 2 )
        KeLowerIrql(v9);
    }
    else
    {
      v8 = ndisMInvokeReset((__int64)a1, (__int64)AddressingReset);
    }
    if ( v8 != 259 )
      NdisMResetComplete(a1, v8, AddressingReset[0]);
    if ( (unsigned __int8)byte_1C0092618 >= 4u )
      WPP_SF_qD(0xDDu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)a1, a2);
  }
}
