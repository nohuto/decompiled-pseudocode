/*
 * XREFs of IoReplacePartitionUnit @ 0x1406BF4D0
 * Callers:
 *     NtReplacePartitionUnit @ 0x140295730 (NtReplacePartitionUnit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 */

NTSTATUS __stdcall IoReplacePartitionUnit(PDEVICE_OBJECT TargetPdo, PDEVICE_OBJECT SparePdo, ULONG Flags)
{
  _BYTE v7[80]; // [rsp+30h] [rbp-50h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_QWORD *)v7 = TargetPdo;
  *(_QWORD *)&v7[8] = SparePdo;
  *(_DWORD *)&v7[16] = Flags;
  *(_DWORD *)&v7[20] = -1073741823;
  KeInitializeEvent((PRKEVENT)&v7[24], NotificationEvent, 0);
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpReplacePartitionUnit(v7);
  }
  else
  {
    *(_QWORD *)&v7[48] = 0LL;
    *(_QWORD *)&v7[64] = PnpReplacePartitionUnit;
    *(_QWORD *)&v7[72] = v7;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&v7[48], DelayedWorkQueue);
    KeWaitForSingleObject(&v7[24], Executive, 0, 0, 0LL);
  }
  return *(_DWORD *)&v7[20];
}
