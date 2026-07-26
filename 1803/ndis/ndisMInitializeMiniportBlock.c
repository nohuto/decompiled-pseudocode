/*
 * XREFs of ndisMInitializeMiniportBlock @ 0x1C00C12F0
 * Callers:
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     NdisInitializeEvent @ 0x1C0024200 (NdisInitializeEvent.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024608 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0024BC8 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B8564 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     NdisAllocateRefCount @ 0x1C00C08B0 (NdisAllocateRefCount.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C01073C8 (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisMInitializeMiniportBlock(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  struct NDISWATCHDOG__ *Watchdog; // rax
  __int64 v8; // rcx

  memset((void *)a2, 0, a3);
  _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK((_NDIS_MINIPORT_BLOCK *)a2);
  *(_QWORD *)(a2 + 3784) = a1;
  ndisMInitializeMiniportBlockFront((PVOID)a2);
  *(_QWORD *)(a2 + 3904) = 1LL;
  *(_DWORD *)(a2 + 4084) = 1;
  *(_WORD *)(a2 + 4016) = _InterlockedExchangeAdd(&ndisInstanceNumber, 1u) + 1;
  *(_QWORD *)(a2 + 4736) = a2 + 4728;
  *(_QWORD *)(a2 + 4728) = a2 + 4728;
  *(_QWORD *)(a2 + 4760) = a2 + 4752;
  *(_QWORD *)(a2 + 4752) = a2 + 4752;
  *(_QWORD *)(a2 + 4784) = a2 + 4776;
  *(_QWORD *)(a2 + 4776) = a2 + 4776;
  *(_QWORD *)(a2 + 5808) = a2 + 5800;
  *(_QWORD *)(a2 + 5800) = a2 + 5800;
  NdisInitializeEvent((PNDIS_EVENT)(a2 + 3752));
  KeInitializeEvent((PRKEVENT)(a2 + 4248), NotificationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 3896));
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 3944), 1, 1);
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 3976), 1, 1);
  *(_QWORD *)(a2 + 4360) = 0LL;
  *(_QWORD *)(a2 + 4352) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 4336) = 0LL;
  *(_QWORD *)(a2 + 4384) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 4392) = 0LL;
  *(_QWORD *)(a2 + 4368) = 0LL;
  *(_QWORD *)(a2 + 5328) = ndisMUpdateInterfaceWorker;
  *(_QWORD *)(a2 + 5336) = a2;
  *(_QWORD *)(a2 + 5312) = 0LL;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 4144), 0x2020444Eu, 0, 0, 0x20u);
  *(_QWORD *)(a2 + 4920) = NdisAllocateRefCount(0x6Au, 0);
  *(_QWORD *)(a2 + 4928) = NdisAllocateRefCount(5u, 0);
  v5 = *(_QWORD *)(a2 + 3784);
  if ( *(_DWORD *)(v5 + 904) != 1
    || (v8 = *(_QWORD *)(v5 + 352)) == 0
    || (v6 = 5512LL, *(_QWORD *)(v8 + 64) == *(_QWORD *)(v5 + 176)) )
  {
    v6 = 5504LL;
  }
  Watchdog = ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
    (struct NDISWATCHDOG__ **)(v6 + a2),
    Watchdog);
}
