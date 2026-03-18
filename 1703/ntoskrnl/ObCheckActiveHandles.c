/*
 * XREFs of ObCheckActiveHandles @ 0x140450584
 * Callers:
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

bool __fastcall ObCheckActiveHandles(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  __int64 v4; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 - 32;
  ExAcquirePushLockExclusiveEx(a1 - 32, 0LL);
  v4 = *(_QWORD *)(a1 - 40);
  ExReleasePushLockEx(v3, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4 != 0;
}
