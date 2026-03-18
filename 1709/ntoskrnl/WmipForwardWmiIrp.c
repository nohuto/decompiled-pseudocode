/*
 * XREFs of WmipForwardWmiIrp @ 0x14051F140
 * Callers:
 *     WmipQueryAllData @ 0x14051B564 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14051ECEC (WmipQuerySetExecuteSI.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x1405DF154 (WmipSetTraceNotify.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140742D38 (WmipSendWmiIrpToTraceDeviceList.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     WmipFindRegEntryByProviderId @ 0x1400DEAE4 (WmipFindRegEntryByProviderId.c)
 *     WmipUnreferenceRegEntry @ 0x1400DEBA0 (WmipUnreferenceRegEntry.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     WmipTranslatePDOInstanceNames @ 0x14051BD74 (WmipTranslatePDOInstanceNames.c)
 *     WmipUpdateDeviceStackSize @ 0x14057F644 (WmipUpdateDeviceStackSize.c)
 */

__int64 __fastcall WmipForwardWmiIrp(
        PIRP Irp,
        unsigned __int8 a2,
        unsigned int a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 RegEntryByProviderId; // rax
  __int64 v10; // rsi
  int v11; // eax
  PDEVICE_OBJECT v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  CCHAR v16; // bp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  NTSTATUS Status; // edi
  __int64 result; // rax
  unsigned int v22; // ebx
  unsigned int v23; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  RegEntryByProviderId = WmipFindRegEntryByProviderId(a3);
  v10 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
  {
    v11 = *(_DWORD *)(RegEntryByProviderId + 48);
    if ( (v11 & 0x20000000) != 0 )
    {
      WmipUnreferenceRegEntry(v10);
      result = 3221226134LL;
      if ( (unsigned __int8)(a2 - 1) > 1u )
        return 3221225473LL;
    }
    else
    {
      v12 = *(PDEVICE_OBJECT *)(v10 + 16);
      if ( (v11 & 0x10000000) != 0 )
      {
        v23 = 0;
        v22 = (*(__int64 (__fastcall **)(_QWORD, UNICODE_STRING *, _QWORD, __int64, PDEVICE_OBJECT, unsigned int *))&v12->Type)(
                a2,
                a4,
                a5,
                a6,
                v12,
                &v23);
        Irp->IoStatus.Information = v23;
        Irp->IoStatus.Status = v22;
        WmipUnreferenceRegEntry(v10);
        return v22;
      }
      else
      {
        if ( a2 != 11 && a2 != 8 )
        {
          v13 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnpidGuid;
          if ( !v13 )
            v13 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
          if ( !v13 )
            goto LABEL_38;
          v14 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnPIdInstanceNamesGuid;
          if ( !v14 )
            v14 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
          if ( !v14 )
          {
LABEL_38:
            if ( *(_QWORD *)(v10 + 24) )
              v12 = WmipServiceDeviceObject;
          }
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v12);
        v16 = AttachedDeviceReference->StackSize + 1;
        if ( v16 <= WmipServiceDeviceObject->StackSize || AttachedDeviceReference == WmipServiceDeviceObject )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
          CurrentStackLocation[-1].Context = &Event;
          CurrentStackLocation[-1].Control = -32;
          v18 = Irp->Tail.Overlay.CurrentStackLocation;
          v18[-1].MajorFunction = 23;
          v18[-1].MinorFunction = a2;
          v18[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v12;
          v18[-1].Parameters.QueryDirectory.FileName = a4;
          v18[-1].Parameters.Read.ByteOffset.LowPart = a5;
          v18[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)a6;
          v19 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Status = -1073741637;
          v19->Control |= 1u;
          Status = IofCallDriver(AttachedDeviceReference, Irp);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = Irp->IoStatus.Status;
          }
          if ( Status == -1073741637 )
          {
            Status = -1073741163;
            Irp->IoStatus.Status = -1073741163;
          }
          if ( (a2 == 11 || a2 == 8) && Status >= 0 && Irp->IoStatus.Information > 0x18 )
            WmipTranslatePDOInstanceNames((__int64)Irp, a2, a5, v10);
          WmipUnreferenceRegEntry(v10);
        }
        else
        {
          WmipUnreferenceRegEntry(v10);
          WmipUpdateDeviceStackSize((unsigned __int8)v16);
          Status = -1073741160;
        }
        ObfDereferenceObject(AttachedDeviceReference);
        return (unsigned int)Status;
      }
    }
  }
  else
  {
    result = 3221226134LL;
    if ( (unsigned __int8)(a2 - 1) > 1u )
      return 3221225473LL;
  }
  return result;
}
