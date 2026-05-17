/*
 * XREFs of sub_18002D628 @ 0x18002D628
 * Callers:
 *     sub_18002CFE4 @ 0x18002CFE4 (sub_18002CFE4.c)
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002D628(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rcx

  result = 0LL;
  if ( a2 && a1 )
  {
    *a2 = 0LL;
    v4 = 0;
    while ( 1 )
    {
      v5 = 32LL * v4;
      v6 = *a1 - *(_QWORD *)((char *)&unk_1801101C0 + v5 + 4);
      if ( *a1 == *(_QWORD *)((char *)&unk_1801101C0 + v5 + 4) )
        v6 = a1[1] - *(_QWORD *)((char *)&unk_1801101C0 + v5 + 12);
      if ( !v6 )
        break;
      if ( ++v4 >= 5 )
        return result;
    }
    result = 1LL;
    *a2 = (char *)&unk_1801101C0 + v5;
  }
  return result;
}
