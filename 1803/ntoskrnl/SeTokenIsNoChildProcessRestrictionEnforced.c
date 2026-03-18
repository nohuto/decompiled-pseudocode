/*
 * XREFs of SeTokenIsNoChildProcessRestrictionEnforced @ 0x1402A0BC4
 * Callers:
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 */

bool __fastcall SeTokenIsNoChildProcessRestrictionEnforced(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v3 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (v3 & 0x80000) != 0;
}
