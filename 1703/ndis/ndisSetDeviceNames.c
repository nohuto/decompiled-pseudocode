/*
 * XREFs of ndisSetDeviceNames @ 0x1C00A9CD4
 * Callers:
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall ndisSetDeviceNames(
        PCUNICODE_STRING SourceString,
        PUNICODE_STRING DestinationString,
        __int64 a3,
        wchar_t *a4)
{
  unsigned __int16 Length; // ax
  __int16 v7; // ax
  __int16 result; // ax

  DestinationString->Buffer = a4;
  Length = SourceString->Length;
  DestinationString->Length = SourceString->Length;
  DestinationString->MaximumLength = Length + 2;
  RtlUpcaseUnicodeString(DestinationString, SourceString, 0);
  *(_QWORD *)(a3 + 8) = &DestinationString->Buffer[(unsigned __int64)ndisDeviceStr.Length >> 1];
  v7 = DestinationString->Length - ndisDeviceStr.Length;
  *(_WORD *)a3 = v7;
  result = v7 + 2;
  *(_WORD *)(a3 + 2) = result;
  return result;
}
