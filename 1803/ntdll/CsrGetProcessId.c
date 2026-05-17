/*
 * XREFs of CsrGetProcessId @ 0x1800C82D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CsrGetProcessId()
{
  __int64 result; // rax

  result = qword_18015CAD0;
  if ( byte_18015C298 )
    return 0LL;
  return result;
}
