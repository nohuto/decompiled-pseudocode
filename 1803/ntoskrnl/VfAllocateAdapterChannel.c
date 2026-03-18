/*
 * XREFs of VfAllocateAdapterChannel @ 0x1408176D0
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
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannel(__int64 a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  char *v9; // rdi
  __int64 RealDmaOperation; // rax
  __int64 v11; // rdx
  __int64 AdapterInformationInternal; // rbx
  char *v13; // rax
  bool v15; // zf
  __int64 v16; // r15
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // ebp
  KIRQL v20; // r15
  char **v21; // rcx
  void **v22; // r8
  __int64 (__fastcall *v23)(__int64, __int64, _QWORD, void *, __int64); // [rsp+30h] [rbp-38h]

  v9 = 0LL;
  RealDmaOperation = ViGetRealDmaOperation(a1, 32LL);
  LOBYTE(v11) = 1;
  v23 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, void *, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v11);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v13 = (char *)ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v9 = v13;
    if ( !v13 )
      return 3221225626LL;
    memset(v13, 0, 0x98uLL);
    v15 = ViDoubleBufferDma == 0;
    *(_QWORD *)v9 = a5;
    *((_QWORD *)v9 + 1) = a4;
    *((_QWORD *)v9 + 7) = AdapterInformationInternal;
    *((_DWORD *)v9 + 12) = a3;
    if ( !v15 && !*(_BYTE *)(AdapterInformationInternal + 33) && *(_DWORD *)(AdapterInformationInternal + 192) < 3u )
      *((_QWORD *)v9 + 12) = ViAllocateMapRegisterFile(AdapterInformationInternal, a3);
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = a2;
    a4 = &ViAdapterCallback;
    v16 = (__int64)v9;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a3, 0);
    v17 = AdapterInformationInternal + 144;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v9 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
  }
  else
  {
    v16 = a5;
    v17 = 144LL;
  }
  v18 = v23(a1, a2, a3, a4, v16);
  v19 = v18;
  if ( AdapterInformationInternal && v18 && ViIsActiveChannelWcb(AdapterInformationInternal, v9) )
  {
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v17);
    v21 = (char **)*((_QWORD *)v9 + 9);
    if ( v21[1] != v9 + 72 || (v22 = (void **)*((_QWORD *)v9 + 10), *v22 != v9 + 72) )
      __fastfail(3u);
    *v22 = v21;
    v21[1] = (char *)v22;
    KxReleaseSpinLock((PKSPIN_LOCK)v17);
    __writecr8(v20);
    DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a3);
    if ( *((_QWORD *)v9 + 12) )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v9);
  }
  return v19;
}
