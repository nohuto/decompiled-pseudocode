/*
 * XREFs of PopNotifyDevice @ 0x140472AA4
 * Callers:
 *     PopWakeDeviceList @ 0x140472790 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404728F4 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopMapInternalActionToIrpAction @ 0x14014E894 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14014E8B8 (PoFxActivateDeviceForSystemTransition.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x140167738 (PopQueueQuerySetIrp.c)
 *     PopLogNotifyDevice @ 0x14027A7EC (PopLogNotifyDevice.c)
 */

NTSTATUS __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r10
  ULONG v7; // r15d
  int v8; // r9d
  int v9; // esi
  __int64 v10; // r14
  PIRP v11; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v13; // rax
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 464) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = PopMapInternalActionToIrpAction(qword_1403A9FE8, *(_DWORD *)(a1 + 4), v4);
  v9 = v8;
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
  {
    *v6 = 0LL;
    v9 = *(_DWORD *)(a1 + 4);
  }
  PopAllocateIrp(*(struct _DEVICE_OBJECT **)(a2 + 48), v5, *(_BYTE *)a1, 0, v9, 1, 0, 0LL, 0LL, &Irp, &v16);
  v10 = v16;
  v11 = Irp;
  *(_QWORD *)(v16 + 216) = a2;
  *(_BYTE *)(v10 + 224) = 0;
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
  v13 = v11->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v13[-1].Context = (PVOID)v10;
  v13[-1].Control = -32;
  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v11);
  if ( v9 > 1 && (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, *(_BYTE *)a1 == 2);
    *(_BYTE *)(v10 + 224) = 1;
  }
  return PopQueueQuerySetIrp(v11);
}
