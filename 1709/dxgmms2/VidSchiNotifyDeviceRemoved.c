/*
 * XREFs of VidSchiNotifyDeviceRemoved @ 0x1C002C9D8
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     VidSchNotifyDeviceRemoved @ 0x1C002BA70 (VidSchNotifyDeviceRemoved.c)
 */

void __fastcall VidSchiNotifyDeviceRemoved(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  bool v3; // cf
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v8; // rax
  __int64 v9; // rax

  CurrentIrql = KeGetCurrentIrql();
  v3 = CurrentIrql < 2u;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    VidSchNotifyDeviceRemoved(*(PVOID *)(*(_QWORD *)(v4 + 16) + 192LL), *(PVOID *)(*(_QWORD *)(a1 + 40) + 2632LL), 0LL);
  }
  else
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(v4 + 16) + 192LL));
    if ( WorkItem )
    {
      v9 = WdLogNewEntry5_WdEvent(v6, v5);
      WdLogEvent5_WdEvent(v9);
      IoQueueWorkItemEx(
        WorkItem,
        (PIO_WORKITEM_ROUTINE_EX)VidSchNotifyDeviceRemoved,
        DelayedWorkQueue,
        *(PVOID *)(*(_QWORD *)(a1 + 40) + 2632LL));
    }
    else
    {
      v8 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v8);
    }
  }
}
