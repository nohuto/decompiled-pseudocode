/*
 * XREFs of sub_18002DEA4 @ 0x18002DEA4
 * Callers:
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002DEA4(__int64 a1)
{
  unsigned __int16 v1; // r8
  __int64 result; // rax
  _QWORD *v3; // r9
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // r8

  v1 = word_18015D010;
  result = 60LL;
  v3 = off_180156A38;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    result = 208LL;
  v4 = 0;
  for ( *(_WORD *)(result + a1) = 0; v4 < v1; ++v4 )
  {
    result = v4;
    if ( v3[v4] == a1 )
      break;
  }
  if ( v3[v4] == a1 )
  {
    v5 = v1 - 1;
    word_18015D010 = v5;
    result = v3[v5];
    v3[v4] = result;
    v3[v5] = 0LL;
  }
  return result;
}
