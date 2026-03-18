/*
 * XREFs of RtlStringCbCopyW @ 0x1400DF4A4
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012B1B8 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x140141830 (RtlpGetNameFromLangInfoNode.c)
 *     WmipInsertStaticNames @ 0x14051B2F4 (WmipInsertStaticNames.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14054D954 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x14055E74C (PiSwFindSwDevice.c)
 *     WmipEnumerateMofResources @ 0x14057A510 (WmipEnumerateMofResources.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x1405DC620 (PfSnParametersRead.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     DbgkSendSystemDllMessages @ 0x1406A9A4C (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406C33F0 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x140741BCC (WmipIncludeStaticNames.c)
 *     WmipGenerateBinaryMofNotification @ 0x140742F28 (WmipGenerateBinaryMofNotification.c)
 *     ExpressionConvertToString @ 0x1407887A8 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140857D7C (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x14086CAD8 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  size_t v5; // r10
  signed __int64 v6; // r8
  wchar_t v7; // ax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !v3 )
      return v4;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_12;
    v5 = 2147483646 - v3;
    v6 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
      if ( !v7 )
        break;
      *pszDest++ = v7;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
LABEL_12:
      --pszDest;
      v4 = -2147483643;
    }
  }
  *pszDest = 0;
  return v4;
}
