/*
 * XREFs of VfCancelAdapterChannel @ 0x1407AB2F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x140276FA4 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1407A9F94 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1407AA28C (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x1407ADC0C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1407ADED8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1407AE128 (ViGetRealDmaOperation.c)
 */

char __fastcall VfCancelAdapterChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 RealDmaOperation; // rax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rbx
  __int64 AdapterInformationInternal; // rbp
  char v10; // al
  char v11; // di
  __int64 v12; // rbx

  RealDmaOperation = ViGetRealDmaOperation(a1, 176LL);
  LOBYTE(v7) = 1;
  v8 = (__int64 (__fastcall *)(__int64, __int64, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v7);
  v10 = v8(a1, a2, a3);
  v11 = v10;
  if ( AdapterInformationInternal )
  {
    if ( v10 )
    {
      v12 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, a3);
      if ( v12 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v12 + 48));
        if ( *(_QWORD *)(v12 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v12);
      }
    }
  }
  return v11;
}
