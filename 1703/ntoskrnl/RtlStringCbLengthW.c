/*
 * XREFs of RtlStringCbLengthW @ 0x14003D760
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x140262E50 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140262EC0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     RtlpValidRelativeAttribute @ 0x140460C7C (RtlpValidRelativeAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x140484BF0 (_PnpRegQueryValueIndirect.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     _PnpValidatePropertyData @ 0x1404DBC98 (_PnpValidatePropertyData.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1406C8B5C (PopFxValidateReturnedUnicodeString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1406E8E7C (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406FF890 (LocalGetStringForRelativeAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x140731AC4 (AslpFileVerStringBlockGetValue.c)
 *     RtlpMuiRegConfigNodePopulate @ 0x140748380 (RtlpMuiRegConfigNodePopulate.c)
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
