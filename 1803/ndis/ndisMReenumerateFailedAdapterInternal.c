/*
 * XREFs of ndisMReenumerateFailedAdapterInternal @ 0x1C00659FC
 * Callers:
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00EE540 (ndisQueuedReenumerateFailedAdapter.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024608 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisCancelOidRequestInternal @ 0x1C00441CC (ndisCancelOidRequestInternal.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00AF370 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B8564 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00ED8EC (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FC3F4 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisMReenumerateFailedAdapterInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // r14
  unsigned __int64 *p_Lock; // rbx
  KIRQL v4; // al
  unsigned int PnPFlags; // ecx
  __int64 v6; // rsi
  __int64 MiniportFatalErrorTimestampIndex; // rax
  unsigned __int64 v8; // rbp
  __int64 LastMiniportFatalErrorReason; // rax
  KIRQL v10; // al
  struct NDISWATCHDOG__ *Watchdog; // rax
  ULONG VerifierFlags; // [rsp+70h] [rbp+8h] BYREF
  ULONG v13; // [rsp+78h] [rbp+10h] BYREF

  IfBlock = a1->IfBlock;
  p_Lock = &a1->Lock;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x100) != 0 )
  {
    KeReleaseSpinLock(p_Lock, v4);
  }
  else
  {
    a1->WSyncFlags |= 4u;
    a1->PnPFlags = PnPFlags | 0x100;
    KeReleaseSpinLock(p_Lock, v4);
    if ( (unsigned __int8)byte_1C0099618 >= 2u )
      WPP_SF_q(0x44u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)a1);
    ndisLogMiniportEvent((__int64)a1, IfBlock->LastMiniportFatalErrorReason);
    v6 = MEMORY[0xFFFFF78000000008];
    MiniportFatalErrorTimestampIndex = IfBlock->MiniportFatalErrorTimestampIndex;
    v8 = IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex];
    IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex] = MEMORY[0xFFFFF78000000008];
    LastMiniportFatalErrorReason = (unsigned __int16)IfBlock->LastMiniportFatalErrorReason;
    IfBlock->MiniportFatalErrorTimestampIndex = ((unsigned int)IfBlock->MiniportFatalErrorTimestampIndex + 1) % 3;
    DbgkWerCaptureLiveKernelDump(
      L"NDIS",
      350LL,
      1LL,
      a1,
      a1->PhysicalDeviceObject,
      LastMiniportFatalErrorReason,
      a1,
      ndisFailedAdapterLiveDumpCallback,
      0);
    if ( ndisMAllowSilentReenumerate(a1) )
    {
      v8 = 0LL;
    }
    else
    {
      VerifierFlags = 0;
      if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 && (VerifierFlags & 0x200000) != 0 )
      {
        v13 = 0;
        if ( MmIsVerifierEnabled(&v13) < 0 || (v13 & 0x400000) == 0 )
          NT_ASSERT(
            "*** An NDIS miniport driver has encountered a fatal error
    This is NOT a break in NDIS.sys
    The most c"
            "ommon causes of these types of breaks are hung/unresponsive miniport firmware,
    failed power transitions,"
            " or failing MiniportRestart.
");
      }
    }
    ndisCancelOidRequestInternal((__int64)a1, 0LL, 0LL, 1u);
    if ( v8 && v6 - v8 <= 0x23C34600 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      a1->WSyncFlags &= ~4u;
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(p_Lock, v10);
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
    }
    else
    {
      if ( a1->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi && !ndisBugCheckOnReenumerationTimeout )
      {
        ndisDisarmWatchdog(a1->ReenumerateWatchdog.m_ptr);
        Watchdog = ndisAllocateWatchdog();
        wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
          &a1->ReenumerateWatchdog.m_ptr,
          Watchdog);
        ndisArmWatchdog(a1->ReenumerateWatchdog.m_ptr, a1, 0x27u, 0LL, 0x88B8u, 0LL);
      }
      ((void (__fastcall *)(void *, __int64, _QWORD))a1->ReenumerateSelfInterface->DeviceReset)(
        a1->ReenumerateSelfInterface->Context,
        1LL,
        0LL);
    }
  }
}
