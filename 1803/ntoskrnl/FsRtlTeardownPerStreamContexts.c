/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x140494320
 * Callers:
 *     RawCleanupVcb @ 0x1404942A0 (RawCleanupVcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _LIST_ENTRY *p_FilterContexts; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v7; // rax
  struct _KTHREAD *v8; // rcx
  bool v9; // zf
  struct _KTHREAD *v10; // rax
  struct _KTHREAD *v11; // rcx

  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      ExAcquireFastMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
    }
    while ( 1 )
    {
      Flink = p_FilterContexts->Flink;
      if ( p_FilterContexts->Flink == p_FilterContexts )
        break;
      v7 = Flink->Flink;
      if ( Flink->Blink != p_FilterContexts || v7->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v7;
      v7->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL, v4, v5);
        v8 = KeGetCurrentThread();
        v9 = v8->KernelApcDisable++ == -1;
        if ( v9
          && ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
          && !v8->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      }
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL, v4, v5);
      v11 = KeGetCurrentThread();
      v9 = v11->KernelApcDisable++ == -1;
      if ( v9
        && ($005F0E83B22994B61E86C72E0CE43C71 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
        && !v11->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
