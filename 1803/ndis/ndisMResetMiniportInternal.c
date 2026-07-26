/*
 * XREFs of ndisMResetMiniportInternal @ 0x1C0061680
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0008280 (ndisQueuedCheckForHang.c)
 *     ndisQueuedResetMiniport @ 0x1C00619C0 (ndisQueuedResetMiniport.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001CD1C (ndisMSwapOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxzqq @ 0x1C005E450 (McTemplateK0jqxzqq.c)
 *     NdisMResetComplete @ 0x1C005EDD0 (NdisMResetComplete.c)
 *     ndisMInvokeReset @ 0x1C00607BC (ndisMInvokeReset.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006F6C0 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006FA44 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 */

void __fastcall ndisMResetMiniportInternal(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // r15
  unsigned int Flags; // edx
  bool v6; // zf
  unsigned __int64 *p_Lock; // rcx
  __int64 v8; // rcx
  NDIS_STATUS v9; // edi
  KIRQL v10; // r14
  BOOLEAN AddressingReset[16]; // [rsp+50h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_qD(0xEBu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1, a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  Flags = a1->Flags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 735274;
  if ( (Flags & 0x81200000) != 0 || (a1->PnPFlags & 0x80000) != 0 || (unsigned int)(a1->DriverPowerState - 2) <= 2 )
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
    if ( (dword_1C009AF04 & 0x4000) != 0 )
    {
      McTemplateK0jqxzqq(
        a1->InternalResetCount + (unsigned int)a1->MiniportResetCount,
        &MiniportReset,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->pAdapterInstanceName->Buffer,
        a2,
        a1->InternalResetCount + a1->MiniportResetCount);
      Flags = a1->Flags;
    }
    a1->Flags = Flags | 0x200000;
    a1->ResetOpen = 0LL;
    ndisMSwapOpenHandlers((__int64)a1, 1u);
    a1->Flags |= 0x80000u;
    while ( 1 )
    {
      v6 = a1->RequestCount == 0;
      a1->MiniportThread = 0LL;
      p_Lock = &a1->Lock;
      a1->LockDbg = 0;
      if ( v6 )
        break;
      KeReleaseSpinLock(p_Lock, v4);
      NdisMSleep(0x32u);
      v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 735325;
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
      McTemplateK0jqxq(
        v8,
        &CallMiniportReset,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        111);
    if ( a1->SelectiveSuspend )
    {
      if ( (a1->Flags & 0x80u) == 0 )
        ndisWdmSetBusySync(a1, NdisBusyReset, 0);
      else
        ndisWdfSetBusySync(a1, NdisBusyReset, 0);
    }
    if ( a1->MajorNdisVersion < 6u )
    {
      if ( (unsigned __int8)byte_1C0099618 >= 4u )
        WPP_SF_(0xECu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids);
      v10 = KfRaiseIrql(2u);
      v9 = ((__int64 (__fastcall *)(BOOLEAN *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
             AddressingReset,
             a1->MiniportAdapterContext);
      if ( v10 != 2 )
        KeLowerIrql(v10);
    }
    else
    {
      v9 = ndisMInvokeReset((__int64)a1, (__int64)AddressingReset);
    }
    if ( v9 != 259 )
      NdisMResetComplete(a1, v9, AddressingReset[0]);
    if ( (unsigned __int8)byte_1C0099618 >= 4u )
      WPP_SF_qD(0xEDu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1, a2);
  }
}
