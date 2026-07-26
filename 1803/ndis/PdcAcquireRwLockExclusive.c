/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x1C00FFD64
 * Callers:
 *     PdcTaskClientRequest @ 0x1C00FFBE4 (PdcTaskClientRequest.c)
 *     PdcTaskClientUnregister @ 0x1C00FFCBC (PdcTaskClientUnregister.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
