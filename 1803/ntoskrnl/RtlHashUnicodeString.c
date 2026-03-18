/*
 * XREFs of RtlHashUnicodeString @ 0x140507780
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x140075370 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x140163110 (KsepCacheHwIdHash.c)
 *     PiDmInitializeComparisonObject @ 0x140507674 (PiDmInitializeComparisonObject.c)
 *     SepGetCachedHandlesEntry @ 0x14053F570 (SepGetCachedHandlesEntry.c)
 *     PiDmObjectCreate @ 0x1405D3AB4 (PiDmObjectCreate.c)
 *     sub_1405D4670 @ 0x1405D4670 (sub_1405D4670.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1405D66A4 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x1405DA3E0 (PiDevCfgResolveVariable.c)
 *     PipFindDeviceOverrideEntry @ 0x1405DE35C (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x1405E41CC (PnpGenerateDeviceIdsHash.c)
 *     KsepCacheDeviceHash @ 0x14064C500 (KsepCacheDeviceHash.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14075F7F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140760E6C (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x140760FB8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x1408B5318 (PipInitDeviceOverrideCache.c)
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
  int v6; // r11d
  unsigned __int16 v7; // bx
  int v8; // ecx
  int v10; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v6 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( CaseInSensitive )
  {
    for ( ; v6; v4 = v8 + 65599 * v4 )
    {
      v7 = *Buffer++;
      --v6;
      if ( v7 >= 0x61u )
      {
        if ( v7 > 0x7Au )
          v8 = (unsigned __int16)(v7
                                + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v7 & 0xF)
                                                                                          + 2
                                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v7 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v7 >> 8)]]]);
        else
          v8 = v7 - 32;
      }
      else
      {
        v8 = v7;
      }
    }
  }
  else
  {
    for ( ; v6; --v6 )
    {
      v10 = *Buffer++;
      v4 = v10 + 65599 * v4;
    }
  }
  *HashValue = v4;
  return 0;
}
