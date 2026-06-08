/*
 * XREFs of GetDevExtByAcpiId @ 0x1C0003890
 * Callers:
 *     AcpiParseProcessorContainer @ 0x1C0025BB4 (AcpiParseProcessorContainer.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall GetDevExtByAcpiId(int a1)
{
  __int64 *i; // rdx
  __int64 *result; // rax

  for ( i = (__int64 *)qword_1C0011428; ; i = (__int64 *)*i )
  {
    result = 0LL;
    if ( i == &qword_1C0011428 )
      break;
    result = i - 4;
    if ( *((_DWORD *)i + 5) == a1 )
      break;
  }
  return result;
}
