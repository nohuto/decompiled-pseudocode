/*
 * XREFs of PopNotifyDevice @ 0x140437350
 * Callers:
 *     PopSleepDeviceList @ 0x140437778 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x140437D84 (PopWakeDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopQueueQuerySetIrp @ 0x1400B38D4 (PopQueueQuerySetIrp.c)
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     PopMapInternalActionToIrpAction @ 0x14023D3B4 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14023D594 (PoFxActivateDeviceForSystemTransition.c)
 *     PopLogNotifyDevice @ 0x140244000 (PopLogNotifyDevice.c)
 */

NTSTATUS __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r9
  ULONG v7; // r14d
  int v8; // ebx
  __int64 v9; // r15
  PIRP v10; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v12; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 456) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = PopMapInternalActionToIrpAction(qword_140365768, *(_DWORD *)(a1 + 4), v4);
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
    *v6 = 0LL;
  v8 = *(_DWORD *)(a1 + 4);
  PopAllocateIrp(*(struct _DEVICE_OBJECT **)(a2 + 48), v5, *(_BYTE *)a1, 0, v8, 1, 0, 0LL, 0LL, &Irp, &v15);
  v9 = v15;
  v10 = Irp;
  *(_QWORD *)(v15 + 216) = a2;
  *(_BYTE *)(v9 + 224) = 0;
  CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v8;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
  v12 = v10->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v12[-1].Context = (PVOID)v9;
  v12[-1].Control = -32;
  if ( (xmmword_140401150 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v10);
  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u && v8 > 1 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a2 + 48));
    PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRef, *(_BYTE *)a1 == 2);
    *(_BYTE *)(v9 + 224) = 1;
  }
  return PopQueueQuerySetIrp(v10);
}
