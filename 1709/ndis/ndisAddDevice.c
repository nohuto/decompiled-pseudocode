/*
 * XREFs of ndisAddDevice @ 0x1C0103FA8
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 * Callees:
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C00036EC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C0004610 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEBGE@Z @ 0x1C0011AF0 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDI.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C0012B04 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     TraceLoggingProviderEnabled @ 0x1C0012B48 (TraceLoggingProviderEnabled.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C001B2F0 (NdisConvertNdisStatusToNtStatus.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     McTemplateK0qqq @ 0x1C00401C4 (McTemplateK0qqq.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     McTemplateK0z @ 0x1C006154C (McTemplateK0z.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00AA964 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AAA48 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisMInvokeRemoveDevice @ 0x1C00AB3FC (ndisMInvokeRemoveDevice.c)
 *     ndisMFindNumaDistances @ 0x1C00AF448 (ndisMFindNumaDistances.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AF7F8 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisInitializeConfiguration @ 0x1C00B2388 (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C00B2810 (ndisReadRssKeywords.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BAFB0 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00BF61C (ndisMInitializeMiniportBlock.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisAllocateDefaultQueue @ 0x1C00C160C (ndisAllocateDefaultQueue.c)
 *     ndisMInvokeAddDevice @ 0x1C00C16BC (ndisMInvokeAddDevice.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00C1720 (ndisCreateSecurityDescriptor.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00C1C68 (ndisCreateAdapterInstanceName.c)
 *     ndisSetDeviceNames @ 0x1C00C1EAC (ndisSetDeviceNames.c)
 *     ndisQueryDeviceFlags @ 0x1C00C1F1C (ndisQueryDeviceFlags.c)
 *     ndisAllocateEventLog @ 0x1C00C1FEC (ndisAllocateEventLog.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C8F80 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisQueryReferenceBusInterface @ 0x1C00EA42C (ndisQueryReferenceBusInterface.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9CC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT Pdo, __int64 *a3, __int64 a4, __int64 a5)
{
  int DevicePropertyData; // edi
  char *DeviceExtension; // rbx
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // r13
  UCHAR v11; // dl
  ULONGLONG v12; // r8
  PVOID v13; // r12
  UCHAR v14; // dl
  ULONGLONG v15; // r8
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // r15
  int v17; // esi
  KIRQL v18; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r13
  unsigned int v20; // ecx
  ULONG v21; // r12d
  struct _DRIVER_OBJECT *v22; // r13
  PDEVICE_OBJECT v23; // rdx
  PDEVICE_OBJECT v24; // rdi
  _QWORD *EventLog; // rax
  _DEVICE_OBJECT *v26; // r12
  PVOID PoolWithTag; // rax
  struct _MCGEN_TRACE_CONTEXT *v28; // rcx
  __int64 v29; // rcx
  const wchar_t **v30; // r13
  __int64 v31; // rcx
  void *v32; // rdi
  PVOID v33; // rax
  int v34; // eax
  const UNICODE_STRING *v35; // rdi
  Ndis::BindEngine *v36; // rcx
  struct _MCGEN_TRACE_CONTEXT *v37; // rcx
  KIRQL v38; // si
  unsigned __int8 v39; // r12
  int updated; // eax
  char v41; // r15
  enum Ndis::ReadBindingsOptions::Flags v42; // r8d
  KIRQL v43; // al
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // r13
  void *v46; // rcx
  _DEVICE_OBJECT *v47; // rax
  void *v48; // rcx
  _DEVICE_OBJECT *v49; // rax
  _DWORD *v50; // rax
  void *v51; // rcx
  _UNICODE_STRING *v52; // rcx
  NTSTATUS v53; // eax
  _DEVICE_OBJECT *v54; // rcx
  signed __int32 v55[8]; // [rsp+0h] [rbp-100h] BYREF
  char v56; // [rsp+40h] [rbp-C0h]
  char v57; // [rsp+41h] [rbp-BFh]
  char v58; // [rsp+42h] [rbp-BEh]
  char v59; // [rsp+43h] [rbp-BDh]
  char v60; // [rsp+44h] [rbp-BCh]
  struct _LIST_ENTRY *v61; // [rsp+48h] [rbp-B8h]
  char v62; // [rsp+50h] [rbp-B0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Size; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  PDEVICE_OBJECT v66; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  ULONG Type; // [rsp+88h] [rbp-78h] BYREF
  PDRIVER_OBJECT DriverObjecta; // [rsp+90h] [rbp-70h]
  PDEVICE_OBJECT TargetDevice; // [rsp+98h] [rbp-68h]
  PVOID v71; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING String2; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING String; // [rsp+B8h] [rbp-48h] BYREF
  char *v74; // [rsp+C8h] [rbp-38h] BYREF
  __int64 *v75; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING v76; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v77; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v78; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v79; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v80[20]; // [rsp+120h] [rbp+20h] BYREF
  _LIST_ENTRY *Flink; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  GUID InterfaceClassGuid; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v84; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v85; // [rsp+1F0h] [rbp+F0h]
  int v86; // [rsp+1F8h] [rbp+F8h]
  wchar_t v87; // [rsp+1FCh] [rbp+FCh]
  _OWORD v88[2]; // [rsp+200h] [rbp+100h] BYREF
  int v89; // [rsp+220h] [rbp+120h]
  wchar_t v90; // [rsp+224h] [rbp+124h]
  _OWORD v91[2]; // [rsp+228h] [rbp+128h] BYREF
  int v92; // [rsp+248h] [rbp+148h]
  wchar_t v93; // [rsp+24Ch] [rbp+14Ch]
  _OWORD v94[2]; // [rsp+250h] [rbp+150h] BYREF
  int v95; // [rsp+270h] [rbp+170h]
  wchar_t v96; // [rsp+274h] [rbp+174h]
  _OWORD v97[2]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v98; // [rsp+298h] [rbp+198h]
  wchar_t v99; // [rsp+2A0h] [rbp+1A0h]
  _BYTE v100[40]; // [rsp+2A8h] [rbp+1A8h] BYREF
  _BYTE v101[64]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v75 = a3;
  TargetDevice = Pdo;
  DriverObjecta = DriverObject;
  *(_QWORD *)&String2.Length = a5;
  v66 = 0LL;
  DeviceObject = 0LL;
  DevicePropertyData = -1073741823;
  v61 = 0LL;
  DeviceExtension = 0LL;
  v56 = 0;
  InterfaceByInterfaceGuid = 0LL;
  v58 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_NET;
  v71 = 0LL;
  memset(v100, 0, sizeof(v100));
  memset(v101, 0, 0x3CuLL);
  v59 = 0;
  Flink = 0LL;
  v82 = 0LL;
  v60 = 0;
  v62 = 0;
  v57 = 0;
  P = 0LL;
  Size = 0;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x41u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)Pdo);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( TraceLoggingProviderEnabled(&hProvider, v11, v12) )
  {
    DevicePropertyData = IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, 0LL, &Size, &Type);
    if ( DevicePropertyData == -1073741789 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x7473444Eu);
      v13 = P;
      if ( P )
      {
        DevicePropertyData = IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, P, &Size, &Type);
        if ( DevicePropertyData < 0 )
        {
          ExFreePoolWithTag(v13, 0x7473444Eu);
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
  v17 = 1;
  if ( !DriverObjectExtension )
  {
    DevicePropertyData = -1073741670;
LABEL_84:
    v39 = 0;
    v41 = 0;
    goto LABEL_68;
  }
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != DriverObjectExtension; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v18);
  v17 = 2;
  if ( i != DriverObjectExtension )
  {
LABEL_83:
    InterfaceByInterfaceGuid = 0LL;
    goto LABEL_84;
  }
  v17 = 3;
  if ( DriverObjectExtension->MajorNdisVersion >= 6u && !*(_BYTE *)(a4 + 24) )
  {
    DevicePropertyData = -1073741491;
    goto LABEL_83;
  }
  v17 = 4;
  v20 = (**(unsigned __int16 **)(a4 + 40) + 5811) & 0xFFFFFFF8;
  *(_DWORD *)&DestinationString.Length = 3932160;
  v21 = v20 + 8 * ndisMaxNumberOfProcessors;
  DestinationString.Buffer = (wchar_t *)v101;
  if ( (DriverObjectExtension->Flags & 0x40) != 0 )
  {
    CxBlock = DriverObjectExtension->CxBlock;
    v46 = *(void **)(a4 + 64);
    v57 = 1;
    DevicePropertyData = CxBlock->Chars.EvtCxAllocateMiniportBlock(v46, v21, (void **)&v74);
    if ( DevicePropertyData )
      goto LABEL_136;
    DevicePropertyData = CxBlock->Chars.EvtCxGetAssignedFdoName(*(void **)(a4 + 64), &DestinationString);
    if ( DevicePropertyData )
      goto LABEL_136;
    v47 = CxBlock->Chars.EvtCxGetDeviceObject(*(_QWORD *)(a4 + 64));
    v48 = *(void **)(a4 + 64);
    DeviceObject = v47;
    v49 = CxBlock->Chars.EvtCxGetNextDeviceObject(v48);
    DeviceExtension = v74;
    v66 = v49;
    v24 = v49;
    ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)v74, v21);
    *((_DWORD *)DeviceExtension + 30) |= 0x80u;
    v22 = DriverObjecta;
    *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)(a4 + 64);
    if ( *(_QWORD *)&String2.Length )
      **(_QWORD **)&String2.Length = DeviceExtension;
LABEL_24:
    v17 = 1;
    *((_OWORD *)DeviceExtension + 252) = *(_OWORD *)a4;
    EventLog = ndisAllocateEventLog(2u, 1);
    v26 = TargetDevice;
    *((_QWORD *)DeviceExtension + 482) = TargetDevice;
    *((_QWORD *)DeviceExtension + 563) = EventLog;
    *((_QWORD *)DeviceExtension + 481) = DeviceObject;
    *((_QWORD *)DeviceExtension + 483) = v24;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.Length + 2LL, 0x6E61444Eu);
    *((_QWORD *)DeviceExtension + 530) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_92;
    *((_WORD *)DeviceExtension + 2117) = DestinationString.Length + 2;
    RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4232), &DestinationString);
    if ( ndisVerifierNdisDispatch )
    {
      if ( MmIsDriverVerifying(v22) )
      {
        DevicePropertyData = ndisVerifierNdisDispatch->NdisAllocateVerifierContext(
                               DeviceObject,
                               DeviceExtension,
                               (void **)(DeviceExtension + 24),
                               (void **)(DeviceExtension + 4992));
        if ( DevicePropertyData < 0 )
        {
          if ( (unsigned __int8)byte_1C0098754 >= 2u )
            WPP_SF_q(0x42u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeviceExtension);
          goto LABEL_94;
        }
      }
    }
    v17 = 7;
    DevicePropertyData = IoCreateSymbolicLink(*(PUNICODE_STRING *)(a4 + 40), (PUNICODE_STRING)(DeviceExtension + 4232));
    if ( DevicePropertyData )
    {
      if ( (unsigned __int8)byte_1C0098754 >= 2u )
        WPP_SF_q(0x43u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeviceExtension);
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        McTemplateK0qqq(
          v28,
          &AddDeviceFailed,
          &NDIS_PROVIDER_ID,
          DevicePropertyData,
          0x132Bu,
          (const unsigned int)DeviceExtension);
      goto LABEL_94;
    }
    v59 = 1;
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
      (wchar_t *)DeviceExtension + 2900);
    v30 = (const wchar_t **)(DeviceExtension + 3880);
    v17 = 4;
    DevicePropertyData = ndisCreateAdapterInstanceName(
                           (_UNICODE_STRING **)DeviceExtension + 485,
                           (__int64)DeviceExtension,
                           0LL,
                           (_UNICODE_STRING **)DeviceExtension + 555);
    if ( DevicePropertyData >= 0 )
    {
      if ( (unsigned __int8)byte_1C0098754 >= 4u )
        WPP_SF_qZ(0x44u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeviceExtension, *v30);
      if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
        McTemplateK0z(v31, &AddDevice, v15, *((const wchar_t **)*v30 + 1));
      if ( (*(_DWORD *)(a4 + 60) & 2) != 0 )
      {
        DevicePropertyData = ndisQueryReferenceBusInterface(v26, &v71);
        if ( DevicePropertyData < 0 )
        {
          InterfaceByInterfaceGuid = 0LL;
          goto LABEL_96;
        }
        *((_QWORD *)DeviceExtension + 501) = v71;
      }
      v17 = 4;
      DevicePropertyData = ndisCreateSecurityDescriptor(
                             *((void **)DeviceExtension + 481),
                             (PSECURITY_DESCRIPTOR *)DeviceExtension + 476,
                             5u);
      if ( DevicePropertyData < 0 )
        goto LABEL_94;
      v32 = (void *)*((_QWORD *)DeviceExtension + 503);
      *((_DWORD *)DeviceExtension + 1021) = 1;
      if ( v32
        || (v33 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6863444Eu),
            *((_QWORD *)DeviceExtension + 503) = v33,
            (v32 = v33) != 0LL) )
      {
        memset(v32, 0, 0x88uLL);
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
          (void **)DeviceExtension + 525,
          (void **)(a4 + 40));
        v17 = 4;
        v34 = ndisInitializeConfiguration((__int64)v32, (__int64)DeviceExtension, *v75);
        if ( !v34 )
        {
          if ( !ndisDefaultNapsState )
          {
            v35 = (const UNICODE_STRING *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 473) + 40LL) + 56LL);
            v99 = aDriverMrvlpcie[20];
            v97[0] = *(_OWORD *)L"\\Driver\\mrvlpcie8897";
            *(_DWORD *)&String2.Length = 2752552;
            String2.Buffer = (wchar_t *)v97;
            v89 = *(_DWORD *)L"94";
            v90 = aDriverQcwlan89_1[18];
            v76.Buffer = (wchar_t *)v88;
            v92 = *(_DWORD *)L"09";
            v93 = aDriverQcwlan89[18];
            v77.Buffer = (wchar_t *)v91;
            v95 = *(_DWORD *)L"16";
            v98 = *(_QWORD *)L"8897";
            v96 = aDriverQcwlan89_0[18];
            v97[1] = *(_OWORD *)L"mrvlpcie8897";
            v78.Buffer = (wchar_t *)v94;
            v86 = *(_DWORD *)L"AN";
            v88[0] = *(_OWORD *)L"\\Driver\\QCWLAN8994";
            v87 = aDriverQcwlan[14];
            v79.Buffer = (wchar_t *)&v84;
            v88[1] = *(_OWORD *)L"QCWLAN8994";
            *(_DWORD *)&v76.Length = 2490404;
            *(_DWORD *)&v77.Length = 2490404;
            v91[0] = *(_OWORD *)L"\\Driver\\QCWLAN8909";
            *(_DWORD *)&v78.Length = 2490404;
            *(_DWORD *)&v79.Length = 1966108;
            v91[1] = *(_OWORD *)L"QCWLAN8909";
            v94[0] = *(_OWORD *)L"\\Driver\\QCWLAN8916";
            v94[1] = *(_OWORD *)L"QCWLAN8916";
            v84 = *(_OWORD *)L"\\Driver\\QCWLAN";
            v85 = *(_QWORD *)L"QCWLAN";
            if ( RtlEqualUnicodeString(v35, &String2, 1u)
              || RtlEqualUnicodeString(v35, &v76, 1u)
              || RtlEqualUnicodeString(v35, &v77, 1u)
              || RtlEqualUnicodeString(v35, &v78, 1u)
              || RtlEqualUnicodeString(v35, &v79, 1u) )
            {
              *((_DWORD *)DeviceExtension + 984) = *((_DWORD *)DeviceExtension + 984) & 0xFFFF0FFF | 0xA000;
            }
          }
          Ndis::BindEngine::Initialize(
            (Ndis::BindEngine *)(DeviceExtension + 5136),
            (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
          {
            Ndis::BindEngine::BeginPolicyUpdates(v36);
            if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5064), DatapathPaused, PauseReason_Wdf)
              && (unsigned __int8)byte_1C0098763 >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                (struct NDIS_PNPTRACE_LOCALS *)v80);
              WPP_SF_Zq(0x45u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (const wchar_t *)v80[1], v80[0]);
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5136));
          }
          v62 = 1;
          DevicePropertyData = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( DevicePropertyData < 0 )
            goto LABEL_94;
          ndisMFindNumaDistances((__int64)DeviceExtension);
          ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( !DriverObjectExtension->AddDeviceHandler )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_qq(0x46u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, DriverObjectExtension, DeviceExtension);
LABEL_59:
            if ( (DriverObjectExtension->Flags & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
            {
              v50 = (_DWORD *)*((_QWORD *)DeviceExtension + 474);
              if ( !v50 )
              {
                DevicePropertyData = -1073741823;
LABEL_117:
                v17 = 3;
LABEL_118:
                InterfaceByInterfaceGuid = v61;
                goto LABEL_119;
              }
              if ( *v50 > 1u )
              {
                DevicePropertyData = -1073741637;
                goto LABEL_117;
              }
            }
            v17 = 8;
            DevicePropertyData = IoRegisterDeviceInterface(
                                   *((PDEVICE_OBJECT *)DeviceExtension + 482),
                                   &InterfaceClassGuid,
                                   0LL,
                                   (PUNICODE_STRING)DeviceExtension + 261);
            if ( DevicePropertyData < 0 )
            {
              if ( (unsigned __int8)byte_1C0098754 >= 2u )
                WPP_SF_q(0x47u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeviceExtension);
              if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
                McTemplateK0qqq(
                  v37,
                  &AddDeviceFailed,
                  &NDIS_PROVIDER_ID,
                  DevicePropertyData,
                  0x142Du,
                  (const unsigned int)DeviceExtension);
              goto LABEL_118;
            }
            v58 = 1;
            v38 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid((struct _GUID *)a4);
            if ( InterfaceByInterfaceGuid )
            {
              if ( InterfaceByInterfaceGuid[82].Flink == *(_LIST_ENTRY **)(a4 + 16) )
                goto LABEL_63;
              InterfaceByInterfaceGuid = 0LL;
            }
            DevicePropertyData = -1073741072;
LABEL_63:
            KeReleaseSpinLock(&ndisIfListLock, v38);
            v17 = 4;
            if ( DevicePropertyData )
            {
LABEL_119:
              v41 = v56;
              goto LABEL_120;
            }
            v39 = v57;
            if ( v57 )
            {
              if ( !*(_BYTE *)(a4 + 72) )
                *((_DWORD *)DeviceExtension + 142) |= 8u;
              if ( !BYTE2(InterfaceByInterfaceGuid[93].Flink) )
              {
                DevicePropertyData = -1073741811;
LABEL_134:
                v41 = v56;
                goto LABEL_68;
              }
              v51 = *(void **)(a4 + 64);
              LODWORD(v82) = HIDWORD(InterfaceByInterfaceGuid[35].Flink);
              Flink = InterfaceByInterfaceGuid[82].Flink;
              DriverObjectExtension->CxBlock->Chars.EvtCxMiniportCompleteAdd(
                v51,
                (_NDIS_WDF_COMPLETE_ADD_PARAMS *)&Flink);
            }
            updated = ndisIfUpdateInterfaceOnAddDevice((__int64)InterfaceByInterfaceGuid, (__int64)DeviceExtension);
            if ( !updated )
            {
              v60 = 1;
              updated = ndisAllocateDefaultQueue((__int64)DeviceExtension);
              if ( !updated )
              {
                v41 = 0;
                v58 = 0;
                v59 = 0;
                v60 = 0;
                _InterlockedOr(v55, 0);
                DeviceObject->Flags &= ~0x80u;
                goto LABEL_68;
              }
            }
            DevicePropertyData = NdisConvertNdisStatusToNtStatus(updated);
            goto LABEL_134;
          }
          v17 = 10;
          v34 = ndisMInvokeAddDevice((__int64)DeviceExtension);
          if ( !v34 )
          {
            v56 = 1;
            goto LABEL_59;
          }
        }
        DevicePropertyData = NdisConvertNdisStatusToNtStatus(v34);
LABEL_94:
        InterfaceByInterfaceGuid = v61;
LABEL_96:
        v41 = (char)InterfaceByInterfaceGuid;
LABEL_120:
        v39 = v57;
        goto LABEL_68;
      }
      v17 = 1;
LABEL_92:
      DevicePropertyData = -1073741670;
      goto LABEL_94;
    }
LABEL_136:
    InterfaceByInterfaceGuid = 0LL;
    v41 = 0;
    goto LABEL_120;
  }
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)v100;
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
  v17 = 5;
  v22 = DriverObjecta;
  DevicePropertyData = IoCreateDevice(DriverObjecta, v21, &DestinationString, 0x17u, 0x100u, 0, &DeviceObject);
  if ( DevicePropertyData >= 0 )
  {
    v17 = 6;
    v23 = TargetDevice;
    DeviceObject->Flags |= 0x10u;
    v23->Flags &= ~0x80u;
    DeviceObject->Flags |= 0x2000u;
    v66 = IoAttachDeviceToDeviceStack(DeviceObject, v23);
    if ( !v66 )
    {
      DevicePropertyData = -1073741823;
      InterfaceByInterfaceGuid = 0LL;
      v39 = 0;
      v41 = 0;
      goto LABEL_68;
    }
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)DeviceExtension, v21);
    v24 = v66;
    goto LABEL_24;
  }
  InterfaceByInterfaceGuid = 0LL;
  v39 = 0;
  v41 = 0;
LABEL_68:
  if ( TraceLoggingProviderEnabled(&hProvider, v14, v15) )
    NdisTraceLoggingDeviceAdded((__int64)InterfaceByInterfaceGuid, v17, a4, DevicePropertyData, (__int64)P, v39);
  if ( P )
    ExFreePoolWithTag(P, 0x7473444Eu);
  if ( DevicePropertyData < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v62 )
      {
        Ndis::BindRegistry::Reload((_NDIS_MINIPORT_BLOCK *)DeviceExtension, 0LL, v42);
        ndisNotifyBindFailureOnUnboundProtocols((__int64)DeviceExtension);
      }
      if ( v41 )
        ndisMInvokeRemoveDevice((__int64)DeviceExtension);
      if ( v58 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 261);
        *((_QWORD *)DeviceExtension + 523) = 0LL;
      }
      if ( v59 )
      {
        v52 = *(_UNICODE_STRING **)(a4 + 40);
        if ( !v52 )
          v52 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 525);
        v53 = IoDeleteSymbolicLink(v52);
        if ( v53 && (unsigned __int8)byte_1C0098754 >= 4u )
          WPP_SF_qD(0x48u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeviceExtension, v53);
      }
      if ( v60 )
        ndisIfRemoveIfBlockMiniportAssociation(*((_QWORD *)DeviceExtension + 508), (__int64)DeviceExtension, 2);
      ndisMDeleteMiniportBlockOnRemove((__int64)DeviceExtension);
      DeviceExtension = 0LL;
    }
    if ( !v39 )
    {
      v54 = DeviceObject;
      if ( DeviceObject )
      {
        if ( v66 )
        {
          IoDetachDevice(v66);
          v54 = DeviceObject;
        }
        IoDeleteDevice(v54);
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
    v43 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 484) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v43);
    if ( (unsigned __int8)byte_1C0098750 >= 4u )
      WPP_SF_qZ(
        0x49u,
        &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids,
        (__int64)DeviceExtension,
        *((const wchar_t **)DeviceExtension + 485));
    ndisLogMiniportEvent((__int64)DeviceExtension, 0x1Fu);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x4Au, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DeviceExtension, DevicePropertyData);
  return (unsigned int)DevicePropertyData;
}
