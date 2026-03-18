/*
 * XREFs of ApiSetpConstructPathToExtension @ 0x140764A54
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x140764B88 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ApiSetpConstructPathToExtension(PCWSTR Source, __int16 a2, UNICODE_STRING *a3)
{
  NTSTATUS appended; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  Destination.MaximumLength = a2 + 44;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(a2 + 44), 0x68635341u);
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\");
    if ( appended < 0 || (appended = RtlAppendUnicodeToString(&Destination, Source), appended < 0) )
    {
      Buffer = Destination.Buffer;
    }
    else
    {
      Buffer = 0LL;
      *a3 = Destination;
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)appended;
}
