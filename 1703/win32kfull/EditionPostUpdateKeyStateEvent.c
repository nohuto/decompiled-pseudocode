/*
 * XREFs of EditionPostUpdateKeyStateEvent @ 0x1C0107950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionPostUpdateKeyStateEvent(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = *(unsigned int *)(a1 + 340);
    if ( (result & 1) != 0 )
      return PostUpdateKeyStateEvent(a1);
  }
  return result;
}
