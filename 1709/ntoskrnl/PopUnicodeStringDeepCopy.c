/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x1404E6130
 * Callers:
 *     PopAvlFindOrMakeStatsForAudio @ 0x140451A8C (PopAvlFindOrMakeStatsForAudio.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1404E7B74 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlGetPowerRequestKey @ 0x1404E7C68 (PopAvlGetPowerRequestKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v2; // edi
  wchar_t *PoolWithTag; // rsi
  wchar_t *Buffer; // rcx
  NTSTATUS result; // eax

  v2 = SourceString->Length + 2;
  if ( v2 > 0xFFFF )
  {
    if ( DestinationString->Buffer )
      goto LABEL_7;
    v2 = 0xFFFF;
  }
  if ( !DestinationString->Buffer || DestinationString->MaximumLength < v2 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v2, 0x54515750u);
    if ( PoolWithTag )
    {
      Buffer = DestinationString->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      DestinationString->Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v2;
    }
  }
LABEL_7:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
