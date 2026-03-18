/*
 * XREFs of NtReplyPort @ 0x14058917C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _KTHREAD *v6; // rax
  char PreviousMode; // r9
  _QWORD v9[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v9, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v9[6]) = 0;
    v9[0] = Object;
    v6 = KeGetCurrentThread();
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v5 = AlpcpReplyLegacySynchronousRequest((__int64)v9, (__int128 *)&LpcReply->u1.s1.DataLength, v6->PreviousMode);
    }
    else
    {
      PreviousMode = v6->PreviousMode;
      LODWORD(v9[6]) = 65537;
      v5 = AlpcpSendMessage((__int64)v9, (__m256i *)LpcReply, 0LL, PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
