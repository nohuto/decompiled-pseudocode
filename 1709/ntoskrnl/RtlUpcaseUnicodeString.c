/*
 * XREFs of RtlUpcaseUnicodeString @ 0x14054A990
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400FA7B0 (RtlDeriveCapabilitySidsFromName.c)
 *     PfCalculateProcessHash @ 0x140447470 (PfCalculateProcessHash.c)
 *     PfSnLogVolumeCreate @ 0x1404547D4 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x140456004 (PfSnLogStreamCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x140548148 (AslStringUpcaseToMultiByteN.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14054A85C (SdbMakeIndexKeyFromStringEx.c)
 *     PiCMOpenClassKey @ 0x140573DB4 (PiCMOpenClassKey.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1406C8F70 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x1407B7DA4 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1407B7FE4 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  __int64 i; // r10
  wchar_t v7; // ax
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
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    v7 = SourceString->Buffer[i];
    if ( v7 >= 0x61u )
    {
      if ( v7 > 0x7Au )
        v7 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v7 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v7 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v7 >> 8)]]];
      else
        v7 -= 32;
    }
    DestinationString->Buffer[i] = v7;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
