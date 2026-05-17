/*
 * XREFs of sub_18001A984 @ 0x18001A984
 * Callers:
 *     sub_18001A950 @ 0x18001A950 (sub_18001A950.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A984(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = a1;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 176);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 24) & 0x80000) == 0 && *(_QWORD *)(v2 + 48) != a1 )
      {
        result = *(_QWORD *)(v2 + 48);
        *(_QWORD *)(v2 + 48) = a1;
      }
    }
  }
  return result;
}
