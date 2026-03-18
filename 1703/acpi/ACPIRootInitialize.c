/*
 * XREFs of ACPIRootInitialize @ 0x1C008A29C
 * Callers:
 *     ACPITableLoad @ 0x1C001D690 (ACPITableLoad.c)
 * Callees:
 *     AMLISetNSObjectContext @ 0x1C000260C (AMLISetNSObjectContext.c)
 *     IsHypervisorLpiCapable @ 0x1C000622C (IsHypervisorLpiCapable.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C00063B0 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIGetParent @ 0x1C00127F8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C00264AC (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0026760 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C0047D50 (_ACPIInternalError.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C0089B34 (ACPIWriteOscSupportToRegistry.c)
 *     ACPIPccLegacyInitialize @ 0x1C008A538 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C008A69C (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008A750 (ACPIAmliEvaluateOsc.c)
 *     IsHypervisorCpcCapable @ 0x1C00A4154 (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned int v0; // edi
  int v1; // esi
  int v2; // r12d
  __int64 v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 *v6; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  bool v11; // bl
  USHORT HighestNodeNumber; // ax
  int v13; // r8d
  USHORT v14; // bx
  USHORT v15; // r14
  unsigned __int16 v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  bool v26; // cc
  char v28; // al
  unsigned int v29; // ecx
  __int64 v30; // rcx
  USHORT Count[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v32[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v33[4]; // [rsp+40h] [rbp-30h] BYREF
  int v34[4]; // [rsp+50h] [rbp-20h] BYREF

  v32[0] = 0;
  *(_QWORD *)v34 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, v34) < 0 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      22,
      29,
      (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids);
    ACPIInternalError(0x110991uLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v3 = *(_QWORD *)v34;
  v4 = *(__int64 **)v34;
  *(_QWORD *)(RootDeviceExtension + 712) = *(_QWORD *)v34;
  AMLISetNSObjectContext(v4, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v5 = (__int64 *)AMLIGetParent(v3);
  v6 = AMLIGetNamedChild(v5, 1229867359);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v5, 0LL);
  if ( v6 )
  {
    AMLIAsyncEvalObject(v6, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6, 0LL);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v34[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v8, v7, v9, v10, (__int64)v34) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize();
  v11 = IsHypervisorLpiCapable();
  HviGetHypervisorFeatures(v34);
  if ( (*(_QWORD *)v34 & 0x100000000000LL) != 0 )
  {
    v28 = IsHypervisorCpcCapable();
    v29 = AcpiRootFeaturesSupported;
    if ( !v28 )
    {
      v29 = AcpiRootFeaturesSupported & 0xFFFFEF9F;
      AcpiRootFeaturesSupported &= 0xFFFFEF9F;
    }
    if ( !v11 )
      AcpiRootFeaturesSupported = v29 & 0xFFFFFFFE;
    v32[0] |= 1u;
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v14 = 0;
  v15 = HighestNodeNumber + 1;
  v16 = 0;
  if ( HighestNodeNumber == 0xFFFF )
    goto LABEL_13;
  do
  {
    KeQueryNodeActiveAffinity(v14, 0LL, Count);
    if ( Count[0] )
      ++v16;
    ++v14;
  }
  while ( v14 < v15 );
  v2 = 0;
  if ( v16 <= 1u )
  {
LABEL_13:
    v17 = AcpiRootFeaturesSupported;
  }
  else
  {
    v17 = AcpiRootFeaturesSupported & 0xFFFFEFFF;
    AcpiRootFeaturesSupported &= ~0x1000u;
  }
  v33[1] = v17;
  v33[0] = 0;
  v18 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)v34 = SB_OSC_UUID;
  if ( !(unsigned int)ACPIAmliEvaluateOsc(v18, (int)v34, v13, 2, v33) )
  {
    v0 = ((unsigned int)AcpiRootFeaturesSupported >> 4) & 1;
    if ( v0 )
      v1 = 1;
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
    {
      v2 = 2;
      if ( (AcpiRootFeaturesSupported & 0x40) == 0 )
        v2 = 1;
    }
  }
  v20 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)v33 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v20, (int)v33, v19, 1, v32);
  *(_QWORD *)v33 = 0LL;
  v21 = *(_QWORD *)(RootDeviceExtension + 712);
  v33[1] = BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) & 1;
  *(_OWORD *)v34 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(v21, (int)v34, v22, 2, v33);
  ACPIWriteOscSupportToRegistry(v1, v0, v2);
  AcpiInterruptCombiningSupported = 0;
  v24 = *((_QWORD *)AcpiInformation + 1);
  v25 = *(_BYTE *)(v24 + 8);
  v26 = v25 <= 6u;
  if ( v25 == 6 )
  {
    if ( *(_BYTE *)(v24 + 131) >= 2u )
      goto LABEL_33;
    v26 = 1;
  }
  if ( !v26 )
  {
LABEL_33:
    AcpiRootFeaturesSupported |= 0x2000u;
    v33[1] = AcpiRootFeaturesSupported;
    v30 = *(_QWORD *)(RootDeviceExtension + 712);
    v33[0] = 1;
    *(_OWORD *)v34 = SB_OSC_UUID;
    ACPIAmliEvaluateOsc(v30, (int)v34, v23, 2, v33);
    AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
  }
  return 0LL;
}
