/*
 * XREFs of RtlStringCchCopyExW @ 0x140081B60
 * Callers:
 *     PiPnpRtlGetFilteredDeviceList @ 0x14044EE88 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetObjectListCallback @ 0x140488CB0 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140489128 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _RegRtlCreateTreeTransacted @ 0x14048976C (_RegRtlCreateTreeTransacted.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404E5E60 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E60A4 (_CmGetDeviceInterfaceName.c)
 *     _CmGetDeviceParent @ 0x1404E62FC (_CmGetDeviceParent.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404E682C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1404E6A1C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseList @ 0x1404E906C (DrvDbGetDriverDatabaseList.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14056C174 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A9B98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A9E78 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405AAA10 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405AAE70 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x1405AB1A0 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x1405AB260 (_PnpObjectListCallback.c)
 *     PipHardwareConfigOpenKey @ 0x1405B67DC (PipHardwareConfigOpenKey.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14069B6D4 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14073EA7C (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x14073F574 (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407439F0 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x140081C70 (RtlStringCopyWorkerW_3.c)
 *     RtlStringExValidateDestW @ 0x140081CE4 (RtlStringExValidateDestW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1401F7844 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401F7870 (RtlStringExHandleOtherFlagsW.c)
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
      v13 = &cchOriginalDestLength;
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
      v9 = RtlStringCopyWorkerW_3(pszDest, cchDest, &pcchNewDestLength, v10, (size_t)v16);
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
