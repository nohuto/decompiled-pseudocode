/*
 * XREFs of CsrGetProcessId @ 0x1800D3C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CsrGetProcessId()
{
  __int64 result; // rax

  result = qword_18015BA70;
  if ( byte_18015B26C )
    return 0LL;
  return result;
}
