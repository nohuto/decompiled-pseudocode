/*
 * XREFs of UsbhReferenceListAdd @ 0x1C0023920
 * Callers:
 *     UsbhResetPort @ 0x1C0019070 (UsbhResetPort.c)
 *     UsbhGetTopOfBusStack @ 0x1C0023664 (UsbhGetTopOfBusStack.c)
 *     UsbhReferenceListOpen @ 0x1C0023760 (UsbhReferenceListOpen.c)
 *     UsbhTimerPnpStart @ 0x1C0023800 (UsbhTimerPnpStart.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C970 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSetTimer @ 0x1C003CC00 (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003CCA0 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E000 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E170 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0044C20 (UsbhResetPortTimerDpc.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // bp
  __int64 v7; // rbx
  char *PoolWithTag; // rax
  char *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( *(_BYTE *)(v7 + 2480) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      v10 = v7 + 2512;
      *(_DWORD *)v9 = 1397515890;
      *((_DWORD *)v9 + 10) = a3;
      v11 = v9 + 24;
      *((_QWORD *)v9 + 2) = a2;
      *((_QWORD *)v9 + 1) = a1;
      v12 = *(_QWORD **)(v10 + 8);
      if ( *v12 != v10 )
        __fastfail(3u);
      *v11 = v10;
      *((_QWORD *)v9 + 4) = v12;
      *v12 = v11;
      *(_QWORD *)(v10 + 8) = v11;
    }
    else
    {
      ++*(_DWORD *)(v7 + 2528);
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 0LL;
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 3221225473LL;
  }
}
