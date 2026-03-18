/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1404223C0
 * Callers:
 *     RawCleanupVcb @ 0x140422344 (RawCleanupVcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  void (**ReservedContext)(void); // rcx
  _LIST_ENTRY *p_FilterContexts; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v6; // rax

  if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) >= 0x30 )
  {
    ReservedContext = (void (**)(void))AdvancedHeader->ReservedContext;
    if ( ReservedContext )
    {
      ReservedContext[4]();
      AdvancedHeader->ReservedContext = 0LL;
    }
  }
  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      goto LABEL_7;
LABEL_6:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
    while ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = p_FilterContexts->Flink;
      v6 = p_FilterContexts->Flink->Flink;
      if ( p_FilterContexts->Flink->Blink != p_FilterContexts || v6->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v6;
      v6->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) >= 0x10 )
        goto LABEL_6;
LABEL_7:
      ExAcquireFastMutex(AdvancedHeader->FastMutex);
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
