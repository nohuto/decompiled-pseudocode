/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x140571E20
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 **v1; // rbx
  __int64 **v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rsi
  __int64 v5; // rax
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *v9; // rcx

  v1 = (__int64 **)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = v1 + 1;
    if ( *v2 != (__int64 *)v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      while ( *v2 != (__int64 *)v2 )
      {
        v4 = *v2;
        v5 = **v2;
        if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
          __fastfail(3u);
        *v2 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v2;
        ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
        v6 = KeGetCurrentThread();
        v7 = v6->KernelApcDisable++ == -1;
        if ( v7
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
          && !v6->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v6);
        }
        ((void (__fastcall *)(__int64 *))v4[4])(v4);
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      }
      ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
      v9 = KeGetCurrentThread();
      v7 = v9->KernelApcDisable++ == -1;
      if ( v7
        && ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
        && !v9->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v9);
      }
    }
    ExFreePoolWithTag(v1, 0x63665346u);
  }
}
