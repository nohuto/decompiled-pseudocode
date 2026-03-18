/*
 * XREFs of VfAllocateAdapterChannelEx @ 0x1408178C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExInterlockedInsertTailList @ 0x1400B1F80 (ExInterlockedInsertTailList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ViIsActiveChannelWcb @ 0x1402AA034 (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x140816F0C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140817018 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140817270 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140817310 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140817430 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
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
  __int64 v8; // r13
  char *v11; // rbx
  __int64 AdapterInformationInternal; // rdi
  char *v13; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  void *v17; // rbp
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *); // rax
  unsigned int v19; // esi
  KIRQL v20; // bp
  char **v21; // r9
  PVOID *v22; // r8

  v8 = a2;
  LOBYTE(a2) = 1;
  v11 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, a2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v13 = (char *)ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v11 = v13;
    if ( !v13 )
      return 3221225626LL;
    memset(v13, 0, 0x98uLL);
    v15 = a7;
    *(_QWORD *)v11 = a7;
    *((_QWORD *)v11 + 1) = a6;
    *((_QWORD *)v11 + 7) = AdapterInformationInternal;
    *((_DWORD *)v11 + 12) = a4;
    *((_QWORD *)v11 + 5) = a3;
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = v8;
    if ( a6 )
      v15 = (__int64)v11;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a4, 1);
    v16 = AdapterInformationInternal + 144;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v11 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
    v17 = &ViAdapterCallback;
    if ( !a6 )
      v17 = 0LL;
  }
  else
  {
    v15 = a7;
    v16 = 144LL;
    v17 = a6;
  }
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *))ViGetRealDmaOperation(a1, 160LL);
  v19 = RealDmaOperation(a1, v8, a3, a4, a5, v17, v15, a8);
  if ( AdapterInformationInternal && ViIsActiveChannelWcb(AdapterInformationInternal, v11) )
  {
    if ( v19 )
    {
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16);
      v21 = (char **)*((_QWORD *)v11 + 9);
      if ( v21[1] != v11 + 72 || (v22 = (PVOID *)*((_QWORD *)v11 + 10), *v22 != v11 + 72) )
        __fastfail(3u);
      *v22 = v21;
      v21[1] = (char *)v22;
      KxReleaseSpinLock((PKSPIN_LOCK)v16);
      __writecr8(v20);
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a4);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v11);
    }
    else if ( !v17 )
    {
      *((_DWORD *)v11 + 13) = 1;
      *((_QWORD *)v11 + 11) = *a8;
    }
  }
  return v19;
}
