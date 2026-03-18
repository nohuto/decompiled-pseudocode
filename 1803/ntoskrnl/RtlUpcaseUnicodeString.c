/*
 * XREFs of RtlUpcaseUnicodeString @ 0x140539150
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14009FD90 (RtlDeriveCapabilitySidsFromName.c)
 *     PfCalculateProcessHash @ 0x14050E700 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x140538EA8 (PfSnLogStreamCreate.c)
 *     PiCMOpenClassKey @ 0x14056AD20 (PiCMOpenClassKey.c)
 *     PfSnLogVolumeCreate @ 0x140576F74 (PfSnLogVolumeCreate.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1405FD650 (SdbMakeIndexKeyFromStringEx.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405FDA3C (AslStringUpcaseToMultiByteN.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14072FF90 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140824FFC (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x14082523C (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x1402EA010 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 Length; // ax
  unsigned int v6; // ebx
  __int64 i; // r10
  wchar_t v8; // ax
  wchar_t *StringRoutine; // rax

  Length = SourceString->Length;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    Length = SourceString->Length;
  }
  else if ( Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v6 = Length >> 1;
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = SourceString->Buffer[i];
    if ( v8 >= 0x61u )
    {
      if ( v8 > 0x7Au )
        v8 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v8 >> 8)]]];
      else
        v8 -= 32;
    }
    DestinationString->Buffer[i] = v8;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
