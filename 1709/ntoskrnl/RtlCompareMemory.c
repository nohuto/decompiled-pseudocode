/*
 * XREFs of RtlCompareMemory @ 0x140189600
 * Callers:
 *     SepNormalAccessCheck @ 0x14007DC40 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400FB110 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepIsPackageSid @ 0x14011ACB8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14011B8D0 (SepIsCapabilitySid.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140138518 (PpmPerfCalculateQosClassPolicies.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1402512B4 (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x1402821CC (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140288FF0 (WheaGetErrPacketFromErrRecord.c)
 *     SepCheckCapabilities @ 0x140447668 (SepCheckCapabilities.c)
 *     sub_14044AEBC @ 0x14044AEBC (sub_14044AEBC.c)
 *     NtAlpcOpenSenderProcess @ 0x140467C20 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcOpenSenderThread @ 0x140468EC8 (NtAlpcOpenSenderThread.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14047AD50 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     ObpCompareEntryLevel2 @ 0x140486FC0 (ObpCompareEntryLevel2.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x14049F6E0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     PopArePowerSettingsEqual @ 0x1404DFE80 (PopArePowerSettingsEqual.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1404EFE84 (EtwpCalculateUpdateNotification.c)
 *     EtwpTrackDebugIdForSession @ 0x1404F10E8 (EtwpTrackDebugIdForSession.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14052D5B0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     RtlGetAppContainerSidType @ 0x140549210 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1405498A0 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140549BD8 (RtlIsPackageSid.c)
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     sub_1405731F0 @ 0x1405731F0 (sub_1405731F0.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     PnpBusTypeGuidGetIndex @ 0x14058E918 (PnpBusTypeGuidGetIndex.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     IoReportTargetDeviceChange @ 0x14059A790 (IoReportTargetDeviceChange.c)
 *     PnpCompareInterruptInformation @ 0x14059D538 (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14059F120 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x1405B9968 (PopInitSIdle.c)
 *     IopPnPDispatch @ 0x1405B9E90 (IopPnPDispatch.c)
 *     CmpFilterAcpiDockingState @ 0x1405C3AB8 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x1406942E8 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x1406BFB64 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1406BFE20 (PnpRequestHwProfileChangeNotification.c)
 *     ObpGetTraceIndex @ 0x1406F14F0 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14070664C (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x14071FD88 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140731F24 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x140741330 (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x1407515FC (EtwpTrackBinaryForSession.c)
 *     ExpCovIsModulePresent @ 0x14075F484 (ExpCovIsModulePresent.c)
 *     sub_140768280 @ 0x140768280 (sub_140768280.c)
 *     BiUpdateBcdObject @ 0x14077CE20 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1407A6DE8 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1407A8690 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1407AD69C (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1407AD7EC (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x14086D810 (VhdiInitializeBootDisk.c)
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
