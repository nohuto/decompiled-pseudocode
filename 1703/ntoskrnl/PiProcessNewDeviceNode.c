/*
 * XREFs of PiProcessNewDeviceNode @ 0x1404DC8A4
 * Callers:
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 * Callees:
 *     PpMarkDeviceStackExtensionFlag @ 0x1400801A8 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x140080218 (PnpIrpDeviceEnumerated.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     Template_p @ 0x1401F9090 (Template_p.c)
 *     Template_pz @ 0x1401FAE44 (Template_pz.c)
 *     PpvUtilFailDriver @ 0x1401FB010 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404462B0 (PiQueryRemovableDeviceOverride.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14044C490 (PiBuildDeviceNodeInstancePath.c)
 *     PiCreateDeviceInstanceKey @ 0x14044CD5C (PiCreateDeviceInstanceKey.c)
 *     PnpQueryBusInformation @ 0x14044E24C (PnpQueryBusInformation.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1404501DC (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PnpInitializeSessionId @ 0x1404A648C (PnpInitializeSessionId.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1404A7AF4 (PipClearDevNodeUserFlags.c)
 *     KseAddHardwareId @ 0x1404B3594 (KseAddHardwareId.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404B8088 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDeviceRegistration @ 0x1404D9BDC (PpDeviceRegistration.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404D9E10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSetPlugPlayEvent @ 0x1404DA0E0 (PnpSetPlugPlayEvent.c)
 *     PiQueryResourceRequirements @ 0x1404DA4E0 (PiQueryResourceRequirements.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404DA754 (PiDcUpdateDeviceContainerMembership.c)
 *     PpIrpQueryCapabilities @ 0x1404DBEEC (PpIrpQueryCapabilities.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404DBF74 (PnpCheckDeviceIdsChanged.c)
 *     PnpQueryDeviceText @ 0x1404DC194 (PnpQueryDeviceText.c)
 *     PnpGetDeviceLocationStrings @ 0x1404DC26C (PnpGetDeviceLocationStrings.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     PnpQueryID @ 0x1404DDC40 (PnpQueryID.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 *     PnpIrpQueryID @ 0x1404DDF0C (PnpIrpQueryID.c)
 *     PnpSaveDeviceCapabilities @ 0x1404DE1F4 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1404DE39C (_CmSetDeviceRegProp.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404E5BF0 (PnpGenerateDeviceIdsHash.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405594C0 (PnpIsDeviceInstanceEnabled.c)
 *     PiQueryAndAllocateBootResources @ 0x14055B814 (PiQueryAndAllocateBootResources.c)
 *     PnpFindAlternateStringData @ 0x14055C104 (PnpFindAlternateStringData.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PnpDisableDevice @ 0x14059AF18 (PnpDisableDevice.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     PipSetDevNodeUserFlags @ 0x1405CC2B8 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14069A574 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14069E7D8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x14069FE88 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x1406A0870 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1406A63EC (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x1406A6FE0 (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(__int64 a1)
{
  int v2; // r13d
  HANDLE v3; // r12
  struct _DEVICE_OBJECT *v4; // r15
  int v5; // eax
  wchar_t *v6; // rax
  int v7; // ebx
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
  int v23; // r14d
  BOOL v24; // esi
  struct _KTHREAD *v25; // rax
  __int64 v26; // r8
  HANDLE v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  int v31; // eax
  int v32; // ecx
  PVOID v33; // rsi
  WCHAR *v34; // rbx
  char v35; // r8
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rax
  struct _KTHREAD *v39; // rax
  HANDLE v40; // rbx
  const WCHAR *v41; // r12
  int v42; // r13d
  PVOID v43; // r14
  int v44; // eax
  char v45; // si
  int v46; // eax
  int v47; // r14d
  char v48; // r12
  HANDLE v49; // rsi
  PVOID v50; // r14
  int AlternateStringData; // eax
  unsigned int v52; // ebx
  __int64 v53; // rax
  int v54; // r13d
  PVOID v55; // rbx
  struct _KTHREAD *v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rcx
  PVOID v62; // rcx
  unsigned int v63; // ebx
  int v65; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v67; // rdx
  __int64 FailedInstallProblemStatus; // r8
  unsigned int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // esi
  bool v73; // zf
  __int64 v74; // rdx
  __int64 v75; // r8
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v79; // rdi
  _WORD *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  _WORD *v84; // rcx
  __int64 v85; // rcx
  unsigned __int16 *v86; // rdi
  _WORD *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  int v90; // eax
  int v91; // edx
  char v92; // al
  SIZE_T BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  SIZE_T BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v95; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v96; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v97; // [rsp+70h] [rbp-98h] BYREF
  BOOL v98; // [rsp+74h] [rbp-94h]
  int v99; // [rsp+78h] [rbp-90h]
  char v100; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v101; // [rsp+80h] [rbp-88h]
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  int v103; // [rsp+90h] [rbp-78h] BYREF
  int v104; // [rsp+94h] [rbp-74h]
  int v105; // [rsp+98h] [rbp-70h] BYREF
  int v106; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v107; // [rsp+A0h] [rbp-68h]
  PCWSTR SourceString; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v110; // [rsp+B8h] [rbp-50h] BYREF
  int v111; // [rsp+C0h] [rbp-48h] BYREF
  PCWSTR v112; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v114; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v115; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v116; // [rsp+E8h] [rbp-20h]
  int v117; // [rsp+F0h] [rbp-18h] BYREF
  int v118; // [rsp+F4h] [rbp-14h] BYREF
  int v119; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v120; // [rsp+100h] [rbp-8h] BYREF
  PVOID v121; // [rsp+108h] [rbp+0h] BYREF
  PVOID v122; // [rsp+110h] [rbp+8h] BYREF
  char v123[4]; // [rsp+118h] [rbp+10h] BYREF
  char v124[4]; // [rsp+11Ch] [rbp+14h] BYREF
  wchar_t *Str; // [rsp+120h] [rbp+18h] BYREF
  __int64 v126; // [rsp+128h] [rbp+20h] BYREF
  const WCHAR *v127; // [rsp+130h] [rbp+28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+30h] BYREF
  char v129[2]; // [rsp+148h] [rbp+40h] BYREF
  __int16 v130; // [rsp+14Ah] [rbp+42h]
  __int64 v131; // [rsp+150h] [rbp+48h]
  void (__fastcall *v132)(__int64); // [rsp+160h] [rbp+58h]
  void (__fastcall *v133)(__int64, __int64 *); // [rsp+168h] [rbp+60h]
  int v134; // [rsp+178h] [rbp+70h] BYREF
  int v135; // [rsp+17Ch] [rbp+74h]
  GUID Guid; // [rsp+1B8h] [rbp+B0h] BYREF

  v122 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    Template_p(a1, &KMPnPEvt_ProcessNewDevice_Start, 0LL, a1);
  LOBYTE(v104) = 0;
  LOBYTE(v98) = 0;
  v107 = 0;
  v2 = 0;
  v101 = 0;
  v3 = 0LL;
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v126 = MEMORY[0xFFFFF78000000014];
  v96 = 0;
  v105 = 0;
  v97 = 0;
  LOBYTE(v95) = 0;
  Handle = 0LL;
  v99 = 0;
  PiPnpRtlBeginOperation((__int64 **)&v122);
  PipClearDevNodeFlags(a1, 0x2000000);
  v116 = 0LL;
  v110 = 0LL;
  v5 = PnpQueryID(a1, 0LL, &Str, v123);
  if ( v5 < 0 )
  {
    v72 = v5;
    if ( v5 == -1073479624 )
      v72 = -1073741823;
    v101 = v72;
  }
  else
  {
    v116 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    v110 = v6 + 1;
  }
  v7 = PpIrpQueryCapabilities((int)v4, &v134);
  PipClearDevNodeUserFlags(a1, 2);
  v8 = 0;
  if ( v7 >= 0 )
  {
    if ( (v135 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(a1);
    v8 = (v135 & 0x40) != 0;
  }
  if ( (v135 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 568) == 4 )
      PpProfileCancelTransitioningDock(a1);
    *(_DWORD *)(a1 + 568) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 568) = 0;
  }
  v113 = -1LL;
  if ( (int)PnpQueryInterface(v4, 0LL, v129) >= 0 )
  {
    if ( v133 )
    {
      if ( v130 == 1 )
      {
        v133(v131, &v113);
        if ( v132 )
          v132(v131);
      }
    }
  }
  else
  {
    v113 = -1LL;
  }
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 0, v9, &v114);
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 1, v10, &v121);
  v11 = PnpQueryID(a1, 3LL, &P, v124);
  GloballyUniqueId = v11;
  if ( v8 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(a1, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(a1 + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
    goto LABEL_141;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9
    || (v13 = *(_QWORD *)(a1 + 16), v13 == IopRootDeviceNode) )
  {
LABEL_141:
    v14 = P;
    goto LABEL_20;
  }
  v112 = 0LL;
  v14 = P;
  while ( 1 )
  {
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v13 + 32), v14, &v112);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v14 = (void *)v112;
    P = (PVOID)v112;
LABEL_20:
    if ( GloballyUniqueId < 0 )
    {
      v73 = (*(_DWORD *)(a1 + 396) & 0x2000) == 0;
      v101 = GloballyUniqueId;
      if ( v73 || *(_DWORD *)(a1 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v74 = 3LL;
          v75 = 3221225626LL;
        }
        else
        {
          v75 = (unsigned int)GloballyUniqueId;
          v74 = 19LL;
        }
        PipSetDevNodeProblem(a1, v74, v75);
      }
    }
    v17 = PiBuildDeviceNodeInstancePath(a1, (__int64)v116, (__int64)v110, (__int64)v14);
    if ( v17 < 0 )
      goto LABEL_200;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
      Template_pz(v16, v15, v18, a1, *(_QWORD *)(a1 + 48));
    v19 = PiCreateDeviceInstanceKey(a1, &Handle, &v97);
    v2 = v97;
    v17 = v19;
    if ( v19 < 0 )
    {
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v19);
    }
    else
    {
      v20 = 0;
      if ( v97 == 1 )
        v20 = 0x20000;
      v99 = v20;
    }
    v3 = Handle;
    if ( v17 < 0 )
LABEL_200:
      v101 = v17;
    PpMarkDeviceStackExtensionFlag((__int64)v4, 16, 1);
    PipSetDevNodeState(a1, 770);
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      break;
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && (*(_DWORD *)(a1 + 404) == 3 || *(_DWORD *)(a1 + 404) == 19) )
      break;
    if ( v2 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Handle && v114 )
      {
        v70 = -1LL;
        do
          ++v70;
        while ( *((_WORD *)v114 + v70) );
        CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 1, 1, (__int64)v114, 2 * v70 + 2, v99);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v3 = Handle;
      v2 = v97;
      goto LABEL_33;
    }
    v21 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(a1 + 40, 0x65706E50u);
    v22 = (ULONG_PTR)v21;
    if ( !v21 )
      goto LABEL_33;
    if ( v21 == v4 )
    {
      ObfDereferenceObjectWithTag(v21, 0x65706E50u);
LABEL_33:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 42 )
        PipClearDevNodeProblem(a1);
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
        v79 = (unsigned __int16 *)(DeviceNode + 40);
        IoAddTriageDumpDataBlock((int)DeviceNode, 720);
        if ( *v79 )
        {
          IoAddTriageDumpDataBlock((int)v79, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v79 + 1), *v79);
        }
        v80 = (char *)v4->DeviceObjectExtension->DeviceNode + 56;
        if ( *v80 )
        {
          IoAddTriageDumpDataBlock((int)v80, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)v4->DeviceObjectExtension->DeviceNode + 28));
        }
        v81 = *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 2);
        if ( v81 && *(_WORD *)(v81 + 56) )
        {
          IoAddTriageDumpDataBlock(v81 + 56, 2);
          v82 = *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v82 + 64), *(unsigned __int16 *)(v82 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v22, *(unsigned __int16 *)(v22 + 2));
      v83 = *(_QWORD *)(v22 + 8);
      if ( v83 )
      {
        IoAddTriageDumpDataBlock(v83, *(__int16 *)(v83 + 2));
        v84 = (_WORD *)(*(_QWORD *)(v22 + 8) + 56LL);
        if ( *v84 )
        {
          IoAddTriageDumpDataBlock((int)v84, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v22 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v22 + 8) + 56LL));
        }
      }
      v85 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
      if ( v85 )
      {
        v86 = (unsigned __int16 *)(v85 + 40);
        IoAddTriageDumpDataBlock(v85, 720);
        if ( *v86 )
        {
          IoAddTriageDumpDataBlock((int)v86, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v86 + 1), *v86);
        }
        v87 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL);
        if ( *v87 )
        {
          IoAddTriageDumpDataBlock((int)v87, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL));
        }
        v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
        if ( v88 && *(_WORD *)(v88 + 56) )
        {
          IoAddTriageDumpDataBlock(v88 + 56, 2);
          v89 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v89 + 64), *(unsigned __int16 *)(v89 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v4, v22, 0LL);
    }
    ZwClose(v3);
    v135 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v8 = 0;
    PipSetDevNodeProblem(a1, 42LL, 0LL);
    PnpLogDuplicateDevice((PCWSTR)v116, (PCWSTR)v14);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL) == *(_QWORD *)(a1 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v22, 0x65706E50u);
    v13 = *(_QWORD *)(a1 + 16);
  }
  v23 = v99;
  v24 = 0;
  if ( v3 )
  {
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 40LL) + 2,
      v99);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v126,
      8,
      v23);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v23);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v23);
  }
  if ( (v135 & 0x4000) != 0
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 1)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    PnpDisableDevice(a1, 29LL);
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v27 = Handle;
    if ( Handle && v121 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( *((_WORD *)v121 + v28) );
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 14, 1, (__int64)v121, 2 * v28 + 2, v23);
    }
    LOBYTE(v26) = v97 == 1;
    PnpSaveDeviceCapabilities(a1, &v134, v26);
    if ( v113 != -1 )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v113,
        8,
        v23);
    v29 = *(_QWORD *)(a1 + 48);
    LOBYTE(v24) = v97 == 1;
    v98 = v24;
    v103 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v29,
                (__int64)v27,
                11,
                (__int64)&v117,
                (__int64)&v96,
                (__int64)&v103,
                0) >= 0
      && v117 == 4
      && v103 == 4 )
    {
      v30 = v96;
      if ( (v96 & 0x20) == 0 )
      {
        if ( (v96 & 0x40) == 0 )
        {
LABEL_51:
          v31 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), a1 + 40);
          v32 = v101;
          if ( v31 < 0 )
            v32 = v31;
          v101 = v32;
          if ( PnpBootMode )
          {
            *(_DWORD *)(a1 + 704) |= 0x1000u;
            v107 = 2;
          }
          else
          {
            v65 = (unsigned __int8)v104;
            if ( (v96 & 0x40000) != 0 )
              v65 = 1;
            v104 = v65;
          }
          if ( !v24
            && (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(_QWORD *)(a1 + 48),
                               1u,
                               (__int64)v27,
                               0LL,
                               (__int64)&DEVPKEY_Device_FirmwareDependencies,
                               (__int64)&v118,
                               0LL,
                               0,
                               (__int64)&v103,
                               0) == -1073741789 )
          {
            v98 = v118 == 8210;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v3 = Handle;
          v2 = v97;
          goto LABEL_59;
        }
        v67 = 28LL;
LABEL_164:
        if ( (v135 & 0x100) != 0 )
        {
          v71 = *(_QWORD *)(a1 + 48);
          v96 = v30 | 0x400;
          CmSetDeviceRegProp(PiPnpRtlCtx, v71, (_DWORD)v27, 11, 4, (__int64)&v96, 4, v23);
        }
        else
        {
          if ( (_DWORD)v67 == 28 )
          {
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(a1 + 48), v27);
            v67 = 28LL;
          }
          else
          {
            FailedInstallProblemStatus = 0LL;
          }
          PipSetDevNodeProblem(a1, v67, FailedInstallProblemStatus);
        }
        goto LABEL_51;
      }
      v67 = 18LL;
      if ( (v96 & 1) != 0 )
        goto LABEL_164;
    }
    else
    {
      v30 = 0;
      v67 = 1LL;
      v96 = 0;
    }
    LOBYTE(v24) = 1;
    v98 = v24;
    goto LABEL_164;
  }
LABEL_59:
  PnpQueryID(a1, 1LL, &v120, &v119);
  v33 = v120;
  KseAddHardwareId((PCWSTR)v120);
  PnpQueryID(a1, 2LL, &v115, &v111);
  PnpGenerateDeviceIdsHash(v33, v115, a1 + 684);
  PnpIrpQueryID(*(_QWORD *)(a1 + 32), 5LL, &SourceString);
  v34 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v34, 0);
      v34 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(a1, v33, v115, (bool *)&v100) >= 0 )
  {
    v35 = v100;
  }
  else
  {
    v35 = (v135 & 0x20) == 0 && (v135 & 0x40000) == 0 && (v135 & 0x10) != 0;
    if ( v34 )
      goto LABEL_72;
  }
  v36 = 0LL;
  if ( v2 != 1 )
    v36 = (__int64)v3;
  if ( (int)PipGenerateContainerID(a1, v36, v35, v34, &v127) >= 0 )
  {
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    v34 = (WCHAR *)v127;
    SourceString = v127;
  }
  if ( !v34 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    goto LABEL_74;
  }
LABEL_72:
  RtlInitUnicodeString(&DestinationString, v34);
  if ( RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664)) < 0 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
  }
LABEL_74:
  v37 = KeGetCurrentThread();
  --v37->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(a1, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Handle && SourceString )
  {
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), (__int64)Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v40 = Handle;
  if ( !Handle )
    goto LABEL_91;
  v41 = (const WCHAR *)v115;
  v42 = v119;
  v43 = v120;
  if ( v98 || v97 == 1 )
  {
    v45 = v95;
  }
  else
  {
    LOBYTE(BugCheckParameter4) = 1;
    v44 = PnpCheckDeviceIdsChanged(a1, Handle, (const WCHAR *)v120, v119, BugCheckParameter4, &v95);
    v45 = v95;
    if ( v44 < 0 )
      v45 = 0;
    LOBYTE(v95) = v45;
    if ( !v45 )
    {
      LOBYTE(BugCheckParameter4a) = 0;
      v46 = PnpCheckDeviceIdsChanged(a1, v40, v41, v111, BugCheckParameter4a, &v95);
      v45 = v95;
      if ( v46 < 0 )
        v45 = 0;
    }
  }
  if ( v43 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v40, 2, 7, (__int64)v43, v42, v99);
  v47 = v99;
  if ( v41 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v40, 3, 7, (__int64)v41, v111, v99);
  if ( v45 || (_BYTE)v104 )
  {
    v48 = v98;
    if ( v98 )
    {
      v91 = v96;
      v92 = v105;
    }
    else
    {
      v90 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(a1 + 48), v40, &v105);
      v91 = v96;
      if ( v90 < 0 )
      {
        v92 = 0;
      }
      else
      {
        v92 = v105;
        v91 = v105 | v96;
        v96 |= v105;
      }
    }
    if ( (v92 & 0x20) != 0 || (v91 & 0x40000) != 0 )
    {
      v96 = v91 & 0xFFFBFFFF;
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v40, 11, 4, (__int64)&v96, 4, v47);
      LOBYTE(v91) = v96;
    }
    if ( (v91 & 0x20) != 0 )
    {
      v48 = 1;
      PipSetDevNodeProblem(a1, 18LL, 0LL);
    }
  }
  else
  {
LABEL_91:
    v48 = v98;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v49 = Handle;
  v50 = v114;
  if ( Handle )
  {
    v110 = 0LL;
    AlternateStringData = 0;
    v106 = 0;
    v52 = 0;
    if ( v114 )
    {
      v53 = -1LL;
      do
        ++v53;
      while ( *((_WORD *)v114 + v53) );
      v52 = 2 * v53 + 2;
      AlternateStringData = PnpFindAlternateStringData(v114, v52, &v110, &v106);
    }
    v54 = v99;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v50,
      v52,
      v99);
    if ( (int)PnpGetDeviceLocationStrings(a1, (char **)&v110, &v106) >= 0 )
    {
      v55 = v110;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v110,
        2 * v106,
        v54);
      ExFreePoolWithTag(v55, 0);
    }
  }
  PnpQueryBusInformation(a1);
  if ( (v135 & 0x4000) == 0 && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    if ( v48 )
    {
      v69 = v107;
      if ( v97 == 1 )
        v69 = v107 | 1;
      if ( PiDevCfgMode )
        PiDevCfgProcessDevice(a1, v49, v69);
    }
    else
    {
      PpDevCfgProcessDeviceOperations(a1, v49);
    }
  }
  PiQueryResourceRequirements(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 22)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0
     || *(_DWORD *)(a1 + 404) != 29
     && *(_DWORD *)(a1 + 404) != 14
     && *(_DWORD *)(a1 + 404) != 9
     && *(_DWORD *)(a1 + 404) != 3
     && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIsDeviceInstanceEnabled(v49, a1 + 40, 1LL);
  }
  if ( v49 )
    PnpInitializeSessionId(a1, (__int64)v49, v97 == 1);
  PiQueryAndAllocateBootResources(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v56 = KeGetCurrentThread();
    --v56->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v57) = v97 == 1;
    PnpSaveDeviceCapabilities(a1, &v134, v57);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PpHotSwapUpdateRemovalPolicy(a1);
    LOBYTE(v58) = 1;
    v59 = PpDeviceRegistration(a1 + 40, v58, a1 + 56, 0);
    if ( v59 < 0 )
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v59);
    v50 = v114;
    v49 = Handle;
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIrpDeviceEnumerated((int)v4);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v60, *(_QWORD *)(a1 + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v61, *(_QWORD *)(a1 + 48), 14LL);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, v4);
    PnpNewDeviceNodeDependencyCheck(a1);
  }
  if ( v120 )
    ExFreePoolWithTag(v120, 0);
  if ( v115 )
    ExFreePoolWithTag(v115, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v49 )
    ZwClose(v49);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v121 )
    ExFreePoolWithTag(v121, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  if ( v116 )
    ExFreePoolWithTag(v116, 0);
  v62 = v122;
  if ( v122 )
    PiPnpRtlEndOperation((char *)v122);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    Template_p((__int64)v62, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, a1);
  v63 = v101;
  if ( *(_DWORD *)(a1 + 568) )
    PnpTraceDockDeviceEnumeration(a1, v101);
  return v63;
}
