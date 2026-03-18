/*
 * XREFs of MiWaitForFreePage @ 0x14026B8B0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiGetSystemPage @ 0x14004DEB4 (MiGetSystemPage.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1401424AC (MiDoneWithThisPageGetAnother.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 */

__int64 __fastcall MiWaitForFreePage(_QWORD *a1)
{
  KSPIN_LOCK *v1; // r14
  int v3; // r8d
  unsigned __int64 v4; // rbp
  struct _KEVENT *v5; // rbx
  volatile LONG Lock; // esi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v9[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v10; // [rsp+58h] [rbp-90h]

  v1 = a1 + 608;
  v3 = -(*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2);
  v4 = v3 != 0 ? 34 : 160;
  v5 = (struct _KEVENT *)((char *)a1 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 4904);
  KeAcquireInStackQueuedSpinLock(a1 + 608, &LockHandle);
  Lock = v5[1].Header.Lock;
  while ( !(unsigned int)MiSufficientAvailablePages((__int64)a1, v4) )
  {
    KeResetEvent(v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    MiObtainFreePages((__int64)a1);
    if ( a1[52] )
    {
      v10 = a1[21];
      VslpEnterIumSecureMode(2u, 236LL, 0, (__int64)v9);
    }
    if ( KeWaitForSingleObject(v5, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiNoPagesTimeout) == 258
      && Lock == v5[1].Header.LockNV )
    {
      MiNoPagesLastChance((__int64)a1, v4);
    }
    Lock = v5[1].Header.Lock;
    KeAcquireInStackQueuedSpinLock(v1, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
