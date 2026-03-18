/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C011B250
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C0012914 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C011B830 (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C011BA18 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v4; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int PnpRegistryValue; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 Status; // rsi
  PUNICODE_STRING v27; // rcx
  int v28; // eax
  void *v29; // rdx
  void *v30; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v33; // r9
  struct _UNICODE_STRING *v34; // rax
  unsigned int v35; // r15d
  PVOID PoolWithTag; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  void *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  _DWORD *StartContext; // rax
  void *v45; // r14
  __int64 v46; // rax
  NTSTATUS SystemThread; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  PIRP v50; // rax
  PIRP v51; // rax
  ULONG_PTR v52; // [rsp+40h] [rbp-69h]
  struct _UNICODE_STRING *FileName; // [rsp+48h] [rbp-61h]
  __int64 v54; // [rsp+50h] [rbp-59h] BYREF
  int v55; // [rsp+58h] [rbp-51h]
  const wchar_t *v56; // [rsp+60h] [rbp-49h]
  int *v57; // [rsp+68h] [rbp-41h]
  int v58; // [rsp+70h] [rbp-39h]
  int *v59; // [rsp+78h] [rbp-31h]
  int v60; // [rsp+80h] [rbp-29h]
  __int64 v61; // [rsp+88h] [rbp-21h]
  int v62; // [rsp+90h] [rbp-19h]
  _BYTE v63[40]; // [rsp+98h] [rbp-11h] BYREF
  int v65; // [rsp+118h] [rbp+6Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+77h] BYREF
  struct _UNICODE_STRING *v67; // [rsp+128h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v52 = 0LL;
  FileName = 0LL;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &NumberOfBytes);
  v12 = v7;
  if ( v7 < 0 )
  {
    v14 = 1;
    v13 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = v12;
  }
  else
  {
    v13 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
    v14 = NumberOfBytes;
    *(_QWORD *)(v13 + 24) = (unsigned int)NumberOfBytes;
  }
  WdLogEvent5_WdEvent(v13);
  v65 = 1;
  v54 = 0LL;
  v56 = L"MultiMonSupport";
  v55 = 288;
  v57 = &v65;
  v58 = 67108868;
  v59 = &v65;
  v60 = 4;
  v61 = 0LL;
  v62 = 0;
  memset(v63, 0, sizeof(v63));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v54, 0LL, 0LL);
  if ( !v65 )
    v14 = 0;
  if ( !v14
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1136)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    LODWORD(Status) = -1071774664;
    v38 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v38 + 24) = *(_QWORD *)(DeviceExtension + 24);
    WdLogEvent5_WdWarning(v38);
    goto LABEL_48;
  }
  *(_DWORD *)(DeviceExtension + 2552) = v14;
  if ( *(_BYTE *)(DeviceExtension + 1140) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    NumberOfBytes = 0LL;
    v67 = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v52 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &NumberOfBytes, 0LL);
      LOBYTE(v33) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v67, v33);
      if ( NumberOfBytes )
      {
        v34 = v67;
        if ( v67 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v34;
        }
      }
    }
    else
    {
      v41 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v41 + 24) = 0LL;
      WdLogEvent5_WdError(v41);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1136)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&NumberOfBytes, 4u, 2u);
    v23 = PnpRegistryValue;
    if ( PnpRegistryValue >= 0 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        LODWORD(Status) = -1073741823;
        v42 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v42 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v42);
        goto LABEL_48;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdEvent(v24);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v43[3] = *(unsigned int *)(DeviceExtension + 544);
    v43[4] = Status;
    v43[5] = *(unsigned int *)(DeviceExtension + 1108);
    v43[6] = *(unsigned int *)(DeviceExtension + 1112);
    v43[7] = *(_QWORD *)(*(_QWORD *)(DeviceExtension + 40) + 152LL);
    WdLogEvent5_WdError(v43);
    goto LABEL_23;
  }
  v27 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v27 )
  {
    DpiDetermineResourceListSize(v27, &NumberOfBytes);
    v35 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
    *(_QWORD *)(DeviceExtension + 1152) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_62;
    memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v35);
    if ( v4 == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v52;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
  v28 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v28;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_20:
    if ( !byte_1C0060891 )
      goto LABEL_21;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2557) )
  {
    byte_1C0060892 = 1;
    goto LABEL_20;
  }
  byte_1C0060891 = 1;
LABEL_40:
  if ( byte_1C0060890 || byte_1C0060892 )
    KeSetEvent(&Event, 0, 0);
LABEL_21:
  if ( !byte_1C00608B0 || *(_BYTE *)(DeviceExtension + 1143) )
    goto LABEL_22;
  StartContext = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
  v45 = StartContext;
  if ( !StartContext )
  {
LABEL_62:
    LODWORD(Status) = -1073741801;
    v46 = WdLogNewEntry5_WdLowResource(v37);
    *(_QWORD *)(v46 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v46);
    goto LABEL_48;
  }
  *StartContext = 2;
  *((_WORD *)StartContext + 2) = 0;
  StartContext[131] = 0;
  SystemThread = PsCreateSystemThread(
                   (PHANDLE)&NumberOfBytes,
                   0x1FFFFFu,
                   0LL,
                   0LL,
                   0LL,
                   DpiFdoStartAdapterThread,
                   StartContext);
  Status = SystemThread;
  if ( SystemThread >= 0 )
  {
    ZwClose((HANDLE)NumberOfBytes);
LABEL_22:
    *(_DWORD *)(DeviceExtension + 284) = 1;
    *(_DWORD *)(DeviceExtension + 280) = 1;
    PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
    goto LABEL_23;
  }
  v49 = WdLogNewEntry5_WdError(v48);
  *(_QWORD *)(v49 + 24) = Status;
  WdLogEvent5_WdError(v49);
  ExFreePoolWithTag(v45, 0x74727044u);
LABEL_23:
  if ( (int)Status < 0 )
  {
LABEL_48:
    if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
    {
      v39 = *(_DWORD *)(DeviceExtension + 240);
      --*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 236) = v39;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension
                                                     + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7)
                                                     + 244);
    }
    v40 = *(void **)(DeviceExtension + 1152);
    if ( v40 )
    {
      ExFreePoolWithTag(v40, 0);
      *(_QWORD *)(DeviceExtension + 1152) = 0LL;
    }
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x802uLL,
      (int)Status,
      *(int *)(DeviceExtension + 236),
      *(int *)(DeviceExtension + 240));
    goto LABEL_28;
  }
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v29 = *(void **)(DeviceExtension + 5080);
    if ( v29 )
    {
      v50 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4992), v29);
      *(_QWORD *)(DeviceExtension + 5080) = 0LL;
      if ( v50 )
      {
        *(_BYTE *)(DeviceExtension + 5108) = 1;
        v50->IoStatus.Status = 0;
        v50->IoStatus.Information = 0LL;
        IofCompleteRequest(v50, 0);
      }
    }
    v30 = *(void **)(DeviceExtension + 5112);
    if ( v30 )
    {
      v51 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4992), v30);
      *(_QWORD *)(DeviceExtension + 5112) = 0LL;
      if ( v51 )
      {
        *(_BYTE *)(DeviceExtension + 5140) = 1;
        v51->IoStatus.Status = 0;
        v51->IoStatus.Information = 0LL;
        IofCompleteRequest(v51, 0);
      }
    }
  }
LABEL_28:
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
