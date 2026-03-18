/*
 * XREFs of RtlStringCchPrintfExW @ 0x14006DED4
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14027D3CC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14027D514 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1405035A8 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpGetGenericStoreProperty @ 0x140503E94 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14050421C (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1405067B0 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x14050A9A4 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpStringFromGuid @ 0x14050B138 (_PnpStringFromGuid.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x14056A96C (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x14056AA94 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x14057694C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x140579490 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140586E4C (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1405D7EA4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpDeletePropertyWorker @ 0x1405E70CC (_PnpDeletePropertyWorker.c)
 *     PiRearrangeDeviceInstances @ 0x1405F6A14 (PiRearrangeDeviceInstances.c)
 *     PiProcessDriverInstance @ 0x1405F7090 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1405F79D4 (PiFindDevInstMatch.c)
 *     _CmGetDeviceControlKeyPath @ 0x140602DB0 (_CmGetDeviceControlKeyPath.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     DrvDbCreateDatabaseNode @ 0x140623BE8 (DrvDbCreateDatabaseNode.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     _CmBuildDevicePanelId @ 0x140653F64 (_CmBuildDevicePanelId.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1407229D0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140722AC4 (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x140739AEC (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x140782874 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1407ECE68 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1407ED6B0 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x14006DFD0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x140186FEC (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x14023BAB0 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // ebx
  wchar_t *v10; // r12
  size_t v11; // r14
  const wchar_t *v12; // r9
  NTSTATUS v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&pwsz;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v12, va);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      ppszDestEnda = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          RtlStringExHandleFillBehindNullW(&pszDest[v14], 2 * v11, dwFlags);
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_11;
  }
  return v9;
}
