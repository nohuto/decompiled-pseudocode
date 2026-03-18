/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x14057B2D8
 * Callers:
 *     ObpPreInterceptHandleDuplicate @ 0x14057B1E0 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x1406F0A30 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // r12
  _QWORD *v5; // r14
  struct _EX_RUNDOWN_REF **v6; // r13
  struct _EX_RUNDOWN_REF *v7; // rbp
  struct _KTHREAD *v10; // rax
  struct _EX_RUNDOWN_REF *i; // rbx
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v13; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  _QWORD v17[6]; // [rsp+20h] [rbp-58h] BYREF

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
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection_0(i + 7) )
    {
      ExReleasePushLockEx(v4, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v7 )
      {
        ExReleaseRundownProtection_0(v7);
        v7 = 0LL;
      }
      if ( i[6].Count )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseRundownProtection_0(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            memset(v17, 0, sizeof(v17));
            v17[0] = *(_QWORD *)a2;
            v17[2] = *(_QWORD *)(a2 + 16);
            v17[1] = *(_QWORD *)(a2 + 8);
            LODWORD(v17[4]) = -1073741670;
            ObpCallPostOperationCallbacks(v17, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[3] = 0LL;
        PoolWithTag[2] = i;
        v16 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v16 != a3 )
          __fastfail(3u);
        *v5 = a3;
        v5[1] = v16;
        *v16 = v5;
        a3[1] = v5;
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
      v13 = KeGetCurrentThread();
      --v13->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v4, 0LL);
    }
  }
  ExReleasePushLockEx(v4, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v7 )
    ExReleaseRundownProtection_0(v7);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
