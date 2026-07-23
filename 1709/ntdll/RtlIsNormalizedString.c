/*
 * XREFs of RtlIsNormalizedString @ 0x1800018C0
 * Callers:
 *     RtlIdnToUnicode @ 0x18004EF00 (RtlIdnToUnicode.c)
 * Callees:
 *     Normalization__IsNormalized @ 0x180001944 (Normalization__IsNormalized.c)
 *     RtlpGetNormalization @ 0x180080AA0 (RtlpGetNormalization.c)
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
  result = RtlpGetNormalization(NormForm, &v9);
  if ( result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( SourceString[v7] );
      v5 = v7 + 1;
    }
    return Normalization__IsNormalized(v9, SourceString, v5, Normalized);
  }
  return result;
}
