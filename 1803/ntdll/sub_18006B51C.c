/*
 * XREFs of sub_18006B51C @ 0x18006B51C
 * Callers:
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_18006B490 @ 0x18006B490 (sub_18006B490.c)
 *     sub_1800C9AFC @ 0x1800C9AFC (sub_1800C9AFC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_18006B5B8 @ 0x18006B5B8 (sub_18006B5B8.c)
 */

__int64 __fastcall sub_18006B51C(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 176LL) = 0LL;
  result = sub_18006B5B8(a1);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *(_DWORD *)(a1 + 96) )
    {
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 176);
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              sub_18006B460(v5);
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(a1 + 96) );
      v3 = *(_QWORD *)(a1 + 88);
    }
    result = RtlFreeHeap(qword_18015C288, 0, v3);
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    return RtlFreeHeap(qword_18015C288, 0, a1);
  return result;
}
