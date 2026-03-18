/*
 * XREFs of ObCheckActiveHandles @ 0x14058FE88
 * Callers:
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

bool __fastcall ObCheckActiveHandles(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdi
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 - 32;
  ExAcquirePushLockExclusiveEx(a1 - 32, 0LL);
  v4 = *(_QWORD *)(a1 - 40);
  ExReleasePushLockEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v4 != 0;
}
