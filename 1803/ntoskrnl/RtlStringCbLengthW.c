/*
 * XREFs of RtlStringCbLengthW @ 0x140075A6C
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1402C2D88 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1402C2DF8 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x1405087D0 (_PnpRegQueryValueIndirect.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     _PnpValidatePropertyData @ 0x140523F3C (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x14057DE14 (RtlpValidRelativeAttribute.c)
 *     PiSwCompleteCreate @ 0x1405C59F0 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 *     RtlpPopulateLanguageConfigList @ 0x140635568 (RtlpPopulateLanguageConfigList.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PpmRegisterProfiles @ 0x140648FC4 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x140760AA4 (PopFxValidateReturnedUnicodeString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1407843D0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x14079AB78 (LocalGetStringForRelativeAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407DE994 (AslpFileVerStringBlockGetValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  NTSTATUS v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
