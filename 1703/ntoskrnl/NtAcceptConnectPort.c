/*
 * XREFs of NtAcceptConnectPort @ 0x140450EDC
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __stdcall NtAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(
         (_DWORD)PortHandle,
         0,
         0,
         0,
         0LL,
         (__int64)PortContext,
         (__int64)ConnectionRequest,
         0LL,
         AcceptConnection,
         (__int64)ServerView,
         (__int64)ClientView,
         1);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v7 == -1073740029 )
    return -1073741813;
  return v7;
}
