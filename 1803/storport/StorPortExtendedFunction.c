/*
 * XREFs of StorPortExtendedFunction @ 0x1C0002880
 * Callers:
 *     <none>
 * Callees:
 *     StorpRequestTimer @ 0x1C0001008 (StorpRequestTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     StorpAllocatePool @ 0x1C0010C60 (StorpAllocatePool.c)
 *     RaidGetD3ColdInterface @ 0x1C0015F0C (RaidGetD3ColdInterface.c)
 *     RaidGetStartIoPerfParams @ 0x1C0017150 (RaidGetStartIoPerfParams.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pqqq @ 0x1C0024214 (McTemplateK0pqqq.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidInitializeCryptoEngine @ 0x1C002A560 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOpts @ 0x1C002A6A4 (RaidInitializePerfOpts.c)
 *     RaidInitializeRpmb @ 0x1C002B684 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002BBD8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C002C028 (WPP_SF_D.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C002F348 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C002F3F0 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C002F5BC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C002F79C (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C002F964 (StorBuildScatterGatherListProxy.c)
 *     StorEtwMiniportEventProxy @ 0x1C002FA30 (StorEtwMiniportEventProxy.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0031520 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C00315E0 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAcquireMSISpinLock @ 0x1C0031750 (StorpAcquireMSISpinLock.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00317EC (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C0031AA8 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C0031B18 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C0031C34 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C0031F4C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0032080 (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C0032274 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C00322C4 (StorpFlushDataBufferMdl.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C0032328 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C0032394 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C00323FC (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C00324A0 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00326DC (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C00328A0 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C0032928 (StorpGetDataInSgList.c)
 *     StorpGetMSIInfo @ 0x1C0032B60 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C0032C48 (StorpGetOriginalMdl.c)
 *     StorpGetPfns @ 0x1C0032CC8 (StorpGetPfns.c)
 *     StorpGetRequestInfo @ 0x1C0032D64 (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C0032FBC (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C0033130 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C00332B0 (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C00333E8 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C0033558 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C0033658 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C0033788 (StorpReleaseMSISpinLock.c)
 *     StorpSetUnitAttributes @ 0x1C0033818 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0033890 (StorpUnitInitializePoFxPower.c)
 *     RaidGetD3ColdCapability @ 0x1C003528C (RaidGetD3ColdCapability.c)
 *     RaidRegisterPerfStates @ 0x1C00357C8 (RaidRegisterPerfStates.c)
 *     RaidNtStatusToStorStatus @ 0x1C00399A8 (RaidNtStatusToStorStatus.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0043D00 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0045A94 (StorpTelemetryMiniportEvent.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        unsigned int a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        GUID *a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *a5,
        PULONG a6,
        PHYSICAL_ADDRESS a7,
        PHYSICAL_ADDRESS a8,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // r14d
  __int64 v13; // rsi
  unsigned int v14; // ebx
  unsigned __int64 Mask; // r13
  PDEVICE_OBJECT v16; // rcx
  KSPIN_LOCK Alignment; // rax
  unsigned __int64 v19; // rdx
  KSPIN_LOCK v20; // rax
  KSPIN_LOCK v21; // rcx
  int ActivityIdIrp; // eax
  __int64 v23; // rcx
  KSPIN_LOCK v24; // rax
  KSPIN_LOCK v25; // rcx
  struct _GROUP_AFFINITY *v26; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v27; // r9
  _QWORD *v28; // rcx
  PDEVICE_OBJECT v29; // rcx
  __int64 v30; // rdx
  union _SLIST_HEADER *v31; // rdi
  struct _GROUP_AFFINITY *v32; // rdi
  USHORT v33; // bx
  USHORT *v34; // rbx
  union _SLIST_HEADER *v35; // rbx
  struct _GROUP_AFFINITY *v36; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  NTSTATUS LogicalProcessorRelationship; // eax
  struct _GROUP_AFFINITY *v39; // rbx
  struct _GROUP_AFFINITY *v40; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v41; // rbx
  struct _GROUP_AFFINITY *v42; // rbx
  union _SLIST_HEADER *v43; // rdx
  int v44; // eax
  LARGE_INTEGER *v45; // rbx
  union _LARGE_INTEGER *v46; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int v48; // r12d
  __int64 v49; // r9
  char v50; // al
  unsigned __int8 CurrentIrql; // si
  __int64 Unit; // rax
  __int64 v53; // rdi
  unsigned int v54; // eax
  unsigned int v55; // edi
  __int64 v56; // r8
  __int64 v57; // rax
  unsigned int v58; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v59; // r15
  __int64 v60; // r8
  __int64 v61; // rax
  _QWORD *v62; // rcx
  unsigned int v63; // edx
  _QWORD *v64; // rcx
  unsigned int v65; // r8d
  unsigned int v66; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v67; // r15
  __int64 v68; // r8
  __int64 v69; // rax
  _QWORD *v70; // rcx
  unsigned int v71; // edx
  _QWORD *v72; // rcx
  unsigned int v73; // r8d
  __int64 v74; // r8
  struct _GROUP_AFFINITY *v75; // r12
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v76; // r13
  _QWORD *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rdi
  unsigned int v80; // eax
  _QWORD *v81; // rcx
  __int64 Arg2; // rdi
  __int64 v83; // rbx
  _QWORD *v84; // rcx
  struct _MCGEN_TRACE_CONTEXT *v85; // rcx
  unsigned int v86; // edi
  PHYSICAL_ADDRESS v87; // r15
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 *v93; // rcx
  unsigned __int8 v94; // r9
  unsigned __int8 v95; // al
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v98; // rdi
  union _SLIST_HEADER *v99; // rdx
  struct _GROUP_AFFINITY *v100; // r12
  __int64 v101; // rcx
  __int64 v102; // rax
  struct _GROUP_AFFINITY *v103; // rdi
  union _SLIST_HEADER *v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  struct _DEVICE_OBJECT *v107; // rcx
  __int64 v108; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v109; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v110; // rbx
  struct _GROUP_AFFINITY *v111; // rbx
  struct _GROUP_AFFINITY *v112; // r8
  KSPIN_LOCK v113; // rdx
  unsigned int v114; // eax
  __int64 v115; // rcx
  unsigned int v116; // [rsp+58h] [rbp-19h]
  unsigned int v117; // [rsp+60h] [rbp-11h]
  PHYSICAL_ADDRESS v118; // [rsp+60h] [rbp-11h]
  PHYSICAL_ADDRESS v119; // [rsp+68h] [rbp-9h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp-1h] BYREF
  __int64 v121; // [rsp+78h] [rbp+7h]
  union _SLIST_HEADER *v123; // [rsp+E8h] [rbp+77h] BYREF
  struct _GROUP_AFFINITY *v124; // [rsp+F0h] [rbp+7Fh]

  v123 = (union _SLIST_HEADER *)a3;
  v124 = (struct _GROUP_AFFINITY *)a4;
  v11 = 0;
  v13 = a2;
  v14 = -1056964606;
  Mask = 0LL;
  if ( a2 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids, a1);
      v13 = a2;
    }
    if ( a1 == 6 )
    {
LABEL_5:
      v14 = 0;
      if ( v124 )
      {
        if ( *((_BYTE *)&v123->HeaderX64 + 2) == 40 )
          Alignment = v123[6].Alignment;
        else
          Alignment = v123[3].Alignment;
        v124->Mask = *(_QWORD *)(Alignment + 104);
        return v14;
      }
      v29 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        v30 = 43LL;
LABEL_358:
        WPP_SF_(v29->AttachedDevice, v30, &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
      }
      return (unsigned int)-1056964602;
    }
    v19 = 0x1C0000000uLL;
    switch ( a1 )
    {
      case 0u:
        return (unsigned int)StorpAllocatePool(v16, (unsigned int)v123, (unsigned int)v124, a5);
      case 1u:
        v14 = 0;
        if ( !v123 )
        {
          v29 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v30 = 29LL;
            goto LABEL_358;
          }
          return (unsigned int)-1056964602;
        }
        if ( KeGetCurrentIrql() <= 2u )
        {
          ExFreePoolWithTag(v123, 0);
          return v14;
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
          return (unsigned int)-1056964600;
        }
        return (unsigned int)-1056964600;
      case 2u:
        return (unsigned int)StorpAllocateMdl(v16, v123, (unsigned int)v124, a5);
      case 3u:
        return (unsigned int)StorpFreeMdl(v16, v123);
      case 4u:
        return (unsigned int)StorpBuildMdlForNonPagedPool(v16, v123);
      case 5u:
        return (unsigned int)StorpGetSystemAddress(v16, v123, 0LL, v124);
      case 6u:
        goto LABEL_5;
      case 7u:
        return (unsigned int)StorpCompleteServiceIrp(v13, v123);
      case 8u:
        v14 = 0;
        v26 = v124;
        v27 = a5;
        if ( v13 )
        {
          if ( v123 )
          {
            if ( v124 )
            {
              if ( a5 )
              {
                v28 = **(_QWORD ***)(v13 - 16);
                v123->Alignment = v28[1];
                v26->Mask = v28[4];
                *(_QWORD *)&v27->Relationship = v28[3];
                return v14;
              }
              v29 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                v30 = 48LL;
                goto LABEL_358;
              }
            }
            else
            {
              v29 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                v30 = 47LL;
                goto LABEL_358;
              }
            }
          }
          else
          {
            v29 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v30 = 46LL;
              goto LABEL_358;
            }
          }
        }
        else
        {
          v29 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v30 = 45LL;
            goto LABEL_358;
          }
        }
        return (unsigned int)-1056964602;
      case 9u:
        return (unsigned int)StorBuildScatterGatherListProxy(v13, &v123);
      case 0xAu:
        return (unsigned int)StorpPutScatterGatherList(v13, v123, (unsigned __int8)v124);
      case 0xBu:
        return (unsigned int)StorpAcquireMSISpinLock(v13, (unsigned int)v123, v124);
      case 0xCu:
        return (unsigned int)StorpReleaseMSISpinLock(v13, (unsigned int)v123, (unsigned int)v124);
      case 0xDu:
        return (unsigned int)StorpGetMSIInfo(v13, (unsigned int)v123, v124);
      case 0xEu:
        return (unsigned int)RaidInitializePerfOpts(v13, (unsigned __int8)v123, v124);
      case 0xFu:
        return (unsigned int)RaidGetStartIoPerfParams(v13, v123, v124);
      case 0x10u:
        return (unsigned int)StorpLogSystemEvent(v13, v123, v124);
      case 0x11u:
        v31 = v123;
        if ( v123 )
          KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)v123);
        v14 = -1056964602;
        if ( v31 )
          return 0;
        return v14;
      case 0x12u:
        v34 = (USHORT *)v123;
        if ( !v123 )
          return (unsigned int)-1056964602;
        *v34 = KeQueryActiveGroupCount();
        return 0;
      case 0x13u:
        v32 = v124;
        v33 = (unsigned __int16)v123;
        if ( !v124 )
          return (unsigned int)-1056964602;
        if ( v33 > KeQueryActiveGroupCount() )
          return (unsigned int)-1056964607;
        v32->Mask = KeQueryGroupAffinity(v33);
        return 0;
      case 0x14u:
        return (unsigned int)StorpGetActiveNodeCount(v16, v123);
      case 0x15u:
        if ( !v124 || (unsigned int)v123 > 0xFFFF )
          return (unsigned int)-1056964602;
        KeQueryNodeActiveAffinity((USHORT)v123, v124, 0LL);
        return 0;
      case 0x16u:
        v35 = v123;
        if ( !v123 )
          return (unsigned int)-1056964602;
        LODWORD(v35->Alignment) = KeQueryHighestNodeNumber();
        return 0;
      case 0x17u:
        LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                         (PPROCESSOR_NUMBER)v123,
                                         (LOGICAL_PROCESSOR_RELATIONSHIP)v124,
                                         a5,
                                         a6);
        if ( LogicalProcessorRelationship == -1073741820 )
          return (unsigned int)-1056964604;
        if ( LogicalProcessorRelationship != -1073741811 )
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        return (unsigned int)-1056964602;
      case 0x18u:
        return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNode(
                               (_DWORD)a9,
                               (_DWORD)v123,
                               (_DWORD)v124,
                               (_DWORD)a5,
                               (__int64)a6,
                               a7.LowPart,
                               a8.LowPart,
                               (__int64)a9);
      case 0x19u:
        MmFreeContiguousMemorySpecifyCache(v123, (SIZE_T)v124, (MEMORY_CACHING_TYPE)a5);
        return 0;
      case 0x1Au:
        return (unsigned int)StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v123, v124);
      case 0x1Bu:
        return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                               v13,
                               v123,
                               (PHYSICAL_ADDRESS)a7.QuadPart,
                               a5,
                               (_DWORD)a6,
                               (PHYSICAL_ADDRESS)a7.QuadPart,
                               a8.LowPart,
                               a9);
      case 0x1Cu:
        return (unsigned int)StorpGetRequestInfo(v16, v123, v124);
      case 0x1Du:
        return (unsigned int)StorpInitializeWorkItem(v13, v123);
      case 0x1Eu:
        return (unsigned int)StorpQueueWorkItem(v13, v123, v124, a5);
      case 0x1Fu:
        return (unsigned int)StorpFreeWorkItem(v13, v123);
      case 0x20u:
        return (unsigned int)StorpInitializeTimer(v13, v123);
      case 0x21u:
        return (unsigned int)StorpRequestTimer(
                               v13,
                               (__int64)v123,
                               (signed __int64)v124,
                               (__int64)a5,
                               (__int64)a6,
                               a7.QuadPart);
      case 0x22u:
        return (unsigned int)StorpFreeTimer(v13, v123);
      case 0x23u:
        InitializeSListHead(v123);
        return 0;
      case 0x24u:
        v39 = v124;
        v39->Mask = (unsigned __int64)ExpInterlockedFlushSList(v123);
        return 0;
      case 0x25u:
        v40 = v124;
        v40->Mask = (unsigned __int64)ExpInterlockedPopEntrySList(v123);
        return 0;
      case 0x26u:
        v41 = a5;
        *(_QWORD *)&v41->Relationship = ExpInterlockedPushEntrySList(v123, (PSLIST_ENTRY)v124);
        return 0;
      case 0x27u:
        v42 = v124;
        LOWORD(v42->Mask) = ExQueryDepthSList(v123);
        return 0;
      case 0x28u:
        if ( !v123 || !v124 )
          return (unsigned int)-1056964602;
        if ( *((_BYTE *)&v123->HeaderX64 + 2) == 40 )
        {
          v21 = v123[5].Alignment;
        }
        else
        {
          v20 = v123[3].Alignment;
          if ( !v20 || *(_DWORD *)v20 != 523124044 )
            goto LABEL_120;
          v21 = *(_QWORD *)(v20 + 176);
        }
        if ( v21 )
        {
          ActivityIdIrp = IoGetActivityIdIrp(v21, v124);
          goto LABEL_20;
        }
LABEL_120:
        v14 = -1056964607;
        if ( EtwActivityIdControl(3u, (LPGUID)v124) >= 0 )
          return 0;
        return v14;
      case 0x29u:
        v43 = v123;
        v44 = *(_DWORD *)(**(_QWORD **)(v13 - 16) + 56LL);
        if ( v44 == -1 )
          return (unsigned int)-1056964599;
        if ( !v123 || LOWORD(v123->Alignment) != 1 || *((_DWORD *)&v123->HeaderX64 + 1) < 4u )
          return (unsigned int)-1056964602;
        *((_WORD *)&v123->HeaderX64 + 1) = v44;
        v14 = 0;
        *((_WORD *)&v43->HeaderX64 + 4) = -1;
        *((_BYTE *)&v43->HeaderX64 + 10) = -1;
        return v14;
      case 0x2Au:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetOriginalMdl(v16, v123, a3, v124);
      case 0x2Bu:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetSystemAddress(v16, v123, a3, v124);
      case 0x2Cu:
        return (unsigned int)StorpGetDataInSgList(v13, v123, v124);
      case 0x2Eu:
        return (unsigned int)StorpSetUnitAttributes(v13, v123, (unsigned int)v124);
      case 0x2Fu:
        v45 = (LARGE_INTEGER *)v124;
        v46 = (union _LARGE_INTEGER *)v123;
        if ( !v124 )
          return (unsigned int)-1056964602;
        if ( v123 )
          v123->Alignment = 1LL;
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(v46);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        *v45 = PerformanceCounter;
        return 0;
      case 0x30u:
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        if ( v123 )
          return (unsigned int)StorpUnitInitializePoFxPower(v13, v123, v124, a5);
        else
          return (unsigned int)StorpAdapterInitializePoFxPower(v13, v124, a5);
      case 0x31u:
        v48 = 0;
        v14 = 0;
        v49 = **(_QWORD **)(v13 - 16);
        v117 = (unsigned int)a5;
        if ( !v124 )
          goto LABEL_164;
        v50 = BYTE2(v124->Mask);
        if ( v50 == 40 )
          Mask = v124[6].Mask;
        else
          Mask = v124[3].Mask;
        if ( !Mask || *(_DWORD *)Mask != 523124044 )
          return (unsigned int)-1056964602;
        if ( v50 == 40 )
          v48 = *(_DWORD *)&v124[1].Group;
        else
          v48 = *(_DWORD *)&v124->Reserved[1];
LABEL_164:
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          return (unsigned int)-1056964600;
        if ( (_DWORD)a6 )
          return (unsigned int)-1056964602;
        if ( v123 )
        {
          if ( LOWORD(v123->Alignment) != 1 )
            return (unsigned int)-1056964602;
          if ( *((_DWORD *)&v123->HeaderX64 + 1) < 4u )
            return (unsigned int)-1056964602;
          LOWORD(v116) = *((_WORD *)&v123->HeaderX64 + 4);
          BYTE2(v116) = *((_BYTE *)&v123->HeaderX64 + 10);
          Unit = RaidAdapterFindUnit(v49, v116, (unsigned int)a6, v49);
          v53 = Unit;
          if ( !Unit )
            return (unsigned int)-1056964602;
          if ( (v48 & 0x100800) != 0 )
          {
            if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(Unit) )
              goto LABEL_218;
            if ( !*(_QWORD *)(*(_QWORD *)(v53 + 24) + 5088LL) )
              return v14;
          }
          if ( CurrentIrql == 2 || (*(_BYTE *)(v53 + 153) & 1) != 0 || *(char *)(v53 + 152) < 0 )
            v11 = 2;
          v54 = RaidUnitPoFxActivateComponentFromMiniport(v53, v117, v11);
        }
        else
        {
          if ( !*(_QWORD *)(v49 + 5088) || (v48 & 0x100800) != 0 )
            return (unsigned int)-1056964601;
          if ( CurrentIrql == 2 || (*(_BYTE *)(v49 + 108) & 3) != 0 )
            v11 = 2;
          v54 = RaidAdapterPoFxActivateComponentFromMiniport(v49, (unsigned int)a5, v11);
        }
        v14 = v54;
        if ( Mask )
          *(_BYTE *)(Mask + 16) |= 0x80u;
        return v14;
      case 0x32u:
        v14 = 0;
        v55 = (unsigned int)a5;
        v56 = **(_QWORD **)(v13 - 16);
        if ( !v124 )
          goto LABEL_194;
        if ( BYTE2(v124->Mask) == 40 )
          Mask = v124[6].Mask;
        else
          Mask = v124[3].Mask;
        if ( !Mask || *(_DWORD *)Mask != 523124044 )
          return (unsigned int)-1056964602;
        if ( *(char *)(Mask + 16) >= 0 )
          return v14;
LABEL_194:
        if ( KeGetCurrentIrql() > 2u && !Mask )
          return (unsigned int)-1056964600;
        if ( (_DWORD)a6 )
          return (unsigned int)-1056964602;
        if ( !v123 )
        {
          if ( !*(_QWORD *)(v56 + 5088) )
            return (unsigned int)-1056964601;
          if ( KeGetCurrentIrql() <= 2u )
          {
            return (unsigned int)RaidAdapterPoFxIdleComponentFromMiniport(**(_QWORD **)(v13 - 16), (unsigned int)a5);
          }
          else
          {
            *(_BYTE *)(Mask + 17) |= 1u;
            v14 = -1056964596;
            *(_DWORD *)(Mask + 748) = v55;
          }
          return v14;
        }
        if ( LOWORD(v123->Alignment) == 1 && *((_DWORD *)&v123->HeaderX64 + 1) >= 4u )
        {
          LOWORD(v116) = *((_WORD *)&v123->HeaderX64 + 4);
          BYTE2(v116) = *((_BYTE *)&v123->HeaderX64 + 10);
          v57 = RaidAdapterFindUnit(v56, v116, v56, (unsigned int)a6);
          if ( v57 )
          {
            if ( KeGetCurrentIrql() <= 2u )
            {
              return (unsigned int)RaidUnitPoFxIdleComponentFromMiniport(v57, v55);
            }
            else
            {
              *(_BYTE *)(Mask + 17) |= 2u;
              v14 = -1056964596;
              *(_DWORD *)(Mask + 748) = v55;
            }
            return v14;
          }
        }
        return (unsigned int)-1056964602;
      case 0x33u:
        v58 = (unsigned int)v124;
        v59 = a5;
        v60 = **(_QWORD **)(v13 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v123 )
        {
          v64 = *(_QWORD **)(v60 + 5088);
          if ( !v64 )
            return (unsigned int)-1056964601;
          v65 = *(_DWORD *)(v64[1] + 8LL);
          if ( (int)v124 + 1 >= v65 && (int)v124 + 1 <= v65 )
          {
            PoFxSetComponentLatency(*v64, (unsigned int)v124, a5);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( LOWORD(v123->Alignment) != 1 )
          return (unsigned int)-1056964602;
        if ( *((_DWORD *)&v123->HeaderX64 + 1) < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v116) = *((_WORD *)&v123->HeaderX64 + 4);
        BYTE2(v116) = *((_BYTE *)&v123->HeaderX64 + 10);
        v61 = RaidAdapterFindUnit(v60, v116, v60, a4);
        v53 = v61;
        if ( !v61 )
          return (unsigned int)-1056964602;
        if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(v61) )
          return (unsigned int)-1056964601;
        v62 = *(_QWORD **)(v53 + 1488);
        v63 = *(_DWORD *)(v62[1] + 8LL);
        if ( v58 + 1 >= v63 && v58 + 1 <= v63 )
        {
          PoFxSetComponentLatency(*v62, v58, v59);
          v14 = 0;
          goto LABEL_218;
        }
        goto LABEL_217;
      case 0x34u:
        v66 = (unsigned int)v124;
        v67 = a5;
        v68 = **(_QWORD **)(v13 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v123 )
        {
          v72 = *(_QWORD **)(v68 + 5088);
          if ( !v72 )
            return (unsigned int)-1056964601;
          v73 = *(_DWORD *)(v72[1] + 8LL);
          if ( (int)v124 + 1 >= v73 && (int)v124 + 1 <= v73 )
          {
            PoFxSetComponentResidency(*v72, (unsigned int)v124, a5);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( LOWORD(v123->Alignment) != 1 )
          return (unsigned int)-1056964602;
        if ( *((_DWORD *)&v123->HeaderX64 + 1) < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v116) = *((_WORD *)&v123->HeaderX64 + 4);
        BYTE2(v116) = *((_BYTE *)&v123->HeaderX64 + 10);
        v69 = RaidAdapterFindUnit(v68, v116, v68, a4);
        v53 = v69;
        if ( !v69 )
          return (unsigned int)-1056964602;
        if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(v69) )
          return (unsigned int)-1056964601;
        v70 = *(_QWORD **)(v53 + 1488);
        v71 = *(_DWORD *)(v70[1] + 8LL);
        if ( v66 + 1 < v71 || v66 + 1 > v71 )
        {
LABEL_217:
          v14 = -1056964602;
        }
        else
        {
          PoFxSetComponentResidency(*v70, v66, v67);
          v14 = 0;
        }
LABEL_218:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v53 + 1480));
        return v14;
      case 0x35u:
        v74 = **(_QWORD **)(v13 - 16);
        v75 = v124;
        v76 = a5;
        v77 = a9;
        Interval.QuadPart = (__int64)a6;
        v119 = a7;
        v118 = a8;
        if ( KeGetCurrentIrql() > 2u )
        {
          if ( a9 )
            *a9 = 0LL;
          return (unsigned int)-1056964600;
        }
        if ( v123 )
        {
          if ( LOWORD(v123->Alignment) != 1 )
            return (unsigned int)-1056964602;
          if ( *((_DWORD *)&v123->HeaderX64 + 1) < 4u )
            return (unsigned int)-1056964602;
          LOWORD(v116) = *((_WORD *)&v123->HeaderX64 + 4);
          BYTE2(v116) = *((_BYTE *)&v123->HeaderX64 + 10);
          v78 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RaidAdapterFindUnit)(
                  v74,
                  v116,
                  v74,
                  (PHYSICAL_ADDRESS)a7.QuadPart);
          v79 = v78;
          if ( !v78 )
            return (unsigned int)-1056964602;
          if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v78) )
          {
            v80 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v79 + 1488),
                    v75,
                    v76,
                    (union _LARGE_INTEGER)Interval.QuadPart,
                    (PHYSICAL_ADDRESS)v119.QuadPart,
                    (PHYSICAL_ADDRESS)v118.QuadPart,
                    v77);
            v14 = RaidNtStatusToStorStatus(v80);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v79 + 1480));
            return v14;
          }
        }
        else
        {
          v81 = *(_QWORD **)(v74 + 5088);
          if ( v81 )
          {
            LogicalProcessorRelationship = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                                             *v81,
                                             v124,
                                             a5,
                                             a6,
                                             (PHYSICAL_ADDRESS)a7.QuadPart,
                                             (PHYSICAL_ADDRESS)a8.QuadPart,
                                             a9);
            return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
          }
        }
        return (unsigned int)-1056964601;
      case 0x36u:
        return (unsigned int)StorpFlushDataBufferMdl(v16, v123);
      case 0x37u:
        v98 = a5;
        v99 = v123;
        v100 = v124;
        v101 = **(_QWORD **)(v13 - 16);
        if ( !a5 )
          return (unsigned int)-1056964602;
        if ( !v101 )
          return (unsigned int)-1056964602;
        a5->Relationship = RelationProcessorCore;
        if ( v99 )
        {
          if ( LOWORD(v99->Alignment) != 1 )
            return (unsigned int)-1056964602;
          if ( *((_DWORD *)&v99->HeaderX64 + 1) < 4u )
            return (unsigned int)-1056964602;
          LOWORD(v116) = *((_WORD *)&v99->HeaderX64 + 4);
          BYTE2(v116) = *((_BYTE *)&v99->HeaderX64 + 10);
          if ( !RaidAdapterFindUnit(v101, v116, a3, a4) )
            return (unsigned int)-1056964602;
        }
        v102 = v100->Mask - 0x481F895FDCAF9C10LL;
        if ( v100->Mask == 0x481F895FDCAF9C10LL )
          v102 = *(_QWORD *)&v100->Group - 0x3356F5D2CED492A4LL;
        if ( !v102 )
        {
          v14 = 0;
          v98->Relationship = HIBYTE(WPP_MAIN_CB.SectorSize);
        }
        return v14;
      case 0x38u:
        v36 = v124;
        if ( !v123 || !v124 )
          return (unsigned int)-1056964602;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v123);
        LODWORD(v36->Mask) = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber == -1 )
          return (unsigned int)-1056964602;
        return v11;
      case 0x39u:
        Arg2 = (unsigned int)v124;
        if ( v123 )
          return 3238002694LL;
        v83 = **(_QWORD **)(v13 - 16);
        if ( !v83 )
          return (unsigned int)-1056964602;
        v84 = *(_QWORD **)(v83 + 5088);
        if ( !v84 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v83 + 108) & 0x40) != 0 )
          return (unsigned int)-1056964607;
        *(_DWORD *)(v83 + 5104) = (_DWORD)v124;
        PoFxSetDeviceIdleTimeout(*v84, 10000 * Arg2);
        if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
          return 0;
        McTemplateK0pqqq(
          v85,
          &EventAdapterIdleTimeoutSet,
          0LL,
          **(const void ***)(v83 + 5088),
          *(_DWORD *)(v83 + 56),
          Arg2,
          *(_DWORD *)(v83 + 5104));
        return 0;
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
        if ( !StorEtwLoggingEnabled || !_bittest((const signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData, 0x1Cu) )
          return 0;
        return (unsigned int)StorEtwMiniportEventProxy(v13, a1, &v123);
      case 0x3Du:
        if ( !v123 )
          return (unsigned int)-1056964602;
        v14 = 0;
        LOBYTE(v123->Alignment) = WPP_MAIN_CB.SectorSize;
        return v14;
      case 0x3Eu:
        LOBYTE(v19) = 1;
        return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, v19, &v123);
      case 0x3Fu:
        return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v123);
      case 0x40u:
        v108 = **(_QWORD **)(v13 - 16);
        if ( !v108 || (unsigned int)v123 >= 0x14 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v108 + 544) & 1) == 0 )
          return (unsigned int)-1056964607;
        *(_DWORD *)(v108 + 4356) = (_DWORD)v123;
        return 0;
      case 0x41u:
        v86 = (unsigned int)a6;
        v87 = a7;
        if ( v123 )
          return 3238002694LL;
        v88 = **(_QWORD **)(v13 - 16);
        if ( !v88 )
          return 3238002694LL;
        v89 = *(_QWORD *)(v88 + 5088);
        if ( !v89 || *(_BYTE *)(v89 + 24) )
          return 3238002689LL;
        LogicalProcessorRelationship = RaidRegisterPerfStates(
                                         *(_QWORD *)(v88 + 8),
                                         (_DWORD)v124,
                                         (_DWORD)a5,
                                         (_DWORD)a6,
                                         a7.QuadPart,
                                         *(_QWORD *)v89);
        if ( LogicalProcessorRelationship < 0 )
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterCacheOperationalPowerRange)(
                                *(_QWORD *)(v88 + 5088),
                                v86,
                                (PHYSICAL_ADDRESS)v87.QuadPart) )
        {
          v90 = 48LL;
          v91 = 3LL;
          do
          {
            v90 += 8LL;
            *(_QWORD *)(v90 + *(_QWORD *)(v88 + 5088) - 8) = -1LL;
            --v91;
          }
          while ( v91 );
        }
        *(_BYTE *)(*(_QWORD *)(v88 + 5088) + 24LL) = v86;
        ((void (__fastcall *)(_QWORD, _QWORD))StorpLogRegisterAdapterPerfStates)(v88, (PHYSICAL_ADDRESS)v87.QuadPart);
        return 0;
      case 0x42u:
        if ( v123 || (_DWORD)a5 )
          return 3238002694LL;
        v92 = *(_QWORD *)(v13 - 16);
        if ( !*(_QWORD *)v92 )
          return v14;
        v93 = *(__int64 **)(*(_QWORD *)v92 + 5088LL);
        if ( !v93 )
          return v14;
        v94 = KeGetCurrentIrql();
        Interval.QuadPart = 0LL;
        v121 = 0LL;
        v95 = *((_BYTE *)v93 + 24);
        if ( !v95 || (unsigned int)a6 >= v95 )
          return 3238002694LL;
        Interval.LowPart = (unsigned int)a6;
        v96 = 2LL;
        LODWORD(v121) = a7.LowPart;
        v97 = *v93;
        if ( v94 < 2u )
          v96 = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
          v97,
          v96,
          (unsigned int)v124,
          &Interval,
          (PHYSICAL_ADDRESS)a8.QuadPart);
        return 0;
      case 0x43u:
        if ( KeGetCurrentIrql() )
          return 3238002696LL;
        v103 = v124;
        v14 = -1056964602;
        v104 = v123;
        if ( !v124 )
          return v14;
        LOBYTE(v124->Mask) = 0;
        v105 = **(_QWORD **)(a2 - 16);
        if ( !v105 )
          return v14;
        if ( v104 )
        {
          if ( LOWORD(v104->Alignment) != 1 )
            return v14;
          if ( *((_DWORD *)&v104->HeaderX64 + 1) < 4u )
            return v14;
          LOWORD(v116) = *((_WORD *)&v104->HeaderX64 + 4);
          BYTE2(v116) = *((_BYTE *)&v104->HeaderX64 + 10);
          v106 = RaidAdapterFindUnit(v105, v116, a3, a4);
          if ( !v106 )
            return v14;
          v107 = *(struct _DEVICE_OBJECT **)(v106 + 8);
        }
        else
        {
          v107 = *(struct _DEVICE_OBJECT **)(v105 + 8);
        }
        if ( !v107 )
          return v14;
        LogicalProcessorRelationship = RaidGetD3ColdInterface(v107);
        if ( LogicalProcessorRelationship >= 0 )
        {
          LOBYTE(v103->Mask) = RaidGetD3ColdCapability(0LL);
          return 0;
        }
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      case 0x44u:
        if ( v123 )
          return (unsigned int)-1056964601;
        return (unsigned int)RaidInitializeRpmb(v13, v124);
      case 0x45u:
        return (unsigned int)StorpAllocateHostMemoryBuffer(
                               v13,
                               (int)v123,
                               (int)v124,
                               (int)a5,
                               (int)a6,
                               a7,
                               a8,
                               (__int64)a9,
                               a10,
                               a11);
      case 0x46u:
        return (unsigned int)StorpFreeHostMemoryBuffer(v13);
      case 0x47u:
        v23 = **(_QWORD **)(v13 - 16);
        if ( !v23 )
          return (unsigned int)-1056964602;
        if ( !*(_BYTE *)(v23 + 500) )
          return (unsigned int)-1056964601;
        if ( !v123 || !v124 )
          return (unsigned int)-1056964602;
        if ( *((_BYTE *)&v123->HeaderX64 + 2) == 40 )
        {
          v25 = v123[5].Alignment;
        }
        else
        {
          v24 = v123[3].Alignment;
          if ( !v24 || *(_DWORD *)v24 != 523124044 )
            return (unsigned int)-1056964602;
          v25 = *(_QWORD *)(v24 + 176);
        }
        if ( !v25 )
          return (unsigned int)-1056964602;
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !(_DWORD)a5 )
          return 0;
        ActivityIdIrp = IoPropagateIrpExtension(v25, v124);
        switch ( ActivityIdIrp )
        {
          case 0:
            return 0;
          case -2147483643:
            return (unsigned int)-1056964604;
          case -1073741811:
            return (unsigned int)-1056964602;
          case -1073741670:
            return (unsigned int)-1056964605;
          case -1073741496:
            return (unsigned int)-1056964600;
          default:
LABEL_20:
            v14 = -1056964607;
            if ( ActivityIdIrp >= 0 )
              return 0;
            break;
        }
        return v14;
      case 0x48u:
        v109 = a5;
        *(_QWORD *)&v109->Relationship = ExInterlockedInsertHeadList(
                                           (PLIST_ENTRY)v123,
                                           (PLIST_ENTRY)v124,
                                           (PKSPIN_LOCK)a6);
        return 0;
      case 0x49u:
        v110 = a5;
        *(_QWORD *)&v110->Relationship = ExInterlockedInsertTailList(
                                           (PLIST_ENTRY)v123,
                                           (PLIST_ENTRY)v124,
                                           (PKSPIN_LOCK)a6);
        return 0;
      case 0x4Au:
        v111 = v124;
        v111->Mask = (unsigned __int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)v123, (PKSPIN_LOCK)a5);
        return 0;
      case 0x4Bu:
        KeInitializeSpinLock(&v123->Alignment);
        return 0;
      case 0x4Cu:
        return (unsigned int)StorpGetPfns(v13, (_DWORD)v123, (_DWORD)v124, (_DWORD)a5, (__int64)a6, a7.QuadPart);
      case 0x4Du:
        if ( !v123 || !**(_QWORD **)(v13 - 16) )
          return (unsigned int)-1056964602;
        return (unsigned int)RaidInitializeCryptoEngine();
      case 0x4Eu:
        v112 = v124;
        if ( !v123 || !v124 )
          return (unsigned int)-1056964602;
        if ( *((_BYTE *)&v123->HeaderX64 + 2) == 40 )
          v113 = v123[6].Alignment;
        else
          v113 = v123[3].Alignment;
        v14 = 0;
        LODWORD(v124->Mask) = **(_DWORD **)(v113 + 784);
        HIDWORD(v112->Mask) = *(_DWORD *)(*(_QWORD *)(v113 + 784) + 4LL);
        *(_DWORD *)&v112->Group = *(_DWORD *)(*(_QWORD *)(v113 + 784) + 8LL);
        v112[1].Mask = *(_QWORD *)(*(_QWORD *)(v113 + 784) + 16LL);
        return v14;
      case 0x4Fu:
        if ( !v124 )
          return (unsigned int)-1056964602;
        v114 = v124[3].Mask;
        if ( v114 > 0x1000 )
          return (unsigned int)-1056964598;
        if ( v114 && !*(_QWORD *)&v124[3].Group || *(_QWORD *)&v124[3].Group && !v114 )
          return (unsigned int)-1056964602;
        StorpTelemetryMiniportEvent(**(_QWORD **)(v13 - 16), v123);
        return 0;
      case 0x50u:
        v115 = **(_QWORD **)(v13 - 16);
        if ( !v115 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v115 + 104) & 0x10) == 0 )
          return (unsigned int)-1056964601;
        v14 = 0;
        *(_DWORD *)(v115 + 508) = (_DWORD)v123;
        return v14;
      case 0x51u:
        if ( KeGetCurrentIrql() >= 2u )
        {
          KeStallExecutionProcessor((ULONG)v123);
          return 0;
        }
        else
        {
          Interval.QuadPart = -10LL * (unsigned int)v123;
          KeDelayExecutionThread(0, 0, &Interval);
          return 0;
        }
      case 0x52u:
        return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNodeEx(
                               v13,
                               (_DWORD)v123,
                               (_DWORD)v124,
                               (_DWORD)a5,
                               (__int64)a6,
                               a7.LowPart,
                               a8.LowPart,
                               (__int64)a9,
                               a10);
      case 0x53u:
        return (unsigned int)StorpFreeContiguousMemorySpecifyCacheEx(v13, v123, v124, (unsigned int)a5, a6);
      default:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids, a1);
        }
        return v14;
    }
  }
  return 3238002694LL;
}
