/*
 * XREFs of RtlHashUnicodeString @ 0x1404E5D70
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x14003DC1C (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x140081950 (KsepCacheHwIdHash.c)
 *     PipFindDeviceOverrideEntry @ 0x14044655C (PipFindDeviceOverrideEntry.c)
 *     SepGetCachedHandlesEntry @ 0x140461E70 (SepGetCachedHandlesEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404E5BF0 (PnpGenerateDeviceIdsHash.c)
 *     sub_1404E5CAC @ 0x1404E5CAC (sub_1404E5CAC.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140593720 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDmObjectCreate @ 0x1405BDA78 (PiDmObjectCreate.c)
 *     KsepCacheDeviceHash @ 0x1405CF740 (KsepCacheDeviceHash.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406C7904 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1406C8F24 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406C9070 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // eax
  wchar_t *Buffer; // r10
  int v7; // r9d
  unsigned __int16 v8; // r11
  int v9; // ecx
  int v11; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v7 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( CaseInSensitive )
  {
    for ( ; v7; v4 = v9 + 65599 * v4 )
    {
      v8 = *Buffer++;
      --v7;
      if ( v8 < 0x61u )
      {
        v9 = v8;
      }
      else if ( v8 > 0x7Au )
      {
        v9 = (unsigned __int16)(v8
                              + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                                        + 2
                                                                                        * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v8 >> 8)]]]);
      }
      else
      {
        v9 = v8 - 32;
      }
    }
  }
  else
  {
    for ( ; v7; --v7 )
    {
      v11 = *Buffer++;
      v4 = v11 + 65599 * v4;
    }
  }
  *HashValue = v4;
  return 0;
}
