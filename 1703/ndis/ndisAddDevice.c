/*
 * XREFs of ndisAddDevice @ 0x1C00F6250
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C00106D0 (NdisConvertNdisStatusToNtStatus.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001455C (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEBG@Z @ 0x1C0014AA0 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDI.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C0015924 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     TraceLoggingProviderEnabled @ 0x1C0015A14 (TraceLoggingProviderEnabled.c)
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001DD24 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     WPP_SF_qZ @ 0x1C004AB78 (WPP_SF_qZ.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     Template_z @ 0x1C0061694 (Template_z.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A64A4 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00A9958 (ndisMInitializeMiniportBlock.c)
 *     ndisAllocateEventLog @ 0x1C00A9B24 (ndisAllocateEventLog.c)
 *     ndisSetDeviceNames @ 0x1C00A9CD4 (ndisSetDeviceNames.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00A9D44 (ndisCreateAdapterInstanceName.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00A9F88 (ndisCreateSecurityDescriptor.c)
 *     ndisMInvokeAddDevice @ 0x1C00AA4D0 (ndisMInvokeAddDevice.c)
 *     ndisAllocateDefaultQueue @ 0x1C00AA534 (ndisAllocateDefaultQueue.c)
 *     ndisMFindNumaDistances @ 0x1C00ABB14 (ndisMFindNumaDistances.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AC27C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisInitializeConfiguration @ 0x1C00ADB74 (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C00ADFC8 (ndisReadRssKeywords.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B2180 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisQueryDeviceFlags @ 0x1C00B8680 (ndisQueryDeviceFlags.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00BEA64 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00BED60 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisMInvokeRemoveDevice @ 0x1C00BF6B0 (ndisMInvokeRemoveDevice.c)
 *     ndisQueryReferenceBusInterface @ 0x1C00E058C (ndisQueryReferenceBusInterface.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14D8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(
        PDRIVER_OBJECT DriverObject,
        PDEVICE_OBJECT Pdo,
        const WCHAR **a3,
        __int64 a4,
        __int64 a5)
{
  int DevicePropertyData; // edi
  char *DeviceExtension; // rbx
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // r13
  UCHAR v11; // dl
  TraceLoggingHProvider v12; // rcx
  ULONGLONG v13; // r8
  PVOID Data; // rax
  void *v15; // r12
  UCHAR v16; // dl
  const struct _TlgProvider_t *v17; // rcx
  ULONGLONG v18; // r8
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // r15
  int v20; // esi
  KIRQL v21; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r13
  unsigned int v23; // ecx
  ULONG v24; // r12d
  struct _DRIVER_OBJECT *v25; // r13
  PDEVICE_OBJECT v26; // rdx
  _DEVICE_OBJECT *v27; // r12
  PVOID PoolWithTag; // rax
  __int64 v29; // rcx
  const wchar_t **v30; // r12
  void *v31; // rdi
  PVOID v32; // rax
  int v33; // eax
  const UNICODE_STRING *v34; // rdi
  Ndis::BindEngine *v35; // rcx
  KIRQL v36; // si
  int updated; // eax
  char v38; // r15
  enum Ndis::ReadBindingsOptions::Flags v39; // r8d
  KIRQL v40; // al
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // r13
  void *v43; // rcx
  _DEVICE_OBJECT *v44; // rax
  void *v45; // rcx
  _DEVICE_OBJECT *v46; // rax
  _DWORD *v47; // rax
  void *v48; // rcx
  _UNICODE_STRING *v49; // rcx
  NTSTATUS v50; // eax
  _DEVICE_OBJECT *v51; // rcx
  signed __int32 v52[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  char v54; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT v55; // [rsp+48h] [rbp-B8h]
  char v56; // [rsp+50h] [rbp-B0h]
  char v57; // [rsp+51h] [rbp-AFh]
  char v58; // [rsp+52h] [rbp-AEh]
  char v59; // [rsp+53h] [rbp-ADh]
  struct _LIST_ENTRY *v60; // [rsp+58h] [rbp-A8h]
  char v61; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-98h] BYREF
  ULONG RequiredSize; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  ULONG Type; // [rsp+90h] [rbp-70h] BYREF
  PDRIVER_OBJECT DriverObjecta; // [rsp+98h] [rbp-68h]
  PDEVICE_OBJECT TargetDevice; // [rsp+A0h] [rbp-60h]
  PVOID v69; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+B0h] [rbp-50h] BYREF
  _UNICODE_STRING String; // [rsp+C0h] [rbp-40h] BYREF
  char *v72; // [rsp+D0h] [rbp-30h] BYREF
  const WCHAR **v73; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING v74; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v75; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v76; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v77[20]; // [rsp+110h] [rbp+10h] BYREF
  _LIST_ENTRY *Flink; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  GUID InterfaceClassGuid; // [rsp+1C0h] [rbp+C0h] BYREF
  _OWORD v81[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v82; // [rsp+1F0h] [rbp+F0h]
  wchar_t v83; // [rsp+1F4h] [rbp+F4h]
  _OWORD v84[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  int v85; // [rsp+218h] [rbp+118h]
  wchar_t v86; // [rsp+21Ch] [rbp+11Ch]
  _OWORD v87[2]; // [rsp+220h] [rbp+120h] BYREF
  int v88; // [rsp+240h] [rbp+140h]
  wchar_t v89; // [rsp+244h] [rbp+144h]
  _OWORD v90[2]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v91; // [rsp+268h] [rbp+168h]
  wchar_t v92; // [rsp+270h] [rbp+170h]
  _BYTE v93[40]; // [rsp+278h] [rbp+178h] BYREF
  _BYTE v94[64]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v73 = a3;
  TargetDevice = Pdo;
  DriverObjecta = DriverObject;
  *(_QWORD *)&String2.Length = a5;
  DeviceObject = 0LL;
  v60 = 0LL;
  DevicePropertyData = -1073741823;
  v54 = 0;
  DeviceExtension = 0LL;
  v56 = 0;
  InterfaceByInterfaceGuid = 0LL;
  v69 = 0LL;
  InterfaceClassGuid = GUID_DEVINTERFACE_NET;
  memset(v93, 0, sizeof(v93));
  memset(v94, 0, 0x3CuLL);
  v57 = 0;
  Flink = 0LL;
  v79 = 0LL;
  v58 = 0;
  v61 = 0;
  v59 = 0;
  P = 0LL;
  RequiredSize = 0;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x41u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)Pdo);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( TraceLoggingProviderEnabled(v12, v11, v13) )
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
      Data = ExAllocatePoolWithTag(NonPagedPoolNx, RequiredSize, 0x7473444Eu);
      P = Data;
      v15 = Data;
      if ( Data )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_InstanceId,
                               0,
                               0,
                               RequiredSize,
                               Data,
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
  if ( !*(_BYTE *)(a4 + 56)
    || (DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(
                                                                 DriverObject,
                                                                 (PVOID)0x4E494944)) == 0LL )
  {
    DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
    if ( !DriverObjectExtension )
      DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
  }
  v20 = 1;
  if ( !DriverObjectExtension )
  {
    DevicePropertyData = -1073741670;
LABEL_84:
    v27 = 0LL;
LABEL_86:
    v38 = 0;
    goto LABEL_68;
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != DriverObjectExtension; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v21);
  v20 = 2;
  if ( i != DriverObjectExtension )
  {
LABEL_83:
    InterfaceByInterfaceGuid = 0LL;
    goto LABEL_84;
  }
  v20 = 3;
  if ( DriverObjectExtension->MajorNdisVersion >= 6u && !*(_BYTE *)(a4 + 24) )
  {
    DevicePropertyData = -1073741491;
    goto LABEL_83;
  }
  v20 = 4;
  v23 = (**(unsigned __int16 **)(a4 + 40) + 5851) & 0xFFFFFFF8;
  *(_DWORD *)&DestinationString.Length = 3932160;
  v24 = v23 + 8 * ndisMaxNumberOfProcessors;
  DestinationString.Buffer = (wchar_t *)v94;
  if ( (DriverObjectExtension->Flags & 0x40) != 0 )
  {
    CxBlock = DriverObjectExtension->CxBlock;
    v43 = *(void **)(a4 + 64);
    v59 = 1;
    DevicePropertyData = CxBlock->Chars.EvtCxAllocateMiniportBlock(v43, v24, (void **)&v72);
    if ( !DevicePropertyData )
    {
      DevicePropertyData = CxBlock->Chars.EvtCxGetAssignedFdoName(*(void **)(a4 + 64), &DestinationString);
      if ( !DevicePropertyData )
      {
        v44 = CxBlock->Chars.EvtCxGetDeviceObject(*(_QWORD *)(a4 + 64));
        v45 = *(void **)(a4 + 64);
        DeviceObject = v44;
        v46 = CxBlock->Chars.EvtCxGetNextDeviceObject(v45);
        DeviceExtension = v72;
        v55 = v46;
        ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)v72, v24);
        *((_DWORD *)DeviceExtension + 30) |= 0x80u;
        v25 = DriverObjecta;
        *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)(a4 + 64);
        if ( *(_QWORD *)&String2.Length )
          **(_QWORD **)&String2.Length = DeviceExtension;
        goto LABEL_24;
      }
    }
LABEL_136:
    InterfaceByInterfaceGuid = 0LL;
    v27 = 0LL;
    v38 = 0;
    goto LABEL_68;
  }
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)v93;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  DevicePropertyData = RtlIntegerToUnicodeString(
                         _InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex),
                         0xAu,
                         &String);
  if ( DevicePropertyData )
    goto LABEL_83;
  DevicePropertyData = RtlAppendUnicodeStringToString(&DestinationString, &String);
  if ( DevicePropertyData )
    goto LABEL_83;
  v20 = 5;
  v25 = DriverObjecta;
  DevicePropertyData = IoCreateDevice(DriverObjecta, v24, &DestinationString, 0x17u, 0x100u, 0, &DeviceObject);
  if ( DevicePropertyData < 0 )
    goto LABEL_136;
  v20 = 6;
  v26 = TargetDevice;
  DeviceObject->Flags |= 0x10u;
  v26->Flags &= ~0x80u;
  DeviceObject->Flags |= 0x2000u;
  v55 = IoAttachDeviceToDeviceStack(DeviceObject, v26);
  if ( !v55 )
  {
    DevicePropertyData = -1073741823;
    InterfaceByInterfaceGuid = 0LL;
    v27 = 0LL;
    goto LABEL_86;
  }
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)DeviceExtension, v24);
LABEL_24:
  *((_OWORD *)DeviceExtension + 252) = *(_OWORD *)a4;
  v27 = v55;
  *((_QWORD *)DeviceExtension + 563) = ndisAllocateEventLog(2u, 1);
  *((_QWORD *)DeviceExtension + 482) = TargetDevice;
  *((_QWORD *)DeviceExtension + 481) = DeviceObject;
  *((_QWORD *)DeviceExtension + 483) = v27;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.Length + 2LL, 0x6E61444Eu);
  *((_QWORD *)DeviceExtension + 530) = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_WORD *)DeviceExtension + 2117) = DestinationString.Length + 2;
    RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4232), &DestinationString);
    if ( ndisVerifierNdisDispatch )
    {
      if ( MmIsDriverVerifying(v25) )
      {
        v20 = 1;
        DevicePropertyData = ndisVerifierNdisDispatch->NdisAllocateVerifierContext(
                               DeviceObject,
                               DeviceExtension,
                               (void **)(DeviceExtension + 24),
                               (void **)(DeviceExtension + 4992));
        if ( DevicePropertyData < 0 )
        {
          if ( (unsigned __int8)byte_1C0092614 >= 2u )
            WPP_SF_q(0x42u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeviceExtension);
          goto LABEL_98;
        }
      }
    }
    v20 = 7;
    DevicePropertyData = IoCreateSymbolicLink(*(PUNICODE_STRING *)(a4 + 40), (PUNICODE_STRING)(DeviceExtension + 4232));
    if ( DevicePropertyData )
    {
      if ( (unsigned __int8)byte_1C0092614 >= 2u )
        WPP_SF_q(0x43u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeviceExtension);
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        Template_qqq((__int64)v17, &AddDeviceFailed, &NDIS_PROVIDER_ID, DevicePropertyData, 41, (char)DeviceExtension);
      goto LABEL_98;
    }
    v57 = 1;
    *((_QWORD *)DeviceExtension + 623) = 0LL;
    v29 = *(_QWORD *)(a4 + 32);
    if ( v29 && *(_WORD *)v29 )
      ndisQueryDeviceFlags(*(const wchar_t **)(v29 + 8), (_QWORD *)DeviceExtension + 623);
    if ( (*(_DWORD *)(a4 + 60) & 8) != 0 )
      *((_DWORD *)DeviceExtension + 31) |= 0x1000u;
    if ( (*(_DWORD *)(a4 + 60) & 2) != 0 )
      *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
    if ( (*(_DWORD *)(a4 + 60) & 1) != 0 )
      *((_DWORD *)DeviceExtension + 31) |= 2u;
    if ( (*(_DWORD *)(a4 + 60) & 4) != 0 )
      *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
    ndisSetDeviceNames(
      *(PCUNICODE_STRING *)(a4 + 40),
      (PUNICODE_STRING)(DeviceExtension + 3832),
      (__int64)(DeviceExtension + 3816),
      (wchar_t *)DeviceExtension + 2920);
    v30 = (const wchar_t **)(DeviceExtension + 3880);
    v20 = 4;
    DevicePropertyData = ndisCreateAdapterInstanceName(
                           (_UNICODE_STRING **)DeviceExtension + 485,
                           (__int64)DeviceExtension,
                           0LL,
                           (_UNICODE_STRING **)DeviceExtension + 555);
    if ( DevicePropertyData < 0 )
    {
      InterfaceByInterfaceGuid = 0LL;
      v38 = 0;
      goto LABEL_67;
    }
    if ( (unsigned __int8)byte_1C0092614 >= 4u )
      WPP_SF_qZ(0x44u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeviceExtension, *v30);
    if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
      Template_z((__int64)v17, &AddDevice, v18, *((const wchar_t **)*v30 + 1));
    if ( (*(_DWORD *)(a4 + 60) & 2) != 0 )
    {
      DevicePropertyData = ndisQueryReferenceBusInterface(TargetDevice, &v69);
      if ( DevicePropertyData < 0 )
      {
        InterfaceByInterfaceGuid = 0LL;
        goto LABEL_100;
      }
      *((_QWORD *)DeviceExtension + 501) = v69;
    }
    v20 = 4;
    DevicePropertyData = ndisCreateSecurityDescriptor(
                           *((void **)DeviceExtension + 481),
                           (PSECURITY_DESCRIPTOR *)DeviceExtension + 476,
                           5u);
    if ( DevicePropertyData >= 0 )
    {
      v31 = (void *)*((_QWORD *)DeviceExtension + 503);
      *((_DWORD *)DeviceExtension + 1021) = 1;
      if ( v31
        || (v32 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6863444Eu),
            *((_QWORD *)DeviceExtension + 503) = v32,
            (v31 = v32) != 0LL) )
      {
        memset(v31, 0, 0x88uLL);
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
          (void **)DeviceExtension + 525,
          (void **)(a4 + 40));
        v20 = 4;
        v33 = ndisInitializeConfiguration((__int64)v31, (__int64)DeviceExtension, *v73);
        if ( !v33 )
        {
          if ( !ndisDefaultNapsState )
          {
            v34 = (const UNICODE_STRING *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 473) + 40LL) + 56LL);
            v92 = aDriverMrvlpcie[20];
            v90[0] = *(_OWORD *)L"\\Driver\\mrvlpcie8897";
            *(_DWORD *)&String2.Length = 2752552;
            String2.Buffer = (wchar_t *)v90;
            v82 = *(_DWORD *)L"94";
            v83 = aDriverQcwlan89_1[18];
            v74.Buffer = (wchar_t *)v81;
            v85 = *(_DWORD *)L"09";
            v86 = aDriverQcwlan89[18];
            v90[1] = *(_OWORD *)L"mrvlpcie8897";
            v75.Buffer = (wchar_t *)v84;
            v88 = *(_DWORD *)L"16";
            v91 = *(_QWORD *)L"8897";
            v89 = aDriverQcwlan89_0[18];
            v81[1] = *(_OWORD *)L"QCWLAN8994";
            v76.Buffer = (wchar_t *)v87;
            *(_DWORD *)&v74.Length = 2490404;
            v81[0] = *(_OWORD *)L"\\Driver\\QCWLAN8994";
            *(_DWORD *)&v75.Length = 2490404;
            *(_DWORD *)&v76.Length = 2490404;
            v84[1] = *(_OWORD *)L"QCWLAN8909";
            v84[0] = *(_OWORD *)L"\\Driver\\QCWLAN8909";
            v87[1] = *(_OWORD *)L"QCWLAN8916";
            v87[0] = *(_OWORD *)L"\\Driver\\QCWLAN8916";
            if ( RtlEqualUnicodeString(v34, &String2, 1u)
              || RtlEqualUnicodeString(v34, &v74, 1u)
              || RtlEqualUnicodeString(v34, &v75, 1u)
              || RtlEqualUnicodeString(v34, &v76, 1u) )
            {
              *((_DWORD *)DeviceExtension + 984) = *((_DWORD *)DeviceExtension + 984) & 0xFFFF0FFF | 0xA000;
            }
          }
          Ndis::BindEngine::Initialize(
            (Ndis::BindEngine *)(DeviceExtension + 5136),
            (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
          {
            Ndis::BindEngine::BeginPolicyUpdates(v35);
            if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5064), DatapathPaused, PauseReason_Wdf)
              && (unsigned __int8)byte_1C0092623 >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                (struct NDIS_PNPTRACE_LOCALS *)v77);
              WPP_SF_Zq(0x45u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (const wchar_t *)v77[1], v77[0]);
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5136));
          }
          v61 = 1;
          DevicePropertyData = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( DevicePropertyData < 0 )
            goto LABEL_98;
          ndisMFindNumaDistances((__int64)DeviceExtension);
          ndisReadRssKeywords((struct _TlgProvider_t *)DeviceExtension);
          if ( !DriverObjectExtension->AddDeviceHandler )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_qq(0x46u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, DriverObjectExtension, DeviceExtension);
LABEL_58:
            if ( (DriverObjectExtension->Flags & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
            {
              v47 = (_DWORD *)*((_QWORD *)DeviceExtension + 474);
              if ( !v47 )
              {
                DevicePropertyData = -1073741823;
LABEL_118:
                v20 = 3;
LABEL_119:
                InterfaceByInterfaceGuid = v60;
                goto LABEL_120;
              }
              if ( *v47 > 1u )
              {
                DevicePropertyData = -1073741637;
                goto LABEL_118;
              }
            }
            v20 = 8;
            DevicePropertyData = IoRegisterDeviceInterface(
                                   *((PDEVICE_OBJECT *)DeviceExtension + 482),
                                   &InterfaceClassGuid,
                                   0LL,
                                   (PUNICODE_STRING)DeviceExtension + 261);
            if ( DevicePropertyData < 0 )
            {
              if ( (unsigned __int8)byte_1C0092614 >= 2u )
                WPP_SF_q(0x47u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeviceExtension);
              if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
                Template_qqq(
                  (__int64)v17,
                  &AddDeviceFailed,
                  &NDIS_PROVIDER_ID,
                  DevicePropertyData,
                  41,
                  (char)DeviceExtension);
              goto LABEL_119;
            }
            v56 = 1;
            v36 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid((struct _GUID *)a4);
            if ( InterfaceByInterfaceGuid )
            {
              if ( InterfaceByInterfaceGuid[82].Flink == *(_LIST_ENTRY **)(a4 + 16) )
                goto LABEL_62;
              InterfaceByInterfaceGuid = 0LL;
            }
            DevicePropertyData = -1073741072;
LABEL_62:
            KeReleaseSpinLock(&ndisIfListLock, v36);
            v20 = 4;
            if ( !DevicePropertyData )
            {
              if ( v59 )
              {
                if ( !*(_BYTE *)(a4 + 72) )
                  *((_DWORD *)DeviceExtension + 142) |= 8u;
                if ( !BYTE2(InterfaceByInterfaceGuid[93].Flink) )
                {
                  DevicePropertyData = -1073741811;
                  goto LABEL_120;
                }
                v48 = *(void **)(a4 + 64);
                LODWORD(v79) = HIDWORD(InterfaceByInterfaceGuid[35].Flink);
                Flink = InterfaceByInterfaceGuid[82].Flink;
                DriverObjectExtension->CxBlock->Chars.EvtCxMiniportCompleteAdd(
                  v48,
                  (_NDIS_WDF_COMPLETE_ADD_PARAMS *)&Flink);
              }
              updated = ndisIfUpdateInterfaceOnAddDevice((__int64)InterfaceByInterfaceGuid, (__int64)DeviceExtension);
              if ( !updated )
              {
                v58 = 1;
                updated = ndisAllocateDefaultQueue((__int64)DeviceExtension);
                if ( !updated )
                {
                  v38 = 0;
                  v56 = 0;
                  v57 = 0;
                  v58 = 0;
                  _InterlockedOr(v52, 0);
                  DeviceObject->Flags &= ~0x80u;
LABEL_67:
                  v27 = v55;
                  goto LABEL_68;
                }
              }
              DevicePropertyData = NdisConvertNdisStatusToNtStatus(updated);
            }
LABEL_120:
            v38 = v54;
            goto LABEL_67;
          }
          v20 = 10;
          v33 = ndisMInvokeAddDevice((__int64)DeviceExtension);
          if ( !v33 )
          {
            v54 = 1;
            goto LABEL_58;
          }
        }
        DevicePropertyData = NdisConvertNdisStatusToNtStatus(v33);
      }
      else
      {
        v20 = 1;
        DevicePropertyData = -1073741670;
      }
    }
LABEL_98:
    InterfaceByInterfaceGuid = v60;
LABEL_100:
    v38 = (char)InterfaceByInterfaceGuid;
    goto LABEL_67;
  }
  InterfaceByInterfaceGuid = v60;
  v20 = 1;
  v38 = (char)v60;
  DevicePropertyData = -1073741670;
LABEL_68:
  if ( TraceLoggingProviderEnabled(v17, v16, v18) )
  {
    *(_QWORD *)Size = P;
    NdisTraceLoggingDeviceAdded((const struct _TlgProvider_t *)InterfaceByInterfaceGuid, v20, a4, DevicePropertyData);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x7473444Eu);
  if ( DevicePropertyData < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v61 )
      {
        Ndis::BindRegistry::Reload((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, 0LL, v39);
        ndisNotifyBindFailureOnUnboundProtocols((__int64)DeviceExtension);
      }
      if ( v38 )
        ndisMInvokeRemoveDevice((__int64)DeviceExtension);
      if ( v56 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 261);
        *((_QWORD *)DeviceExtension + 523) = 0LL;
      }
      if ( v57 )
      {
        v49 = *(_UNICODE_STRING **)(a4 + 40);
        if ( !v49 )
          v49 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 525);
        v50 = IoDeleteSymbolicLink(v49);
        if ( v50 && (unsigned __int8)byte_1C0092614 >= 4u )
          WPP_SF_qD(0x48u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeviceExtension, v50);
      }
      if ( v58 )
        ndisIfRemoveIfBlockMiniportAssociation(*((_QWORD *)DeviceExtension + 508), (__int64)DeviceExtension, 2);
      ndisMDeleteMiniportBlockOnRemove((__int64)DeviceExtension);
      DeviceExtension = 0LL;
    }
    if ( !v59 )
    {
      v51 = DeviceObject;
      if ( DeviceObject )
      {
        if ( v27 )
        {
          IoDetachDevice(v27);
          v51 = DeviceObject;
        }
        IoDeleteDevice(v51);
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
    v40 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 484) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v40);
    if ( (unsigned __int8)byte_1C0092610 >= 4u )
      WPP_SF_qZ(
        0x49u,
        &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids,
        (__int64)DeviceExtension,
        *((const wchar_t **)DeviceExtension + 485));
    ndisLogMiniportEvent((__int64)DeviceExtension, 0x1Fu);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x4Au, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DeviceExtension, DevicePropertyData);
  return (unsigned int)DevicePropertyData;
}
