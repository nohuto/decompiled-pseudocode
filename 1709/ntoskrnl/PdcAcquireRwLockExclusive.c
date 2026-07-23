/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x140727BD4
 * Callers:
 *     PdcTaskClientRequest @ 0x140727AC0 (PdcTaskClientRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v3; // rax
  PRTL_BALANCED_NODE v4; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, (__int64)v3, (__int16 *)a1);
  if ( v4 )
    BYTE2(v4[1].Left) |= 1u;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
