/*
 * XREFs of ndisDereferenceDmaAdapter @ 0x1C0025F04
 * Callers:
 *     NdisFreeSharedMemory @ 0x1C0025D90 (NdisFreeSharedMemory.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0061850 (ndisMQueuedAllocateSharedHandler.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00BB398 (ndisMInitializeScatterGatherDma.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C00BFA30 (NdisMDeregisterScatterGatherDma.c)
 *     ndisFreeSharedMemory @ 0x1C00BFA7C (ndisFreeSharedMemory_ea_1C00BFA7C.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00E1BA8 (ndisWdfPostReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 *     NdisMAllocateMapRegisters @ 0x1C0103650 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0103BD0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0103C90 (NdisMFreeMapRegisters.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     PplDestroyLookasideList @ 0x1C0025FE8 (PplDestroyLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDereferenceDmaAdapter(PVOID P)
{
  __int64 v1; // rdi
  KIRQL v3; // bp
  __int64 v4; // rcx
  void *v5; // rcx
  struct _KEVENT *v6; // rcx

  v1 = *((_QWORD *)P + 1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1856) = 465064;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF) == 1 )
  {
    v4 = *((_QWORD *)P + 3);
    if ( v4 )
    {
      *((_QWORD *)P + 16) = v4;
      (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 8LL))();
      *((_QWORD *)P + 3) = 0LL;
    }
    v5 = (void *)*((_QWORD *)P + 8);
    if ( v5 )
    {
      PplDestroyLookasideList(v5);
      *((_QWORD *)P + 8) = 0LL;
    }
    v6 = (struct _KEVENT *)*((_QWORD *)P + 10);
    if ( v6 )
      KeSetEvent(v6, 0, 0);
    *(_QWORD *)(v1 + 504) = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v3);
}
