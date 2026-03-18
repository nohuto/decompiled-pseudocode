/*
 * XREFs of ExInitializePagedLookasideListInternal @ 0x1400B4390
 * Callers:
 *     ExInitializePagedLookasideList @ 0x1404EC840 (ExInitializePagedLookasideList.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1405E98E0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1405E99C8 (AlpcpInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
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
  KIRQL v13; // bl
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  __int64 result; // rax

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  v12 = a4 | 1;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( !a3 )
    a3 = ExFreePool;
  *(_QWORD *)(a1 + 56) = a3;
  v13 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v14 = (_QWORD *)qword_14035B738;
  v15 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_14035B738 != &ExPagedLookasideListHead )
    __fastfail(3u);
  *v15 = &ExPagedLookasideListHead;
  v15[1] = v14;
  *v14 = v15;
  qword_14035B738 = (__int64)v15;
  KxReleaseSpinLock(&ExPagedLookasideLock);
  result = v13;
  __writecr8(v13);
  return result;
}
