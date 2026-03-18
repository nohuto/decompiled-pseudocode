/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C01165E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C0010E38 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C0116BA0 (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C0116D88 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017A3F8 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v4; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int PnpRegistryValue; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 Status; // rsi
  PUNICODE_STRING v24; // rcx
  int v25; // eax
  void *v26; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v29; // r9
  struct _UNICODE_STRING *v30; // rax
  unsigned int v31; // r15d
  PVOID PoolWithTag; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  void *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _DWORD *StartContext; // rax
  void *v41; // r14
  __int64 v42; // rax
  NTSTATUS SystemThread; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  PIRP v47; // rax
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
  v9 = v7;
  if ( v7 < 0 )
  {
    v11 = 1;
    v10 = WdLogNewEntry5_WdEvent(v8);
    *(_QWORD *)(v10 + 24) = v9;
  }
  else
  {
    v10 = WdLogNewEntry5_WdEvent(v8);
    v11 = NumberOfBytes;
    *(_QWORD *)(v10 + 24) = (unsigned int)NumberOfBytes;
  }
  WdLogEvent5_WdEvent(v10);
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
    v11 = 0;
  if ( !v11
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1136)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    LODWORD(Status) = -1071774664;
    v34 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v34 + 24) = *(_QWORD *)(DeviceExtension + 24);
    WdLogEvent5_WdWarning(v34);
    goto LABEL_47;
  }
  *(_DWORD *)(DeviceExtension + 2552) = v11;
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
      LOBYTE(v29) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v63, v29);
      if ( NumberOfBytes )
      {
        v30 = v63;
        if ( v63 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v30;
        }
      }
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v13, 0LL);
      *(_QWORD *)(v37 + 24) = 0LL;
      WdLogEvent5_WdError(v37);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1136)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&NumberOfBytes, 4u, 2u);
    v19 = PnpRegistryValue;
    if ( PnpRegistryValue >= 0 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        LODWORD(Status) = -1073741823;
        v38 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v38 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v38);
        goto LABEL_47;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdEvent(v20);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status < 0 )
  {
    v39 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v39 + 24) = Status;
    WdLogEvent5_WdError(v39);
    goto LABEL_23;
  }
  v24 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v24 )
  {
    DpiDetermineResourceListSize(v24, &NumberOfBytes);
    v31 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
    *(_QWORD *)(DeviceExtension + 1152) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_61;
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
  v25 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v25;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_20:
    if ( !byte_1C006FA11 )
      goto LABEL_21;
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2557) )
  {
    byte_1C006FA12 = 1;
    goto LABEL_20;
  }
  byte_1C006FA11 = 1;
LABEL_39:
  if ( byte_1C006FA10 || byte_1C006FA12 )
    KeSetEvent(&Event, 0, 0);
LABEL_21:
  if ( !byte_1C006FA30 || *(_BYTE *)(DeviceExtension + 1143) )
    goto LABEL_22;
  StartContext = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
  v41 = StartContext;
  if ( !StartContext )
  {
LABEL_61:
    LODWORD(Status) = -1073741801;
    v42 = WdLogNewEntry5_WdLowResource(v33);
    *(_QWORD *)(v42 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v42);
    goto LABEL_47;
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
                   (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
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
  v46 = WdLogNewEntry5_WdError(v45, v44);
  *(_QWORD *)(v46 + 24) = Status;
  WdLogEvent5_WdError(v46);
  ExFreePoolWithTag(v41, 0x74727044u);
LABEL_23:
  if ( (int)Status < 0 )
  {
LABEL_47:
    if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
    {
      v35 = *(_DWORD *)(DeviceExtension + 240);
      --*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 236) = v35;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension
                                                     + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7)
                                                     + 244);
    }
    v36 = *(void **)(DeviceExtension + 1152);
    if ( v36 )
    {
      ExFreePoolWithTag(v36, 0);
      *(_QWORD *)(DeviceExtension + 1152) = 0LL;
    }
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x802uLL,
      (int)Status,
      *(int *)(DeviceExtension + 236),
      *(int *)(DeviceExtension + 240));
    goto LABEL_27;
  }
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v26 = *(void **)(DeviceExtension + 4984);
    if ( v26 )
    {
      v47 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4896), v26);
      *(_QWORD *)(DeviceExtension + 4984) = 0LL;
      if ( v47 )
      {
        *(_BYTE *)(DeviceExtension + 5056) = 1;
        v47->IoStatus.Status = 0;
        v47->IoStatus.Information = 0LL;
        IofCompleteRequest(v47, 0);
      }
    }
  }
LABEL_27:
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
