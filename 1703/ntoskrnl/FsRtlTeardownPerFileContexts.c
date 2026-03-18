/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x140443370
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 **v1; // rbx
  __int64 *v2; // rcx
  __int64 **v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rsi
  __int64 v6; // rax
  struct _KTHREAD *v7; // rax

  v1 = (__int64 **)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = v1[3];
    if ( v2 )
    {
      ((void (*)(void))v2[4])();
      v1[3] = 0LL;
    }
    v3 = v1 + 1;
    if ( *v3 != (__int64 *)v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      while ( *v3 != (__int64 *)v3 )
      {
        v5 = *v3;
        v6 = **v3;
        if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
          __fastfail(3u);
        *v3 = (__int64 *)v6;
        *(_QWORD *)(v6 + 8) = v3;
        ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ((void (__fastcall *)(__int64 *))v5[4])(v5);
        v7 = KeGetCurrentThread();
        --v7->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      }
      ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExFreePoolWithTag(v1, 0x63665346u);
  }
}
