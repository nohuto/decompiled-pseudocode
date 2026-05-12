/*
 * XREFs of StorPortExtendedFunction @ 0x1C000CB50
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     StorpRequestTimer @ 0x1C000E0A8 (StorpRequestTimer.c)
 *     StorpInitializeWorkItem @ 0x1C000F89C (StorpInitializeWorkItem.c)
 *     RaidGetD3ColdInterface @ 0x1C0012FA8 (RaidGetD3ColdInterface.c)
 *     StorpInitializeTimer @ 0x1C001B900 (StorpInitializeTimer.c)
 *     StorpAllocatePool @ 0x1C001B9D4 (StorpAllocatePool.c)
 *     StorpGetMSIInfo @ 0x1C001C920 (StorpGetMSIInfo.c)
 *     RaidGetD3ColdCapability @ 0x1C001CC48 (RaidGetD3ColdCapability.c)
 *     RaidGetStartIoPerfParams @ 0x1C001CD70 (RaidGetStartIoPerfParams.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C001CFE0 (StorPortpInvokeAcpiMethod.c)
 *     RaidNtStatusToStorStatus @ 0x1C001D06C (RaidNtStatusToStorStatus.c)
 *     StorpTelemetryMiniportEvent @ 0x1C001D374 (StorpTelemetryMiniportEvent.c)
 *     RaidInitializePerfOpts @ 0x1C001DA14 (RaidInitializePerfOpts.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C001DF18 (StorpAdapterInitializePoFxPower.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C001EB94 (StorPortpSetPowerSettingNotificationGuids.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     StorDelayExecution @ 0x1C001F118 (StorDelayExecution.c)
 *     McTemplateK0pqqq @ 0x1C002BA60 (McTemplateK0pqqq.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidInitializeCryptoEngine @ 0x1C00303DC (RaidInitializeCryptoEngine.c)
 *     RaidInitializeRpmb @ 0x1C003051C (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00306D8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0030E98 (WPP_SF_D.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C0033068 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0033108 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0033174 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C00332D8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C00334A0 (StorBuildScatterGatherListProxy.c)
 *     StorEtwMiniportEventProxy @ 0x1C0033508 (StorEtwMiniportEventProxy.c)
 *     StorpAcquireMSISpinLock @ 0x1C0034880 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C003491C (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C003498C (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C0034C98 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0034DCC (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C0034FC0 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C0035010 (StorpFlushDataBufferMdl.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C0035074 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C00350DC (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C0035180 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00353BC (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C0035580 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C0035608 (StorpGetDataInSgList.c)
 *     StorpGetOriginalMdl @ 0x1C0035840 (StorpGetOriginalMdl.c)
 *     StorpGetPfns @ 0x1C00358C0 (StorpGetPfns.c)
 *     StorpGetRequestInfo @ 0x1C003595C (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C0035B88 (StorpGetSystemAddress.c)
 *     StorpLogSystemEvent @ 0x1C0035CFC (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C0035E34 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C0035F34 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C0036064 (StorpReleaseMSISpinLock.c)
 *     StorpSetUnitAttributes @ 0x1C00360F4 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003616C (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0037C5C (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0043E34 (StorpLogRegisterAdapterPerfStates.c)
 */

