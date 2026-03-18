/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x140481100
 * Callers:
 *     ObpPreInterceptHandleDuplicate @ 0x140446FF4 (ObpPreInterceptHandleDuplicate.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x1406C1FB0 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // r15
  _QWORD *v5; // r13
  struct _EX_RUNDOWN_REF **v6; // r12
  struct _EX_RUNDOWN_REF *v7; // rdi
  struct _KTHREAD *v10; // rax
  struct _EX_RUNDOWN_REF *i; // rbx
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  _QWORD *PoolWithTag; // rax
  _QWORD *v20; // rcx
  _QWORD v21[6]; // [rsp+20h] [rbp-58h] BYREF

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
      ExReleasePushLockEx(v4, 0LL);
      v12 = KeGetCurrentThread();
      v13 = v12->SpecialApcDisable + 1;
      v12->SpecialApcDisable = v13;
      if ( !v13 && ($69CD3F157F9F39B6F7113F2231989901 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
        KiCheckForKernelApcDelivery((__int64)v12);
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
            memset(v21, 0, sizeof(v21));
            v21[0] = *(_QWORD *)a2;
            v21[2] = *(_QWORD *)(a2 + 16);
            v21[1] = *(_QWORD *)(a2 + 8);
            LODWORD(v21[4]) = -1073741670;
            ObpCallPostOperationCallbacks(v21, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[2] = i;
        PoolWithTag[3] = 0LL;
        v20 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v20 != a3 )
          __fastfail(3u);
        *PoolWithTag = a3;
        PoolWithTag[1] = v20;
        *v20 = PoolWithTag;
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
      v15 = KeGetCurrentThread();
      --v15->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v4, 0LL);
    }
  }
  ExReleasePushLockEx(v4, 0LL);
  v16 = KeGetCurrentThread();
  v17 = v16->SpecialApcDisable + 1;
  v16->SpecialApcDisable = v17;
  if ( !v17 && ($69CD3F157F9F39B6F7113F2231989901 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery((__int64)v16);
  if ( v7 )
    ExReleaseRundownProtection(v7);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
