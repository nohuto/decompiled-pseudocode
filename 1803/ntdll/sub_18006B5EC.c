/*
 * XREFs of sub_18006B5EC @ 0x18006B5EC
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_18006B5B8 @ 0x18006B5B8 (sub_18006B5B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006B5EC(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = a1;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 176);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 32) & 0x80000) == 0 && *(_QWORD *)(v2 + 56) != a1 )
      {
        result = *(_QWORD *)(v2 + 56);
        *(_QWORD *)(v2 + 56) = a1;
      }
    }
  }
  return result;
}