__int64 StorPortExtendedFunction(unsigned int a1, __int64 a2, ...)
{
  struct _PROCESSOR_NUMBER *v2; // r8
  unsigned __int64 Mask; // rdi
  __int64 v5; // r14
  unsigned int v6; // ebx
  PDEVICE_OBJECT v8; // rcx
  unsigned __int64 v9; // rdx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  struct _GROUP_AFFINITY *v13; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v14; // r9
  _QWORD *v15; // rcx
  struct _GROUP_AFFINITY *v16; // rbx
  USHORT v17; // r14
  struct _PROCESSOR_NUMBER *v18; // rbx
  struct _PROCESSOR_NUMBER *v19; // rbx
  struct _GROUP_AFFINITY *v20; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  NTSTATUS LogicalProcessorRelationship; // eax
  KSPIN_LOCK v23; // rcx
  KSPIN_LOCK v24; // rcx
  struct _GROUP_AFFINITY *v25; // rbx
  struct _GROUP_AFFINITY *v26; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v27; // rbx
  struct _GROUP_AFFINITY *v28; // rbx
  __int64 v29; // rax
  struct _PROCESSOR_NUMBER *v30; // rcx
  LARGE_INTEGER *v31; // rbx
  union _LARGE_INTEGER *v32; // rcx
  int v33; // r15d
  unsigned int v34; // r12d
  __int64 v35; // r9
  char v36; // al
  unsigned __int8 CurrentIrql; // r14
  __int64 Unit; // rax
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r8
  unsigned int v42; // r15d
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned int v45; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v46; // r15
  __int64 v47; // r8
  __int64 v48; // rax
  _QWORD *v49; // rcx
  unsigned int v50; // eax
  _QWORD *v51; // rcx
  unsigned int v52; // edx
  unsigned int v53; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v54; // r15
  __int64 v55; // r8
  __int64 v56; // rax
  _QWORD *v57; // rcx
  unsigned int v58; // eax
  _QWORD *v59; // rcx
  unsigned int v60; // edx
  __int64 v61; // r8
  struct _GROUP_AFFINITY *v62; // r15
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v63; // r12
  PULONG v64; // r13
  _QWORD *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdi
  unsigned int v68; // eax
  _QWORD *v69; // rcx
  __int64 Arg2; // rsi
  __int64 v71; // rbx
  _QWORD *v72; // rcx
  struct _MCGEN_TRACE_CONTEXT *v73; // rcx
  unsigned int v74; // r15d
  PHYSICAL_ADDRESS v75; // rsi
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 *v80; // rcx
  unsigned __int8 v81; // r9
  unsigned __int8 v82; // al
  __int64 v83; // rcx
  struct _PROCESSOR_NUMBER *v84; // rdx
  struct _GROUP_AFFINITY *v85; // r15
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v86; // rsi
  __int64 v87; // rcx
  struct _PROCESSOR_NUMBER *v88; // rcx
  unsigned int v89; // edx
  struct _PROCESSOR_NUMBER *v90; // rdx
  struct _GROUP_AFFINITY *v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rax
  struct _DEVICE_OBJECT *v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  KSPIN_LOCK v97; // rcx
  KSPIN_LOCK v98; // rcx
  unsigned int v99; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v100; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v101; // rbx
  struct _GROUP_AFFINITY *v102; // rbx
  struct _GROUP_AFFINITY *v103; // r8
  KSPIN_LOCK v104; // rdx
  unsigned int v105; // eax
  __int64 v106; // rcx
  unsigned int v107; // [rsp+50h] [rbp-19h]
  PHYSICAL_ADDRESS v108; // [rsp+58h] [rbp-11h]
  PHYSICAL_ADDRESS v109; // [rsp+60h] [rbp-9h] BYREF
  __int64 v110; // [rsp+68h] [rbp-1h]
  struct _PROCESSOR_NUMBER *v112; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E0h] [rbp+77h]
  struct _GROUP_AFFINITY *v114; // [rsp+E8h] [rbp+7Fh]
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v115; // [rsp+F0h] [rbp+87h]
  PULONG v116; // [rsp+F8h] [rbp+8Fh]
  PHYSICAL_ADDRESS v117; // [rsp+100h] [rbp+97h]
  PHYSICAL_ADDRESS v118; // [rsp+108h] [rbp+9Fh]
  _QWORD *v119; // [rsp+110h] [rbp+A7h]
  __int64 v120; // [rsp+118h] [rbp+AFh]
  __int64 v121; // [rsp+120h] [rbp+B7h]
  va_list va1; // [rsp+128h] [rbp+BFh] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v112 = va_arg(va1, struct _PROCESSOR_NUMBER *);
  v2 = v112;
  v114 = va_arg(va1, struct _GROUP_AFFINITY *);
  v115 = va_arg(va1, struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *);
  v116 = va_arg(va1, PULONG);
  v117.QuadPart = va_arg(va1, _QWORD);
  v118.QuadPart = va_arg(va1, _QWORD);
  v119 = va_arg(va1, _QWORD *);
  v120 = va_arg(va1, _QWORD);
  v121 = va_arg(va1, _QWORD);
  Mask = 0LL;
  v5 = a2;
  v6 = -1056964606;
  if ( !a2 )
    return 3238002694LL;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids, a1);
    v5 = a2;
  }
  v9 = 0x1C0000000uLL;
  switch ( a1 )
  {
    case 0u:
      return (unsigned int)StorpAllocatePool(v8, (unsigned int)v112, (unsigned int)v114, v115);
    case 1u:
      v6 = 0;
      if ( !v112 )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v11 = 29LL;
          goto LABEL_14;
        }
        return (unsigned int)-1056964602;
      }
      if ( KeGetCurrentIrql() <= 2u )
      {
        ExFreePoolWithTag(v112, 0);
        return v6;
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
        return (unsigned int)-1056964600;
      }
      return (unsigned int)-1056964600;
    case 2u:
      return (unsigned int)StorpAllocateMdl(v8, v112, (unsigned int)v114, v115);
    case 3u:
      return (unsigned int)StorpFreeMdl(v8, v112);
    case 4u:
      return (unsigned int)StorpBuildMdlForNonPagedPool(v8, v112);
    case 5u:
      return (unsigned int)StorpGetSystemAddress(v8, v112, 0LL, v114);
    case 6u:
      v6 = 0;
      if ( v114 )
      {
        if ( v112->Number == 40 )
          v12 = *(_QWORD *)(*(_QWORD *)&v112[24].Group + 104LL);
        else
          v12 = *(_QWORD *)(*(_QWORD *)&v112[12].Group + 104LL);
        v114->Mask = v12;
        return v6;
      }
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        v11 = 43LL;
        goto LABEL_14;
      }
      return (unsigned int)-1056964602;
    case 7u:
      return (unsigned int)StorpCompleteServiceIrp(v5, v112);
    case 8u:
      v6 = 0;
      v13 = v114;
      v14 = v115;
      if ( v5 )
      {
        if ( v112 )
        {
          if ( v114 )
          {
            if ( v115 )
            {
              v15 = **(_QWORD ***)(v5 - 16);
              *(_QWORD *)&v112->Group = v15[1];
              v13->Mask = v15[4];
              *(_QWORD *)&v14->Relationship = v15[3];
              return v6;
            }
            v10 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v11 = (unsigned int)((_DWORD)v115 + 48);
              goto LABEL_14;
            }
          }
          else
          {
            v10 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v11 = (unsigned int)((_DWORD)v114 + 47);
              goto LABEL_14;
            }
          }
        }
        else
        {
          v10 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v11 = 46LL;
            goto LABEL_14;
          }
        }
      }
      else
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v11 = 45LL;
LABEL_14:
          WPP_SF_(v10->AttachedDevice, v11, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
          return (unsigned int)-1056964602;
        }
      }
      return (unsigned int)-1056964602;
    case 9u:
      return (unsigned int)StorBuildScatterGatherListProxy(v5, (struct _PROCESSOR_NUMBER **)va);
    case 0xAu:
      return (unsigned int)StorpPutScatterGatherList(v5, v112, (unsigned __int8)v114);
    case 0xBu:
      return (unsigned int)StorpAcquireMSISpinLock(v5, (unsigned int)v112, v114);
    case 0xCu:
      return (unsigned int)StorpReleaseMSISpinLock(v5, (unsigned int)v112, (unsigned int)v114);
    case 0xDu:
      return (unsigned int)StorpGetMSIInfo(v5, (unsigned int)v112, v114);
    case 0xEu:
      return (unsigned int)RaidInitializePerfOpts(v5, (unsigned __int8)v112, v114);
    case 0xFu:
      return (unsigned int)RaidGetStartIoPerfParams(v5, v112, v114);
    case 0x10u:
      return (unsigned int)StorpLogSystemEvent(v5, v112, v114);
    case 0x11u:
      if ( !v112 )
        return (unsigned int)-1056964602;
      KeGetCurrentProcessorNumberEx(v112);
      return 0;
    case 0x12u:
      v18 = v112;
      if ( !v112 )
        return (unsigned int)-1056964602;
      v18->Group = KeQueryActiveGroupCount();
      return 0;
    case 0x13u:
      v16 = v114;
      v17 = (unsigned __int16)v112;
      if ( !v114 )
        return (unsigned int)-1056964602;
      if ( v17 > KeQueryActiveGroupCount() )
        return (unsigned int)-1056964607;
      v16->Mask = KeQueryGroupAffinity(v17);
      return 0;
    case 0x14u:
      return (unsigned int)StorpGetActiveNodeCount(v8, v112);
    case 0x15u:
      if ( !v114 || (unsigned int)v112 > 0xFFFF )
        return (unsigned int)-1056964602;
      KeQueryNodeActiveAffinity((USHORT)v112, v114, 0LL);
      return 0;
    case 0x16u:
      v19 = v112;
      if ( !v112 )
        return (unsigned int)-1056964602;
      *v19 = (struct _PROCESSOR_NUMBER)KeQueryHighestNodeNumber();
      return 0;
    case 0x17u:
      LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                       v112,
                                       (LOGICAL_PROCESSOR_RELATIONSHIP)v114,
                                       v115,
                                       v116);
      if ( LogicalProcessorRelationship == -1073741820 )
        return (unsigned int)-1056964604;
      if ( LogicalProcessorRelationship == -1073741811 )
        return (unsigned int)-1056964602;
      return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x18u:
      return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNode(
                             (_DWORD)v119,
                             (_DWORD)v112,
                             (_DWORD)v114,
                             (_DWORD)v115,
                             (__int64)v116,
                             v117.LowPart,
                             v118.LowPart,
                             (__int64)v119);
    case 0x19u:
      MmFreeContiguousMemorySpecifyCache(v112, (SIZE_T)v114, (MEMORY_CACHING_TYPE)v115);
      return 0;
    case 0x1Au:
      return (unsigned int)StorPortpSetPowerSettingNotificationGuids(v5, (unsigned int)v112, v114);
    case 0x1Bu:
      return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                             v5,
                             v112,
                             (PHYSICAL_ADDRESS)v117.QuadPart,
                             v115,
                             (_DWORD)v116,
                             (PHYSICAL_ADDRESS)v117.QuadPart,
                             v118.LowPart,
                             v119);
    case 0x1Cu:
      return (unsigned int)StorpGetRequestInfo(v8, v112, v114);
    case 0x1Du:
      return (unsigned int)StorpInitializeWorkItem(v5, v112);
    case 0x1Eu:
      return (unsigned int)StorpQueueWorkItem(v5, v112, v114, v115);
    case 0x1Fu:
      return (unsigned int)StorpFreeWorkItem(v5, v112);
    case 0x20u:
      return (unsigned int)StorpInitializeTimer(v5, v112);
    case 0x21u:
      return (unsigned int)StorpRequestTimer(v5, (_DWORD)v112, (_DWORD)v114, (_DWORD)v115, (__int64)v116, v117.QuadPart);
    case 0x22u:
      return (unsigned int)StorpFreeTimer(v5, v112);
    case 0x23u:
      InitializeSListHead((PSLIST_HEADER)v112);
      return 0;
    case 0x24u:
      v25 = v114;
      v25->Mask = (unsigned __int64)ExpInterlockedFlushSList((PSLIST_HEADER)v112);
      return 0;
    case 0x25u:
      v26 = v114;
      v26->Mask = (unsigned __int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v112);
      return 0;
    case 0x26u:
      v27 = v115;
      *(_QWORD *)&v27->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v112, (PSLIST_ENTRY)v114);
      return 0;
    case 0x27u:
      v28 = v114;
      LOWORD(v28->Mask) = ExQueryDepthSList((PSLIST_HEADER)v112);
      return 0;
    case 0x28u:
      if ( !v112 || !v114 )
        return (unsigned int)-1056964602;
      if ( v112->Number == 40 )
      {
        v23 = *(_QWORD *)&v112[20].Group;
      }
      else
      {
        v24 = *(_QWORD *)&v112[12].Group;
        if ( !v24 || *(_DWORD *)v24 != 523124044 )
          goto LABEL_107;
        v23 = *(_QWORD *)(v24 + 176);
      }
      if ( v23 )
      {
        v6 = -1056964607;
        if ( (int)IoGetActivityIdIrp(v23, v114) >= 0 )
          return 0;
        return v6;
      }
