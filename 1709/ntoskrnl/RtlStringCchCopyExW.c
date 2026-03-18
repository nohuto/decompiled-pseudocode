/*
 * XREFs of RtlStringCchCopyExW @ 0x1400DF820
 * Callers:
 *     DrvDbGetObjectSubKeyCallback @ 0x1404483F0 (DrvDbGetObjectSubKeyCallback.c)
 *     _CmGetDeviceChildren @ 0x140449874 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14044B688 (_CmGetDeviceInterfaceReferenceString.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14051D41C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiDmGetObjectListCallback @ 0x140527240 (PiDmGetObjectListCallback.c)
 *     DrvDbGetDriverDatabaseList @ 0x14053122C (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x140533308 (_RegRtlCreateTreeTransacted.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140551654 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x140551A88 (_CmGetDeviceParent.c)
 *     _CmGetDeviceInterfaceName @ 0x14057FAF4 (_CmGetDeviceInterfaceName.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14058445C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1405846EC (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14058FF54 (PiPnpRtlGetFilteredDeviceList.c)
 *     PipHardwareConfigOpenKey @ 0x1405C8980 (PipHardwareConfigOpenKey.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405D3230 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x1405D9A70 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x1405E27A0 (_PnpObjectListCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405EA4A0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405EC82C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1406C72F4 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140782FD0 (_PnpGetGenericStorePropertyLocales.c)
 *     _RegRtlDeletePathInternal @ 0x140786114 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1400DF930 (RtlStringCopyWorkerW_0.c)
 *     RtlStringExValidateDestW @ 0x1400DF9A4 (RtlStringExValidateDestW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1401FD728 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401FD754 (RtlStringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  int v9; // ebx
  const wchar_t *v10; // r8
  wchar_t *v11; // r15
  size_t v12; // rsi
  const size_t *v13; // rax
  size_t v14; // rax
  size_t *v16; // [rsp+20h] [rbp-48h]
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-30h] BYREF

  v9 = RtlStringExValidateDestW(pszDest, cchDest, (const size_t)pszSrc, dwFlags);
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v11 = pszDest;
    pcchNewDestLength = cchDest;
    v12 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v13 = &pwsz;
      if ( v10 )
        v13 = (const size_t *)v10;
      v10 = (const wchar_t *)v13;
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
      pcchNewDestLength = 0LL;
      v9 = RtlStringCopyWorkerW_0(pszDest, cchDest, &pcchNewDestLength, v10, (size_t)v16);
      v14 = pcchNewDestLength;
      v12 = cchDest - pcchNewDestLength;
      pcchNewDestLength = cchDest - pcchNewDestLength;
      v11 = &pszDest[v14];
      ppszDestEnda = v11;
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          RtlStringExHandleFillBehindNullW(&pszDest[v14], 2 * v12, dwFlags);
        goto LABEL_10;
      }
    }
    else
    {
      if ( !*v10 )
      {
LABEL_10:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcchRemaining )
          *pcchRemaining = v12;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, 0LL, &ppszDestEnda, &pcchNewDestLength, dwFlags);
      v11 = ppszDestEnda;
      v12 = pcchNewDestLength;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_10;
  }
  return v9;
}
