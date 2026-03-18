/*
 * XREFs of RtlStringCbCopyW @ 0x14004C84C
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1400364A0 (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     RtlpGetNameFromLangInfoNode @ 0x140157210 (RtlpGetNameFromLangInfoNode.c)
 *     WmipEnumerateMofResources @ 0x140457450 (WmipEnumerateMofResources.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x1404BE684 (WmipInsertStaticNames.c)
 *     PiSwFindSwDevice @ 0x140570D30 (PiSwFindSwDevice.c)
 *     WmipAddMofResource @ 0x1405A12B0 (WmipAddMofResource.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     PfSnParametersRead @ 0x1405C8650 (PfSnParametersRead.c)
 *     DbgkSendSystemDllMessages @ 0x14067E910 (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140697970 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 *     WmipGenerateBinaryMofNotification @ 0x140708F04 (WmipGenerateBinaryMofNotification.c)
 *     ExpressionConvertToString @ 0x1407462D4 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140826610 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x1408358A0 (ViMakeVerifierSettings.c)
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
