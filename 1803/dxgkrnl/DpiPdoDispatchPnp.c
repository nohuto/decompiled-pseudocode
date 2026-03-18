/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C009E8D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C02017BC (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C020AA1C (DpiDxgkDdiQueryInterface.c)
 *     DpiPdoHandleStopDevice @ 0x1C020D0B0 (DpiPdoHandleStopDevice.c)
 *     DpiTestQueryInterface @ 0x1C020EE10 (DpiTestQueryInterface.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rbx
  IRP *v5; // rsi
  int Status; // edi
  UCHAR MinorFunction; // cl
  __int64 (__fastcall *v8)(__int64); // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  struct _IO_REMOVE_LOCK *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  _QUERY_INTERFACE v28; // [rsp+20h] [rbp-30h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a2;
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
  if ( MinorFunction > 8u )
  {
    v25 = MinorFunction - 10;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 )
      {
LABEL_38:
        Status = 0;
        goto LABEL_5;
      }
      v27 = v26 - 11;
      if ( !v27 )
      {
        Status = -1073741823;
        goto LABEL_5;
      }
      if ( v27 == 1 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v4 + 483) )
          DpiCheckForOutstandingD3Requests(v4);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
        Status = 0;
        *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
        v17 = *(_DWORD *)(v4 + 236);
        ++*(_DWORD *)(v4 + 276);
        *(_DWORD *)(v4 + 240) = v17;
        *(_DWORD *)(v4 + 236) = 6;
        v18 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v18 + 24) = a1;
        WdLogEvent5_WdEvent(v18);
        goto LABEL_24;
      }
    }
LABEL_58:
    Status = a2->IoStatus.Status;
    goto LABEL_4;
  }
  if ( MinorFunction == 8 )
  {
    v22 = *(_QWORD *)(v4 + 40);
    v23 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
    if ( a2->IoStatus.Status != -1073741637 )
      goto LABEL_6;
    v14 = *(_QWORD *)(v22 + 256) == 0LL;
    v28.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    v28.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v28.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
    v28.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
    v28.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    v28.DeviceUid = *(_DWORD *)(v4 + 504);
    if ( v14 )
      goto LABEL_48;
    LOBYTE(a2) = 1;
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, a2) >= 0 )
    {
      Status = DpiBrightnessQueryInterface(*(PVOID *)(v4 + 32), &v28);
      if ( Status == -1073741198 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v23 + 3728), 1LL);
        Status = DpiDxgkDdiQueryInterface(v22, *(_QWORD *)(v4 + 48), &v28);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v23 + 3728));
      }
      LOBYTE(v24) = 1;
      DpiReleaseCoreSyncAccessSafe(a1, v24);
    }
    if ( Status == -1073741637 )
LABEL_48:
      Status = DpiTestQueryInterface(a1, &v28);
    if ( Status >= 0 )
    {
      CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v28.InterfaceType;
      CurrentStackLocation->Parameters.QueryInterface.Size = v28.Size;
      CurrentStackLocation->Parameters.QueryInterface.Version = v28.Version;
      CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v28.Interface;
      CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v28.InterfaceSpecificData;
    }
LABEL_4:
    if ( Status != -1073741637 )
      goto LABEL_5;
LABEL_6:
    Status = v5->IoStatus.Status;
    goto LABEL_5;
  }
  v10 = MinorFunction - 1;
  if ( !v10 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
    v16 = *(_DWORD *)(v4 + 236);
    ++*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 236) = 5;
    goto LABEL_21;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( *(_DWORD *)(v4 + 240) == 2 )
      DpiPdoHandleStopDevice(a1);
    v19 = (struct _IO_REMOVE_LOCK *)(v4 + 64);
    if ( *(_BYTE *)(v4 + 509) )
    {
      IoReleaseRemoveLockEx(v19, v5, 0x20u);
    }
    else
    {
      IoReleaseRemoveLockAndWaitEx(v19, v5, 0x20u);
      IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 952), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
    }
    *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
    v20 = *(_DWORD *)(v4 + 236);
    ++*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 240) = v20;
    *(_DWORD *)(v4 + 236) = 7;
    v21 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdEvent(v21);
    goto LABEL_38;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 2;
    if ( !v13 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
      v16 = *(_DWORD *)(v4 + 236);
      ++*(_DWORD *)(v4 + 276);
      *(_DWORD *)(v4 + 236) = 3;
      goto LABEL_21;
    }
    if ( v13 == 1 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      v14 = *(_DWORD *)(v4 + 236) == 3;
      goto LABEL_18;
    }
    goto LABEL_58;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 483) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
  v14 = *(_DWORD *)(v4 + 236) == 5;
LABEL_18:
  if ( v14 )
  {
    v15 = *(_DWORD *)(v4 + 240);
    --*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 236) = v15;
    v16 = *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244);
LABEL_21:
    *(_DWORD *)(v4 + 240) = v16;
  }
  Status = 0;
LABEL_24:
  if ( *(_BYTE *)(v4 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
LABEL_5:
  v5->IoStatus.Status = Status;
  IofCompleteRequest(v5, 0);
  return (unsigned int)Status;
}
