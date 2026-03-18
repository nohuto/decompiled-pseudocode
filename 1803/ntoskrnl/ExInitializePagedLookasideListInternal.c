/*
 * XREFs of ExInitializePagedLookasideListInternal @ 0x1400C7700
 * Callers:
 *     ExInitializePagedLookasideList @ 0x140576040 (ExInitializePagedLookasideList.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14064E890 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14064F384 (AlpcpInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 */

__int64 __fastcall ExInitializePagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  int v12; // ebx
  PVOID (__stdcall *v13)(POOL_TYPE, SIZE_T, ULONG); // rax
  void (__stdcall *v14)(PVOID); // rax
  KIRQL v15; // bl
  _QWORD *v16; // rax
  _QWORD *v17; // rbp
  __int64 result; // rax

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  v12 = a4 | 1;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  v13 = ExAllocatePoolWithTag;
  if ( a2 )
    v13 = a2;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 48) = v13;
  v14 = ExFreePool;
  if ( a3 )
    v14 = a3;
  *(_QWORD *)(a1 + 56) = v14;
  *(_QWORD *)(a1 + 80) = 0LL;
  v15 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v16 = (_QWORD *)qword_14039ED28;
  v17 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_14039ED28 != &ExPagedLookasideListHead )
    __fastfail(3u);
  *v17 = &ExPagedLookasideListHead;
  v17[1] = v16;
  *v16 = v17;
  qword_14039ED28 = (__int64)v17;
  KxReleaseSpinLock(&ExPagedLookasideLock);
  result = v15;
  __writecr8(v15);
  return result;
}
