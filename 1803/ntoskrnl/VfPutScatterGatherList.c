/*
 * XREFs of VfPutScatterGatherList @ 0x140819BB0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140817148 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140817310 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140817430 (VF_ASSERT_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x14081ABC8 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 */

void __fastcall VfPutScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  __int64 RealDmaOperation; // rax
  __int64 v7; // rdx
  __int64 AdapterInformationInternal; // rdi
  __int64 v9; // r8
  _QWORD *v10; // rbx
  KIRQL v11; // al
  _QWORD *v12; // rcx
  KIRQL v13; // r12
  ULONG_PTR *v14; // rsi
  _QWORD *v15; // rdx
  int v16; // ebx
  _QWORD *v17; // rax
  __int64 v18; // r8
  ULONG_PTR v19; // rax
  void (__fastcall *v20)(__int64, __int64, __int64); // [rsp+78h] [rbp+20h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 96LL);
  LOBYTE(v7) = 1;
  v20 = (void (__fastcall *)(__int64, __int64, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v7);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v10 = (_QWORD *)(AdapterInformationInternal + 56), (_QWORD *)*v10 == v10) )
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
      if ( v10 == v12 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
        __writecr8(v13);
        goto LABEL_8;
      }
      if ( v14[8] == a2 )
        break;
      v12 = (_QWORD *)*v12;
    }
    v15 = (_QWORD *)*v12;
    v16 = *(_DWORD *)a2;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v17 = (_QWORD *)v14[10], (_QWORD *)*v17 != v12) )
      __fastfail(3u);
    *v17 = v15;
    v15[1] = v17;
    KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    __writecr8(v13);
    if ( *(_QWORD *)(a2 + 8) == -559026163LL )
    {
      v19 = v14[12];
      if ( v19 )
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v19 + 48);
    }
    LOBYTE(v18) = a3;
    v20(a1, a2, v18);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v16);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v14[12], v14[2], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v14);
  }
}
