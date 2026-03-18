/*
 * XREFs of RtlStringCchPrintfExW @ 0x1400DEF40
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140246734 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14024687C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     _PnpStringFromGuid @ 0x140519B48 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14051CD1C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x14051D9E4 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpGetGenericStoreProperty @ 0x14051F7DC (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1405224E4 (_CmGetDeviceInstanceKeyPath.c)
 *     _PnpSetPropertyWorker @ 0x14053034C (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140550F88 (_CmGetDeviceContainerRegKeyPath.c)
 *     PiProcessDriverInstance @ 0x140555A00 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x140555C60 (PiFindDevInstMatch.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140581770 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x14058188C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1405837F8 (_CmGetDeviceHardwareKeyPath.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1405846EC (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x140587960 (_CmGetDeviceLogConfKeyPath.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     _CmGetDeviceControlKeyPath @ 0x1405984C0 (_CmGetDeviceControlKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x14059B510 (_PnpDeletePropertyWorker.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     PiRearrangeDeviceInstances @ 0x1405EC0A4 (PiRearrangeDeviceInstances.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1406BD9F0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1406BDAE0 (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1406D1FE0 (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x14071F1A4 (RtlFormatMessageEx.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140782FD0 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     _vsnwprintf @ 0x14015DE70 (_vsnwprintf.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1401FD728 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401FD754 (RtlStringExHandleOtherFlagsW.c)
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
      v12 = (NTSTRSAFE_PCWSTR)&pwsz;
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
