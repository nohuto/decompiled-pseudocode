/*
 * XREFs of PopAnsiStringToUnicodeString @ 0x14059B0A8
 * Callers:
 *     PopAvlGetPowerRequestKey @ 0x1404E7C68 (PopAvlGetPowerRequestKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405F2860 (RtlxAnsiStringToUnicodeSize.c)
 */

NTSTATUS __fastcall PopAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PCANSI_STRING AnsiString)
{
  ULONG v4; // edi
  wchar_t *PoolWithTag; // rbp
  wchar_t *Buffer; // rcx
  NTSTATUS result; // eax

  if ( (_BYTE)NlsMbCodePageTag )
    v4 = RtlxAnsiStringToUnicodeSize(AnsiString);
  else
    v4 = 2 * AnsiString->Length + 2;
  if ( v4 > 0xFFFF )
  {
    if ( DestinationString->Buffer )
      goto LABEL_9;
    v4 = 0xFFFF;
  }
  if ( !DestinationString->Buffer || DestinationString->MaximumLength < v4 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x54515750u);
    if ( PoolWithTag )
    {
      Buffer = DestinationString->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      DestinationString->Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v4;
    }
  }
LABEL_9:
  result = RtlAnsiStringToUnicodeString(DestinationString, AnsiString, 0);
  if ( result >= 0 )
    DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
