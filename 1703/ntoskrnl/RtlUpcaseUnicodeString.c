/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1404971A0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140067040 (RtlDeriveCapabilitySidsFromName.c)
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     PfSnLogVolumeCreate @ 0x14044DC00 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x140496FC4 (PfSnLogStreamCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1404B5854 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x1404B5C40 (AslStringUpcaseToMultiByteN.c)
 *     PfCalculateProcessHash @ 0x140564110 (PfCalculateProcessHash.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14069DA70 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140775FA8 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1407761E8 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // rsi
  wchar_t v8; // r10
  wchar_t v9; // dx
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( SourceString->Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v5 = SourceString->Length >> 1;
  v6 = 0LL;
  v7 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
  while ( (unsigned int)v6 < v5 )
  {
    v8 = SourceString->Buffer[v6];
    if ( v8 >= 0x61u )
    {
      if ( v8 > 0x7Au )
        v9 = v8
           + *(_WORD *)(v7
                      + 2
                      * ((v8 & 0xF)
                       + (unsigned __int64)*(unsigned __int16 *)(v7
                                                               + 2LL
                                                               * (((unsigned __int8)v8 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(v7 + 2 * ((unsigned __int64)v8 >> 8))))));
      else
        v9 = v8 - 32;
    }
    else
    {
      v9 = SourceString->Buffer[v6];
    }
    DestinationString->Buffer[v6] = v9;
    v6 = (unsigned int)(v6 + 1);
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
