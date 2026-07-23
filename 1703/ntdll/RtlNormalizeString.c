/*
 * XREFs of RtlNormalizeString @ 0x18006B080
 * Callers:
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 * Callees:
 *     sub_18006B0F8 @ 0x18006B0F8 (sub_18006B0F8.c)
 *     sub_18006BBAC @ 0x18006BBAC (sub_18006BBAC.c)
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
  result = sub_18006BBAC(NormForm, &v10);
  if ( result >= 0 )
    return sub_18006B0F8(v10, v7, SourceStringLength, v5, (__int64)v8);
  return result;
}
