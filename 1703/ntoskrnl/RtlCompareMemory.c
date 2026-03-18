/*
 * XREFs of RtlCompareMemory @ 0x140189B00
 * Callers:
 *     SepIsPackageSid @ 0x140021F88 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140022854 (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140067520 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x140090270 (SepNormalAccessCheck.c)
 *     RtlpStdLogCapturedStackTrace @ 0x14023BA28 (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14025F438 (WheaGetErrPacketFromErrRecord.c)
 *     SepCheckCapabilities @ 0x14041E774 (SepCheckCapabilities.c)
 *     NtAlpcOpenSenderThread @ 0x140447D5C (NtAlpcOpenSenderThread.c)
 *     EtwpAddProviderToSession @ 0x140448258 (EtwpAddProviderToSession.c)
 *     PnpBusTypeGuidGetIndex @ 0x14044E318 (PnpBusTypeGuidGetIndex.c)
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     WbInitializeEncryptionSegment @ 0x14045CE10 (WbInitializeEncryptionSegment.c)
 *     ObpCompareEntryLevel2 @ 0x140469E10 (ObpCompareEntryLevel2.c)
 *     RtlIsPackageSid @ 0x14046A0F8 (RtlIsPackageSid.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtAlpcOpenSenderProcess @ 0x1404751D8 (NtAlpcOpenSenderProcess.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14048FD04 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     RtlGetAppContainerSidType @ 0x1404A4820 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1404A4EC8 (RtlIsCapabilitySid.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404A6548 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1404A6D00 (PnpNotifyDeviceClassChange.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 *     PopArePowerSettingsEqual @ 0x1404C21C8 (PopArePowerSettingsEqual.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404DE940 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x140523B10 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     sub_140548B04 @ 0x140548B04 (sub_140548B04.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140552860 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1405539C8 (EtwpCalculateUpdateNotification.c)
 *     IopPnPDispatch @ 0x14055A4F0 (IopPnPDispatch.c)
 *     IoReportTargetDeviceChange @ 0x140574FF0 (IoReportTargetDeviceChange.c)
 *     PopInitSIdle @ 0x140582D98 (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x140583F04 (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140585CD8 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpFilterAcpiDockingState @ 0x1405C9CA0 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x140669578 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x140693DA8 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140694060 (PnpRequestHwProfileChangeNotification.c)
 *     ObpGetTraceIndex @ 0x1406C2A8C (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406CEFD0 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1406E7FA8 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1406FA4E8 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x140707744 (WmipParseSysIdTable.c)
 *     EtwpAddWinRtProviderToSession @ 0x1407132C4 (EtwpAddWinRtProviderToSession.c)
 *     ExpCovIsModulePresent @ 0x14071F614 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x140765218 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140766AF0 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x14076B9D0 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x14076BB20 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
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
