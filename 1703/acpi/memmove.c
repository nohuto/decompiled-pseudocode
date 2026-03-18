/*
 * XREFs of memmove @ 0x1C002C840
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0001ED0 (ACPIMapNamedTable.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     ACPIBuildProcessorExtension @ 0x1C0006990 (ACPIBuildProcessorExtension.c)
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0009FE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIBusIrpQueryInterface @ 0x1C000FA20 (ACPIBusIrpQueryInterface.c)
 *     WriteFieldObj @ 0x1C0010070 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0010900 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0010F30 (AccessBaseField.c)
 *     WriteSystemMem @ 0x1C0012374 (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C0012630 (ReadSystemMem.c)
 *     ACPIDetectDockDevices @ 0x1C00132C4 (ACPIDetectDockDevices.c)
 *     PushAccFieldObj @ 0x1C0013BE8 (PushAccFieldObj.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C001447C (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C0014558 (AMLIGetNameSpaceObjectPath.c)
 *     WriteFieldLoop @ 0x1C0015A80 (WriteFieldLoop.c)
 *     FindNSObj @ 0x1C0015FE0 (FindNSObj.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     AccFieldUnit @ 0x1C0017A60 (AccFieldUnit.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0019AF0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0019CD0 (ParseSuperName.c)
 *     Return @ 0x1C001A7B0 (Return.c)
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     Method @ 0x1C001B390 (Method.c)
 *     CopyObjBuffer @ 0x1C001BD30 (CopyObjBuffer.c)
 *     Buffer @ 0x1C001BE50 (Buffer.c)
 *     ParseObjName @ 0x1C001C334 (ParseObjName.c)
 *     ConvertToInteger @ 0x1C001CA8C (ConvertToInteger.c)
 *     ACPIIoctlEnumChildren @ 0x1C001E03C (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C001E23C (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C001E344 (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C001E46C (FindNSObjMainNoLock.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0021A24 (ACPIThermalCompletePendingIrps.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0023924 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0024DAC (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C00252E0 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C0025574 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0026B20 (ACPIGetWorkerForBuffer.c)
 *     ParseInteger @ 0x1C002887C (ParseInteger.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0028E8C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B850 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0045B34 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C0047D78 (ACPIDetectEjectDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C004B6D0 (AcpiDeviceResetInterface.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C004F320 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0050AC0 (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C0051100 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005328C (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055310 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C0055BA4 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C0056DF0 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C0059094 (ACPIVectorGetEntry.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C005CFE4 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005D0D8 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C005EB24 (RawFieldAccess.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     LoadTable @ 0x1C00603E0 (LoadTable.c)
 *     ToDecStr @ 0x1C0061560 (ToDecStr.c)
 *     ToHexStr @ 0x1C00618F0 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0061F34 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0062100 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C00626A0 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C0062EA0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0083A7C (ACPIBusIrpQueryHardwareId.c)
 *     ArbAddOrdering @ 0x1C0084F98 (ArbAddOrdering.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0085820 (IrqArbpSetDeviceProperties.c)
 *     OSReadRegValue @ 0x1C0089F5C (OSReadRegValue.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008A750 (ACPIAmliEvaluateOsc.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C008DFF4 (ACPIInternalGrowBuffer.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008E8D0 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C008F8C0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIThermalBuildConstraints @ 0x1C0090010 (ACPIThermalBuildConstraints.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092148 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092480 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIGetPnpLocationString @ 0x1C0092660 (ACPIGetPnpLocationString.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00935DC (ACPIBusIrpQueryInstanceId.c)
 *     IrqTranslatorEjectInterface @ 0x1C009459C (IrqTranslatorEjectInterface.c)
 *     ACPIDockIrpQueryInterface @ 0x1C009BBA0 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C009C2B0 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009C5A4 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C009E380 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C009F9B4 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C009FA5C (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C009FF00 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C00A0184 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A09B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A15A8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A17EC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00A1C98 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00A1E80 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C00A204C (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00A482C (BuildTranslatorRanges.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A55B0 (LinkNodeGetPossibleResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A63E0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00A689C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00A6A30 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00AA38C (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
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
