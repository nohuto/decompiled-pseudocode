/*
 * XREFs of ExUnregisterExtension @ 0x14071F010
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExUnregisterExtension(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rdi
  PRTL_BALANCED_NODE v4; // rax
  PRTL_BALANCED_NODE v5; // rbp
  void (__fastcall *Count)(__int64, unsigned __int64); // rax
  void (__fastcall *v7)(__int64, unsigned __int64); // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_Count = &a1[9].Count;
  v4 = KeAbPreAcquire((ULONG_PTR)&a1[9], 0LL, 0);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (ULONG_PTR)p_Count);
  if ( v5 )
    BYTE2(v5[1].Left) |= 1u;
  Count = (void (__fastcall *)(__int64, unsigned __int64))a1[6].Count;
  if ( Count )
    Count(2LL, a1[7].Count);
  ExWaitForRundownProtectionRelease(a1 + 8);
  v7 = (void (__fastcall *)(__int64, unsigned __int64))a1[6].Count;
  a1[10].Count = 0LL;
  if ( v7 )
    v7(3LL, a1[7].Count);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_Count);
  KeAbPostRelease((ULONG_PTR)p_Count);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ExpDereferenceHost(a1);
}
