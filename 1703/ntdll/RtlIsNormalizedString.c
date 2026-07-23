/*
 * XREFs of RtlIsNormalizedString @ 0x180002AB0
 * Callers:
 *     RtlIdnToUnicode @ 0x18006A930 (RtlIdnToUnicode.c)
 * Callees:
 *     sub_180002B34 @ 0x180002B34 (sub_180002B34.c)
 *     sub_18006BBAC @ 0x18006BBAC (sub_18006BBAC.c)
 */

NTSTATUS __cdecl RtlIsNormalizedString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PBOOLEAN Normalized)
{
  unsigned __int32 v5; // edi
  __int64 v7; // rbx
  NTSTATUS result; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = SourceStringLength;
  if ( !SourceString )
    return -1073741811;
  if ( !Normalized )
    return -1073741811;
  v7 = -1LL;
  if ( SourceStringLength < -1 || !NormForm )
    return -1073741811;
  result = sub_18006BBAC(NormForm, &v9);
  if ( result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( SourceString[v7] );
      v5 = v7 + 1;
    }
    return sub_180002B34(v9, SourceString, v5, Normalized);
  }
  return result;
}
