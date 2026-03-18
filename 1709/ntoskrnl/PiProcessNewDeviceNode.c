/*
 * XREFs of PiProcessNewDeviceNode @ 0x14052E48C
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1400FEB6C (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x14012DAA8 (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcschr @ 0x140160420 (wcschr.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     McTemplateK0p @ 0x1401FEE2C (McTemplateK0p.c)
 *     McTemplateK0pz @ 0x140200B0C (McTemplateK0pz.c)
 *     PpvUtilFailDriver @ 0x140200C90 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140517228 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x140518FFC (PnpGetDeviceLocationStrings.c)
 *     PnpQueryID @ 0x14051A1B0 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x14051AD78 (PnpIrpQueryID.c)
 *     PnpQueryInterface @ 0x14051AEB4 (PnpQueryInterface.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     PnpSetPlugPlayEvent @ 0x14054DC8C (PnpSetPlugPlayEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14054E090 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpGenerateDeviceIdsHash @ 0x14054F690 (PnpGenerateDeviceIdsHash.c)
 *     PnpSaveDeviceCapabilities @ 0x140551090 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     PpIrpQueryCapabilities @ 0x1405522C0 (PpIrpQueryCapabilities.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405528C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipClearDevNodeUserFlags @ 0x140552DC0 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PpDeviceRegistration @ 0x140555454 (PpDeviceRegistration.c)
 *     PnpFindAlternateStringData @ 0x140557694 (PnpFindAlternateStringData.c)
 *     PiQueryAndAllocateBootResources @ 0x140557908 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405581F8 (PiQueryResourceRequirements.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x14055E900 (PipSetDevNodeUserFlags.c)
 *     PnpCheckDeviceIdsChanged @ 0x14056CD1C (PnpCheckDeviceIdsChanged.c)
 *     PnpQueryDeviceText @ 0x140585408 (PnpQueryDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140588924 (PiBuildDeviceNodeInstancePath.c)
 *     PiCreateDeviceInstanceKey @ 0x14058A748 (PiCreateDeviceInstanceKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14058BFFC (PnpIsDeviceInstanceEnabled.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     PnpQueryBusInformation @ 0x14058E84C (PnpQueryBusInformation.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1405909BC (PpHotSwapUpdateRemovalPolicy.c)
 *     PnpInitializeSessionId @ 0x140592D5C (PnpInitializeSessionId.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140595710 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiQueryRemovableDeviceOverride @ 0x140598050 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PnpDisableDevice @ 0x1405F10CC (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1406C6138 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406C9CD8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x1406CA7AC (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x1406CB198 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1406D1324 (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x1406D1DFC (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  int v2; // r13d
  HANDLE v3; // r12
  struct _DEVICE_OBJECT *v4; // r15
  int v5; // eax
  wchar_t *v6; // rax
  int Capabilities; // ebx
  bool v8; // r14
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // eax
  int GloballyUniqueId; // ebx
  __int64 v13; // rcx
  void *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  struct _DEVICE_OBJECT *v21; // rax
  ULONG_PTR v22; // rbx
  int v23; // esi
  struct _KTHREAD *v24; // rax
  __int64 v25; // r8
  HANDLE v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // eax
  int v31; // ecx
  PVOID v32; // rsi
  WCHAR *v33; // rbx
  __int64 v34; // r8
  HANDLE v35; // rdx
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rax
  HANDLE v39; // rbx
  PVOID v40; // r12
  unsigned int v41; // r13d
  PVOID v42; // r14
  int v43; // eax
  char v44; // si
  int v45; // eax
  int v46; // r14d
  char v47; // r13
  HANDLE v48; // rsi
  PVOID v49; // r14
  int AlternateStringData; // eax
  unsigned int v51; // ebx
  __int64 v52; // rax
  int v53; // r12d
  PVOID v54; // rbx
  int v55; // eax
  unsigned int v56; // ebx
  __int64 v57; // r8
  struct _KTHREAD *v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rcx
  PVOID v64; // rcx
  int v66; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v68; // rdx
  __int64 FailedInstallProblemStatus; // r8
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  int v73; // ecx
  int v74; // ecx
  int v75; // esi
  bool v76; // zf
  __int64 v77; // rdx
  __int64 v78; // r8
  int v79; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v83; // rdi
  _WORD *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  _WORD *v88; // rcx
  __int64 v89; // rcx
  unsigned __int16 *v90; // rdi
  _WORD *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  int v94; // eax
  int v95; // ecx
  int v96; // eax
  int v97; // edx
  char v98; // al
  int v99; // ecx
  int v100; // ecx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v103; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v104; // [rsp+5Ch] [rbp-ACh] BYREF
  int v105; // [rsp+60h] [rbp-A8h] BYREF
  int v106; // [rsp+64h] [rbp-A4h]
  __int64 v107; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  int v109; // [rsp+78h] [rbp-90h]
  int v110; // [rsp+7Ch] [rbp-8Ch]
  int v111; // [rsp+80h] [rbp-88h] BYREF
  int v112; // [rsp+84h] [rbp-84h] BYREF
  int v113; // [rsp+88h] [rbp-80h]
  PCWSTR SourceString; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  PVOID v116; // [rsp+A0h] [rbp-68h] BYREF
  int v117; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v118; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v119; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v120; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v121; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v122; // [rsp+C8h] [rbp-40h]
  PCWSTR v123; // [rsp+D0h] [rbp-38h] BYREF
  int v124; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v125; // [rsp+DCh] [rbp-2Ch] BYREF
  PVOID v126; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v127; // [rsp+E8h] [rbp-20h] BYREF
  PVOID v128; // [rsp+F0h] [rbp-18h] BYREF
  int v129; // [rsp+F8h] [rbp-10h] BYREF
  int v130; // [rsp+FCh] [rbp-Ch] BYREF
  wchar_t *Str; // [rsp+100h] [rbp-8h] BYREF
  __int64 v132; // [rsp+108h] [rbp+0h] BYREF
  const WCHAR *v133; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  USHORT v135[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v136; // [rsp+130h] [rbp+28h]
  void (__fastcall *v137)(__int64); // [rsp+140h] [rbp+38h]
  void (__fastcall *v138)(__int64, __int64 *); // [rsp+148h] [rbp+40h]
  _BYTE v139[4]; // [rsp+158h] [rbp+50h] BYREF
  int v140; // [rsp+15Ch] [rbp+54h]
  GUID Guid; // [rsp+198h] [rbp+90h] BYREF

  v128 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    McTemplateK0p(BugCheckParameter2, &KMPnPEvt_ProcessNewDevice_Start, 0LL, BugCheckParameter2);
  LOBYTE(v110) = 0;
  LOWORD(v103) = 0;
  v113 = 0;
  v2 = 0;
  v109 = 0;
  v3 = 0LL;
  v4 = *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32);
  v132 = MEMORY[0xFFFFF78000000014];
  v104 = 0;
  v111 = 0;
  v105 = 0;
  Handle = 0LL;
  v106 = 0;
  PiPnpRtlBeginOperation((__int64 **)&v128);
  PipClearDevNodeFlags(BugCheckParameter2, 0x2000000LL);
  v122 = 0LL;
  v116 = 0LL;
  v5 = PnpQueryID(BugCheckParameter2, 0, (PVOID *)&Str, &v129);
  if ( v5 < 0 )
  {
    v75 = v5;
    if ( v5 == -1073479624 )
      v75 = -1073741823;
    v109 = v75;
  }
  else
  {
    v122 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    v116 = v6 + 1;
  }
  Capabilities = PpIrpQueryCapabilities(v4, v139);
  PipClearDevNodeUserFlags(BugCheckParameter2, 2LL);
  v8 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v140 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(BugCheckParameter2, 2LL);
    v8 = (v140 & 0x40) != 0;
  }
  if ( (v140 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 568) == 4 )
      PpProfileCancelTransitioningDock(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 568) = 1;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 568) = 0;
  }
  v119 = -1LL;
  if ( (int)PnpQueryInterface(v4, (ULONG_PTR)&GUID_PNP_EXTENDED_ADDRESS_INTERFACE, 1u, 0x28u, 0LL, v135) >= 0 )
  {
    if ( v138 )
    {
      if ( v135[1] == 1 )
      {
        v138(v136, &v119);
        if ( v137 )
          v137(v136);
      }
    }
  }
  else
  {
    v119 = -1LL;
  }
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 0LL, v9, &v120);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 1LL, v10, &v127);
  v11 = PnpQueryID(BugCheckParameter2, 3, &P, &v130);
  GloballyUniqueId = v11;
  if ( v8 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(BugCheckParameter2 + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL);
    }
    goto LABEL_140;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 9
    || (v13 = *(_QWORD *)(BugCheckParameter2 + 16), v13 == IopRootDeviceNode) )
  {
LABEL_140:
    v14 = P;
    goto LABEL_20;
  }
  v123 = 0LL;
  v14 = P;
  while ( 1 )
  {
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v13 + 32), v14, &v123);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v14 = (void *)v123;
    P = (PVOID)v123;
LABEL_20:
    if ( GloballyUniqueId < 0 )
    {
      v76 = (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0;
      v109 = GloballyUniqueId;
      if ( v76 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v77 = 3LL;
          v78 = 3221225626LL;
        }
        else
        {
          v78 = (unsigned int)GloballyUniqueId;
          v77 = 19LL;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v77, v78);
      }
    }
    v17 = PiBuildDeviceNodeInstancePath(BugCheckParameter2, v122, v116, v14);
    if ( v17 < 0 )
      goto LABEL_197;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
      McTemplateK0pz(v16, v15, v18, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48));
    v19 = PiCreateDeviceInstanceKey(BugCheckParameter2, &Handle, &v105);
    v2 = v105;
    v17 = v19;
    if ( v19 < 0 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, (unsigned int)v19);
    }
    else
    {
      v20 = 0;
      if ( v105 == 1 )
        v20 = 0x20000;
      v106 = v20;
    }
    v3 = Handle;
    if ( v17 < 0 )
LABEL_197:
      v109 = v17;
    PpMarkDeviceStackExtensionFlag((__int64)v4, 16, 1);
    PipSetDevNodeState(BugCheckParameter2, 770);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 )
    {
      v79 = *(_DWORD *)(BugCheckParameter2 + 404);
      if ( v79 == 9 || v79 == 3 )
        break;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 19 )
      break;
    if ( v2 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Handle && v120 )
      {
        v71 = -1LL;
        do
          ++v71;
        while ( *((_WORD *)v120 + v71) );
        CmSetDeviceRegProp(
          PiPnpRtlCtx,
          *(_QWORD *)(BugCheckParameter2 + 48),
          (_DWORD)Handle,
          1,
          1,
          (__int64)v120,
          2 * v71 + 2,
          v106);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v3 = Handle;
      v2 = v105;
      goto LABEL_33;
    }
    v21 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(BugCheckParameter2 + 40, 0x65706E50u);
    v22 = (ULONG_PTR)v21;
    if ( !v21 )
      goto LABEL_33;
    if ( v21 == v4 )
    {
      ObfDereferenceObjectWithTag(v21, 0x65706E50u);
LABEL_33:
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
        v84 = (char *)v4->DeviceObjectExtension->DeviceNode + 56;
        if ( *v84 )
        {
          IoAddTriageDumpDataBlock((int)v84, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)v4->DeviceObjectExtension->DeviceNode + 28));
        }
        v85 = *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 2);
        if ( v85 && *(_WORD *)(v85 + 56) )
        {
          IoAddTriageDumpDataBlock(v85 + 56, 2);
          v86 = *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v86 + 64), *(unsigned __int16 *)(v86 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v22, *(unsigned __int16 *)(v22 + 2));
      v87 = *(_QWORD *)(v22 + 8);
      if ( v87 )
      {
        IoAddTriageDumpDataBlock(v87, *(__int16 *)(v87 + 2));
        v88 = (_WORD *)(*(_QWORD *)(v22 + 8) + 56LL);
        if ( *v88 )
        {
          IoAddTriageDumpDataBlock((int)v88, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v22 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v22 + 8) + 56LL));
        }
      }
      v89 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
      if ( v89 )
      {
        v90 = (unsigned __int16 *)(v89 + 40);
        IoAddTriageDumpDataBlock(v89, 728);
        if ( *v90 )
        {
          IoAddTriageDumpDataBlock((int)v90, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v90 + 1), *v90);
        }
        v91 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL);
        if ( *v91 )
        {
          IoAddTriageDumpDataBlock((int)v91, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL));
        }
        v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
        if ( v92 && *(_WORD *)(v92 + 56) )
        {
          IoAddTriageDumpDataBlock(v92 + 56, 2);
          v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v93 + 64), *(unsigned __int16 *)(v93 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v4, v22, 0LL);
    }
    ZwClose(v3);
    v140 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v8 = 0;
    PipSetDevNodeProblem(BugCheckParameter2, 42LL, 0LL);
    PnpLogDuplicateDevice((PCWSTR)v122, (PCWSTR)v14);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL) == *(_QWORD *)(BugCheckParameter2 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v22, 0x65706E50u);
    v13 = *(_QWORD *)(BugCheckParameter2 + 16);
  }
  v23 = v106;
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
      v106);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v132,
      8,
      v23);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v23);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v23);
  }
  if ( (v140 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
      || (v94 = *(_DWORD *)(BugCheckParameter2 + 404), v94 != 1) && v94 != 14 )
    {
      PnpDisableDevice(BugCheckParameter2, 29LL);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v95 = *(_DWORD *)(BugCheckParameter2 + 404), v95 != 9) && v95 != 3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 19 )
    {
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v26 = Handle;
      if ( Handle && v127 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( *((_WORD *)v127 + v27) );
        CmSetDeviceRegProp(
          PiPnpRtlCtx,
          *(_QWORD *)(BugCheckParameter2 + 48),
          (_DWORD)Handle,
          14,
          1,
          (__int64)v127,
          2 * v27 + 2,
          v23);
      }
      LOBYTE(v25) = v105 == 1;
      PnpSaveDeviceCapabilities(BugCheckParameter2, v139, v25);
      if ( v119 != -1 )
        PnpSetObjectProperty(
          PiPnpRtlCtx,
          *(_QWORD *)(BugCheckParameter2 + 48),
          1,
          0LL,
          (__int64)&DEVPKEY_Device_ExtendedAddress,
          9,
          (__int64)&v119,
          8,
          v23);
      v28 = *(_QWORD *)(BugCheckParameter2 + 48);
      LOBYTE(v103) = v105 == 1;
      v117 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v28,
                  (__int64)v26,
                  11,
                  (__int64)&v124,
                  (__int64)&v104,
                  (__int64)&v117,
                  0) >= 0
        && v124 == 4
        && v117 == 4 )
      {
        v29 = v104;
        if ( (v104 & 0x20) == 0 )
        {
          if ( (v104 & 0x40) == 0 )
          {
LABEL_51:
            v30 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 40);
            v31 = v109;
            if ( v30 < 0 )
              v31 = v30;
            v109 = v31;
            if ( PnpBootMode )
            {
              *(_DWORD *)(BugCheckParameter2 + 704) |= 0x1000u;
              v113 = 2;
            }
            else
            {
              v66 = (unsigned __int8)v110;
              if ( (v104 & 0x40000) != 0 )
                v66 = 1;
              v110 = v66;
            }
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v3 = Handle;
            v2 = v105;
            goto LABEL_56;
          }
          v68 = 28LL;
LABEL_152:
          if ( (v140 & 0x100) != 0 )
          {
            v72 = *(_QWORD *)(BugCheckParameter2 + 48);
            v104 = v29 | 0x400;
            CmSetDeviceRegProp(PiPnpRtlCtx, v72, (_DWORD)v26, 11, 4, (__int64)&v104, 4, v23);
          }
          else
          {
            if ( (_DWORD)v68 == 28 )
            {
              FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                           *(_QWORD *)(BugCheckParameter2 + 48),
                                                           v26);
              v68 = 28LL;
            }
            else
            {
              FailedInstallProblemStatus = 0LL;
            }
            PipSetDevNodeProblem(BugCheckParameter2, v68, FailedInstallProblemStatus);
          }
          goto LABEL_51;
        }
        v68 = 18LL;
        if ( (v104 & 1) != 0 )
          goto LABEL_152;
      }
      else
      {
        v29 = 0;
        v68 = 1LL;
        v104 = 0;
      }
      LOBYTE(v103) = 1;
      goto LABEL_152;
    }
  }
LABEL_56:
  PnpQueryID(BugCheckParameter2, 1, &v126, &v125);
  v32 = v126;
  KseAddHardwareId((PCWSTR)v126);
  PnpQueryID(BugCheckParameter2, 2, &v121, &v118);
  PnpGenerateDeviceIdsHash(v32, v121, BugCheckParameter2 + 684);
  PnpIrpQueryID(*(_QWORD *)(BugCheckParameter2 + 32), 5, &SourceString);
  v33 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v33, 0);
      v33 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(BugCheckParameter2, v32, v121, &v107) >= 0 )
  {
    LOBYTE(v34) = v107;
  }
  else
  {
    LOBYTE(v34) = (v140 & 0x20) == 0 && (v140 & 0x40000) == 0 && (v140 & 0x10) != 0;
    if ( v33 )
      goto LABEL_69;
  }
  v35 = 0LL;
  if ( v2 != 1 )
    v35 = v3;
  if ( (int)PipGenerateContainerID(BugCheckParameter2, v35, v34, v33, &v133) >= 0 )
  {
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
    v33 = (WCHAR *)v133;
    SourceString = v133;
  }
  if ( !v33 )
  {
    *(_QWORD *)(BugCheckParameter2 + 664) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 672) = 0LL;
    goto LABEL_71;
  }
LABEL_69:
  RtlInitUnicodeString(&DestinationString, v33);
  if ( RtlGUIDFromString(&DestinationString, (GUID *)(BugCheckParameter2 + 664)) < 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 664) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 672) = 0LL;
  }
LABEL_71:
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(BugCheckParameter2, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Handle && SourceString )
  {
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(BugCheckParameter2 + 48), Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v38 = KeGetCurrentThread();
  --v38->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v39 = Handle;
  if ( !Handle )
    goto LABEL_88;
  v40 = v121;
  v41 = v125;
  v42 = v126;
  if ( (_BYTE)v103 || v105 == 1 )
  {
    v44 = BYTE1(v103);
  }
  else
  {
    LOBYTE(BugCheckParameter4) = 1;
    v43 = PnpCheckDeviceIdsChanged(BugCheckParameter2, Handle, v126, v125, BugCheckParameter4, (char *)&v103 + 1);
    v44 = BYTE1(v103);
    if ( v43 < 0 )
      v44 = 0;
    BYTE1(v103) = v44;
    if ( !v44 )
    {
      LOBYTE(BugCheckParameter4a) = 0;
      v45 = PnpCheckDeviceIdsChanged(BugCheckParameter2, v39, v40, v118, BugCheckParameter4a, (char *)&v103 + 1);
      v44 = BYTE1(v103);
      if ( v45 < 0 )
        v44 = 0;
    }
  }
  if ( v42 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(BugCheckParameter2 + 48), (_DWORD)v39, 2, 7, (__int64)v42, v41, v106);
  v46 = v106;
  if ( v40 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(BugCheckParameter2 + 48), (_DWORD)v39, 3, 7, (__int64)v40, v118, v106);
  if ( v44 || (_BYTE)v110 )
  {
    v47 = v103;
    if ( (_BYTE)v103 )
    {
      v97 = v104;
      v98 = v111;
    }
    else
    {
      v96 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(BugCheckParameter2 + 48), v39, &v111);
      v97 = v104;
      if ( v96 < 0 )
      {
        v98 = 0;
      }
      else
      {
        v98 = v111;
        v97 = v111 | v104;
        v104 |= v111;
      }
    }
    if ( (v98 & 0x20) != 0 || (v97 & 0x40000) != 0 )
    {
      v104 = v97 & 0xFFFBFFFF;
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(BugCheckParameter2 + 48), (_DWORD)v39, 11, 4, (__int64)&v104, 4, v46);
      LOBYTE(v97) = v104;
    }
    if ( (v97 & 0x20) != 0 )
    {
      v47 = 1;
      PipSetDevNodeProblem(BugCheckParameter2, 18LL, 0LL);
    }
  }
  else
  {
LABEL_88:
    v47 = v103;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v48 = Handle;
  v49 = v120;
  if ( Handle )
  {
    v116 = 0LL;
    AlternateStringData = 0;
    v112 = 0;
    v51 = 0;
    if ( v120 )
    {
      v52 = -1LL;
      do
        ++v52;
      while ( *((_WORD *)v120 + v52) );
      v51 = 2 * v52 + 2;
      AlternateStringData = PnpFindAlternateStringData(v120, v51, &v116, &v112);
    }
    v53 = v106;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v49,
      v51,
      v106);
    if ( (int)PnpGetDeviceLocationStrings(BugCheckParameter2, (char **)&v116, &v112) >= 0 )
    {
      v54 = v116;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v116,
        2 * v112,
        v53);
      ExFreePoolWithTag(v54, 0);
    }
  }
  PnpQueryBusInformation(BugCheckParameter2);
  v55 = PiDmaGuardProcessNewDeviceNode(BugCheckParameter2);
  v56 = v109;
  if ( v55 < 0 )
    v56 = v55;
  if ( (v140 & 0x4000) == 0
    && ((*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 14) )
  {
    if ( v47 )
    {
      v70 = v113;
      if ( v105 == 1 )
        v70 = v113 | 1;
      if ( PiDevCfgMode )
        PiDevCfgProcessDevice(BugCheckParameter2, v48, v70);
    }
    else
    {
      PpDevCfgProcessDeviceOperations(BugCheckParameter2);
    }
  }
  PiQueryResourceRequirements(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v99 = *(_DWORD *)(BugCheckParameter2 + 404), v99 != 22) && v99 != 29 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
      || (v100 = *(_DWORD *)(BugCheckParameter2 + 404), v100 != 14) && v100 != 9 && ((v100 - 3) & 0xFFFFFFEF) != 0 )
    {
      PnpIsDeviceInstanceEnabled(v48, BugCheckParameter2 + 40, 1LL);
    }
  }
  if ( v48 )
  {
    LOBYTE(v57) = v105 == 1;
    PnpInitializeSessionId(BugCheckParameter2, v48, v57);
  }
  PiQueryAndAllocateBootResources(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v73 = *(_DWORD *)(BugCheckParameter2 + 404), v73 != 9) && v73 != 3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 19 )
    {
      v58 = KeGetCurrentThread();
      --v58->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      LOBYTE(v59) = v105 == 1;
      PnpSaveDeviceCapabilities(BugCheckParameter2, v139, v59);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PpHotSwapUpdateRemovalPolicy(BugCheckParameter2);
      LOBYTE(v60) = 1;
      v61 = PpDeviceRegistration(BugCheckParameter2 + 40, v60, BugCheckParameter2 + 56, 0LL);
      if ( v61 < 0 )
        PipSetDevNodeProblem(BugCheckParameter2, 19LL, (unsigned int)v61);
      v49 = v120;
      v48 = Handle;
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v74 = *(_DWORD *)(BugCheckParameter2 + 404), v74 != 9) && v74 != 3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 19 )
    {
      PnpIrpDeviceEnumerated((int)v4);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v62, *(_QWORD *)(BugCheckParameter2 + 48), 1);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v63, *(_QWORD *)(BugCheckParameter2 + 48), 14);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, v4);
      PnpNewDeviceNodeDependencyCheck(BugCheckParameter2);
    }
  }
  if ( v126 )
    ExFreePoolWithTag(v126, 0);
  if ( v121 )
    ExFreePoolWithTag(v121, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v48 )
    ZwClose(v48);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v127 )
    ExFreePoolWithTag(v127, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  if ( v122 )
    ExFreePoolWithTag(v122, 0);
  v64 = v128;
  if ( v128 )
    PiPnpRtlEndOperation((PVOID **)v128);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    McTemplateK0p((__int64)v64, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 568) )
    PnpTraceDockDeviceEnumeration(BugCheckParameter2, v56);
  return v56;
}
