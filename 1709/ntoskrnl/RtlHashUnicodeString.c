/*
 * XREFs of RtlHashUnicodeString @ 0x14054F810
 * Callers:
 *     KsepCacheHwIdHash @ 0x1400FB350 (KsepCacheHwIdHash.c)
 *     PiUEventHashStringIntoBucket @ 0x1400FB37C (PiUEventHashStringIntoBucket.c)
 *     PipFindDeviceOverrideEntry @ 0x14044E8AC (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x14054F690 (PnpGenerateDeviceIdsHash.c)
 *     sub_14054F74C @ 0x14054F74C (sub_14054F74C.c)
 *     SepGetCachedHandlesEntry @ 0x140563D30 (SepGetCachedHandlesEntry.c)
 *     KsepCacheDeviceHash @ 0x14059E210 (KsepCacheDeviceHash.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1405A26D0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDmObjectCreate @ 0x1405CD66C (PiDmObjectCreate.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406F8324 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1406F99AC (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406F9AF8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140844E5C (PipInitDeviceOverrideCache.c)
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
  wchar_t *Buffer; // rbx
  int v6; // r11d
  unsigned __int16 v7; // r10
  int v8; // ecx
  int v10; // ecx

  v4 = 0;
  if ( !String || !HashValue )
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
