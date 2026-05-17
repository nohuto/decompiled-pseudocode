/*
 * XREFs of RtlSetProcessPlaceholderCompatibilityMode @ 0x1800F4830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetProcessPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  struct _PEB *v1; // rdx
  char result; // al

  if ( a1 > 3u )
    return -1;
  v1 = NtCurrentPeb();
  if ( !v1 )
    return -3;
  result = (char)v1[2].UnicodeCaseTableData;
  LOBYTE(v1[2].UnicodeCaseTableData) = a1;
  return result;
}
