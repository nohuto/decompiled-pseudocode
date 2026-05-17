/*
 * XREFs of sub_180036BD4 @ 0x180036BD4
 * Callers:
 *     sub_180030B84 @ 0x180030B84 (sub_180030B84.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180036BD4(int a1)
{
  int v1; // r9d
  int v3; // r8d
  __int64 v4; // r10
  __int64 result; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // eax

  v1 = 0;
  v3 = *(unsigned __int16 *)(qword_18015D2B8 + 12) - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(qword_18015D2B8 + 24);
  while ( 1 )
  {
    result = (unsigned int)((v3 + v1) / 2);
    v6 = a1 - *(_DWORD *)(v4 + 8LL * (int)result);
    if ( a1 == *(_DWORD *)(v4 + 8LL * (int)result) )
      break;
    v7 = result - 1;
    if ( v6 >= 0 )
      v7 = v3;
    v8 = result + 1;
    v3 = v7;
    if ( v6 >= 0 )
      v1 = v8;
    if ( v1 > v7 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
