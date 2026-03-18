/*
 * XREFs of NtReplyPort @ 0x1404DF24C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _KTHREAD *v6; // rcx
  PVOID v7; // rdi
  char PreviousMode; // r9
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v10, 0, sizeof(v10));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = KeGetCurrentThread();
    v7 = Object;
    LODWORD(v10[6]) = 0;
    v10[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v5 = AlpcpReplyLegacySynchronousRequest((__int64)v10, (unsigned __int64)LpcReply, v6->PreviousMode);
    }
    else
    {
      PreviousMode = v6->PreviousMode;
      LODWORD(v10[6]) = 65537;
      v5 = AlpcpSendMessage((__int64)v10, (__m256i *)LpcReply, 0LL, PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(v7);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
