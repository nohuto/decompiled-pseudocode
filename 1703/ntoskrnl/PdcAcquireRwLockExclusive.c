/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x1406F0134
 * Callers:
 *     PdcTaskClientRequest @ 0x1406F0020 (PdcTaskClientRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v3, (ULONG_PTR)a1);
  if ( v4 )
    v4[26] |= 1u;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
