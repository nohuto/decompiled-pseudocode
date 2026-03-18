/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1404CE670
 * Callers:
 *     ObpPreInterceptHandleDuplicate @ 0x14055E214 (ObpPreInterceptHandleDuplicate.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x140759E00 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // r14
  _QWORD *v5; // r13
  struct _EX_RUNDOWN_REF **v6; // r12
  struct _EX_RUNDOWN_REF *v7; // rdi
  struct _KTHREAD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EX_RUNDOWN_REF *i; // rbx
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v17; // rax
  struct _KTHREAD *v18; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rcx
  _QWORD v22[6]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1 + 184;
  v5 = 0LL;
  v6 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v4, 0LL);
  for ( i = *v6; i != (struct _EX_RUNDOWN_REF *)v6; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection(i + 7) )
    {
      ExReleasePushLockEx(v4, 0LL, v11, v12);
      v14 = KeGetCurrentThread();
      v15 = v14->SpecialApcDisable++ == -1;
      if ( v15 && ($005F0E83B22994B61E86C72E0CE43C71 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery();
      if ( v7 )
      {
        ExReleaseRundownProtection(v7);
        v7 = 0LL;
      }
      if ( i[6].Count )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseRundownProtection(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            memset(v22, 0, sizeof(v22));
            v22[0] = *(_QWORD *)a2;
            v22[2] = *(_QWORD *)(a2 + 16);
            v22[1] = *(_QWORD *)(a2 + 8);
            LODWORD(v22[4]) = -1073741670;
            ObpCallPostOperationCallbacks(v22, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[2] = i;
        PoolWithTag[3] = 0LL;
        v21 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v21 != a3 )
          __fastfail(3u);
        *PoolWithTag = a3;
        PoolWithTag[1] = v21;
        *v21 = PoolWithTag;
        a3[1] = PoolWithTag;
      }
      Count = (void (__fastcall *)(_QWORD, __int64))i[5].Count;
      if ( Count )
      {
        Count(*(_QWORD *)(i[3].Count + 8), a2);
        if ( i[6].Count )
          v5[3] = *(_QWORD *)(a2 + 24);
        else
          v7 = i + 7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      v17 = KeGetCurrentThread();
      --v17->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v4, 0LL);
    }
  }
  ExReleasePushLockEx(v4, 0LL, v11, v12);
  v18 = KeGetCurrentThread();
  v15 = v18->SpecialApcDisable++ == -1;
  if ( v15 && ($005F0E83B22994B61E86C72E0CE43C71 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  if ( v7 )
    ExReleaseRundownProtection(v7);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
