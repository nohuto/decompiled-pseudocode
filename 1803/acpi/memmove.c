/*
 * XREFs of memmove @ 0x1C0004200
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00018C0 (ACPIMapNamedTable.c)
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0009444 (ACPIAmliBuildObjectPathname.c)
 *     ACPIBuildProcessorExtension @ 0x1C0010C6C (ACPIBuildProcessorExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0013AA8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIBusIrpQueryInterface @ 0x1C0013E10 (ACPIBusIrpQueryInterface.c)
 *     ACPIDetectDockDevices @ 0x1C0017A8C (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1C0018144 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001DBA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     AcpiDeviceResetInterface @ 0x1C00209A0 (AcpiDeviceResetInterface.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025548 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0026D00 (ACPIGetWorkerForBuffer.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0027F10 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002A900 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002B778 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C002B8FC (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEnumChildren @ 0x1C002BA70 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C002BCBC (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C002C4F0 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C002CB7C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C002CEAC (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C002DB10 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0032CFC (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0035EB0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C00369BC (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C003865C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C003BF8C (ACPIThermalCompletePendingIrps.c)
 *     ACPIVectorGetEntry @ 0x1C003FCEC (ACPIVectorGetEntry.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0042620 (AcpiRecordBlackboxInformationWorker.c)
 *     AMLIFindNameSpaceObject @ 0x1C0043800 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C0043C60 (AMLIGetNameSpaceObjectPath.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0045CFC (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0045DF0 (AMLICreateOverrideObjectDep.c)
 *     CopyObjBuffer @ 0x1C0046368 (CopyObjBuffer.c)
 *     FindNSObj @ 0x1C0046440 (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C00466AC (FindNSObjMainNoLock.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004A2E0 (GetNameSpaceObjectNoLock.c)
 *     Method @ 0x1C004B510 (Method.c)
 *     PushAccFieldObj @ 0x1C004CFE0 (PushAccFieldObj.c)
 *     RawFieldAccess @ 0x1C004D144 (RawFieldAccess.c)
 *     ReadSystemMem @ 0x1C004D91C (ReadSystemMem.c)
 *     WriteSystemMem @ 0x1C004E3B4 (WriteSystemMem.c)
 *     Buffer @ 0x1C004FE30 (Buffer.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     LoadTable @ 0x1C00510D0 (LoadTable.c)
 *     ToDecStr @ 0x1C0052F60 (ToDecStr.c)
 *     ToHexStr @ 0x1C0053330 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 *     ConvertToInteger @ 0x1C0053BE8 (ConvertToInteger.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     ParseFieldConnection @ 0x1C005508C (ParseFieldConnection.c)
 *     ParseInteger @ 0x1C005568C (ParseInteger.c)
 *     ParseObjName @ 0x1C0055CEC (ParseObjName.c)
 *     ParseString @ 0x1C005652C (ParseString.c)
 *     LinkNodepRunSrsWorker @ 0x1C0057B00 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0071B48 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00739C0 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C0074560 (WppTraceCallback.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0076E60 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0077554 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00779AC (ACPIBusIrpQueryInstanceId.c)
 *     ACPIEcConnectHandler @ 0x1C007A390 (ACPIEcConnectHandler.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C007BC40 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C007CC94 (ACPIBusIommuBusInterface.c)
 *     ACPIGetPnpLocationString @ 0x1C007CF70 (ACPIGetPnpLocationString.c)
 *     ACPIIommuGetDeviceId @ 0x1C007D770 (ACPIIommuGetDeviceId.c)
 *     ACPIInternalGrowBuffer @ 0x1C007D86C (ACPIInternalGrowBuffer.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C007DDF0 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C007DE98 (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C007E920 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C007EBA4 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00808F0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C0081D08 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C0081F50 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C0082604 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00827EC (OSReadNextRegValue.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     PnpiAddSidebandResources @ 0x1C0083E18 (PnpiAddSidebandResources.c)
 *     ACPIThermalBuildConstraints @ 0x1C0088E6C (ACPIThermalBuildConstraints.c)
 *     BuildTranslatorRanges @ 0x1C008AB1C (BuildTranslatorRanges.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C008B384 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     LinkNodeGetPossibleResources @ 0x1C008D2A8 (LinkNodeGetPossibleResources.c)
 *     IrqTranslatorEjectInterface @ 0x1C008D9E8 (IrqTranslatorEjectInterface.c)
 *     IrqArbpSetDeviceProperties @ 0x1C00918EC (IrqArbpSetDeviceProperties.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00932C0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddOrdering @ 0x1C00934DC (ArbAddOrdering.c)
 *     ArbPruneOrdering @ 0x1C00948EC (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C0094AA0 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C009B598 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
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
        goto LABEL_38;
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
LABEL_38:
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
        goto LABEL_13;
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
LABEL_13:
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
