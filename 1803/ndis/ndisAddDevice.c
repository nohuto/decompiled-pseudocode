/*
 * XREFs of ndisAddDevice @ 0x1C0105194
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0008CB0 (NdisConvertNdisStatusToNtStatus.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001D500 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEBGE@Z @ 0x1C001DEF0 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDI.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C001EED8 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     TraceLoggingProviderEnabled @ 0x1C001EF1C (TraceLoggingProviderEnabled.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C0024848 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     McTemplateK0z @ 0x1C0061EC8 (McTemplateK0z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AC47C (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00B1F20 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisMInvokeRemoveDevice @ 0x1C00B2BC4 (ndisMInvokeRemoveDevice.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00B4A88 (ndisCreateSecurityDescriptor.c)
 *     ndisAllocateEventLog @ 0x1C00B5688 (ndisAllocateEventLog.c)
 *     ndisInitializeConfiguration @ 0x1C00B8CE4 (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C00B9168 (ndisReadRssKeywords.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00C12F0 (ndisMInitializeMiniportBlock.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C2390 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMFindNumaDistances @ 0x1C00C7650 (ndisMFindNumaDistances.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00C7D24 (ndisCreateAdapterInstanceName.c)
 *     ndisQueryDeviceFlags @ 0x1C00C8884 (ndisQueryDeviceFlags.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00CA2BC (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisAllocateDefaultQueue @ 0x1C00CA578 (ndisAllocateDefaultQueue.c)
 *     ndisSetDeviceNames @ 0x1C00CA850 (ndisSetDeviceNames.c)
 *     ndisMInvokeAddDevice @ 0x1C00CAB64 (ndisMInvokeAddDevice.c)
 *     ndisLWMCreateAdapterInstanceName @ 0x1C00EC6F4 (ndisLWMCreateAdapterInstanceName.c)
 *     ndisQueryReferenceBusInterface @ 0x1C00ECD9C (ndisQueryReferenceBusInterface.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4F0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT Pdo, __int64 *a3, __int64 a4, char **a5)
{
  struct _DRIVER_OBJECT *v6; // r12
  int DevicePropertyData; // edi
  char *DeviceExtension; // rbx
  char v10; // r15
  UCHAR v11; // dl
  ULONGLONG v12; // r8
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // r15
  ULONG v14; // eax
  PVOID v15; // r14
  int v16; // esi
  KIRQL v17; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r14
  unsigned int v19; // ecx
  ULONG v20; // r14d
  unsigned __int16 Flags; // ax
  PDEVICE_OBJECT v22; // rdx
  LOGICAL IsDriverVerifying; // eax
  char v24; // r12
  _DEVICE_OBJECT *v25; // r14
  PVOID v26; // rax
  _WORD *v27; // rax
  _WORD *v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  char *v31; // r9
  __int16 v32; // ax
  _WORD *v33; // rax
  struct _MCGEN_TRACE_CONTEXT *v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  int AdapterInstanceName; // eax
  __int64 v38; // rcx
  void *v39; // rdi
  PVOID v40; // rax
  int updated; // eax
  Ndis::BindEngine *v42; // rcx
  KIRQL v43; // si
  struct _LIST_ENTRY *v44; // r14
  BOOLEAN v45; // al
  unsigned __int8 v46; // r14
  KIRQL v47; // al
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // r12
  void *v50; // rcx
  _DEVICE_OBJECT *v51; // rax
  void *v52; // rcx
  _DEVICE_OBJECT *v53; // rax
  char *PoolWithTag; // rax
  _DWORD *v55; // rax
  void *v56; // rcx
  _UNICODE_STRING *v57; // rcx
  NTSTATUS v58; // eax
  _DEVICE_OBJECT *v59; // rcx
  signed __int32 v60[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+41h] [rbp-BFh]
  char v65; // [rsp+42h] [rbp-BEh]
  char v66; // [rsp+43h] [rbp-BDh]
  char v67; // [rsp+44h] [rbp-BCh]
  char v68; // [rsp+45h] [rbp-BBh]
  char v69; // [rsp+46h] [rbp-BAh]
  ULONG RequiredSize; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h]
  PDEVICE_OBJECT v73; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG Type; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+80h] [rbp-80h]
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // [rsp+88h] [rbp-78h]
  char **v78; // [rsp+90h] [rbp-70h]
  PDRIVER_OBJECT v79; // [rsp+98h] [rbp-68h]
  PVOID v80; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING String; // [rsp+A8h] [rbp-58h] BYREF
  char *v82; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v83; // [rsp+C0h] [rbp-40h]
  _QWORD v84[20]; // [rsp+D0h] [rbp-30h] BYREF
  _LIST_ENTRY *Flink; // [rsp+170h] [rbp+70h] BYREF
  __int64 v86; // [rsp+178h] [rbp+78h]
  GUID InterfaceClassGuid; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v88[40]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v89[64]; // [rsp+1B8h] [rbp+B8h] BYREF

  v83 = a3;
  TargetDevice = Pdo;
  v6 = DriverObject;
  v79 = DriverObject;
  v78 = a5;
  v73 = 0LL;
  DeviceObject = 0LL;
  DevicePropertyData = -1073741823;
  InterfaceByInterfaceGuid = 0LL;
  DeviceExtension = 0LL;
  v65 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_NET;
  v66 = 0;
  v80 = 0LL;
  memset(v88, 0, sizeof(v88));
  memset(v89, 0, 0x3CuLL);
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v63 = 0;
  P = 0LL;
  RequiredSize = 0;
  v10 = *(_BYTE *)(a4 + 73);
  Flink = 0LL;
  v86 = 0LL;
  v64 = v10;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x44u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)Pdo);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( v10 )
  {
    DriverObjectExtension = 0LL;
  }
  else
  {
    DriverObjectExtension = 0LL;
    if ( TraceLoggingProviderEnabled(&hProvider, v11, v12) )
    {
      DevicePropertyData = IoGetDevicePropertyData(
                             Pdo,
                             &DEVPKEY_Device_InstanceId,
                             0,
                             0,
                             RequiredSize,
                             0LL,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData == -1073741789 )
      {
        v14 = RequiredSize;
        if ( !RequiredSize )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v14 = RequiredSize;
        }
        P = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x7473444Eu);
        v15 = P;
        if ( P )
        {
          DevicePropertyData = IoGetDevicePropertyData(
                                 Pdo,
                                 &DEVPKEY_Device_InstanceId,
                                 0,
                                 0,
                                 RequiredSize,
                                 P,
                                 &RequiredSize,
                                 &Type);
          if ( DevicePropertyData < 0 )
          {
            ExFreePoolWithTag(v15, 0x7473444Eu);
            P = 0LL;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a4 + 56) )
    DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(v6, (PVOID)0x4E494944);
  if ( v64 )
    DriverObjectExtension = *(struct _NDIS_M_DRIVER_BLOCK **)(a4 + 80);
  if ( !DriverObjectExtension )
  {
    DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(v6, (PVOID)0x4E4D4944);
    if ( !DriverObjectExtension )
      DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(v6, (PVOID)0x4E494944);
  }
  v16 = 1;
  if ( !DriverObjectExtension )
    goto LABEL_103;
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != DriverObjectExtension; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v17);
  v11 = 2;
  v16 = 2;
  if ( i != DriverObjectExtension )
    goto LABEL_158;
  v16 = 3;
  if ( DriverObjectExtension->MajorNdisVersion >= 6u && !*(_BYTE *)(a4 + 24) )
  {
    DevicePropertyData = -1073741491;
    goto LABEL_158;
  }
  v16 = 4;
  v19 = (**(unsigned __int16 **)(a4 + 40) + 5827) & 0xFFFFFFF8;
  *(_DWORD *)&DestinationString.Length = 3932160;
  v20 = v19 + 8 * ndisMaxNumberOfProcessors;
  DestinationString.Buffer = (wchar_t *)v89;
  Flags = DriverObjectExtension->Flags;
  if ( (Flags & 0xC0) != 0 )
  {
    if ( (Flags & 0x40) != 0 )
    {
      CxBlock = DriverObjectExtension->CxBlock;
      v50 = *(void **)(a4 + 64);
      v63 = 1;
      DevicePropertyData = CxBlock->Chars.EvtCxAllocateMiniportBlock(v50, v20, (void **)&v82);
      if ( DevicePropertyData )
        goto LABEL_158;
      DevicePropertyData = CxBlock->Chars.EvtCxGetAssignedFdoName(*(void **)(a4 + 64), &DestinationString);
      if ( DevicePropertyData )
        goto LABEL_158;
      v51 = CxBlock->Chars.EvtCxGetDeviceObject(*(_QWORD *)(a4 + 64));
      v52 = *(void **)(a4 + 64);
      DeviceObject = v51;
      v53 = CxBlock->Chars.EvtCxGetNextDeviceObject(v52);
      DeviceExtension = v82;
      v73 = v53;
      ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)v82, v20);
      *((_DWORD *)DeviceExtension + 30) |= 0x80u;
      v6 = v79;
      *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)(a4 + 64);
    }
    else
    {
      if ( (Flags & 0x80u) == 0 )
      {
        DevicePropertyData = -1073741811;
        if ( (unsigned __int8)byte_1C0099614 >= 2u )
          WPP_SF_qD(0x45u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DriverObjectExtension, Flags);
        goto LABEL_158;
      }
      if ( !v64 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (int)v20, 0x776C444Eu);
      DeviceExtension = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_103:
        DevicePropertyData = -1073741670;
        goto LABEL_158;
      }
      ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)PoolWithTag, v20);
      *((_DWORD *)DeviceExtension + 30) |= 0x100u;
    }
    if ( v78 )
      *v78 = DeviceExtension;
  }
  else
  {
    *(_DWORD *)&String.Length = 2621440;
    String.Buffer = (wchar_t *)v88;
    RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
    DevicePropertyData = RtlIntegerToUnicodeString(
                           _InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex),
                           0xAu,
                           &String);
    if ( DevicePropertyData )
      goto LABEL_158;
    DevicePropertyData = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( DevicePropertyData )
      goto LABEL_158;
    v16 = 5;
    DevicePropertyData = IoCreateDevice(v6, v20, &DestinationString, 0x17u, 0x100u, 0, &DeviceObject);
    if ( DevicePropertyData < 0 )
      goto LABEL_158;
    v16 = 6;
    v22 = TargetDevice;
    DeviceObject->Flags |= 0x10u;
    v22->Flags &= ~0x80u;
    DeviceObject->Flags |= 0x2000u;
    v73 = IoAttachDeviceToDeviceStack(DeviceObject, v22);
    if ( !v73 )
      goto LABEL_107;
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)DeviceExtension, v20);
  }
  *((_OWORD *)DeviceExtension + 252) = *(_OWORD *)a4;
  *((_QWORD *)DeviceExtension + 563) = ndisAllocateEventLog(2u, 1);
  if ( v64 )
    IsDriverVerifying = (DriverObjectExtension->Flags >> 1) & 1;
  else
    IsDriverVerifying = MmIsDriverVerifying(v6);
  if ( ndisVerifierNdisDispatch )
  {
    if ( IsDriverVerifying )
    {
      v16 = 1;
      DevicePropertyData = ndisVerifierNdisDispatch->NdisAllocateVerifierContext(
                             DeviceObject,
                             DeviceExtension,
                             (void **)(DeviceExtension + 24),
                             (void **)(DeviceExtension + 4992));
      if ( DevicePropertyData < 0 )
      {
        if ( (unsigned __int8)byte_1C0099614 >= 2u )
          WPP_SF_q(0x46u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DeviceExtension);
        goto LABEL_158;
      }
    }
  }
  v24 = v64;
  v25 = TargetDevice;
  if ( !v64 )
  {
    *((_QWORD *)DeviceExtension + 482) = TargetDevice;
    *((_QWORD *)DeviceExtension + 481) = DeviceObject;
    *((_QWORD *)DeviceExtension + 483) = v73;
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.Length + 2LL, 0x6E61444Eu);
    *((_QWORD *)DeviceExtension + 530) = v26;
    if ( v26 )
    {
      *((_WORD *)DeviceExtension + 2117) = DestinationString.Length + 2;
      RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4232), &DestinationString);
      if ( !RequiredSize )
      {
LABEL_46:
        v16 = 7;
        DevicePropertyData = IoCreateSymbolicLink(
                               *(PUNICODE_STRING *)(a4 + 40),
                               (PUNICODE_STRING)(DeviceExtension + 4232));
        if ( DevicePropertyData )
        {
          if ( (unsigned __int8)byte_1C0099614 >= 2u )
            WPP_SF_q(0x47u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DeviceExtension);
          if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
            goto LABEL_90;
          LODWORD(Data) = (_DWORD)DeviceExtension;
          Size[0] = 5030;
LABEL_130:
          McTemplateK0qqq(
            v34,
            &AddDeviceFailed,
            &NDIS_PROVIDER_ID,
            DevicePropertyData,
            Size[0],
            (const unsigned int)Data);
          goto LABEL_90;
        }
        v67 = 1;
        *((_QWORD *)DeviceExtension + 623) = 0LL;
        v35 = *(_QWORD *)(a4 + 32);
        if ( v35 && *(_WORD *)v35 )
          ndisQueryDeviceFlags(*(const wchar_t **)(v35 + 8), (_QWORD *)DeviceExtension + 623);
        v36 = *(_DWORD *)(a4 + 60);
        if ( (v36 & 8) != 0 )
        {
          *((_DWORD *)DeviceExtension + 31) |= 0x1000u;
          v36 = *(_DWORD *)(a4 + 60);
        }
        if ( (v36 & 2) != 0 )
        {
          *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
          v36 = *(_DWORD *)(a4 + 60);
        }
        if ( (v36 & 1) != 0 )
        {
          *((_DWORD *)DeviceExtension + 31) |= 2u;
          v36 = *(_DWORD *)(a4 + 60);
        }
        if ( (v36 & 4) != 0 )
          *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
        goto LABEL_58;
      }
      v27 = ExAllocatePoolWithTag(NonPagedPoolNx, RequiredSize, 0x6E61444Eu);
      *((_QWORD *)DeviceExtension + 674) = v27;
      v28 = v27;
      if ( v27 )
      {
        v29 = (unsigned __int64)RequiredSize >> 1;
        if ( v29 )
        {
          v30 = 2147483646 - v29;
          v31 = (char *)((_BYTE *)P - (_BYTE *)v27);
          do
          {
            if ( !(v29 + v30) )
              break;
            v32 = *(_WORD *)&v31[(_QWORD)v28];
            if ( !v32 )
              break;
            *v28++ = v32;
            --v29;
          }
          while ( v29 );
          v33 = v28 - 1;
          if ( v29 )
            v33 = v28;
          *v33 = 0;
        }
        goto LABEL_46;
      }
    }
    v16 = 1;
    DevicePropertyData = -1073741670;
    goto LABEL_90;
  }
LABEL_58:
  ndisSetDeviceNames(
    *(PCUNICODE_STRING *)(a4 + 40),
    (PUNICODE_STRING)(DeviceExtension + 3832),
    (__int64)(DeviceExtension + 3816),
    (wchar_t *)DeviceExtension + 2908);
  v16 = 4;
  if ( v24 )
    AdapterInstanceName = ndisLWMCreateAdapterInstanceName((__int64)DeviceExtension, a4);
  else
    AdapterInstanceName = ndisCreateAdapterInstanceName(
                            (_UNICODE_STRING **)DeviceExtension + 485,
                            (__int64)DeviceExtension,
                            0LL,
                            (_UNICODE_STRING **)DeviceExtension + 555);
  DevicePropertyData = AdapterInstanceName;
  if ( AdapterInstanceName < 0 )
    goto LABEL_158;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qZ(
      0x48u,
      &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids,
      (__int64)DeviceExtension,
      *((const wchar_t **)DeviceExtension + 485));
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    McTemplateK0z(v38, &AddDevice, v12, *(const wchar_t **)(*((_QWORD *)DeviceExtension + 485) + 8LL));
  if ( !v24 )
  {
    if ( (*(_DWORD *)(a4 + 60) & 2) != 0 )
    {
      v16 = 4;
      DevicePropertyData = ndisQueryReferenceBusInterface(v25, &v80);
      if ( DevicePropertyData < 0 )
        goto LABEL_90;
      *((_QWORD *)DeviceExtension + 501) = v80;
    }
    v16 = 4;
    DevicePropertyData = ndisCreateSecurityDescriptor(
                           *((void **)DeviceExtension + 481),
                           (PSECURITY_DESCRIPTOR *)DeviceExtension + 476,
                           5u);
    if ( DevicePropertyData < 0 )
      goto LABEL_90;
  }
  v39 = (void *)*((_QWORD *)DeviceExtension + 503);
  *((_DWORD *)DeviceExtension + 1021) = 1;
  if ( !v39 )
  {
    v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6863444Eu);
    *((_QWORD *)DeviceExtension + 503) = v40;
    v39 = v40;
    if ( !v40 )
    {
      v16 = 1;
      goto LABEL_103;
    }
  }
  memset(v39, 0, 0x88uLL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
    (void **)DeviceExtension + 525,
    (void **)(a4 + 40));
  v16 = 4;
  updated = ndisInitializeConfiguration((__int64)v39, (__int64)DeviceExtension, *v83);
  if ( updated )
    goto LABEL_134;
  Ndis::BindEngine::Initialize(
    (Ndis::BindEngine *)(DeviceExtension + 5136),
    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(v42);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5064), DatapathPaused, PauseReason_Wdf)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, (struct NDIS_PNPTRACE_LOCALS *)v84);
      WPP_SF_Zq(0x49u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (const wchar_t *)v84[1], v84[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5136));
  }
  v69 = 1;
  DevicePropertyData = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( DevicePropertyData < 0 )
  {
LABEL_158:
    if ( v64 )
      goto LABEL_159;
    goto LABEL_90;
  }
  ndisMFindNumaDistances((__int64)DeviceExtension);
  ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( DriverObjectExtension->AddDeviceHandler )
  {
    if ( v24 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v16 = 10;
    updated = ndisMInvokeAddDevice((__int64)DeviceExtension);
    if ( updated )
      goto LABEL_134;
    v65 = 1;
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qq(0x4Au, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, DriverObjectExtension, DeviceExtension);
  }
  if ( (DriverObjectExtension->Flags & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
  {
    v55 = (_DWORD *)*((_QWORD *)DeviceExtension + 474);
    if ( v55 )
    {
      if ( *v55 > 1u )
      {
        v16 = 3;
        DevicePropertyData = -1073741637;
        goto LABEL_158;
      }
      goto LABEL_79;
    }
    v16 = 3;
LABEL_107:
    DevicePropertyData = -1073741823;
    goto LABEL_158;
  }
LABEL_79:
  if ( v24 )
    goto LABEL_82;
  v16 = 8;
  DevicePropertyData = IoRegisterDeviceInterface(
                         *((PDEVICE_OBJECT *)DeviceExtension + 482),
                         &InterfaceClassGuid,
                         0LL,
                         (PUNICODE_STRING)DeviceExtension + 261);
  if ( DevicePropertyData < 0 )
  {
    if ( (unsigned __int8)byte_1C0099614 >= 2u )
      WPP_SF_q(0x4Bu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DeviceExtension);
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
      goto LABEL_90;
    LODWORD(Data) = (_DWORD)DeviceExtension;
    Size[0] = 5279;
    goto LABEL_130;
  }
  v66 = 1;
LABEL_82:
  v43 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid((struct _GUID *)a4);
  v44 = InterfaceByInterfaceGuid;
  if ( InterfaceByInterfaceGuid )
  {
    if ( InterfaceByInterfaceGuid[82].Flink == *(_LIST_ENTRY **)(a4 + 16) )
      goto LABEL_84;
    v44 = 0LL;
    InterfaceByInterfaceGuid = 0LL;
  }
  DevicePropertyData = -1073741072;
LABEL_84:
  KeReleaseSpinLock(&ndisIfListLock, v43);
  v16 = 4;
  if ( DevicePropertyData )
    goto LABEL_158;
  if ( v63 )
  {
    if ( !*(_BYTE *)(a4 + 72) )
      *((_DWORD *)DeviceExtension + 142) |= 8u;
    if ( !BYTE2(v44[93].Flink) )
    {
      DevicePropertyData = -1073741811;
      goto LABEL_158;
    }
    v56 = *(void **)(a4 + 64);
    LODWORD(v86) = HIDWORD(v44[35].Flink);
    Flink = v44[82].Flink;
    DriverObjectExtension->CxBlock->Chars.EvtCxMiniportCompleteAdd(v56, (_NDIS_WDF_COMPLETE_ADD_PARAMS *)&Flink);
  }
  updated = ndisIfUpdateInterfaceOnAddDevice((__int64)v44, (__int64)DeviceExtension);
  if ( updated || (v68 = 1, (updated = ndisAllocateDefaultQueue((__int64)DeviceExtension)) != 0) )
  {
LABEL_134:
    DevicePropertyData = NdisConvertNdisStatusToNtStatus(updated);
    goto LABEL_158;
  }
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  if ( v24 )
  {
LABEL_159:
    v46 = v63;
    goto LABEL_92;
  }
  _InterlockedOr(v60, 0);
  DeviceObject->Flags &= ~0x80u;
LABEL_90:
  v45 = TraceLoggingProviderEnabled(&hProvider, v11, v12);
  v46 = v63;
  if ( v45 )
    NdisTraceLoggingDeviceAdded((__int64)InterfaceByInterfaceGuid, v16, a4, DevicePropertyData, (__int64)P, v63);
LABEL_92:
  if ( P )
    ExFreePoolWithTag(P, 0x7473444Eu);
  if ( DevicePropertyData < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v69 )
      {
        Ndis::BindRegistry::Reload(
          (Ndis::BindRegistry *)DeviceExtension,
          0LL,
          (enum Ndis::ReadBindingsOptions::Flags)v12);
        ndisNotifyBindFailureOnUnboundProtocols((__int64)DeviceExtension);
      }
      if ( v65 )
        ndisMInvokeRemoveDevice((__int64)DeviceExtension);
      if ( v66 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 261);
        *((_QWORD *)DeviceExtension + 523) = 0LL;
      }
      if ( v67 )
      {
        v57 = *(_UNICODE_STRING **)(a4 + 40);
        if ( !v57 )
          v57 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 525);
        v58 = IoDeleteSymbolicLink(v57);
        if ( v58 && (unsigned __int8)byte_1C0099614 >= 4u )
          WPP_SF_qD(0x4Cu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DeviceExtension, v58);
      }
      if ( v68 )
        ndisIfRemoveIfBlockMiniportAssociation(*((_QWORD *)DeviceExtension + 508), (__int64)DeviceExtension, 2);
      ndisMDeleteMiniportBlockOnRemove(DeviceExtension);
      DeviceExtension = 0LL;
    }
    if ( !v46 )
    {
      v59 = DeviceObject;
      if ( DeviceObject )
      {
        if ( v73 )
        {
          IoDetachDevice(v73);
          v59 = DeviceObject;
        }
        IoDeleteDevice(v59);
        DeviceObject = 0LL;
      }
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1048) = *(_DWORD *)(a4 + 28);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
      (void **)DeviceExtension + 526,
      (void **)(a4 + 48));
    v47 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 484) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v47);
    if ( (unsigned __int8)byte_1C0099610 >= 4u )
      WPP_SF_qZ(
        0x4Du,
        &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids,
        (__int64)DeviceExtension,
        *((const wchar_t **)DeviceExtension + 485));
    ndisLogMiniportEvent((__int64)DeviceExtension, 0x1Fu);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x4Eu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)DeviceExtension, DevicePropertyData);
  return (unsigned int)DevicePropertyData;
}
