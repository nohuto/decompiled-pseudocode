/*
 * XREFs of RtlStringCbLengthW @ 0x1400E0214
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x14028D110 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14028D180 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     _PnpRegQueryValueIndirect @ 0x140522A20 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x14052FC20 (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x140595554 (RtlpValidRelativeAttribute.c)
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     RtlpPopulateLanguageConfigList @ 0x1405BD0E0 (RtlpPopulateLanguageConfigList.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PpmRegisterProfiles @ 0x1405E0DB4 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1406F95E4 (PopFxValidateReturnedUnicodeString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140720CA0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1407372E0 (LocalGetStringForRelativeAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x140775C38 (AslpFileVerStringBlockGetValue.c)
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
