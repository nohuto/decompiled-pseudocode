/*
 * XREFs of VfFreeAdapterChannel @ 0x1407699F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x140250744 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14076832C (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140768624 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140768728 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 */

void __fastcall VfFreeAdapterChannel(__int64 a1)
{
  __int64 RealDmaOperation; // rax
  __int64 v3; // rdx
  void (__fastcall *v4)(__int64); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 v6; // rbx

  VF_ASSERT_IRQL(2u);
  RealDmaOperation = ViGetRealDmaOperation(a1, 48LL);
  LOBYTE(v3) = 1;
  v4 = (void (__fastcall *)(__int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v3);
  v4(a1);
  if ( AdapterInformationInternal )
  {
    _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    v6 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, 0LL);
    if ( v6 )
    {
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v6 + 48));
      if ( *(_QWORD *)(v6 + 96) )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v6);
    }
  }
}
