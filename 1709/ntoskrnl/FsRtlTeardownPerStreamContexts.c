/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x140546DB0
 * Callers:
 *     RawCleanupVcb @ 0x140546D34 (RawCleanupVcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _LIST_ENTRY *p_FilterContexts; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v5; // rax
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *v9; // rcx

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
    while ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = p_FilterContexts->Flink;
      v5 = p_FilterContexts->Flink->Flink;
      if ( p_FilterContexts->Flink->Blink != p_FilterContexts || v5->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v5;
      v5->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
        v6 = KeGetCurrentThread();
        v7 = v6->KernelApcDisable++ == -1;
        if ( v7
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
          && !v6->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v6);
        }
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      }
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      v9 = KeGetCurrentThread();
      v7 = v9->KernelApcDisable++ == -1;
      if ( v7
        && ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
        && !v9->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v9);
      }
    }
  }
}
