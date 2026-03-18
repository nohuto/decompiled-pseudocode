/*
 * XREFs of VfAllocateAdapterChannelEx @ 0x140768BA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExInterlockedInsertTailList @ 0x1400225E0 (ExInterlockedInsertTailList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ViIsActiveChannelWcb @ 0x1402506B8 (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x140768220 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14076832C (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140768584 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140768624 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140768728 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannelEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // r12
  __int64 v12; // rbx
  __int64 AdapterInformationInternal; // rdi
  PVOID v14; // rax
  __int64 v16; // rsi
  void *v17; // rbp
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *); // rax
  unsigned int v19; // esi
  KIRQL v20; // r14
  __int64 v21; // r9
  _QWORD *v22; // r8

  v8 = a2;
  LOBYTE(a2) = 1;
  v12 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, a2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v14 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v12 = (__int64)v14;
    if ( !v14 )
      return 3221225626LL;
    memset(v14, 0, 0x98uLL);
    v16 = a7;
    *(_QWORD *)v12 = a7;
    *(_QWORD *)(v12 + 8) = a6;
    *(_QWORD *)(v12 + 56) = AdapterInformationInternal;
    *(_DWORD *)(v12 + 48) = a4;
    *(_QWORD *)(v12 + 40) = a3;
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = v8;
    if ( a6 )
      v16 = v12;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a4, 1);
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v12 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
    v17 = &ViAdapterCallback;
    if ( !a6 )
      v17 = 0LL;
  }
  else
  {
    v16 = a7;
    v17 = a6;
  }
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *))ViGetRealDmaOperation(a1, 160LL);
  v19 = RealDmaOperation(a1, v8, a3, a4, a5, v17, v16, a8);
  if ( AdapterInformationInternal && ViIsActiveChannelWcb(AdapterInformationInternal, v12) )
  {
    if ( v19 )
    {
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 144));
      v21 = *(_QWORD *)(v12 + 72);
      v22 = *(_QWORD **)(v12 + 80);
      if ( *(_QWORD *)(v21 + 8) != v12 + 72 || *v22 != v12 + 72 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 144));
      __writecr8(v20);
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a4);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v12);
    }
    else if ( !v17 )
    {
      *(_DWORD *)(v12 + 52) = 1;
      *(_QWORD *)(v12 + 88) = *a8;
    }
  }
  return v19;
}
