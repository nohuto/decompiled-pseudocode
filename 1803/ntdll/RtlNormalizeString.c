/*
 * XREFs of RtlNormalizeString @ 0x180069450
 * Callers:
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 * Callees:
 *     sub_1800694C8 @ 0x1800694C8 (sub_1800694C8.c)
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
 */

NTSTATUS __cdecl RtlNormalizeString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  int v5; // ebp
  int v7; // esi
  PLONG v8; // rbx
  NTSTATUS result; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = (int)DestinationString;
  v7 = (int)SourceString;
  if ( !SourceString )
    return -1073741811;
  if ( SourceStringLength < -1 )
    return -1073741811;
  if ( !NormForm )
    return -1073741811;
  v8 = DestinationStringLength;
  if ( *DestinationStringLength < 0 )
    return -1073741811;
  result = sub_180069810(NormForm, &v10);
  if ( result >= 0 )
    return sub_1800694C8(v10, v7, SourceStringLength, v5, (__int64)v8);
  return result;
}
