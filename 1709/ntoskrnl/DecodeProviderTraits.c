/*
 * XREFs of DecodeProviderTraits @ 0x140092B58
 * Callers:
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall DecodeProviderTraits(unsigned __int16 *a1, char a2, _WORD *a3, _QWORD *a4)
{
  unsigned __int16 *result; // rax

  if ( !a1 )
  {
    *a3 = 0;
    goto LABEL_4;
  }
  if ( !a2 )
  {
    result = (unsigned __int16 *)*a1;
    *a3 = (_WORD)result;
LABEL_4:
    *a4 = 0LL;
    return result;
  }
  result = a1 + 3;
  *a3 = 0;
  *a4 = a1 + 3;
  return result;
}
