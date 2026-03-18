/*
 * XREFs of ACPIRootInitialize @ 0x1C008710C
 * Callers:
 *     ACPITableLoad @ 0x1C003B1B0 (ACPITableLoad.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     _ACPIInternalError @ 0x1C0017A64 (_ACPIInternalError.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0038C70 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0038D98 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0038F00 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0039174 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     IsHypervisorLpiCapable @ 0x1C0039B80 (IsHypervisorLpiCapable.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 *     AMLISetNSObjectContext @ 0x1C0044438 (AMLISetNSObjectContext.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     ACPIPccLegacyInitialize @ 0x1C007EEB4 (ACPIPccLegacyInitialize.c)
 *     OSCreateHandle @ 0x1C0082140 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0082E48 (OSWriteRegValue.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C0086F98 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C00882F4 (ACPIWriteOscSupportToRegistry.c)
 *     IsHypervisorCpcCapable @ 0x1C0088390 (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned int v0; // edi
  unsigned int v1; // esi
  unsigned int v2; // r12d
  __int64 v3; // rbx
  __int64 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // bl
  USHORT HighestNodeNumber; // ax
  __int64 v13; // r8
  USHORT v14; // bx
  USHORT v15; // r14
  unsigned __int16 v16; // r15
  _QWORD *v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  bool v25; // cc
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  HANDLE Handle[2]; // [rsp+30h] [rbp-50h] BYREF
  USHORT Count[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v31[3]; // [rsp+44h] [rbp-3Ch] BYREF
  int v32[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 Data; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v34[8]; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)v32 = 0LL;
  v31[0] = 0;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, (__int64)v32, 0) < 0 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      22,
      29,
      (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids);
    ACPIInternalError(0x110AB8uLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v3 = *(_QWORD *)v32;
  v4 = *(__int64 **)v32;
  *(_QWORD *)(RootDeviceExtension + 712) = *(_QWORD *)v32;
  AMLISetNSObjectContext(v4, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v5 = (volatile signed __int32 *)AMLIGetParent(v3);
  v6 = AMLIGetNamedChild(v5, 1229867359);
  AMLIDereferenceHandleEx(v5);
  if ( v6 )
  {
    AMLIAsyncEvalObject(v6, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v32[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v8, v7, v9, v10, v32) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize(v8);
  v11 = IsHypervisorLpiCapable();
  HviGetHypervisorFeatures(v32);
  if ( (*(_QWORD *)v32 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFFEF9F;
    if ( !v11 )
      AcpiRootFeaturesSupported &= ~1u;
    v31[0] |= 1u;
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
  HIDWORD(Handle[0]) = AcpiRootFeaturesSupported;
  LODWORD(Handle[0]) = 0;
  v17 = *(_QWORD **)(RootDeviceExtension + 712);
  *(_OWORD *)v32 = SB_OSC_UUID;
  if ( !(unsigned int)ACPIAmliEvaluateOsc(v17, (__int64)v32, v13, 2u, Handle) )
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
  v19 = *(_QWORD **)(RootDeviceExtension + 712);
  *(_OWORD *)Handle = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v19, (__int64)Handle, v18, 1u, v31);
  Handle[0] = 0LL;
  *(_OWORD *)v32 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(*(_QWORD **)(RootDeviceExtension + 712), (__int64)v32, v20, 2u, Handle);
  ACPIWriteOscSupportToRegistry(v1, v0, v2);
  if ( v1 )
  {
    ACPIEvaluateDsmEmcaMethodOnRootBus(v21, &Data);
    Handle[0] = 0LL;
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, Handle) >= 0 )
    {
      OSWriteRegValue("EMcaLoggingSupport", Handle[0], &Data, 1u);
      OSWriteRegValue("EMcaL1DirectoryBase", Handle[0], v34, 8u);
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
  }
  AcpiInterruptCombiningSupported = 0;
  v23 = *((_QWORD *)AcpiInformation + 1);
  v24 = *(_BYTE *)(v23 + 8);
  v25 = v24 <= 6u;
  if ( v24 == 6 )
  {
    if ( *(_BYTE *)(v23 + 131) >= 2u )
    {
LABEL_34:
      AcpiRootFeaturesSupported |= 0x2000u;
      HIDWORD(Handle[0]) = AcpiRootFeaturesSupported;
      v26 = *(_QWORD **)(RootDeviceExtension + 712);
      LODWORD(Handle[0]) = 1;
      *(_OWORD *)v32 = SB_OSC_UUID;
      ACPIAmliEvaluateOsc(v26, (__int64)v32, v22, 2u, Handle);
      AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
      goto LABEL_35;
    }
    v25 = 1;
  }
  if ( !v25 )
    goto LABEL_34;
LABEL_35:
  v27 = (_QWORD *)(RootDeviceExtension + 816);
  *(_QWORD *)(RootDeviceExtension + 824) = RootDeviceExtension + 816;
  *v27 = v27;
  KeInitializeEvent((PRKEVENT)(RootDeviceExtension + 856), SynchronizationEvent, 1u);
  return 0LL;
}
