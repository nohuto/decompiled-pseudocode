/*
 * XREFs of sub_18007073C @ 0x18007073C
 * Callers:
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_18007073C(unsigned __int64 a1)
{
  __int64 v2; // rax
  _WORD *v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // r8

  if ( !a1 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v3 = (_WORD *)(a1 + 2 * v2);
  while ( (unsigned __int64)v3 > a1 )
  {
    v4 = *--v3 - 47;
    if ( v4 <= 0x2Du )
    {
      v5 = 0x200000000801LL;
      if ( _bittest64(&v5, v4) )
        return v3 + 1;
    }
  }
  return v3--;
}
