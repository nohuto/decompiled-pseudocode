/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x140588F28
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405883B0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140588C84 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140588D74 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a3 & 1) != 0 )
  {
    v3 = (struct _KEVENT *)(a1 + 40);
  }
  else if ( (a3 & 2) != 0 )
  {
    v3 = &ActiveConnectListLock;
  }
  else
  {
    v3 = *(struct _KEVENT **)(a1 + 24);
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v3, 0, 0);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
