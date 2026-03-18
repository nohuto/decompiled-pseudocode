/*
 * XREFs of CiSystemAcquirePushLock @ 0x1C000B308
 * Callers:
 *     CiNdisThrottle @ 0x1C00090E0 (CiNdisThrottle.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall CiSystemAcquirePushLock(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
