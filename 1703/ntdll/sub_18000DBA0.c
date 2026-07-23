/*
 * XREFs of sub_18000DBA0 @ 0x18000DBA0
 * Callers:
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000DBA0(__int64 a1)
{
  unsigned __int16 v1; // r8
  __int64 result; // rax
  _QWORD *v3; // r9
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // r8

  v1 = word_18015BFA0;
  result = 208LL;
  v3 = Src;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    result = 36LL;
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
    word_18015BFA0 = v5;
    result = v3[v5];
    v3[v4] = result;
    v3[v5] = 0LL;
  }
  return result;
}
