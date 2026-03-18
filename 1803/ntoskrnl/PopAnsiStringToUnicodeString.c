/*
 * XREFs of PopAnsiStringToUnicodeString @ 0x140524D84
 * Callers:
 *     PopAvlGetPowerRequestKey @ 0x140524CD0 (PopAvlGetPowerRequestKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405C2EE0 (RtlxAnsiStringToUnicodeSize.c)
 */

NTSTATUS __fastcall PopAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PCANSI_STRING AnsiString)
{
  ULONG v4; // esi
  PVOID *p_Buffer; // rbx
  PVOID PoolWithTag; // r15
  NTSTATUS result; // eax

  if ( (_BYTE)NlsMbCodePageTag )
    v4 = RtlxAnsiStringToUnicodeSize(AnsiString);
  else
    v4 = 2 * AnsiString->Length + 2;
  p_Buffer = (PVOID *)&DestinationString->Buffer;
  if ( v4 > 0xFFFF )
  {
    if ( *p_Buffer )
      goto LABEL_9;
    v4 = 0xFFFF;
  }
  if ( !*p_Buffer || DestinationString->MaximumLength < v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x54515750u);
    if ( PoolWithTag )
    {
      if ( *p_Buffer )
        ExFreePoolWithTag(*p_Buffer, 0);
      *p_Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v4;
    }
  }
LABEL_9:
  result = RtlAnsiStringToUnicodeString(DestinationString, AnsiString, 0);
  if ( result >= 0 )
    *((_WORD *)*p_Buffer + ((unsigned __int64)DestinationString->Length >> 1)) = 0;
  return result;
}
