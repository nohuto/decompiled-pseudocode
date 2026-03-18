/*
 * XREFs of memmove @ 0x1C002C180
 * Callers:
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0001728 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0002E90 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIBusIrpQueryInterface @ 0x1C0004580 (ACPIBusIrpQueryInterface.c)
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x1C000BEE0 (GetNameSpaceObjectNoLock.c)
 *     Return @ 0x1C000C940 (Return.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C000D26C (AMLIGetNameSpaceObjectPath.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000D35C (ACPIAmliBuildObjectPathname.c)
 *     ACPIMapNamedTable @ 0x1C000DD20 (ACPIMapNamedTable.c)
 *     ACPIGetWorkerForBuffer @ 0x1C000F160 (ACPIGetWorkerForBuffer.c)
 *     ACPIDetectDockDevices @ 0x1C0010748 (ACPIDetectDockDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0010B84 (ACPIDetectPdoDevices.c)
 *     ACPIIoctlEnumChildren @ 0x1C0015D7C (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0015F7C (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C0016084 (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C00161AC (FindNSObjMainNoLock.c)
 *     WriteFieldObj @ 0x1C00168F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0016D90 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C00173C0 (AccessBaseField.c)
 *     WriteSystemMem @ 0x1C0018728 (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C00189E0 (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C0018A78 (PushAccFieldObj.c)
 *     ParseObjName @ 0x1C0018CA8 (ParseObjName.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     FindNSObj @ 0x1C00198E0 (FindNSObj.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001AA2C (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0 (ACPIIoctlCalculateOutputBufferV1.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     Method @ 0x1C001BD50 (Method.c)
 *     ParseField @ 0x1C001C0C0 (ParseField.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     Buffer @ 0x1C001E900 (Buffer.c)
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     WriteObject @ 0x1C0020320 (WriteObject.c)
 *     CopyObjBuffer @ 0x1C0020AF8 (CopyObjBuffer.c)
 *     ConvertToInteger @ 0x1C002119C (ConvertToInteger.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0024490 (ACPIThermalCompletePendingIrps.c)
 *     WriteFieldLoop @ 0x1C0025AD0 (WriteFieldLoop.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0026040 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIBuildProcessorExtension @ 0x1C00293D8 (ACPIBuildProcessorExtension.c)
 *     ParseInteger @ 0x1C00295FC (ParseInteger.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C002BD70 (AcpiRecordBlackboxInformationWorker.c)
 *     ACPIDetectEjectDevices @ 0x1C00474C4 (ACPIDetectEjectDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C004AAD0 (AcpiDeviceResetInterface.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C004ED10 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C004FF00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0050C6C (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C005120C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0051540 (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C0051B40 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0053D9C (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055F00 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005679C (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C00579E4 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C0059C8C (ACPIVectorGetEntry.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C005CDD4 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005CEC8 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C005FD04 (RawFieldAccess.c)
 *     Concat @ 0x1C0060C70 (Concat.c)
 *     LoadTable @ 0x1C00615E0 (LoadTable.c)
 *     ToDecStr @ 0x1C0062730 (ToDecStr.c)
 *     ToHexStr @ 0x1C0062AC0 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0063104 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C00632D0 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C0063870 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C0064070 (LinkNodepRunSrsWorker.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0086720 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0086890 (ACPIFilterIrpQueryInterface.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0089908 (IrqArbpSetDeviceProperties.c)
 *     ACPIGetPnpLocationString @ 0x1C008BED0 (ACPIGetPnpLocationString.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008D524 (ACPIBusIrpQueryHardwareId.c)
 *     OSReadRegValue @ 0x1C008E0E8 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C008F7A4 (ACPIInternalGrowBuffer.c)
 *     ArbAddOrdering @ 0x1C0091438 (ArbAddOrdering.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0092480 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0092604 (ACPIThermalBuildConstraints.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0093D74 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00940AC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00955FC (ACPIBusIrpQueryInstanceId.c)
 *     IrqTranslatorEjectInterface @ 0x1C009746C (IrqTranslatorEjectInterface.c)
 *     ACPIDockIrpQueryInterface @ 0x1C009EB90 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C009F2A0 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009F594 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C00A1360 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00A26E8 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00A2790 (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C00A2C30 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C00A2EB4 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A3600 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A41F8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A443C (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00A48F0 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00A4AD8 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C00A4CA4 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00A733C (BuildTranslatorRanges.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A8060 (LinkNodeGetPossibleResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A8E70 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00A934C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00A94E0 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00AC41C (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
