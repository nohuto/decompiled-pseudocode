/*
 * XREFs of PiProcessNewDeviceNode @ 0x1405D0A18
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1401463A0 (PpMarkDeviceStackExtensionFlag.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PnpIrpDeviceEnumerated @ 0x14014CA0C (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcschr @ 0x14018A5C0 (wcschr.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     McTemplateK0p @ 0x14023B79C (McTemplateK0p.c)
 *     McTemplateK0pz @ 0x14023DA3C (McTemplateK0pz.c)
 *     PpvUtilFailDriver @ 0x14023DBC0 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFindAlternateStringData @ 0x140526474 (PnpFindAlternateStringData.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1405C4A18 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x1405C4AF8 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryInterface @ 0x1405C5140 (PnpQueryInterface.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PnpSetPlugPlayEvent @ 0x1405CB15C (PnpSetPlugPlayEvent.c)
 *     PiUpdateDevicePanel @ 0x1405CB3B0 (PiUpdateDevicePanel.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405CC0D8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PpIrpQueryCapabilities @ 0x1405CC1BC (PpIrpQueryCapabilities.c)
 *     PpDeviceRegistration @ 0x1405CC4FC (PpDeviceRegistration.c)
 *     PnpQueryID @ 0x1405CD96C (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x1405CDA64 (PnpIrpQueryID.c)
 *     PnpSaveDeviceCapabilities @ 0x1405CF414 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1405CF5C8 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1405D48DC (PipClearDevNodeUserFlags.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     PiQueryAndAllocateBootResources @ 0x1405DB788 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405DC08C (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1405DC3A8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405DC404 (PnpIsDeviceInstanceEnabled.c)
 *     PiQueryRemovableDeviceOverride @ 0x1405DE074 (PiQueryRemovableDeviceOverride.c)
 *     PiCreateDeviceInstanceKey @ 0x1405E3E6C (PiCreateDeviceInstanceKey.c)
 *     PnpGenerateDeviceIdsHash @ 0x1405E41CC (PnpGenerateDeviceIdsHash.c)
 *     PnpQueryDeviceText @ 0x1405E46E0 (PnpQueryDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1405E4F04 (PiBuildDeviceNodeInstancePath.c)
 *     PnpQueryBusInformation @ 0x1405E521C (PnpQueryBusInformation.c)
 *     KseAddHardwareId @ 0x1405E56F8 (KseAddHardwareId.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1405E6214 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x1405E6A14 (PnpInitializeSessionId.c)
 *     PnpCheckDeviceIdsChanged @ 0x140602BF8 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1406046D0 (PpDevCfgProcessDeviceOperations.c)
 *     PipSetDevNodeUserFlags @ 0x14060509C (PipSetDevNodeUserFlags.c)
 *     PnpDisableDevice @ 0x140727528 (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14072C984 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x140730CF8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x140731DEC (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x140732AA0 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x140738CD4 (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x140739908 (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  int v2; // r13d
  HANDLE v3; // r12
  struct _DEVICE_OBJECT *v4; // r15
  int v5; // eax
  wchar_t *v6; // rax
  int v7; // ebx
  bool v8; // r14
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  unsigned int v19; // eax
  struct _DEVICE_OBJECT *v20; // rax
  ULONG_PTR v21; // rbx
  unsigned int v22; // esi
  struct _KTHREAD *v23; // rax
  HANDLE v24; // rbx
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // r14d
  PVOID v29; // rsi
  WCHAR *v30; // rbx
  __int64 v31; // r8
  HANDLE v32; // rdx
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rax
  HANDLE v36; // rbx
  PVOID v37; // r12
  unsigned int v38; // r13d
  PVOID v39; // r14
  int v40; // eax
  char v41; // si
  int v42; // eax
  unsigned int v43; // r14d
  char v44; // r13
  HANDLE v45; // rsi
  PVOID v46; // r14
  int AlternateStringData; // eax
  unsigned int v48; // ebx
  unsigned int v49; // r12d
  int v50; // eax
  unsigned int v51; // ebx
  __int64 v52; // r8
  struct _KTHREAD *v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rcx
  PVOID v59; // rcx
  PVOID v61; // rbx
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  unsigned int v65; // eax
  int v66; // edx
  int FailedInstallProblemStatus; // r8d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // eax
  int v73; // ecx
  unsigned int v74; // eax
  unsigned int v75; // eax
  int v76; // edx
  int v77; // r8d
  unsigned int v78; // eax
  int v79; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v83; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  _WORD *v85; // rax
  __int64 v86; // rcx
  _WORD *v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  _WORD *v90; // rcx
  __int64 v91; // rcx
  unsigned __int16 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  _WORD *v96; // rcx
  __int64 v97; // rcx
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // edx
  char v102; // al
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v105; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v106; // [rsp+5Ch] [rbp-ACh] BYREF
  int v107; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v108; // [rsp+64h] [rbp-A4h]
  __int64 v109; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  int v111; // [rsp+78h] [rbp-90h]
  int v112; // [rsp+7Ch] [rbp-8Ch]
  int v113; // [rsp+80h] [rbp-88h] BYREF
  int v114; // [rsp+84h] [rbp-84h] BYREF
  int v115; // [rsp+88h] [rbp-80h]
  PCWSTR SourceString; // [rsp+90h] [rbp-78h] BYREF
  PVOID v117; // [rsp+98h] [rbp-70h] BYREF
  PVOID v118; // [rsp+A0h] [rbp-68h] BYREF
  int v119; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v120; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v121; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v122; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v123; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v124; // [rsp+C8h] [rbp-40h]
  WCHAR *v125; // [rsp+D0h] [rbp-38h] BYREF
  int v126; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v127; // [rsp+DCh] [rbp-2Ch] BYREF
  PVOID P; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v129; // [rsp+E8h] [rbp-20h] BYREF
  PVOID v130; // [rsp+F0h] [rbp-18h] BYREF
  int v131; // [rsp+F8h] [rbp-10h] BYREF
  int v132; // [rsp+FCh] [rbp-Ch] BYREF
  wchar_t *Str; // [rsp+100h] [rbp-8h] BYREF
  __int64 v134; // [rsp+108h] [rbp+0h] BYREF
  const WCHAR *v135; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  USHORT v137[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v138; // [rsp+130h] [rbp+28h]
  void (__fastcall *v139)(__int64); // [rsp+140h] [rbp+38h]
  void (__fastcall *v140)(__int64, __int64 *); // [rsp+148h] [rbp+40h]
  int v141; // [rsp+158h] [rbp+50h] BYREF
  int v142; // [rsp+15Ch] [rbp+54h]
  GUID Guid; // [rsp+198h] [rbp+90h] BYREF

  v130 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    McTemplateK0p(BugCheckParameter2, &KMPnPEvt_ProcessNewDevice_Start, 0LL, BugCheckParameter2);
  LOBYTE(v112) = 0;
  LOWORD(v105) = 0;
  v115 = 0;
  v2 = 0;
  v3 = 0LL;
  v108 = 0;
  v4 = *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32);
  v134 = MEMORY[0xFFFFF78000000014];
  v106 = 0;
  v113 = 0;
  v107 = 0;
  Handle = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&v130);
  PipClearDevNodeFlags(BugCheckParameter2, 0x2000000LL);
  v124 = 0LL;
  v118 = 0LL;
  v5 = PnpQueryID(BugCheckParameter2, 0, (PVOID *)&Str, &v131);
  if ( v5 < 0 )
  {
    v2 = v5;
    if ( v5 == -1073479624 )
      v2 = -1073741823;
  }
  else
  {
    v124 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    v118 = v6 + 1;
  }
  v7 = PpIrpQueryCapabilities(v4, &v141);
  PipClearDevNodeUserFlags(BugCheckParameter2);
  v8 = 0;
  if ( v7 >= 0 )
  {
    if ( (v142 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(BugCheckParameter2, 2LL);
    v8 = (v142 & 0x40) != 0;
  }
  if ( (v142 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 568) == 4 )
      PpProfileCancelTransitioningDock(BugCheckParameter2);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 568) = v9;
  v121 = -1LL;
  if ( (int)PnpQueryInterface(v4, (ULONG_PTR)&GUID_PNP_EXTENDED_ADDRESS_INTERFACE, 1u, 0x28u, 0LL, v137) >= 0 )
  {
    if ( v140 )
    {
      if ( v137[1] == 1 )
      {
        v140(v138, &v121);
        if ( v139 )
          v139(v138);
      }
    }
  }
  else
  {
    v121 = -1LL;
  }
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 0LL, v10, &v122);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 1LL, v11, &v129);
  v12 = PnpQueryID(BugCheckParameter2, 3, &v117, &v132);
  GloballyUniqueId = v12;
  if ( v8 )
  {
    if ( v12 == -1073741637 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 9, -1073741637);
      PipSetDevNodeFlags(*(_QWORD *)(BugCheckParameter2 + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
  {
    v62 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v62 != IopRootDeviceNode )
    {
      v125 = 0LL;
      v14 = (WCHAR *)v117;
      goto LABEL_130;
    }
  }
  v14 = (WCHAR *)v117;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v2 = GloballyUniqueId;
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v76 = 3;
          v77 = -1073741670;
        }
        else
        {
          v77 = GloballyUniqueId;
          v76 = 19;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v76, v77);
      }
    }
    v17 = PiBuildDeviceNodeInstancePath(BugCheckParameter2, v124, v118, v14);
    if ( v17 >= 0 )
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
        McTemplateK0pz(v16, v15, v18, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48));
      v17 = PiCreateDeviceInstanceKey(BugCheckParameter2, &Handle, &v107);
      v19 = 0;
      if ( v17 < 0 )
      {
        PipSetDevNodeProblem(BugCheckParameter2, 19, v17);
      }
      else
      {
        if ( v107 == 1 )
          v19 = 0x20000;
        v108 = v19;
      }
      v3 = Handle;
    }
    if ( v17 >= 0 )
      v17 = v2;
    v2 = v17;
    PpMarkDeviceStackExtensionFlag((__int64)v4, 16, 1);
    PipSetDevNodeState(BugCheckParameter2, 770);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 )
    {
      v78 = *(_DWORD *)(BugCheckParameter2 + 404);
      if ( v78 <= 0x13 )
      {
        v79 = 524808;
        if ( _bittest(&v79, v78) )
          break;
      }
    }
    if ( v107 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Handle && v122 )
      {
        v70 = -1LL;
        do
          ++v70;
        while ( *((_WORD *)v122 + v70) );
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(BugCheckParameter2 + 48),
          (__int64)Handle,
          1u,
          1u,
          (__int64)v122,
          2 * v70 + 2,
          v108);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v3 = Handle;
      goto LABEL_31;
    }
    v20 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(BugCheckParameter2 + 40, 0x65706E50u);
    v21 = (ULONG_PTR)v20;
    if ( !v20 )
      goto LABEL_31;
    if ( v20 == v4 )
    {
      ObfDereferenceObjectWithTag(v20, 0x65706E50u);
LABEL_31:
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 42 )
        PipClearDevNodeProblem(BugCheckParameter2);
      break;
    }
    if ( !v8 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock((int)v4, v4->Size);
      DriverObject = v4->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
        p_DriverName = &v4->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((int)p_DriverName, 2);
          IoAddTriageDumpDataBlock((int)v4->DriverObject->DriverName.Buffer, v4->DriverObject->DriverName.Length);
        }
      }
      DeviceNode = (char *)v4->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v83 = (unsigned __int16 *)(DeviceNode + 40);
        IoAddTriageDumpDataBlock((int)DeviceNode, 728);
        if ( *v83 )
        {
          IoAddTriageDumpDataBlock((int)v83, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v83 + 1), *v83);
        }
        DeviceObjectExtension = v4->DeviceObjectExtension;
        v85 = DeviceObjectExtension->DeviceNode;
        if ( v85[28] )
        {
          IoAddTriageDumpDataBlock((_DWORD)v85 + 56, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)v4->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = v4->DeviceObjectExtension;
        }
        v86 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v86 )
        {
          v87 = (_WORD *)(v86 + 56);
          if ( *v87 )
          {
            IoAddTriageDumpDataBlock((int)v87, 2);
            v88 = *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v88 + 64), *(unsigned __int16 *)(v88 + 56));
          }
        }
      }
      IoAddTriageDumpDataBlock(v21, *(unsigned __int16 *)(v21 + 2));
      v89 = *(_QWORD *)(v21 + 8);
      if ( v89 )
      {
        IoAddTriageDumpDataBlock(v89, *(__int16 *)(v89 + 2));
        v90 = (_WORD *)(*(_QWORD *)(v21 + 8) + 56LL);
        if ( *v90 )
        {
          IoAddTriageDumpDataBlock((int)v90, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v21 + 8) + 56LL));
        }
      }
      v91 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      if ( v91 )
      {
        v92 = (unsigned __int16 *)(v91 + 40);
        IoAddTriageDumpDataBlock(v91, 728);
        if ( *v92 )
        {
          IoAddTriageDumpDataBlock((int)v92, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v92 + 1), *v92);
        }
        v93 = *(_QWORD *)(v21 + 312);
        v94 = *(_QWORD *)(v93 + 40);
        if ( *(_WORD *)(v94 + 56) )
        {
          IoAddTriageDumpDataBlock(v94 + 56, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 56LL));
          v93 = *(_QWORD *)(v21 + 312);
        }
        v95 = *(_QWORD *)(*(_QWORD *)(v93 + 40) + 16LL);
        if ( v95 )
        {
          v96 = (_WORD *)(v95 + 56);
          if ( *v96 )
          {
            IoAddTriageDumpDataBlock((int)v96, 2);
            v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v97 + 64), *(unsigned __int16 *)(v97 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v4, v21, 0LL);
    }
    ZwClose(v3);
    v142 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v8 = 0;
    PipSetDevNodeProblem(BugCheckParameter2, 42, 0);
    PnpLogDuplicateDevice((PCWSTR)v124, v14);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL) == *(_QWORD *)(BugCheckParameter2 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v21, 0x65706E50u);
    v62 = *(_QWORD *)(BugCheckParameter2 + 16);
LABEL_130:
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v62 + 32), v14, &v125);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v14 = v125;
    v117 = v125;
  }
  v22 = v108;
  if ( v3 )
  {
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL) + 2,
      v108);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v134,
      8,
      v22);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v22);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v22);
  }
  if ( (v142 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
      || (v98 = *(_DWORD *)(BugCheckParameter2 + 404), v98 != 1) && v98 != 14 )
    {
      PnpDisableDevice(BugCheckParameter2, 29LL);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v99 = *(_DWORD *)(BugCheckParameter2 + 404), v111 = v2, v99 != 9)
    && (v111 = v2, v99 != 3)
    && (v111 = v2, v99 != 19) )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v24 = Handle;
    if ( Handle && v129 )
    {
      v69 = -1LL;
      do
        ++v69;
      while ( *((_WORD *)v129 + v69) );
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)Handle,
        0xEu,
        1u,
        (__int64)v129,
        2 * v69 + 2,
        v22);
    }
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v141, v107 == 1);
    if ( v121 != -1 )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v121,
        8,
        v22);
    v25 = *(_QWORD *)(BugCheckParameter2 + 48);
    LOBYTE(v105) = v107 == 1;
    v119 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v25,
                (__int64)v24,
                11,
                (__int64)&v126,
                (__int64)&v106,
                (__int64)&v119,
                0) >= 0
      && v126 == 4
      && v119 == 4 )
    {
      v26 = v106;
      if ( (v106 & 0x20) == 0 )
      {
        if ( (v106 & 0x40) == 0 )
        {
LABEL_45:
          v27 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 40);
          v28 = v2;
          if ( v27 < 0 )
            v28 = v27;
          v111 = v28;
          if ( PnpBootMode )
          {
            *(_DWORD *)(BugCheckParameter2 + 704) |= 0x1000u;
            v115 = 2;
          }
          else
          {
            v63 = (unsigned __int8)v112;
            if ( (v106 & 0x40000) != 0 )
              v63 = 1;
            v112 = v63;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v3 = Handle;
          goto LABEL_50;
        }
        v66 = 28;
LABEL_146:
        if ( (v142 & 0x100) != 0 )
        {
          v71 = *(_QWORD *)(BugCheckParameter2 + 48);
          v106 = v26 | 0x400;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v71, (__int64)v24, 0xBu, 4u, (__int64)&v106, 4u, v22);
        }
        else
        {
          if ( v66 == 28 )
          {
            FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(
                                           *(_QWORD *)(BugCheckParameter2 + 48),
                                           v24);
            v66 = 28;
          }
          else
          {
            FailedInstallProblemStatus = 0;
          }
          PipSetDevNodeProblem(BugCheckParameter2, v66, FailedInstallProblemStatus);
        }
        goto LABEL_45;
      }
      v66 = 18;
      if ( (v106 & 1) != 0 )
        goto LABEL_146;
    }
    else
    {
      v26 = 0;
      v66 = 1;
      v106 = 0;
    }
    LOBYTE(v105) = 1;
    goto LABEL_146;
  }
LABEL_50:
  PnpQueryID(BugCheckParameter2, 1, &P, &v127);
  v29 = P;
  KseAddHardwareId((PCWSTR)P);
  PnpQueryID(BugCheckParameter2, 2, &v123, &v120);
  PnpGenerateDeviceIdsHash(v29, v123, BugCheckParameter2 + 684);
  PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32), 5, (ULONG_PTR *)&SourceString);
  v30 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v30, 0);
      v30 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(BugCheckParameter2, v29, v123, &v109) >= 0 )
  {
    LOBYTE(v31) = v109;
  }
  else
  {
    LOBYTE(v31) = (v142 & 0x20) == 0 && (v142 & 0x40000) == 0 && (v142 & 0x10) != 0;
    if ( v30 )
      goto LABEL_62;
  }
  v32 = 0LL;
  if ( v107 != 1 )
    v32 = v3;
  if ( (int)PipGenerateContainerID(BugCheckParameter2, v32, v31, v30, &v135) >= 0 )
  {
    if ( v30 )
      ExFreePoolWithTag(v30, 0);
    v30 = (WCHAR *)v135;
    SourceString = v135;
  }
LABEL_62:
  if ( !v30
    || (RtlInitUnicodeString(&DestinationString, v30),
        RtlGUIDFromString(&DestinationString, (GUID *)(BugCheckParameter2 + 664)) < 0) )
  {
    *(_QWORD *)(BugCheckParameter2 + 664) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 672) = 0LL;
  }
  v33 = KeGetCurrentThread();
  --v33->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(BugCheckParameter2, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Handle && SourceString )
  {
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(BugCheckParameter2 + 48), Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v35 = KeGetCurrentThread();
  --v35->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v36 = Handle;
  if ( !Handle )
    goto LABEL_81;
  v37 = v123;
  v38 = v127;
  v39 = P;
  if ( (_BYTE)v105 || v107 == 1 )
  {
    v41 = BYTE1(v105);
  }
  else
  {
    LOBYTE(BugCheckParameter4) = 1;
    v40 = PnpCheckDeviceIdsChanged(BugCheckParameter2, Handle, P, v127, BugCheckParameter4, (char *)&v105 + 1);
    v41 = BYTE1(v105);
    if ( v40 < 0 )
      v41 = 0;
    BYTE1(v105) = v41;
    if ( !v41 )
    {
      LOBYTE(BugCheckParameter4a) = 0;
      v42 = PnpCheckDeviceIdsChanged(BugCheckParameter2, v36, v37, v120, BugCheckParameter4a, (char *)&v105 + 1);
      v41 = BYTE1(v105);
      if ( v42 < 0 )
        v41 = 0;
    }
  }
  if ( v39 )
    CmSetDeviceRegProp(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      (__int64)v36,
      2u,
      7u,
      (__int64)v39,
      v38,
      v108);
  v43 = v108;
  if ( v37 )
    CmSetDeviceRegProp(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      (__int64)v36,
      3u,
      7u,
      (__int64)v37,
      v120,
      v108);
  if ( v41 || (_BYTE)v112 )
  {
    v44 = v105;
    if ( (_BYTE)v105 )
    {
      v101 = v106;
      v102 = v113;
    }
    else
    {
      v100 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(BugCheckParameter2 + 48), v36, &v113);
      v101 = v106;
      if ( v100 < 0 )
      {
        v102 = 0;
      }
      else
      {
        v102 = v113;
        v101 = v113 | v106;
        v106 |= v113;
      }
    }
    if ( (v102 & 0x20) != 0 || (v101 & 0x40000) != 0 )
    {
      v106 = v101 & 0xFFFBFFFF;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v36,
        0xBu,
        4u,
        (__int64)&v106,
        4u,
        v43);
      LOBYTE(v101) = v106;
    }
    if ( (v101 & 0x20) != 0 )
    {
      v44 = 1;
      PipSetDevNodeProblem(BugCheckParameter2, 18, 0);
    }
  }
  else
  {
LABEL_81:
    v44 = v105;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v45 = Handle;
  v46 = v122;
  if ( Handle )
  {
    v118 = 0LL;
    AlternateStringData = 0;
    v114 = 0;
    v48 = 0;
    if ( v122 )
    {
      v64 = -1LL;
      do
        ++v64;
      while ( *((_WORD *)v122 + v64) );
      v48 = 2 * v64 + 2;
      AlternateStringData = PnpFindAlternateStringData(v122, v48, &v118, &v114);
    }
    v49 = v108;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v46,
      v48,
      v108);
    if ( (int)PnpGetDeviceLocationStrings(BugCheckParameter2, (char **)&v118, &v114) >= 0 )
    {
      v61 = v118;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v118,
        2 * v114,
        v49);
      ExFreePoolWithTag(v61, 0);
    }
  }
  PnpQueryBusInformation(BugCheckParameter2);
  v50 = PiDmaGuardProcessNewDeviceNode(BugCheckParameter2);
  v51 = v111;
  if ( v50 < 0 )
    v51 = v50;
  if ( (v142 & 0x4000) == 0
    && ((*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 14) )
  {
    if ( v44 )
    {
      v65 = v115;
      if ( v107 == 1 )
        v65 = v115 | 1;
      if ( PiDevCfgMode )
        PiDevCfgProcessDevice(BugCheckParameter2, v45, v65);
    }
    else
    {
      PpDevCfgProcessDeviceOperations(BugCheckParameter2);
    }
  }
  PiQueryResourceRequirements(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v72 = *(_DWORD *)(BugCheckParameter2 + 404), v72 > 0x1D)
    || (v73 = 541606408, !_bittest(&v73, v72)) )
  {
    PnpIsDeviceInstanceEnabled(v45, BugCheckParameter2 + 40, 1LL);
  }
  if ( v45 )
  {
    LOBYTE(v52) = v107 == 1;
    PnpInitializeSessionId(BugCheckParameter2, v45, v52);
  }
  PiQueryAndAllocateBootResources(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v74 = *(_DWORD *)(BugCheckParameter2 + 404), v74 > 0x13)
    || (v56 = 524808, !_bittest(&v56, v74)) )
  {
    v53 = KeGetCurrentThread();
    --v53->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v141, v107 == 1);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PpHotSwapUpdateRemovalPolicy(BugCheckParameter2);
    LOBYTE(v54) = 1;
    v55 = PpDeviceRegistration(BugCheckParameter2 + 40, v54, BugCheckParameter2 + 56, 0);
    if ( v55 < 0 )
      PipSetDevNodeProblem(BugCheckParameter2, 19, v55);
    v46 = v122;
    v56 = 524808;
    v45 = Handle;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v75 = *(_DWORD *)(BugCheckParameter2 + 404), v75 > 0x13)
    || !_bittest(&v56, v75) )
  {
    PnpIrpDeviceEnumerated((int)v4);
    if ( v45 )
      PiUpdateDevicePanel(BugCheckParameter2, v45);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v57, *(_QWORD *)(BugCheckParameter2 + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v58, *(_QWORD *)(BugCheckParameter2 + 48), 14LL);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, v4);
    PnpNewDeviceNodeDependencyCheck(BugCheckParameter2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v123 )
    ExFreePoolWithTag(v123, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v45 )
    ZwClose(v45);
  if ( v117 )
    ExFreePoolWithTag(v117, 0);
  if ( v129 )
    ExFreePoolWithTag(v129, 0);
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  if ( v124 )
    ExFreePoolWithTag(v124, 0);
  v59 = v130;
  if ( v130 )
    PiPnpRtlEndOperation((PVOID **)v130);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    McTemplateK0p((__int64)v59, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 568) )
    PnpTraceDockDeviceEnumeration(BugCheckParameter2, v51);
  return v51;
}
