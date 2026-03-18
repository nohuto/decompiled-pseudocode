/*
 * XREFs of VfPutScatterGatherList @ 0x14076AD70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14076845C (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140768624 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140768728 (VF_ASSERT_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x14076BD8C (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 */

void __fastcall VfPutScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  __int64 RealDmaOperation; // rax
  __int64 v7; // rdx
  __int64 AdapterInformationInternal; // rdi
  __int64 v9; // r8
  ULONG_PTR *v10; // rsi
  KIRQL v11; // al
  _QWORD *v12; // rbx
  KIRQL v13; // r12
  ULONG_PTR *v14; // rbx
  int v15; // esi
  ULONG_PTR v16; // r8
  ULONG_PTR **v17; // rdx
  __int64 v18; // r8
  ULONG_PTR v19; // rax
  void (__fastcall *v20)(__int64, __int64, __int64); // [rsp+78h] [rbp+20h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 96LL);
  LOBYTE(v7) = 1;
  v20 = (void (__fastcall *)(__int64, __int64, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v7);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v10 = (ULONG_PTR *)(AdapterInformationInternal + 56), (ULONG_PTR *)*v10 == v10) )
  {
LABEL_8:
    LOBYTE(v9) = a3;
    v20(a1, a2, v9);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    v12 = (_QWORD *)*v10;
    v13 = v11;
    while ( 1 )
    {
      v14 = v12 - 9;
      if ( v10 == v14 + 9 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
        __writecr8(v13);
        goto LABEL_8;
      }
      if ( v14[8] == a2 )
        break;
      v12 = (_QWORD *)v14[9];
    }
    v15 = *(_DWORD *)a2;
    v16 = v14[9];
    v17 = (ULONG_PTR **)v14[10];
    if ( *(ULONG_PTR **)(v16 + 8) != v14 + 9 || *v17 != v14 + 9 )
      __fastfail(3u);
    *v17 = (ULONG_PTR *)v16;
    *(_QWORD *)(v16 + 8) = v17;
    KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    __writecr8(v13);
    v19 = v14[12];
    if ( *(_QWORD *)(a2 + 8) == -559026163LL && v19 )
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v19 + 48);
    LOBYTE(v18) = a3;
    v20(a1, a2, v18);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v15);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v14[12], v14[2], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v14);
  }
}
