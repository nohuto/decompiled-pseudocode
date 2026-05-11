/*
 * XREFs of USBCaptureCreatePin @ 0x1C0020F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001008 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     USBCapturePinFormatChange @ 0x1C0020E30 (USBCapturePinFormatChange.c)
 */

__int64 __fastcall USBCaptureCreatePin(struct _KSPIN *PointerToPointerToItem)
{
  _QWORD *Context; // r15
  NTSTATUS v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // r12d
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  PIRP Irp; // rax
  PKSGATE i; // rax
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v13; // rax
  int v15; // [rsp+70h] [rbp+8h]

  Context = PointerToPointerToItem->Context;
  v3 = -1073741637;
  v4 = Context[16];
  v5 = Context[17];
  v15 = *(_DWORD *)(v4 + 212);
  v6 = *(_QWORD *)(*(_QWORD *)(Context[2] + 16LL) + 72LL);
  v7 = 12 * *(_DWORD *)(v6 + 208) + 152;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x11u,
    (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
    PointerToPointerToItem);
  *(_DWORD *)(v5 + 92) = *(_DWORD *)(v6 + 208);
  *(_BYTE *)(v5 + 96) = *(_BYTE *)(v6 + 212);
  if ( (*(_DWORD *)(v4 + 208) & 0xF000) == 0 )
  {
    v3 = 0;
    v8 = (_QWORD *)(v5 + 320);
    v9 = 0;
    while ( v3 >= 0 )
    {
      *(v8 - 1) = PointerToPointerToItem;
      *v8 = v5 + 944 + (unsigned int)(12 * v7) + v15 * v9 * *(_DWORD *)(v5 + 92);
      *(v8 - 3) = v5 + 944 + v7 * v9;
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
      *(v8 - 4) = Irp;
      if ( Irp )
      {
        v3 = KsAddItemToObjectBag(PointerToPointerToItem->Bag, Irp, (PFNKSFREE)IoFreeIrp);
        if ( v3 < 0 )
          IoFreeIrp((PIRP)*(v8 - 4));
      }
      else
      {
        v3 = -1073741670;
      }
      ++v9;
      v8 += 7;
      if ( v9 >= 0xC )
      {
        if ( v3 >= 0 )
        {
          v3 = USBCapturePinFormatChange((PVOID *)PointerToPointerToItem);
          if ( v3 >= 0 )
          {
            *(_QWORD *)(v5 + 128) = v5 + 120;
            *(_QWORD *)(v5 + 120) = v5 + 120;
            *(_QWORD *)(v5 + 112) = v5 + 104;
            *(_QWORD *)(v5 + 104) = v5 + 104;
            KeInitializeMutex((PRKMUTEX)(v5 + 136), 0);
            KeInitializeEvent((PRKEVENT)(v5 + 240), NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)(v5 + 200), NotificationEvent, 0);
            for ( i = KsPinGetAndGate(PointerToPointerToItem);
                  i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1;
                  i = i->NextGate )
            {
              ;
            }
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v5 + 224) = WorkItem;
            if ( !WorkItem )
            {
              v3 = -1073741670;
              break;
            }
            v13 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v5 + 264) = v13;
            if ( !v13 )
            {
              IoFreeWorkItem(*(PIO_WORKITEM *)(v5 + 224));
              v3 = -1073741670;
            }
            if ( v3 >= 0 )
              return (unsigned int)v3;
          }
        }
        break;
      }
    }
  }
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    8u,
    0x12u,
    (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
    PointerToPointerToItem,
    v3);
  return (unsigned int)v3;
}
