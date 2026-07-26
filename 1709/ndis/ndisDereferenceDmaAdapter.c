/*
 * XREFs of ndisDereferenceDmaAdapter @ 0x1C0001F54
 * Callers:
 *     NdisFreeSharedMemory @ 0x1C0001DE0 (NdisFreeSharedMemory.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0061BC0 (ndisMQueuedAllocateSharedHandler.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C00ABD70 (NdisMDeregisterScatterGatherDma.c)
 *     ndisFreeSharedMemory @ 0x1C00ABDBC (ndisFreeSharedMemory_ea_1C00ABDBC.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00C33C0 (ndisMInitializeScatterGatherDma.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EBA58 (ndisWdfPostReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C010C5E0 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C010CB60 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C010CC20 (NdisMFreeMapRegisters.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     PplDestroyLookasideList @ 0x1C0002038 (PplDestroyLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
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
  *(_DWORD *)(v1 + 1856) = 465069;
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
