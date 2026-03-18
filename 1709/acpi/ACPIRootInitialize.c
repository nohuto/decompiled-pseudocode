/*
 * XREFs of ACPIRootInitialize @ 0x1C0091A00
 * Callers:
 *     ACPITableLoad @ 0x1C00132C0 (ACPITableLoad.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     AMLISetNSObjectContext @ 0x1C000FCBC (AMLISetNSObjectContext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0021EE4 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0022198 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0022348 (ACPIFixedFeatureButtonInitialize.c)
 *     IsHypervisorLpiCapable @ 0x1C00224AC (IsHypervisorLpiCapable.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C004749C (_ACPIInternalError.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C008F82C (ACPIWriteOscSupportToRegistry.c)
 *     ACPIPccLegacyInitialize @ 0x1C0091C98 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C0091DFC (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0092480 (ACPIAmliEvaluateOsc.c)
 *     IsHypervisorCpcCapable @ 0x1C00A6C74 (IsHypervisorCpcCapable.c)
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
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r8d
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  bool v25; // cc
  __int64 v27; // rcx
  USHORT Count[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v29[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v30[4]; // [rsp+40h] [rbp-30h] BYREF
  int v31[4]; // [rsp+50h] [rbp-20h] BYREF

  v29[0] = 0;
  *(_QWORD *)v31 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, (__int64 *)v31, 0) < 0 )
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
  v3 = *(_QWORD *)v31;
  v4 = *(__int64 **)v31;
  *(_QWORD *)(RootDeviceExtension + 712) = *(_QWORD *)v31;
  AMLISetNSObjectContext(v4, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v5 = (__int64 *)AMLIGetParent(v3);
  v6 = AMLIGetNamedChild(v5, 1229867359);
  AMLIDereferenceHandleEx((__int64)v5);
  if ( v6 )
  {
    AMLIAsyncEvalObject(v6, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v6);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v31[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v8, v7, v9, v10, (__int64)v31) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize();
  v11 = IsHypervisorLpiCapable();
  HviGetHypervisorFeatures(v31);
  if ( (*(_QWORD *)v31 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFFEF9F;
    if ( !v11 )
      AcpiRootFeaturesSupported &= ~1u;
    v29[0] |= 1u;
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v14 = 0;
  v15 = HighestNodeNumber + 1;
  v16 = 0;
  if ( HighestNodeNumber != 0xFFFF )
  {
    do
    {
      KeQueryNodeActiveAffinity(v14, 0LL, Count);
      if ( Count[0] )
        ++v16;
      ++v14;
    }
    while ( v14 < v15 );
    v2 = 0;
    if ( v16 > 1u )
      AcpiRootFeaturesSupported &= ~0x1000u;
  }
  v30[1] = AcpiRootFeaturesSupported;
  v30[0] = 0;
  v17 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)v31 = SB_OSC_UUID;
  if ( !(unsigned int)ACPIAmliEvaluateOsc(v17, (int)v31, v13, 2, v30) )
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
  v19 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)v30 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v19, (int)v30, v18, 1, v29);
  *(_QWORD *)v30 = 0LL;
  v20 = *(_QWORD *)(RootDeviceExtension + 712);
  v30[1] = BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) & 1;
  *(_OWORD *)v31 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(v20, (int)v31, v21, 2, v30);
  ACPIWriteOscSupportToRegistry(v1, v0, v2);
  AcpiInterruptCombiningSupported = 0;
  v23 = *((_QWORD *)AcpiInformation + 1);
  v24 = *(_BYTE *)(v23 + 8);
  v25 = v24 <= 6u;
  if ( v24 == 6 )
  {
    if ( *(_BYTE *)(v23 + 131) >= 2u )
      goto LABEL_32;
    v25 = 1;
  }
  if ( !v25 )
  {
LABEL_32:
    AcpiRootFeaturesSupported |= 0x2000u;
    v30[1] = AcpiRootFeaturesSupported;
    v27 = *(_QWORD *)(RootDeviceExtension + 712);
    v30[0] = 1;
    *(_OWORD *)v31 = SB_OSC_UUID;
    ACPIAmliEvaluateOsc(v27, (int)v31, v22, 2, v30);
    AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
  }
  return 0LL;
}
