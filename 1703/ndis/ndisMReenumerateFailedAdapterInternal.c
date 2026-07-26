/*
 * XREFs of ndisMReenumerateFailedAdapterInternal @ 0x1C0064854
 * Callers:
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00E1AE0 (ndisQueuedReenumerateFailedAdapter.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisCancelOidRequestInternal @ 0x1C0045EE0 (ndisCancelOidRequestInternal.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E0EA8 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMReenumerateFailedAdapterInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // r15
  unsigned __int64 *p_Lock; // rsi
  KIRQL v4; // al
  unsigned int PnPFlags; // ecx
  __int64 v6; // rbp
  __int64 MiniportFatalErrorTimestampIndex; // rax
  unsigned __int64 v8; // r14
  __int64 LastMiniportFatalErrorReason; // rax
  KIRQL v10; // al
  ULONG VerifierFlags; // [rsp+70h] [rbp+8h] BYREF
  ULONG v12; // [rsp+78h] [rbp+10h] BYREF

  IfBlock = a1->IfBlock;
  p_Lock = &a1->Lock;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  PnPFlags = a1->PnPFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->MiniportThread = 0LL;
  a1->LockDbg = 1641793;
  a1->LockDbg = 0;
  if ( (PnPFlags & 0x100) != 0 )
  {
    KeReleaseSpinLock(p_Lock, v4);
  }
  else
  {
    a1->WSyncFlags |= 4u;
    a1->PnPFlags = PnPFlags | 0x100;
    KeReleaseSpinLock(p_Lock, v4);
    if ( (unsigned __int8)byte_1C0092618 >= 2u )
      WPP_SF_q(0x44u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)a1);
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
        v12 = 0;
        if ( MmIsVerifierEnabled(&v12) < 0 || (v12 & 0x400000) == 0 )
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
      ((void (__fastcall *)(void *, __int64, _QWORD))a1->ReenumerateSelfInterface->DeviceReset)(
        a1->ReenumerateSelfInterface->Context,
        1LL,
        0LL);
    }
  }
}
