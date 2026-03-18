/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C01F5800
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     WindowsQueryLicenseDWORD @ 0x1C00528B8 (WindowsQueryLicenseDWORD.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 *     DpiDetermineResourceListSize @ 0x1C01FD074 (DpiDetermineResourceListSize.c)
 *     DpiFilterOutVgaResources @ 0x1C01FD65C (DpiFilterOutVgaResources.c)
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
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 Status; // rsi
  __int64 v17; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v19; // r9
  struct _UNICODE_STRING *v20; // rax
  __int64 v21; // rax
  int PnpRegistryValue; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rax
  PUNICODE_STRING v30; // rcx
  size_t v31; // r15
  PVOID PoolWithTag; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  _DWORD *StartContext; // rax
  void *v37; // r14
  NTSTATUS SystemThread; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rax
  void *v43; // rdx
  PIRP v44; // rax
  void *v45; // rdx
  PIRP v46; // rax
  ULONG_PTR v48; // [rsp+40h] [rbp-69h]
  struct _UNICODE_STRING *FileName; // [rsp+48h] [rbp-61h]
  __int64 v50; // [rsp+50h] [rbp-59h] BYREF
  int v51; // [rsp+58h] [rbp-51h]
  const wchar_t *v52; // [rsp+60h] [rbp-49h]
  int *v53; // [rsp+68h] [rbp-41h]
  int v54; // [rsp+70h] [rbp-39h]
  int *v55; // [rsp+78h] [rbp-31h]
  int v56; // [rsp+80h] [rbp-29h]
  __int64 v57; // [rsp+88h] [rbp-21h]
  int v58; // [rsp+90h] [rbp-19h]
  _BYTE v59[40]; // [rsp+98h] [rbp-11h] BYREF
  int v61; // [rsp+118h] [rbp+6Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+77h] BYREF
  struct _UNICODE_STRING *v63; // [rsp+128h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v48 = 0LL;
  FileName = 0LL;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &NumberOfBytes);
  v10 = v7;
  if ( v7 < 0 )
  {
    v12 = 1;
    v11 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
  }
  else
  {
    v11 = WdLogNewEntry5_WdEvent(v9, v8);
    v12 = NumberOfBytes;
    *(_QWORD *)(v11 + 24) = (unsigned int)NumberOfBytes;
  }
  WdLogEvent5_WdEvent(v11);
  v61 = 1;
  v50 = 0LL;
  v52 = L"MultiMonSupport";
  v51 = 288;
  v53 = &v61;
  v54 = 67108868;
  v55 = &v61;
  v56 = 4;
  v57 = 0LL;
  v58 = 0;
  memset(v59, 0, sizeof(v59));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v50, 0LL, 0LL);
  if ( !v61 )
    v12 = 0;
  if ( !v12
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1136)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    LODWORD(Status) = -1071774664;
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(DeviceExtension + 24);
    WdLogEvent5_WdWarning(v17);
LABEL_51:
    v41 = *(_DWORD *)(DeviceExtension + 236);
    if ( v41 == 1 )
    {
      --*(_DWORD *)(DeviceExtension + 276);
      v41 = *(_DWORD *)(DeviceExtension + 240);
      v42 = *(_DWORD *)(DeviceExtension + 276) & 7;
      *(_DWORD *)(DeviceExtension + 236) = v41;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4 * v42 + 244);
    }
    if ( *(_QWORD *)(DeviceExtension + 1152) )
    {
      ExFreePoolWithTag(*(PVOID *)(DeviceExtension + 1152), 0);
      v41 = *(_DWORD *)(DeviceExtension + 236);
      *(_QWORD *)(DeviceExtension + 1152) = 0LL;
    }
    DxgCreateLiveDumpWithWdLogs(0x193u, 2050LL, (int)Status, v41, *(int *)(DeviceExtension + 240));
    goto LABEL_64;
  }
  *(_DWORD *)(DeviceExtension + 2552) = v12;
  if ( *(_BYTE *)(DeviceExtension + 1140) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    NumberOfBytes = 0LL;
    v63 = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v48 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &NumberOfBytes, 0LL);
      LOBYTE(v19) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v63, v19);
      if ( NumberOfBytes )
      {
        v20 = v63;
        if ( v63 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v20;
        }
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v21 + 24) = 0LL;
      WdLogEvent5_WdError(v21);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1136)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&NumberOfBytes, 4u, 2);
    v25 = PnpRegistryValue;
    if ( PnpRegistryValue >= 0 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        LODWORD(Status) = -1073741823;
        v29 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v29 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v29);
        goto LABEL_51;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdEvent(v24, v23);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdEvent(v26);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v28[3] = *(unsigned int *)(DeviceExtension + 544);
    v28[4] = Status;
    v28[5] = *(unsigned int *)(DeviceExtension + 1108);
    v28[6] = *(unsigned int *)(DeviceExtension + 1112);
    v28[7] = *(_QWORD *)(*(_QWORD *)(DeviceExtension + 40) + 152LL);
    WdLogEvent5_WdError(v28);
    goto LABEL_50;
  }
  v30 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v30 )
  {
    DpiDetermineResourceListSize(v30, &NumberOfBytes);
    v31 = (unsigned int)NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
    *(_QWORD *)(DeviceExtension + 1152) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_31:
      LODWORD(Status) = -1073741801;
      v34 = WdLogNewEntry5_WdLowResource(v33);
      *(_QWORD *)(v34 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v34);
      goto LABEL_51;
    }
    memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v31);
    if ( v4 == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v48;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
  v35 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v35;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_39:
    if ( !byte_1C007A791 )
      goto LABEL_43;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2557) )
  {
    byte_1C007A792 = 1;
    goto LABEL_39;
  }
  byte_1C007A791 = 1;
LABEL_40:
  if ( byte_1C007A790 || byte_1C007A792 )
    KeSetEvent(&Event, 0, 0);
LABEL_43:
  if ( byte_1C007A7B0 && !*(_BYTE *)(DeviceExtension + 1143) )
  {
    StartContext = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
    v37 = StartContext;
    if ( !StartContext )
      goto LABEL_31;
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
    if ( SystemThread < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v39);
      *(_QWORD *)(v40 + 24) = Status;
      WdLogEvent5_WdError(v40);
      ExFreePoolWithTag(v37, 0x74727044u);
      goto LABEL_50;
    }
    ZwClose((HANDLE)NumberOfBytes);
  }
  *(_DWORD *)(DeviceExtension + 284) = 1;
  *(_DWORD *)(DeviceExtension + 280) = 1;
  PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
LABEL_50:
  if ( (int)Status < 0 )
    goto LABEL_51;
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v43 = *(void **)(DeviceExtension + 5152);
    if ( v43 )
    {
      v44 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5064), v43);
      *(_QWORD *)(DeviceExtension + 5152) = 0LL;
      if ( v44 )
      {
        *(_BYTE *)(DeviceExtension + 5180) = 1;
        v44->IoStatus.Status = 0;
        v44->IoStatus.Information = 0LL;
        IofCompleteRequest(v44, 0);
      }
    }
    v45 = *(void **)(DeviceExtension + 5184);
    if ( v45 )
    {
      v46 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5064), v45);
      *(_QWORD *)(DeviceExtension + 5184) = 0LL;
      if ( v46 )
      {
        *(_BYTE *)(DeviceExtension + 5212) = 1;
        v46->IoStatus.Status = 0;
        v46->IoStatus.Information = 0LL;
        IofCompleteRequest(v46, 0);
      }
    }
  }
LABEL_64:
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
