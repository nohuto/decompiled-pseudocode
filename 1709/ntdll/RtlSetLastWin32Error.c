/*
 * XREFs of RtlSetLastWin32Error @ 0x18001ACF0
 * Callers:
 *     TppSetTimer @ 0x18000FBB4 (TppSetTimer.c)
 *     EvtIntReportEventWorker @ 0x180016898 (EvtIntReportEventWorker.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18001ACD0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     ResCKeOpenRuntimeView @ 0x18001AFA0 (ResCKeOpenRuntimeView.c)
 *     _ResCMapCMFModule @ 0x18001B470 (_ResCMapCMFModule.c)
 *     EtwNotificationRegister @ 0x1800366A0 (EtwNotificationRegister.c)
 *     EtwUnregisterTraceGuids @ 0x180060B10 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 *     EtwRegisterTraceGuidsW @ 0x180065E10 (EtwRegisterTraceGuidsW.c)
 *     EtwEventActivityIdControl @ 0x18006E6E0 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180071050 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwpSetProviderTraits @ 0x1800755AC (EtwpSetProviderTraits.c)
 *     EtwEventRegister @ 0x180075710 (EtwEventRegister.c)
 *     EtwpTrackProviderBinary @ 0x180075754 (EtwpTrackProviderBinary.c)
 *     EtwGetTraceEnableLevel @ 0x180085E00 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180085E40 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180085E80 (EtwGetTraceLoggerHandle.c)
 *     EtwRegisterSecurityProvider @ 0x18008CE50 (EtwRegisterSecurityProvider.c)
 *     ResCDirectoryGetEntryIndexEx @ 0x18008D9B0 (ResCDirectoryGetEntryIndexEx.c)
 *     ??$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@I@Z @ 0x18008DA10 (--$GetEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@.c)
 *     ??$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCACHEID@@@Z @ 0x18008DA88 (--$GetFirstEntryIndex@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@$0A@@@YAHPEAU_RESCDIRECTORY@@U_RESCAC.c)
 *     ResCRuntimeGetResourceDataEx @ 0x18008DD70 (ResCRuntimeGetResourceDataEx.c)
 *     ResCHitsEntryHit @ 0x18008DFC8 (ResCHitsEntryHit.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x18008E028 (ResCRuntimeGetSegmentDataEx.c)
 *     ResCSegmentCreateAndPopulate @ 0x18008E23C (ResCSegmentCreateAndPopulate.c)
 *     ResCSegmentPopulate @ 0x18008E2BC (ResCSegmentPopulate.c)
 *     _ResCDupString @ 0x18008EA74 (_ResCDupString.c)
 *     ResCDirectoryCreateAndPopulate @ 0x18008EB14 (ResCDirectoryCreateAndPopulate.c)
 *     ResCDirectoryValidateHeader @ 0x18008EC38 (ResCDirectoryValidateHeader.c)
 *     ResCHitsCreateAndPopulate @ 0x18008ED3C (ResCHitsCreateAndPopulate.c)
 *     ResCHitsPopulate @ 0x18008EDBC (ResCHitsPopulate.c)
 *     EtwpUseDescriptorType @ 0x1801095E8 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x1801096E0 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 *     ResCKeCreateRuntimeView @ 0x18010BBAC (ResCKeCreateRuntimeView.c)
 *     ResCKeGetCacheIndices @ 0x18010BE24 (ResCKeGetCacheIndices.c)
 *     ResCRuntimeGetCultureID @ 0x18010C014 (ResCRuntimeGetCultureID.c)
 *     ResCRuntimeUnmapSegment @ 0x18010C0C4 (ResCRuntimeUnmapSegment.c)
 *     ResCRuntimeViewLoadCultureMap @ 0x18010C144 (ResCRuntimeViewLoadCultureMap.c)
 *     ResCDirectoryFree @ 0x18010C5EC (ResCDirectoryFree.c)
 *     ResCDirectoryGetSegmentName @ 0x18010C710 (ResCDirectoryGetSegmentName.c)
 *     ResCDirectoryValidate @ 0x18010C768 (ResCDirectoryValidate.c)
 *     ResCHitsFree @ 0x18010C818 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x18010C978 (ResCSegmentFree.c)
 *     ResCGetRegistryLatestIndex @ 0x18010EC60 (ResCGetRegistryLatestIndex.c)
 *     ResCReleaseInitMutex @ 0x18010ED1C (ResCReleaseInitMutex.c)
 *     ResCultureNameToLCID @ 0x18010EE14 (ResCultureNameToLCID.c)
 *     _ResCCreateMappingExclusive @ 0x18010EF60 (_ResCCreateMappingExclusive.c)
 *     _ResCFlushMappedView @ 0x18010F194 (_ResCFlushMappedView.c)
 *     _ResCLoadFixedSize @ 0x18010F1DC (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x18010F2F8 (_ResCOpenMapping.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 *     _ResCreateFileMapping @ 0x18010F62C (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x18010F750 (_ResCreateMutex.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 *     _ResFindClose @ 0x18010FAF0 (_ResFindClose.c)
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x18010FF84 (_ResFindNextFileW.c)
 *     _ResGetFileAttributesEx @ 0x1801101AC (_ResGetFileAttributesEx.c)
 *     _ResGetFileAttributesW @ 0x1801102D4 (_ResGetFileAttributesW.c)
 *     _ResGetFileSizeEx @ 0x18011039C (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x180110408 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x1801104C4 (_ResOpenFileMapping.c)
 *     _ResReadFile @ 0x18011056C (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 *     _ResWaitForSingleObject @ 0x18011068C (_ResWaitForSingleObject.c)
 *     ResCCreateCultureMap @ 0x1801112C4 (ResCCreateCultureMap.c)
 *     ResCCultureMapCreateAndPopulate @ 0x180111438 (ResCCultureMapCreateAndPopulate.c)
 *     ResCCultureMapPopulate @ 0x1801114D0 (ResCCultureMapPopulate.c)
 *     ResCGetCultureID @ 0x180111628 (ResCGetCultureID.c)
 *     ResCReloadCultureMap @ 0x180111780 (ResCReloadCultureMap.c)
 *     ResCDirectoryValidateEntries @ 0x180111868 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     EtwEventWrite @ 0x180019EF0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  bool v2; // zf
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF
  LONG v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = Win32Error;
  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v2 = g_isErrorOriginProviderEnabled == 0;
    v1->LastErrorValue = Win32Error;
    if ( !v2 )
    {
      if ( v4 )
      {
        UserData.Ptr = (unsigned __int64)&v4;
        *(_QWORD *)&UserData.Size = 4LL;
        EtwEventWrite(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 1u, &UserData);
      }
    }
  }
}
