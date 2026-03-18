/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C00B9690
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiTestQueryInterface @ 0x1C01147FC (DpiTestQueryInterface.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C0114860 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C011620C (DpiDxgkDdiQueryInterface.c)
 *     DpiPdoHandleStopDevice @ 0x1C01E8AD0 (DpiPdoHandleStopDevice.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rbx
  int Status; // edi
  UCHAR MinorFunction; // cl
  __int64 (__fastcall *v8)(__int64); // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  struct _IO_REMOVE_LOCK *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  _QUERY_INTERFACE v27; // [rsp+20h] [rbp-30h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  Status = -1073741637;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction < 0x18u )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(v4 + 8LL * MinorFunction + 288);
    if ( v8 )
    {
      Status = v8(a1);
      goto LABEL_4;
    }
  }
  if ( MinorFunction <= 8u )
  {
    if ( MinorFunction == 8 )
    {
      v13 = *(_QWORD *)(v4 + 40);
      v14 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
      if ( a2->IoStatus.Status != -1073741637 )
        goto LABEL_6;
      v19 = *(_QWORD *)(v13 + 256) == 0LL;
      v27.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
      v27.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
      v27.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
      v27.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
      v27.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v27.DeviceUid = *(_DWORD *)(v4 + 504);
      if ( v19 )
        goto LABEL_21;
      if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
      {
        Status = DpiBrightnessQueryInterface(*(PVOID *)(v4 + 32), &v27);
        if ( Status == -1073741198 )
        {
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(v14 + 3728), 1LL);
          Status = DpiDxgkDdiQueryInterface(v13, *(_QWORD *)(v4 + 48), &v27);
          DxgkReleaseAdapterDdiSync(*(_QWORD *)(v14 + 3728));
        }
        DpiReleaseCoreSyncAccessSafe(a1, 1);
      }
      if ( Status == -1073741637 )
LABEL_21:
        Status = DpiTestQueryInterface(a1, &v27);
      if ( Status >= 0 )
      {
        CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v27.InterfaceType;
        CurrentStackLocation->Parameters.QueryInterface.Size = v27.Size;
        CurrentStackLocation->Parameters.QueryInterface.Version = v27.Version;
        CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v27.Interface;
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v27.InterfaceSpecificData;
      }
LABEL_4:
      if ( Status != -1073741637 )
        goto LABEL_5;
LABEL_6:
      Status = a2->IoStatus.Status;
      goto LABEL_5;
    }
    v15 = MinorFunction - 1;
    if ( !v15 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
      v21 = *(_DWORD *)(v4 + 236);
      ++*(_DWORD *)(v4 + 276);
      *(_DWORD *)(v4 + 236) = 5;
      goto LABEL_37;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( *(_DWORD *)(v4 + 240) == 2 )
        DpiPdoHandleStopDevice(a1);
      v24 = (struct _IO_REMOVE_LOCK *)(v4 + 64);
      if ( *(_BYTE *)(v4 + 509) )
      {
        IoReleaseRemoveLockEx(v24, a2, 0x20u);
      }
      else
      {
        IoReleaseRemoveLockAndWaitEx(v24, a2, 0x20u);
        IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 952), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
      v25 = *(_DWORD *)(v4 + 236);
      ++*(_DWORD *)(v4 + 276);
      *(_DWORD *)(v4 + 240) = v25;
      *(_DWORD *)(v4 + 236) = 7;
      v26 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v26 + 24) = a1;
      WdLogEvent5_WdEvent(v26);
      goto LABEL_24;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 2;
      if ( !v18 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v4 + 483) )
          DpiCheckForOutstandingD3Requests(v4);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
        *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
        v21 = *(_DWORD *)(v4 + 236);
        ++*(_DWORD *)(v4 + 276);
        *(_DWORD *)(v4 + 236) = 3;
        goto LABEL_37;
      }
      if ( v18 != 1 )
        goto LABEL_12;
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      v19 = *(_DWORD *)(v4 + 236) == 3;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      v19 = *(_DWORD *)(v4 + 236) == 5;
    }
    if ( !v19 )
    {
LABEL_38:
      Status = 0;
      goto LABEL_40;
    }
    v20 = *(_DWORD *)(v4 + 240);
    --*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 236) = v20;
    v21 = *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244);
LABEL_37:
    *(_DWORD *)(v4 + 240) = v21;
    goto LABEL_38;
  }
  v10 = MinorFunction - 10;
  if ( !v10 )
  {
LABEL_12:
    Status = a2->IoStatus.Status;
    goto LABEL_4;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_24:
    Status = 0;
    goto LABEL_5;
  }
  v12 = v11 - 11;
  if ( !v12 )
  {
    Status = -1073741823;
    goto LABEL_5;
  }
  if ( v12 != 1 )
    goto LABEL_12;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 483) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
  Status = 0;
  *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
  v22 = *(_DWORD *)(v4 + 236);
  ++*(_DWORD *)(v4 + 276);
  *(_DWORD *)(v4 + 240) = v22;
  *(_DWORD *)(v4 + 236) = 6;
  v23 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v23 + 24) = a1;
  WdLogEvent5_WdEvent(v23);
LABEL_40:
  if ( *(_BYTE *)(v4 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
LABEL_5:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
