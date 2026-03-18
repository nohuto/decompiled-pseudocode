/*
 * XREFs of RtlCompareMemory @ 0x1401B3260
 * Callers:
 *     SepNormalAccessCheck @ 0x14005F060 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400751F0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepIsPackageSid @ 0x1400B94D8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1400BA5A4 (SepIsCapabilitySid.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14016A69C (PpmPerfCalculateQosClassPolicies.c)
 *     RtlpStdLogCapturedStackTrace @ 0x140286D78 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x140295EF0 (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x1402B4280 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1402BE528 (WheaGetErrPacketFromErrRecord.c)
 *     sub_14048AC0C @ 0x14048AC0C (sub_14048AC0C.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1404A3C14 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1404CA6B0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     NtAlpcOpenSenderProcess @ 0x1404DDA8C (NtAlpcOpenSenderProcess.c)
 *     NtAlpcOpenSenderThread @ 0x1404E032C (NtAlpcOpenSenderThread.c)
 *     PopArePowerSettingsEqual @ 0x14051941C (PopArePowerSettingsEqual.c)
 *     PnpNotifyTargetDeviceChange @ 0x14051F60C (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x140523858 (PnpIsNullGuid.c)
 *     sub_14053A6D0 @ 0x14053A6D0 (sub_14053A6D0.c)
 *     SepCheckCapabilities @ 0x14053EE14 (SepCheckCapabilities.c)
 *     ObpCompareEntryLevel2 @ 0x140540AB0 (ObpCompareEntryLevel2.c)
 *     RtlGetAppContainerSidType @ 0x140540E30 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1405414D8 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140541F64 (RtlIsPackageSid.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14055CD48 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     EtwpCalculateUpdateNotification @ 0x14058C620 (EtwpCalculateUpdateNotification.c)
 *     EtwpTrackDebugIdForSession @ 0x14058CA30 (EtwpTrackDebugIdForSession.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140591B34 (EtwpClearSessionAndUnreferenceEntry.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1405D25A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopPnPDispatch @ 0x1405DC950 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x1405E52F4 (PnpBusTypeGuidGetIndex.c)
 *     IoReportTargetDeviceChange @ 0x1405E5D70 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     PnpNotifyDeviceClassChange @ 0x1406027D0 (PnpNotifyDeviceClassChange.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140605DE0 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x1406118BC (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x140612D04 (PnpCompareInterruptInformation.c)
 *     CmpFilterAcpiDockingState @ 0x14062D27C (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x1406F74E4 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x1407255B4 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140725874 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14073D110 (PiDrvDbQuerySyncNodesUpdated.c)
 *     ObpGetTraceIndex @ 0x14075A8DC (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14076A578 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140783470 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140795824 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1407A33F0 (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x1407B2344 (EtwpTrackBinaryForSession.c)
 *     ExpCovIsModulePresent @ 0x1407C6784 (ExpCovIsModulePresent.c)
 *     sub_1407CFF64 @ 0x1407CFF64 (sub_1407CFF64.c)
 *     BiUpdateBcdObject @ 0x1407E58FC (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x140813F68 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1408156B8 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x14081A80C (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x14081A95C (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x1408E2570 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
