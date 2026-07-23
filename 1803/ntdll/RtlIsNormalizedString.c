/*
 * XREFs of RtlIsNormalizedString @ 0x180001EB0
 * Callers:
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 * Callees:
 *     sub_180001F34 @ 0x180001F34 (sub_180001F34.c)
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
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
  result = sub_180069810(NormForm, &v9);
  if ( result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( SourceString[v7] );
      v5 = v7 + 1;
    }
    return sub_180001F34(v9, SourceString, v5, Normalized);
  }
  return result;
}
