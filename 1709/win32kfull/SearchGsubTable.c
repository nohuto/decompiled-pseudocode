/*
 * XREFs of SearchGsubTable @ 0x1C02332E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchGsubTable(__int64 a1, unsigned int a2)
{
  _WORD *v3; // r8
  _WORD *v4; // r9
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx

  v3 = (_WORD *)(*(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 276));
  if ( __ROR2__(*v3, 8) == 2 )
  {
    v4 = (_WORD *)((char *)v3 + (unsigned __int16)__ROR2__(v3[1], 8));
    if ( __ROR2__(*v4, 8) == 1 )
    {
      v5 = 0;
      v6 = __ROR2__(v4[1], 8);
      while ( v5 < v6 )
      {
        if ( a2 == (unsigned __int16)__ROR2__(v4[v5 + 2], 8) )
          return (unsigned __int16)__ROR2__(v3[v5 + 3], 8);
        ++v5;
      }
    }
  }
  return a2;
}
