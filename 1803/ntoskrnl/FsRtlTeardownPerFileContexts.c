/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1405603C0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 **v1; // rbx
  __int64 **v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rsi
  __int64 v7; // rax
  struct _KTHREAD *v8; // rcx
  bool v9; // zf
  struct _KTHREAD *v10; // rax
  struct _KTHREAD *v11; // rcx

  v1 = (__int64 **)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = v1 + 1;
    if ( *v2 != (__int64 *)v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      while ( 1 )
      {
        v6 = *v2;
        if ( *v2 == (__int64 *)v2 )
          break;
        v7 = *v6;
        if ( (__int64 **)v6[1] != v2 || *(__int64 **)(v7 + 8) != v6 )
          __fastfail(3u);
        *v2 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v2;
        ExReleasePushLockEx((ULONG_PTR)v1, 0LL, v4, v5);
        v8 = KeGetCurrentThread();
        v9 = v8->KernelApcDisable++ == -1;
        if ( v9
          && ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
          && !v8->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ((void (__fastcall *)(__int64 *))v6[4])(v6);
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      }
      ExReleasePushLockEx((ULONG_PTR)v1, 0LL, v4, v5);
      v11 = KeGetCurrentThread();
      v9 = v11->KernelApcDisable++ == -1;
      if ( v9
        && ($005F0E83B22994B61E86C72E0CE43C71 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
        && !v11->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    ExFreePoolWithTag(v1, 0x63665346u);
  }
}