LABEL_107:
      v6 = -1056964607;
      if ( EtwActivityIdControl(3u, (LPGUID)v114) >= 0 )
        return 0;
      return v6;
    case 0x29u:
      v29 = *(_QWORD *)(v5 - 16);
      v30 = v112;
      if ( *(_DWORD *)(*(_QWORD *)v29 + 56LL) == -1 )
        return (unsigned int)-1056964599;
      if ( !v112 || v112->Group != 1 || *(_DWORD *)&v112[1] < 4u )
        return (unsigned int)-1056964602;
      v6 = 0;
      *(_WORD *)&v112->Number = *(_WORD *)(*(_QWORD *)v29 + 56LL);
      v30[2].Group = -1;
      v30[2].Number = -1;
      return v6;
    case 0x2Au:
      LOBYTE(v2) = 1;
      return (unsigned int)StorpGetOriginalMdl(v8, v112, v2, v114);
    case 0x2Bu:
      LOBYTE(v2) = 1;
      return (unsigned int)StorpGetSystemAddress(v8, v112, v2, v114);
    case 0x2Cu:
      return (unsigned int)StorpGetDataInSgList(v5, v112, v114);
    case 0x2Eu:
      return (unsigned int)StorpSetUnitAttributes(v5, v112, (unsigned int)v114);
    case 0x2Fu:
      v31 = (LARGE_INTEGER *)v114;
      v32 = (union _LARGE_INTEGER *)v112;
      if ( !v114 )
        return (unsigned int)-1056964602;
      if ( v112 )
        *(_QWORD *)&v112->Group = 1LL;
      if ( UseQPCTime )
        *v31 = KeQueryPerformanceCounter(v32);
      else
        v31->QuadPart = KeQueryUnbiasedInterruptTime();
      return 0;
    case 0x30u:
      if ( KeGetCurrentIrql() )
        return (unsigned int)-1056964600;
      if ( v112 )
        return (unsigned int)StorpUnitInitializePoFxPower(v5, v112, v114, v115);
      else
        return (unsigned int)StorpAdapterInitializePoFxPower(v5, v114, v115);
    case 0x31u:
      v33 = 0;
      v6 = 0;
      v34 = (unsigned int)v115;
      v35 = **(_QWORD **)(v5 - 16);
      if ( !v114 )
        goto LABEL_152;
      v36 = BYTE2(v114->Mask);
      if ( v36 == 40 )
        Mask = v114[6].Mask;
      else
        Mask = v114[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return (unsigned int)-1056964602;
      if ( v36 == 40 )
        v33 = *(_DWORD *)&v114[1].Group;
      else
        v33 = *(_DWORD *)&v114->Reserved[1];
LABEL_152:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
        return (unsigned int)-1056964600;
      if ( (_DWORD)v116 )
        return (unsigned int)-1056964602;
      if ( v112 )
      {
        if ( v112->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v112[1] < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v107) = v112[2].Group;
        BYTE2(v107) = v112[2].Number;
        Unit = RaidAdapterFindUnit(v35, v107);
        v39 = Unit;
        if ( !Unit )
          return (unsigned int)-1056964602;
        if ( (v33 & 0x100800) == 0 )
          goto LABEL_163;
        if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          goto LABEL_207;
        if ( *(_QWORD *)(*(_QWORD *)(v39 + 24) + 5088LL) )
        {
LABEL_163:
          if ( CurrentIrql == 2 || (*(_BYTE *)(v39 + 153) & 1) != 0 || *(char *)(v39 + 152) < 0 )
            v40 = 2LL;
          else
            v40 = 0LL;
          v6 = RaidUnitPoFxActivateComponentFromMiniport(v39, v34, v40);
          if ( Mask )
            *(_BYTE *)(Mask + 16) |= 0x80u;
        }
      }
      else
      {
        if ( !*(_QWORD *)(v35 + 5088) || (v33 & 0x100800) != 0 )
          return (unsigned int)-1056964601;
        if ( CurrentIrql == 2 || (*(_BYTE *)(v35 + 108) & 3) != 0 )
          v41 = 2LL;
        else
          v41 = 0LL;
        v6 = RaidAdapterPoFxActivateComponentFromMiniport(v35, (unsigned int)v115, v41);
        if ( Mask )
          *(_BYTE *)(Mask + 16) |= 0x80u;
      }
      return v6;
    case 0x32u:
      v6 = 0;
      v42 = (unsigned int)v115;
      v43 = **(_QWORD **)(v5 - 16);
      if ( !v114 )
        goto LABEL_183;
      if ( BYTE2(v114->Mask) == 40 )
        Mask = v114[6].Mask;
      else
        Mask = v114[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return (unsigned int)-1056964602;
      if ( *(char *)(Mask + 16) >= 0 )
        return v6;
LABEL_183:
      if ( KeGetCurrentIrql() > 2u && !Mask )
        return (unsigned int)-1056964600;
      if ( (_DWORD)v116 )
        return (unsigned int)-1056964602;
      if ( !v112 )
      {
        if ( !*(_QWORD *)(v43 + 5088) )
          return (unsigned int)-1056964601;
        if ( KeGetCurrentIrql() <= 2u )
        {
          return (unsigned int)RaidAdapterPoFxIdleComponentFromMiniport(**(_QWORD **)(v5 - 16), (unsigned int)v115);
        }
        else
        {
          *(_BYTE *)(Mask + 17) |= 1u;
          v6 = -1056964596;
          *(_DWORD *)(Mask + 748) = v42;
        }
        return v6;
      }
      if ( v112->Group == 1 && *(_DWORD *)&v112[1] >= 4u )
      {
        LOWORD(v107) = v112[2].Group;
        BYTE2(v107) = v112[2].Number;
        v44 = RaidAdapterFindUnit(v43, v107);
        if ( v44 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            return (unsigned int)RaidUnitPoFxIdleComponentFromMiniport(v44, v42);
          }
          else
          {
            *(_BYTE *)(Mask + 17) |= 2u;
            v6 = -1056964596;
            *(_DWORD *)(Mask + 748) = v42;
          }
          return v6;
        }
      }
      return (unsigned int)-1056964602;
    case 0x33u:
      v45 = (unsigned int)v114;
      v46 = v115;
      v47 = **(_QWORD **)(v5 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( !v112 )
      {
        v51 = *(_QWORD **)(v47 + 5088);
        if ( !v51 )
          return (unsigned int)-1056964601;
        v52 = *(_DWORD *)(v51[1] + 8LL);
        if ( (int)v114 + 1 >= v52 && (int)v114 + 1 <= v52 )
        {
          PoFxSetComponentLatency(*v51, (unsigned int)v114, v115);
          return 0;
        }
        return (unsigned int)-1056964602;
      }
      if ( v112->Group != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)&v112[1] < 4u )
        return (unsigned int)-1056964602;
      LOWORD(v107) = v112[2].Group;
      BYTE2(v107) = v112[2].Number;
      v48 = RaidAdapterFindUnit(v47, v107);
      v39 = v48;
      if ( !v48 )
        return (unsigned int)-1056964602;
      if ( !RaidUnitCheckAndAcquirePoFx(v48) )
        return (unsigned int)-1056964601;
      v49 = *(_QWORD **)(v39 + 1488);
      v50 = *(_DWORD *)(v49[1] + 8LL);
      if ( v45 + 1 >= v50 && v45 + 1 <= v50 )
      {
        PoFxSetComponentLatency(*v49, v45, v46);
        v6 = 0;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v39 + 1480));
        return v6;
      }
      goto LABEL_206;
    case 0x34u:
      v53 = (unsigned int)v114;
      v54 = v115;
      v55 = **(_QWORD **)(v5 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( !v112 )
      {
        v59 = *(_QWORD **)(v55 + 5088);
        if ( !v59 )
          return (unsigned int)-1056964601;
        v60 = *(_DWORD *)(v59[1] + 8LL);
        if ( (int)v114 + 1 >= v60 && (int)v114 + 1 <= v60 )
        {
          PoFxSetComponentResidency(*v59, (unsigned int)v114, v115);
          return 0;
        }
        return (unsigned int)-1056964602;
      }
      if ( v112->Group != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)&v112[1] < 4u )
        return (unsigned int)-1056964602;
      LOWORD(v107) = v112[2].Group;
      BYTE2(v107) = v112[2].Number;
      v56 = RaidAdapterFindUnit(v55, v107);
      v39 = v56;
      if ( !v56 )
        return (unsigned int)-1056964602;
      if ( !RaidUnitCheckAndAcquirePoFx(v56) )
        return (unsigned int)-1056964601;
      v57 = *(_QWORD **)(v39 + 1488);
      v58 = *(_DWORD *)(v57[1] + 8LL);
      if ( v53 + 1 < v58 || v53 + 1 > v58 )
      {
LABEL_206:
        v6 = -1056964602;
LABEL_207:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v39 + 1480));
      }
      else
      {
        PoFxSetComponentResidency(*v57, v53, v54);
        v6 = 0;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v39 + 1480));
      }
      return v6;
    case 0x35u:
      v61 = **(_QWORD **)(v5 - 16);
      v62 = v114;
      v63 = v115;
      v64 = v116;
      v65 = v119;
      v109 = v117;
      v108 = v118;
      if ( KeGetCurrentIrql() > 2u )
      {
        if ( v119 )
          *v119 = 0LL;
        return (unsigned int)-1056964600;
      }
      if ( !v112 )
      {
        v69 = *(_QWORD **)(v61 + 5088);
        if ( v69 )
        {
          LogicalProcessorRelationship = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                                           *v69,
                                           v114,
                                           v115,
                                           v116,
                                           (PHYSICAL_ADDRESS)v117.QuadPart,
                                           (PHYSICAL_ADDRESS)v118.QuadPart,
                                           v119);
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        }
        return (unsigned int)-1056964601;
      }
      if ( v112->Group == 1 && *(_DWORD *)&v112[1] >= 4u )
      {
        LOWORD(v107) = v112[2].Group;
        BYTE2(v107) = v112[2].Number;
        v66 = RaidAdapterFindUnit(v61, v107);
        v67 = v66;
        if ( v66 )
        {
          if ( RaidUnitCheckAndAcquirePoFx(v66) )
          {
            v68 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v67 + 1488),
                    v62,
                    v63,
                    v64,
                    (PHYSICAL_ADDRESS)v109.QuadPart,
                    (PHYSICAL_ADDRESS)v108.QuadPart,
                    v65);
            v6 = RaidNtStatusToStorStatus(v68);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v67 + 1480));
            return v6;
          }
          return (unsigned int)-1056964601;
        }
      }
      return (unsigned int)-1056964602;
    case 0x36u:
      return (unsigned int)StorpFlushDataBufferMdl(v8, v112);
    case 0x37u:
      v84 = v112;
      v85 = v114;
      v86 = v115;
      v87 = **(_QWORD **)(v5 - 16);
      if ( !v115 )
        return (unsigned int)-1056964602;
      if ( !v87 )
        return (unsigned int)-1056964602;
      v115->Relationship = RelationProcessorCore;
      if ( v84 )
      {
        if ( v84->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v84[1] < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v107) = v84[2].Group;
        BYTE2(v107) = v84[2].Number;
        if ( !RaidAdapterFindUnit(v87, v107) )
          return (unsigned int)-1056964602;
      }
      if ( v85->Mask == 0x481F895FDCAF9C10LL && *(_QWORD *)&v85->Group == 0x3356F5D2CED492A4LL )
      {
        v6 = 0;
        v86->Relationship = (unsigned __int8)g_InWinPE;
      }
      return v6;
    case 0x38u:
      v20 = v114;
      if ( !v112 || !v114 )
        return (unsigned int)-1056964602;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v112);
      LODWORD(v20->Mask) = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber == -1 )
        LODWORD(Mask) = -1056964602;
      return (unsigned int)Mask;
    case 0x39u:
      Arg2 = (unsigned int)v114;
      if ( v112 )
        return 3238002694LL;
      v71 = **(_QWORD **)(v5 - 16);
      if ( !v71 )
        return (unsigned int)-1056964602;
      v72 = *(_QWORD **)(v71 + 5088);
      if ( !v72 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v71 + 108) & 0x40) != 0 )
        return (unsigned int)-1056964607;
      *(_DWORD *)(v71 + 5104) = (_DWORD)v114;
      PoFxSetDeviceIdleTimeout(*v72, 10000 * Arg2);
      if ( !StorEtwLoggingEnabled || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) == 0 )
        return 0;
      McTemplateK0pqqq(
        v73,
        &EventAdapterIdleTimeoutSet,
        0LL,
        **(const void ***)(v71 + 5088),
        *(_DWORD *)(v71 + 56),
        Arg2,
        *(_DWORD *)(v71 + 5104));
      return 0;
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
      if ( !StorEtwLoggingEnabled || !_bittest((const signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData, 0x1Cu) )
        return 0;
      return (unsigned int)StorEtwMiniportEventProxy(v5, a1, (struct _PROCESSOR_NUMBER **)va);
    case 0x3Du:
      v88 = v112;
      if ( v112 )
        LOBYTE(v112->Group) = 0;
      v89 = -1056964602;
      if ( v88 )
      {
        v89 = 0;
        LOBYTE(v88->Group) = g_OSisUpgrade;
      }
      v6 = 0;
      if ( !v88 )
        return v89;
      return v6;
    case 0x3Eu:
      LOBYTE(v9) = 1;
      return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v5, v9, (struct _PROCESSOR_NUMBER **)va);
    case 0x3Fu:
      return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v5, 0LL, (struct _PROCESSOR_NUMBER **)va);
    case 0x40u:
      v95 = **(_QWORD **)(v5 - 16);
      if ( !v95 || (unsigned int)v112 >= 0x14 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v95 + 544) & 1) == 0 )
        return (unsigned int)-1056964607;
      *(_DWORD *)(v95 + 4356) = (_DWORD)v112;
      return 0;
    case 0x41u:
      v74 = (unsigned int)v116;
      v75 = v117;
      if ( v112 )
        return 3238002694LL;
      v76 = **(_QWORD **)(v5 - 16);
      if ( !v76 )
        return 3238002694LL;
      v77 = *(_QWORD *)(v76 + 5088);
      if ( !v77 || *(_BYTE *)(v77 + 24) )
        return 3238002689LL;
      LogicalProcessorRelationship = RaidRegisterPerfStates(
                                       *(_QWORD *)(v76 + 8),
                                       (_DWORD)v114,
                                       (_DWORD)v115,
                                       (_DWORD)v116,
                                       v117.QuadPart,
                                       *(_QWORD *)v77);
      if ( LogicalProcessorRelationship < 0 )
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterCacheOperationalPowerRange)(
                              *(_QWORD *)(v76 + 5088),
                              v74,
                              (PHYSICAL_ADDRESS)v75.QuadPart) )
      {
        *(_QWORD *)(*(_QWORD *)(v76 + 5088) + 48LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v76 + 5088) + 56LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v76 + 5088) + 64LL) = -1LL;
      }
      *(_BYTE *)(*(_QWORD *)(v76 + 5088) + 24LL) = v74;
      ((void (__fastcall *)(_QWORD, _QWORD))StorpLogRegisterAdapterPerfStates)(v76, (PHYSICAL_ADDRESS)v75.QuadPart);
      return 0;
    case 0x42u:
      v78 = (unsigned int)v115;
      if ( v112 || (_DWORD)v115 )
        return 3238002694LL;
      v79 = *(_QWORD *)(v5 - 16);
      if ( !*(_QWORD *)v79 )
        return v6;
      v80 = *(__int64 **)(*(_QWORD *)v79 + 5088LL);
      if ( !v80 )
        return v6;
      v81 = KeGetCurrentIrql();
      v109.LowPart = 0;
      v110 = 0LL;
      v82 = *((_BYTE *)v80 + 24);
      if ( !v82 || (unsigned int)v116 >= v82 )
        return 3238002694LL;
      v109.LowPart = (unsigned int)v116;
      LODWORD(v110) = v117.LowPart;
      v83 = *v80;
      if ( v81 >= 2u )
        v78 = 2LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
        v83,
        v78,
        (unsigned int)v114,
        &v109,
        (PHYSICAL_ADDRESS)v118.QuadPart);
      return 0;
    case 0x43u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      v90 = v112;
      v6 = -1056964602;
      v91 = v114;
      if ( !v114 )
        return v6;
      LOBYTE(v114->Mask) = 0;
      v92 = **(_QWORD **)(a2 - 16);
      if ( !v92 )
        return v6;
      if ( v90 )
      {
        if ( v90->Group != 1 )
          return v6;
        if ( *(_DWORD *)&v90[1] < 4u )
          return v6;
        LOWORD(v107) = v90[2].Group;
        BYTE2(v107) = v90[2].Number;
        v93 = RaidAdapterFindUnit(v92, v107);
        if ( !v93 )
          return v6;
        v94 = *(struct _DEVICE_OBJECT **)(v93 + 8);
      }
      else
      {
        v94 = *(struct _DEVICE_OBJECT **)(v92 + 8);
      }
      if ( !v94 )
        return v6;
      LogicalProcessorRelationship = RaidGetD3ColdInterface(v94);
      if ( LogicalProcessorRelationship >= 0 )
      {
        LOBYTE(v91->Mask) = RaidGetD3ColdCapability(0LL);
        return 0;
      }
      return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x44u:
      if ( v112 )
        return (unsigned int)-1056964601;
      return (unsigned int)RaidInitializeRpmb(v5, v114);
    case 0x45u:
      return (unsigned int)StorpAllocateHostMemoryBuffer(
                             v5,
                             (int)v112,
                             (int)v114,
                             (int)v115,
                             (int)v116,
                             v117,
                             v118,
                             (__int64)v119,
                             v120,
                             v121);
    case 0x46u:
      return (unsigned int)StorpFreeHostMemoryBuffer(v5);
    case 0x47u:
      v96 = **(_QWORD **)(v5 - 16);
      if ( !v96 )
        return (unsigned int)-1056964602;
      if ( !*(_BYTE *)(v96 + 500) )
        return (unsigned int)-1056964601;
      if ( !v112 || !v114 )
        return (unsigned int)-1056964602;
      if ( v112->Number == 40 )
      {
        v97 = *(_QWORD *)&v112[20].Group;
      }
      else
      {
        v98 = *(_QWORD *)&v112[12].Group;
        if ( !v98 || *(_DWORD *)v98 != 523124044 )
          return (unsigned int)-1056964602;
        v97 = *(_QWORD *)(v98 + 176);
      }
      if ( !v97 )
        return (unsigned int)-1056964602;
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( (_DWORD)v115 )
      {
        v99 = IoPropagateIrpExtension();
        return (unsigned int)RaidNtStatusToStorStatus(v99);
      }
      else
      {
        return 0;
      }
    case 0x48u:
      v100 = v115;
      *(_QWORD *)&v100->Relationship = ExInterlockedInsertHeadList(
                                         (PLIST_ENTRY)v112,
                                         (PLIST_ENTRY)v114,
                                         (PKSPIN_LOCK)v116);
      return 0;
    case 0x49u:
      v101 = v115;
      *(_QWORD *)&v101->Relationship = ExInterlockedInsertTailList(
                                         (PLIST_ENTRY)v112,
                                         (PLIST_ENTRY)v114,
                                         (PKSPIN_LOCK)v116);
      return 0;
    case 0x4Au:
      v102 = v114;
      v102->Mask = (unsigned __int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)v112, (PKSPIN_LOCK)v115);
      return 0;
    case 0x4Bu:
      KeInitializeSpinLock((PKSPIN_LOCK)&v112->Group);
      return 0;
    case 0x4Cu:
      return (unsigned int)StorpGetPfns(v5, (_DWORD)v112, (_DWORD)v114, (_DWORD)v115, (__int64)v116, v117.QuadPart);
    case 0x4Du:
      if ( !v112 || !**(_QWORD **)(v5 - 16) )
        return (unsigned int)-1056964602;
      return (unsigned int)RaidInitializeCryptoEngine();
    case 0x4Eu:
      v103 = v114;
      if ( !v112 || !v114 )
        return (unsigned int)-1056964602;
      if ( v112->Number == 40 )
        v104 = *(_QWORD *)&v112[24].Group;
      else
        v104 = *(_QWORD *)&v112[12].Group;
      v6 = 0;
      LODWORD(v114->Mask) = **(_DWORD **)(v104 + 784);
      HIDWORD(v103->Mask) = *(_DWORD *)(*(_QWORD *)(v104 + 784) + 4LL);
      *(_DWORD *)&v103->Group = *(_DWORD *)(*(_QWORD *)(v104 + 784) + 8LL);
      v103[1].Mask = *(_QWORD *)(*(_QWORD *)(v104 + 784) + 16LL);
      return v6;
    case 0x4Fu:
      if ( !v114 )
        return (unsigned int)-1056964602;
      v105 = v114[3].Mask;
      if ( v105 > 0x1000 )
        return (unsigned int)-1056964598;
      if ( v105 && !*(_QWORD *)&v114[3].Group || *(_QWORD *)&v114[3].Group && !v105 )
        return (unsigned int)-1056964602;
      StorpTelemetryMiniportEvent(**(_QWORD **)(v5 - 16), v112);
      return 0;
    case 0x50u:
      v106 = **(_QWORD **)(v5 - 16);
      if ( !v106 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v106 + 104) & 0x10) == 0 )
        return (unsigned int)-1056964601;
      v6 = 0;
      *(_DWORD *)(v106 + 508) = (_DWORD)v112;
      return v6;
    case 0x51u:
      StorDelayExecution((unsigned int)v112);
      return 0;
    default:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids, a1);
      }
      return v6;
  }
}
