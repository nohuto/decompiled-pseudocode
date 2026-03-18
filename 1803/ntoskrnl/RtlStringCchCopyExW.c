/*
 * XREFs of RtlStringCchCopyExW @ 0x14006D844
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PiDmGetObjectListCallback @ 0x140503B60 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140504998 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     DrvDbGetDriverDatabaseList @ 0x14050C950 (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetDeviceParent @ 0x1405865D0 (_CmGetDeviceParent.c)
 *     _RegRtlCreateTreeTransacted @ 0x140587028 (_RegRtlCreateTreeTransacted.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1405BE3C8 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1405C2238 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1405D7CA0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1405D7EA4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceInterfaceName @ 0x1405DEBB0 (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1405E2A54 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140637390 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140637840 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140637FB0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140638420 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x140638750 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x140638820 (_PnpObjectListCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140638910 (_CmDevicePanelEnumSubkeyCallback.c)
 *     PnpGetDeviceDependencyList @ 0x140723F90 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072DDF0 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1407ED6B0 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x1407EE1B0 (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x1407F0EF8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407F1384 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407F25F0 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14006D990 (RtlStringCopyWorkerW.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x14023BAB0 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // rsi
  NTSTATUS v12; // eax
  size_t v13; // rcx
  const wchar_t *v15; // rax
  size_t *v16; // [rsp+20h] [rbp-48h]
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-30h] BYREF

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
    pcchNewDestLength = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v15 = (const wchar_t *)&pwsz;
      if ( pszSrc )
        v15 = pszSrc;
      pszSrc = v15;
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
      v12 = RtlStringCopyWorkerW(pszDest, cchDest, &pcchNewDestLength, pszSrc, (size_t)v16);
      v13 = pcchNewDestLength;
      v9 = v12;
      v11 = cchDest - pcchNewDestLength;
      pcchNewDestLength = cchDest - pcchNewDestLength;
      v10 = &pszDest[v13];
      ppszDestEnda = v10;
      if ( v12 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
        goto LABEL_10;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_10:
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
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)pszSrc, &ppszDestEnda, &pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_10;
  }
  return v9;
}
