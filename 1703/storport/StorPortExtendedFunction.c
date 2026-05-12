/*
 * XREFs of StorPortExtendedFunction @ 0x1C000B3F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     StorpRequestTimer @ 0x1C000C9F4 (StorpRequestTimer.c)
 *     StorpAcquireMSISpinLock @ 0x1C000DE50 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C000DEF0 (StorpReleaseMSISpinLock.c)
 *     StorpInitializeWorkItem @ 0x1C000FD08 (StorpInitializeWorkItem.c)
 *     RaidGetD3ColdCapability @ 0x1C00115A0 (RaidGetD3ColdCapability.c)
 *     RaidGetD3ColdInterface @ 0x1C00136E8 (RaidGetD3ColdInterface.c)
 *     StorpInitializeTimer @ 0x1C001B9E4 (StorpInitializeTimer.c)
 *     StorpAllocatePool @ 0x1C001BAB8 (StorpAllocatePool.c)
 *     StorpGetMSIInfo @ 0x1C001BE0C (StorpGetMSIInfo.c)
 *     RaidGetStartIoPerfParams @ 0x1C001C3B0 (RaidGetStartIoPerfParams.c)
 *     StorpTelemetryMiniportEvent @ 0x1C001C454 (StorpTelemetryMiniportEvent.c)
 *     RaidInitializePerfOpts @ 0x1C001CAF4 (RaidInitializePerfOpts.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C001CFF8 (StorpAdapterInitializePoFxPower.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C001DC60 (StorPortpInvokeAcpiMethod.c)
 *     RaidNtStatusToStorStatus @ 0x1C001DCEC (RaidNtStatusToStorStatus.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C001E014 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpGetRequestInfo @ 0x1C001E830 (StorpGetRequestInfo.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     StorDelayExecution @ 0x1C001EBC4 (StorDelayExecution.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidInitializeCryptoEngine @ 0x1C002F548 (RaidInitializeCryptoEngine.c)
 *     RaidInitializeRpmb @ 0x1C002F688 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002F848 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     Template_pqqq @ 0x1C002FDBC (Template_pqqq.c)
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C00307A4 (WPP_SF_D.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C0031F90 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0032030 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003209C (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0032200 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C00323C8 (StorBuildScatterGatherListProxy.c)
 *     StorEtwMiniportEventProxy @ 0x1C0032430 (StorEtwMiniportEventProxy.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C00337D0 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C0033840 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C0033B4C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0033C80 (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C0033E78 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C0033EC8 (StorpFlushDataBufferMdl.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C0033F2C (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C0033F94 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C0034038 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003426C (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C0034430 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C00344B8 (StorpGetDataInSgList.c)
 *     StorpGetOriginalMdl @ 0x1C00346F0 (StorpGetOriginalMdl.c)
 *     StorpGetPfns @ 0x1C0034770 (StorpGetPfns.c)
 *     StorpGetSystemAddress @ 0x1C003480C (StorpGetSystemAddress.c)
 *     StorpLogSystemEvent @ 0x1C0034980 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C0034AB8 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C0034BB8 (StorpQueueWorkItem.c)
 *     StorpSetUnitAttributes @ 0x1C0034CE8 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0034D60 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0035FB0 (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C004320C (StorpLogRegisterAdapterPerfStates.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        __int64 a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        GUID *a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *a5,
        PULONG a6,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned __int64 Mask; // rdi
  unsigned int v12; // r15d
  __int64 v13; // r14
  unsigned int v14; // ebx
  PDEVICE_OBJECT v16; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  struct _GROUP_AFFINITY *v19; // r8
  _QWORD *v20; // rcx
  struct _GROUP_AFFINITY *v21; // rbx
  USHORT v22; // r14
  struct _PROCESSOR_NUMBER *v23; // rbx
  struct _PROCESSOR_NUMBER *v24; // rbx
  struct _GROUP_AFFINITY *v25; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  NTSTATUS LogicalProcessorRelationship; // eax
  KSPIN_LOCK v28; // rcx
  KSPIN_LOCK v29; // rcx
  struct _GROUP_AFFINITY *v30; // rbx
  struct _GROUP_AFFINITY *v31; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v32; // rbx
  struct _GROUP_AFFINITY *v33; // rbx
  __int64 v34; // rax
  struct _PROCESSOR_NUMBER *v35; // rcx
  LARGE_INTEGER *v36; // rbx
  union _LARGE_INTEGER *v37; // rcx
  int v38; // r15d
  unsigned int v39; // r12d
  __int64 v40; // r9
  char v41; // al
  unsigned __int8 CurrentIrql; // r14
  __int64 Unit; // rax
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r8
  unsigned int v47; // r15d
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned int v50; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v51; // r15
  __int64 v52; // r8
  __int64 v53; // rax
  _QWORD *v54; // rcx
  unsigned int v55; // eax
  _QWORD *v56; // rcx
  unsigned int v57; // edx
  unsigned int v58; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v59; // r15
  __int64 v60; // r8
  __int64 v61; // rax
  _QWORD *v62; // rcx
  unsigned int v63; // eax
  _QWORD *v64; // rcx
  unsigned int v65; // edx
  __int64 v66; // r8
  struct _GROUP_AFFINITY *v67; // r15
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v68; // r12
  PULONG v69; // r13
  _QWORD *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdi
  unsigned int v73; // eax
  _QWORD *v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rbx
  _QWORD *v77; // rcx
  int v78; // ecx
  unsigned int v79; // r15d
  PHYSICAL_ADDRESS v80; // rsi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 *v85; // rcx
  unsigned __int8 v86; // r9
  unsigned __int8 v87; // al
  __int64 v88; // rcx
  struct _PROCESSOR_NUMBER *v89; // rdx
  struct _GROUP_AFFINITY *v90; // r15
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v91; // rsi
  __int64 v92; // rcx
  struct _PROCESSOR_NUMBER *v93; // rcx
  unsigned int v94; // edx
  struct _PROCESSOR_NUMBER *v95; // rdx
  struct _GROUP_AFFINITY *v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // rax
  struct _DEVICE_OBJECT *v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  KSPIN_LOCK v102; // rcx
  KSPIN_LOCK v103; // rcx
  unsigned int v104; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v105; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v106; // rbx
  struct _GROUP_AFFINITY *v107; // rbx
  struct _GROUP_AFFINITY *v108; // r8
  KSPIN_LOCK v109; // rdx
  unsigned int v110; // eax
  unsigned int v111; // [rsp+50h] [rbp-19h]
  PHYSICAL_ADDRESS v112; // [rsp+58h] [rbp-11h]
  PHYSICAL_ADDRESS v113; // [rsp+60h] [rbp-9h] BYREF
  __int64 v114; // [rsp+68h] [rbp-1h]
  struct _PROCESSOR_NUMBER *v116; // [rsp+E0h] [rbp+77h] BYREF
  struct _GROUP_AFFINITY *v117; // [rsp+E8h] [rbp+7Fh]

  v116 = (struct _PROCESSOR_NUMBER *)a3;
  v117 = (struct _GROUP_AFFINITY *)a4;
  Mask = 0LL;
  v12 = a1;
  v13 = a2;
  v14 = -1056964606;
  if ( !a2 )
    return 3238002694LL;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      79LL,
      &WPP_b8c4fabb6c503934ded1881555415092_Traceguids,
      (unsigned int)a1);
    v16 = WPP_GLOBAL_Control;
    v13 = a2;
  }
  v17 = 0x1C0000000uLL;
  switch ( v12 )
  {
    case 0u:
      return (unsigned int)StorpAllocatePool(a1, (unsigned int)v116, (unsigned int)v117, a5);
    case 1u:
      v14 = 0;
      if ( !v116 )
      {
        if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v16->Timer) & 0x10) != 0 && BYTE1(v16->Timer) >= 2u )
        {
          v18 = (unsigned int)((_DWORD)v116 + 29);
          goto LABEL_14;
        }
        return (unsigned int)-1056964602;
      }
      if ( KeGetCurrentIrql() <= 2u )
      {
        ExFreePoolWithTag(v116, 0);
        return v14;
      }
      if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v16->Timer) & 0x10) != 0 && BYTE1(v16->Timer) >= 2u )
      {
        WPP_SF_(v16->AttachedDevice, 30LL, &WPP_b8c4fabb6c503934ded1881555415092_Traceguids, a4);
        return (unsigned int)-1056964600;
      }
      return (unsigned int)-1056964600;
    case 2u:
      return (unsigned int)StorpAllocateMdl(a1, v116, (unsigned int)v117, a5);
    case 3u:
      return (unsigned int)StorpFreeMdl(a1, v116);
    case 4u:
      return (unsigned int)StorpBuildMdlForNonPagedPool(a1, v116);
    case 5u:
      return (unsigned int)StorpGetSystemAddress(a1, v116, 0LL, v117);
    case 6u:
      return (unsigned int)StorpGetOriginalMdl(a1, v116, 0LL, v117);
    case 7u:
      return (unsigned int)StorpCompleteServiceIrp(v13, v116);
    case 8u:
      v14 = 0;
      v19 = v117;
      a4 = (GUID *)a5;
      if ( v13 )
      {
        if ( v116 )
        {
          if ( v117 )
          {
            if ( a5 )
            {
              v20 = **(_QWORD ***)(v13 - 16);
              *(_QWORD *)&v116->Group = v20[1];
              v19->Mask = v20[4];
              *(_QWORD *)&a4->Data1 = v20[3];
              return v14;
            }
            if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(v16->Timer) & 0x10) != 0
              && BYTE1(v16->Timer) >= 2u )
            {
              v18 = (unsigned int)((_DWORD)a5 + 48);
              goto LABEL_14;
            }
          }
          else if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(v16->Timer) & 0x10) != 0
                 && BYTE1(v16->Timer) >= 2u )
          {
            v18 = (unsigned int)((_DWORD)v117 + 47);
            goto LABEL_14;
          }
        }
        else if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(v16->Timer) & 0x10) != 0
               && BYTE1(v16->Timer) >= 2u )
        {
          v18 = 46LL;
          goto LABEL_14;
        }
      }
      else if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(v16->Timer) & 0x10) != 0
             && BYTE1(v16->Timer) >= 2u )
      {
        v18 = 45LL;
LABEL_14:
        WPP_SF_(v16->AttachedDevice, v18, &WPP_b8c4fabb6c503934ded1881555415092_Traceguids, a4);
        return (unsigned int)-1056964602;
      }
      return (unsigned int)-1056964602;
    case 9u:
      return (unsigned int)StorBuildScatterGatherListProxy(v13, &v116);
    case 0xAu:
      return (unsigned int)StorpPutScatterGatherList(v13, v116, (unsigned __int8)v117);
    case 0xBu:
      return (unsigned int)StorpAcquireMSISpinLock(v13, (unsigned int)v116, v117);
    case 0xCu:
      return (unsigned int)StorpReleaseMSISpinLock(v13, (unsigned int)v116, (unsigned int)v117);
    case 0xDu:
      return (unsigned int)StorpGetMSIInfo(v13, (unsigned int)v116, v117);
    case 0xEu:
      return (unsigned int)RaidInitializePerfOpts(v13, (unsigned __int8)v116, v117);
    case 0xFu:
      return (unsigned int)RaidGetStartIoPerfParams(v13, v116, v117);
    case 0x10u:
      return (unsigned int)StorpLogSystemEvent(v13, v116, v117);
    case 0x11u:
      if ( !v116 )
        return (unsigned int)-1056964602;
      KeGetCurrentProcessorNumberEx(v116);
      return 0;
    case 0x12u:
      v23 = v116;
      if ( !v116 )
        return (unsigned int)-1056964602;
      v23->Group = KeQueryActiveGroupCount();
      return 0;
    case 0x13u:
      v21 = v117;
      v22 = (unsigned __int16)v116;
      if ( !v117 )
        return (unsigned int)-1056964602;
      if ( v22 > KeQueryActiveGroupCount() )
        return (unsigned int)-1056964607;
      v21->Mask = KeQueryGroupAffinity(v22);
      return 0;
    case 0x14u:
      return (unsigned int)StorpGetActiveNodeCount(a1, v116);
    case 0x15u:
      if ( !v117 || (unsigned int)v116 > 0xFFFF )
        return (unsigned int)-1056964602;
      KeQueryNodeActiveAffinity((USHORT)v116, v117, 0LL);
      return 0;
    case 0x16u:
      v24 = v116;
      if ( !v116 )
        return (unsigned int)-1056964602;
      *v24 = (struct _PROCESSOR_NUMBER)KeQueryHighestNodeNumber();
      return 0;
    case 0x17u:
      LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                       v116,
                                       (LOGICAL_PROCESSOR_RELATIONSHIP)v117,
                                       a5,
                                       a6);
      if ( LogicalProcessorRelationship == -1073741820 )
        return (unsigned int)-1056964604;
      if ( LogicalProcessorRelationship == -1073741811 )
        return (unsigned int)-1056964602;
      return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x18u:
      return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNode(
                             (_DWORD)a9,
                             (_DWORD)v116,
                             (_DWORD)v117,
                             (_DWORD)a5,
                             (__int64)a6,
                             LowAddress.LowPart,
                             HighAddress.LowPart,
                             (__int64)a9);
    case 0x19u:
      MmFreeContiguousMemorySpecifyCache(v116, (SIZE_T)v117, (MEMORY_CACHING_TYPE)a5);
      return 0;
    case 0x1Au:
      return (unsigned int)StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v116, v117);
    case 0x1Bu:
      return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                             v13,
                             v116,
                             (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                             a5,
                             (_DWORD)a6,
                             (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                             HighAddress.LowPart,
                             a9);
    case 0x1Cu:
      return (unsigned int)StorpGetRequestInfo(a1, v116, v117);
    case 0x1Du:
      return (unsigned int)StorpInitializeWorkItem(v13, v116);
    case 0x1Eu:
      return (unsigned int)StorpQueueWorkItem(v13, v116, v117, a5);
    case 0x1Fu:
      return (unsigned int)StorpFreeWorkItem(v13, v116);
    case 0x20u:
      return (unsigned int)StorpInitializeTimer(v13, v116);
    case 0x21u:
      return (unsigned int)StorpRequestTimer(
                             v13,
                             (_DWORD)v116,
                             (_DWORD)v117,
                             (_DWORD)a5,
                             (__int64)a6,
                             LowAddress.QuadPart);
    case 0x22u:
      return (unsigned int)StorpFreeTimer(v13, v116);
    case 0x23u:
      InitializeSListHead((PSLIST_HEADER)v116);
      return 0;
    case 0x24u:
      v30 = v117;
      v30->Mask = (unsigned __int64)ExpInterlockedFlushSList((PSLIST_HEADER)v116);
      return 0;
    case 0x25u:
      v31 = v117;
      v31->Mask = (unsigned __int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v116);
      return 0;
    case 0x26u:
      v32 = a5;
      *(_QWORD *)&v32->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v116, (PSLIST_ENTRY)v117);
      return 0;
    case 0x27u:
      v33 = v117;
      LOWORD(v33->Mask) = ExQueryDepthSList((PSLIST_HEADER)v116);
      return 0;
    case 0x28u:
      if ( !v116 || !v117 )
        return (unsigned int)-1056964602;
      if ( v116->Number == 40 )
      {
        v28 = *(_QWORD *)&v116[20].Group;
      }
      else
      {
        v29 = *(_QWORD *)&v116[12].Group;
        if ( !v29 || *(_DWORD *)v29 != 523124044 )
          goto LABEL_99;
        v28 = *(_QWORD *)(v29 + 176);
      }
      if ( v28 )
      {
        v14 = -1056964607;
        if ( (int)IoGetActivityIdIrp(v28, v117) >= 0 )
          return 0;
        return v14;
      }
LABEL_99:
      v14 = -1056964607;
      if ( EtwActivityIdControl(3u, (LPGUID)v117) >= 0 )
        return 0;
      return v14;
    case 0x29u:
      v34 = *(_QWORD *)(v13 - 16);
      v35 = v116;
      if ( *(_DWORD *)(*(_QWORD *)v34 + 56LL) == -1 )
        return (unsigned int)-1056964599;
      if ( !v116 || v116->Group != 1 || *(_DWORD *)&v116[1] < 4u )
        return (unsigned int)-1056964602;
      v14 = 0;
      *(_WORD *)&v116->Number = *(_WORD *)(*(_QWORD *)v34 + 56LL);
      v35[2].Group = -1;
      v35[2].Number = -1;
      return v14;
    case 0x2Au:
      LOBYTE(a3) = 1;
      return (unsigned int)StorpGetOriginalMdl(a1, v116, a3, v117);
    case 0x2Bu:
      LOBYTE(a3) = 1;
      return (unsigned int)StorpGetSystemAddress(a1, v116, a3, v117);
    case 0x2Cu:
      return (unsigned int)StorpGetDataInSgList(v13, v116, v117);
    case 0x2Eu:
      return (unsigned int)StorpSetUnitAttributes(v13, v116, (unsigned int)v117);
    case 0x2Fu:
      v36 = (LARGE_INTEGER *)v117;
      v37 = (union _LARGE_INTEGER *)v116;
      if ( !v117 )
        return (unsigned int)-1056964602;
      if ( v116 )
        *(_QWORD *)&v116->Group = 1LL;
      if ( UseQPCTime )
        *v36 = KeQueryPerformanceCounter(v37);
      else
        v36->QuadPart = KeQueryUnbiasedInterruptTime();
      return 0;
    case 0x30u:
      if ( KeGetCurrentIrql() )
        return (unsigned int)-1056964600;
      if ( v116 )
        return (unsigned int)StorpUnitInitializePoFxPower(v13, v116, v117, a5);
      else
        return (unsigned int)StorpAdapterInitializePoFxPower(v13, v117, a5);
    case 0x31u:
      v38 = 0;
      v14 = 0;
      v39 = (unsigned int)a5;
      v40 = **(_QWORD **)(v13 - 16);
      if ( !v117 )
        goto LABEL_144;
      v41 = BYTE2(v117->Mask);
      if ( v41 == 40 )
        Mask = v117[6].Mask;
      else
        Mask = v117[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return (unsigned int)-1056964602;
      if ( v41 == 40 )
        v38 = *(_DWORD *)&v117[1].Group;
      else
        v38 = *(_DWORD *)&v117->Reserved[1];
LABEL_144:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
        return (unsigned int)-1056964600;
      if ( (_DWORD)a6 )
        return (unsigned int)-1056964602;
      if ( v116 )
      {
        if ( v116->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v116[1] < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v111) = v116[2].Group;
        BYTE2(v111) = v116[2].Number;
        Unit = RaidAdapterFindUnit(v40, v111, (unsigned int)a6, v40);
        v44 = Unit;
        if ( !Unit )
          return (unsigned int)-1056964602;
        if ( (v38 & 0x100800) == 0 )
          goto LABEL_155;
        if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          goto LABEL_199;
        if ( *(_QWORD *)(*(_QWORD *)(v44 + 24) + 5088LL) )
        {
LABEL_155:
          if ( CurrentIrql == 2 || (*(_BYTE *)(v44 + 153) & 1) != 0 || *(_BYTE *)(v44 + 152) >= 0x80u )
            v45 = 2LL;
          else
            v45 = 0LL;
          v14 = RaidUnitPoFxActivateComponentFromMiniport(v44, v39, v45);
          if ( Mask )
            *(_BYTE *)(Mask + 16) |= 0x80u;
        }
      }
      else
      {
        if ( !*(_QWORD *)(v40 + 5088) || (v38 & 0x100800) != 0 )
          return (unsigned int)-1056964601;
        if ( CurrentIrql == 2 || (*(_BYTE *)(v40 + 108) & 3) != 0 )
          v46 = 2LL;
        else
          v46 = 0LL;
        v14 = RaidAdapterPoFxActivateComponentFromMiniport(v40, (unsigned int)a5, v46);
        if ( Mask )
          *(_BYTE *)(Mask + 16) |= 0x80u;
      }
      return v14;
    case 0x32u:
      v14 = 0;
      v47 = (unsigned int)a5;
      v48 = **(_QWORD **)(v13 - 16);
      if ( !v117 )
        goto LABEL_175;
      if ( BYTE2(v117->Mask) == 40 )
        Mask = v117[6].Mask;
      else
        Mask = v117[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return (unsigned int)-1056964602;
      if ( *(char *)(Mask + 16) >= 0 )
        return v14;
LABEL_175:
      if ( KeGetCurrentIrql() > 2u && !Mask )
        return (unsigned int)-1056964600;
      if ( (_DWORD)a6 )
        return (unsigned int)-1056964602;
      if ( !v116 )
      {
        if ( !*(_QWORD *)(v48 + 5088) )
          return (unsigned int)-1056964601;
        if ( KeGetCurrentIrql() <= 2u )
        {
          return (unsigned int)RaidAdapterPoFxIdleComponentFromMiniport(**(_QWORD **)(v13 - 16), (unsigned int)a5);
        }
        else
        {
          *(_BYTE *)(Mask + 17) |= 1u;
          v14 = -1056964596;
          *(_DWORD *)(Mask + 748) = v47;
        }
        return v14;
      }
      if ( v116->Group == 1 && *(_DWORD *)&v116[1] >= 4u )
      {
        LOWORD(v111) = v116[2].Group;
        BYTE2(v111) = v116[2].Number;
        v49 = RaidAdapterFindUnit(v48, v111, v48, (unsigned int)a6);
        if ( v49 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            return (unsigned int)RaidUnitPoFxIdleComponentFromMiniport(v49, v47);
          }
          else
          {
            *(_BYTE *)(Mask + 17) |= 2u;
            v14 = -1056964596;
            *(_DWORD *)(Mask + 748) = v47;
          }
          return v14;
        }
      }
      return (unsigned int)-1056964602;
    case 0x33u:
      v50 = (unsigned int)v117;
      v51 = a5;
      v52 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( !v116 )
      {
        v56 = *(_QWORD **)(v52 + 5088);
        if ( !v56 )
          return (unsigned int)-1056964601;
        v57 = *(_DWORD *)(v56[1] + 8LL);
        if ( (int)v117 + 1 >= v57 && (int)v117 + 1 <= v57 )
        {
          PoFxSetComponentLatency(*v56, (unsigned int)v117, a5);
          return 0;
        }
        return (unsigned int)-1056964602;
      }
      if ( v116->Group != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)&v116[1] < 4u )
        return (unsigned int)-1056964602;
      LOWORD(v111) = v116[2].Group;
      BYTE2(v111) = v116[2].Number;
      v53 = RaidAdapterFindUnit(v52, v111, v52, (__int64)a4);
      v44 = v53;
      if ( !v53 )
        return (unsigned int)-1056964602;
      if ( !RaidUnitCheckAndAcquirePoFx(v53) )
        return (unsigned int)-1056964601;
      v54 = *(_QWORD **)(v44 + 1456);
      v55 = *(_DWORD *)(v54[1] + 8LL);
      if ( v50 + 1 >= v55 && v50 + 1 <= v55 )
      {
        PoFxSetComponentLatency(*v54, v50, v51);
        v14 = 0;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v44 + 1448));
        return v14;
      }
      goto LABEL_198;
    case 0x34u:
      v58 = (unsigned int)v117;
      v59 = a5;
      v60 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( !v116 )
      {
        v64 = *(_QWORD **)(v60 + 5088);
        if ( !v64 )
          return (unsigned int)-1056964601;
        v65 = *(_DWORD *)(v64[1] + 8LL);
        if ( (int)v117 + 1 >= v65 && (int)v117 + 1 <= v65 )
        {
          PoFxSetComponentResidency(*v64, (unsigned int)v117, a5);
          return 0;
        }
        return (unsigned int)-1056964602;
      }
      if ( v116->Group != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)&v116[1] < 4u )
        return (unsigned int)-1056964602;
      LOWORD(v111) = v116[2].Group;
      BYTE2(v111) = v116[2].Number;
      v61 = RaidAdapterFindUnit(v60, v111, v60, (__int64)a4);
      v44 = v61;
      if ( !v61 )
        return (unsigned int)-1056964602;
      if ( !RaidUnitCheckAndAcquirePoFx(v61) )
        return (unsigned int)-1056964601;
      v62 = *(_QWORD **)(v44 + 1456);
      v63 = *(_DWORD *)(v62[1] + 8LL);
      if ( v58 + 1 < v63 || v58 + 1 > v63 )
      {
LABEL_198:
        v14 = -1056964602;
LABEL_199:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v44 + 1448));
      }
      else
      {
        PoFxSetComponentResidency(*v62, v58, v59);
        v14 = 0;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v44 + 1448));
      }
      return v14;
    case 0x35u:
      v66 = **(_QWORD **)(v13 - 16);
      v67 = v117;
      v68 = a5;
      v69 = a6;
      v70 = a9;
      v113 = LowAddress;
      v112 = HighAddress;
      if ( KeGetCurrentIrql() > 2u )
      {
        if ( a9 )
          *a9 = 0LL;
        return (unsigned int)-1056964600;
      }
      if ( !v116 )
      {
        v74 = *(_QWORD **)(v66 + 5088);
        if ( v74 )
        {
          LogicalProcessorRelationship = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                                           *v74,
                                           v117,
                                           a5,
                                           a6,
                                           (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                                           (PHYSICAL_ADDRESS)HighAddress.QuadPart,
                                           a9);
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        }
        return (unsigned int)-1056964601;
      }
      if ( v116->Group == 1 && *(_DWORD *)&v116[1] >= 4u )
      {
        LOWORD(v111) = v116[2].Group;
        BYTE2(v111) = v116[2].Number;
        v71 = RaidAdapterFindUnit(v66, v111, v66, HighAddress.QuadPart);
        v72 = v71;
        if ( v71 )
        {
          if ( RaidUnitCheckAndAcquirePoFx(v71) )
          {
            v73 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v72 + 1456),
                    v67,
                    v68,
                    v69,
                    (PHYSICAL_ADDRESS)v113.QuadPart,
                    (PHYSICAL_ADDRESS)v112.QuadPart,
                    v70);
            v14 = RaidNtStatusToStorStatus(v73);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v72 + 1448));
            return v14;
          }
          return (unsigned int)-1056964601;
        }
      }
      return (unsigned int)-1056964602;
    case 0x36u:
      return (unsigned int)StorpFlushDataBufferMdl(a1, v116);
    case 0x37u:
      v89 = v116;
      v90 = v117;
      v91 = a5;
      v92 = **(_QWORD **)(v13 - 16);
      if ( !a5 )
        return (unsigned int)-1056964602;
      if ( !v92 )
        return (unsigned int)-1056964602;
      a5->Relationship = RelationProcessorCore;
      if ( v89 )
      {
        if ( v89->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v89[1] < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v111) = v89[2].Group;
        BYTE2(v111) = v89[2].Number;
        if ( !RaidAdapterFindUnit(v92, v111, (__int64)a3, (__int64)a4) )
          return (unsigned int)-1056964602;
      }
      if ( v90->Mask == 0x481F895FDCAF9C10LL && *(_QWORD *)&v90->Group == 0x3356F5D2CED492A4LL )
      {
        v14 = 0;
        v91->Relationship = (unsigned __int8)g_InWinPE;
      }
      return v14;
    case 0x38u:
      v25 = v117;
      if ( !v116 || !v117 )
        return (unsigned int)-1056964602;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v116);
      LODWORD(v25->Mask) = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber == -1 )
        LODWORD(Mask) = -1056964602;
      return (unsigned int)Mask;
    case 0x39u:
      v75 = (unsigned int)v117;
      if ( v116 )
        return 3238002694LL;
      v76 = **(_QWORD **)(v13 - 16);
      if ( !v76 )
        return (unsigned int)-1056964602;
      v77 = *(_QWORD **)(v76 + 5088);
      if ( !v77 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v76 + 108) & 0x40) != 0 )
        return (unsigned int)-1056964607;
      *(_DWORD *)(v76 + 5104) = (_DWORD)v117;
      PoFxSetDeviceIdleTimeout(*v77, 10000 * v75);
      if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
        return 0;
      Template_pqqq(
        v78,
        (unsigned int)&EventAdapterIdleTimeoutSet,
        0,
        **(_QWORD **)(v76 + 5088),
        *(_DWORD *)(v76 + 56),
        v75,
        *(_DWORD *)(v76 + 5104));
      return 0;
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
      if ( !StorEtwLoggingEnabled || !_bittest((const signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData, 0x1Cu) )
        return 0;
      return (unsigned int)StorEtwMiniportEventProxy(v13, v12, &v116);
    case 0x3Du:
      v93 = v116;
      if ( v116 )
        LOBYTE(v116->Group) = 0;
      v94 = -1056964602;
      if ( v93 )
      {
        v94 = 0;
        LOBYTE(v93->Group) = g_OSisUpgrade;
      }
      v14 = 0;
      if ( !v93 )
        return v94;
      return v14;
    case 0x3Eu:
      LOBYTE(v17) = 1;
      return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, v17, &v116);
    case 0x3Fu:
      return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v116);
    case 0x40u:
      v100 = **(_QWORD **)(v13 - 16);
      if ( !v100 || (unsigned int)v116 >= 0x14 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v100 + 544) & 1) == 0 )
        return (unsigned int)-1056964607;
      *(_DWORD *)(v100 + 4356) = (_DWORD)v116;
      return 0;
    case 0x41u:
      v79 = (unsigned int)a6;
      v80 = LowAddress;
      if ( v116 )
        return 3238002694LL;
      v81 = **(_QWORD **)(v13 - 16);
      if ( !v81 )
        return 3238002694LL;
      v82 = *(_QWORD *)(v81 + 5088);
      if ( !v82 || *(_BYTE *)(v82 + 24) )
        return 3238002689LL;
      LogicalProcessorRelationship = RaidRegisterPerfStates(
                                       *(_QWORD *)(v81 + 8),
                                       (_DWORD)v117,
                                       (_DWORD)a5,
                                       (_DWORD)a6,
                                       LowAddress.QuadPart,
                                       *(_QWORD *)v82);
      if ( LogicalProcessorRelationship < 0 )
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterCacheOperationalPowerRange)(
                              *(_QWORD *)(v81 + 5088),
                              v79,
                              (PHYSICAL_ADDRESS)v80.QuadPart) )
      {
        *(_QWORD *)(*(_QWORD *)(v81 + 5088) + 48LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v81 + 5088) + 56LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v81 + 5088) + 64LL) = -1LL;
      }
      *(_BYTE *)(*(_QWORD *)(v81 + 5088) + 24LL) = v79;
      ((void (__fastcall *)(_QWORD, _QWORD))StorpLogRegisterAdapterPerfStates)(v81, (PHYSICAL_ADDRESS)v80.QuadPart);
      return 0;
    case 0x42u:
      v83 = (unsigned int)a5;
      if ( v116 || (_DWORD)a5 )
        return 3238002694LL;
      v84 = *(_QWORD *)(v13 - 16);
      if ( !*(_QWORD *)v84 )
        return v14;
      v85 = *(__int64 **)(*(_QWORD *)v84 + 5088LL);
      if ( !v85 )
        return v14;
      v86 = KeGetCurrentIrql();
      v113.LowPart = 0;
      v114 = 0LL;
      v87 = *((_BYTE *)v85 + 24);
      if ( !v87 || (unsigned int)a6 >= v87 )
        return 3238002694LL;
      v113.LowPart = (unsigned int)a6;
      LODWORD(v114) = LowAddress.LowPart;
      v88 = *v85;
      if ( v86 >= 2u )
        v83 = 2LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
        v88,
        v83,
        (unsigned int)v117,
        &v113,
        (PHYSICAL_ADDRESS)HighAddress.QuadPart);
      return 0;
    case 0x43u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      v95 = v116;
      v14 = -1056964602;
      v96 = v117;
      if ( !v117 )
        return v14;
      LOBYTE(v117->Mask) = 0;
      v97 = **(_QWORD **)(a2 - 16);
      if ( !v97 )
        return v14;
      if ( v95 )
      {
        if ( v95->Group != 1 )
          return v14;
        if ( *(_DWORD *)&v95[1] < 4u )
          return v14;
        LOWORD(v111) = v95[2].Group;
        BYTE2(v111) = v95[2].Number;
        v98 = RaidAdapterFindUnit(v97, v111, (__int64)a3, (__int64)a4);
        if ( !v98 )
          return v14;
        v99 = *(struct _DEVICE_OBJECT **)(v98 + 8);
      }
      else
      {
        v99 = *(struct _DEVICE_OBJECT **)(v97 + 8);
      }
      if ( !v99 )
        return v14;
      LogicalProcessorRelationship = RaidGetD3ColdInterface(v99);
      if ( LogicalProcessorRelationship >= 0 )
      {
        LOBYTE(v96->Mask) = RaidGetD3ColdCapability(0LL);
        return 0;
      }
      return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x44u:
      if ( v116 )
        return (unsigned int)-1056964601;
      return (unsigned int)RaidInitializeRpmb(v13, v117);
    case 0x45u:
      return (unsigned int)StorpAllocateHostMemoryBuffer(
                             v13,
                             (int)v116,
                             (int)v117,
                             (int)a5,
                             (int)a6,
                             LowAddress,
                             HighAddress,
                             (__int64)a9,
                             a10,
                             a11);
    case 0x46u:
      return (unsigned int)StorpFreeHostMemoryBuffer(v13);
    case 0x47u:
      v101 = **(_QWORD **)(v13 - 16);
      if ( !v101 )
        return (unsigned int)-1056964602;
      if ( !*(_BYTE *)(v101 + 500) )
        return (unsigned int)-1056964601;
      if ( !v116 || !v117 )
        return (unsigned int)-1056964602;
      if ( v116->Number == 40 )
      {
        v102 = *(_QWORD *)&v116[20].Group;
      }
      else
      {
        v103 = *(_QWORD *)&v116[12].Group;
        if ( !v103 || *(_DWORD *)v103 != 523124044 )
          return (unsigned int)-1056964602;
        v102 = *(_QWORD *)(v103 + 176);
      }
      if ( !v102 )
        return (unsigned int)-1056964602;
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( (_DWORD)a5 )
      {
        v104 = IoPropagateIrpExtension();
        return (unsigned int)RaidNtStatusToStorStatus(v104);
      }
      else
      {
        return 0;
      }
    case 0x48u:
      v105 = a5;
      *(_QWORD *)&v105->Relationship = ExInterlockedInsertHeadList(
                                         (PLIST_ENTRY)v116,
                                         (PLIST_ENTRY)v117,
                                         (PKSPIN_LOCK)a6);
      return 0;
    case 0x49u:
      v106 = a5;
      *(_QWORD *)&v106->Relationship = ExInterlockedInsertTailList(
                                         (PLIST_ENTRY)v116,
                                         (PLIST_ENTRY)v117,
                                         (PKSPIN_LOCK)a6);
      return 0;
    case 0x4Au:
      v107 = v117;
      v107->Mask = (unsigned __int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)v116, (PKSPIN_LOCK)a5);
      return 0;
    case 0x4Bu:
      KeInitializeSpinLock((PKSPIN_LOCK)&v116->Group);
      return 0;
    case 0x4Cu:
      return (unsigned int)StorpGetPfns(v13, (_DWORD)v116, (_DWORD)v117, (_DWORD)a5, (__int64)a6, LowAddress.QuadPart);
    case 0x4Du:
      if ( !v116 )
        return (unsigned int)-1056964602;
      return (unsigned int)RaidInitializeCryptoEngine(v13);
    case 0x4Eu:
      v108 = v117;
      if ( !v116 || !v117 )
        return (unsigned int)-1056964602;
      if ( v116->Number == 40 )
        v109 = *(_QWORD *)&v116[24].Group;
      else
        v109 = *(_QWORD *)&v116[12].Group;
      v14 = 0;
      LODWORD(v117->Mask) = **(_DWORD **)(v109 + 784);
      HIDWORD(v108->Mask) = *(_DWORD *)(*(_QWORD *)(v109 + 784) + 4LL);
      *(_DWORD *)&v108->Group = *(_DWORD *)(*(_QWORD *)(v109 + 784) + 8LL);
      v108[1].Mask = *(_QWORD *)(*(_QWORD *)(v109 + 784) + 16LL);
      return v14;
    case 0x4Fu:
      if ( !v117 )
        return (unsigned int)-1056964602;
      v110 = v117[3].Mask;
      if ( v110 > 0x1000 )
        return (unsigned int)-1056964598;
      if ( v110 && !*(_QWORD *)&v117[3].Group || *(_QWORD *)&v117[3].Group && !v110 )
        return (unsigned int)-1056964602;
      StorpTelemetryMiniportEvent(**(_QWORD **)(v13 - 16), v116);
      return 0;
    case 0x51u:
      StorDelayExecution((unsigned int)v116);
      return 0;
    default:
      if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v16->Timer) & 0x10) != 0 && BYTE1(v16->Timer) >= 2u )
        WPP_SF_D(v16->AttachedDevice, 80LL, &WPP_b8c4fabb6c503934ded1881555415092_Traceguids, v12);
      return v14;
  }
}
