/*
 * XREFs of RtlStringCchPrintfExW @ 0x14004C0E0
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140231E08 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140231F50 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x140484594 (_CmGetDeviceInstanceKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     _PnpGetGenericStoreProperty @ 0x140487660 (_PnpGetGenericStoreProperty.c)
 *     _PnpSetPropertyWorker @ 0x1404DB1E0 (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1404E00C8 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1404E0E78 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1404E0F28 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1404E102C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404E1AF0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404E290C (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404E2AA8 (_CmGetDeviceSoftwareKey.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1404E6A1C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpDeletePropertyWorker @ 0x1405757E8 (_PnpDeletePropertyWorker.c)
 *     PiProcessDriverInstance @ 0x14059C9D0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14059CC04 (PiFindDevInstMatch.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     _CmGetDeviceControlKeyPath @ 0x1405C9F28 (_CmGetDeviceControlKeyPath.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140691CA0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140691D90 (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     PiRearrangeDeviceInstances @ 0x1406A70F0 (PiRearrangeDeviceInstances.c)
 *     IopCreateLegacyDeviceIds @ 0x1406A7358 (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x1406E73C4 (RtlFormatMessageEx.c)
 *     SdbpGetStandardDatabasePath @ 0x14072DA0C (SdbpGetStandardDatabasePath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14073EA7C (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     _vsnwprintf @ 0x140169530 (_vsnwprintf.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1401F7844 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401F7870 (RtlStringExHandleOtherFlagsW.c)
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
  NTSTATUS v9; // r10d
  wchar_t *v10; // rbp
  size_t v11; // rdi
  NTSTRSAFE_PCWSTR v12; // r8
  NTSTATUS v13; // r14d
  size_t v14; // rbx
  int v15; // eax
  NTSTATUS result; // eax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-58h] BYREF
  size_t v18[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list Args; // [rsp+C0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_23;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_23:
    v9 = -1073741811;
LABEL_3:
  if ( v9 >= 0 )
  {
    v10 = pszDest;
    v11 = cchDest;
    ppszDestEnda = pszDest;
    v18[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (NTSTRSAFE_PCWSTR)&cchOriginalDestLength;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v13 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v13 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
      goto LABEL_29;
    }
    if ( !cchDest )
    {
      if ( !*v12 )
      {
LABEL_14:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        result = v13;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return result;
      }
      v13 = -2147483643;
      if ( !pszDest )
        v13 = -1073741811;
LABEL_29:
      if ( (dwFlags & 0x1C00) != 0 && cchDest )
      {
        RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, 0LL, &ppszDestEnda, v18, dwFlags);
        v10 = ppszDestEnda;
        v11 = v18[0];
      }
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483643 )
        return v13;
      goto LABEL_14;
    }
    v14 = cchDest - 1;
    v15 = vsnwprintf(pszDest, cchDest - 1, v12, Args);
    if ( v15 >= 0 )
    {
      if ( v15 == v14 )
      {
LABEL_19:
        pszDest[v14] = 0;
LABEL_12:
        v11 = cchDest - v14;
        v10 = &pszDest[v14];
        ppszDestEnda = v10;
        v18[0] = cchDest - v14;
        if ( v13 >= 0 )
        {
          if ( (dwFlags & 0x200) != 0 && v11 > 1 )
            RtlStringExHandleFillBehindNullW(v10, 2 * v11, dwFlags);
          goto LABEL_14;
        }
        goto LABEL_29;
      }
      if ( v15 <= v14 )
      {
        v14 = v15;
        goto LABEL_12;
      }
    }
    v13 = -2147483643;
    goto LABEL_19;
  }
  result = v9;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
