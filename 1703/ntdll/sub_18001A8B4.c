/*
 * XREFs of sub_18001A8B4 @ 0x18001A8B4
 * Callers:
 *     sub_18001A828 @ 0x18001A828 (sub_18001A828.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 * Callees:
 *     sub_18001A950 @ 0x18001A950 (sub_18001A950.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 */

__int64 __fastcall sub_18001A8B4(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 176LL) = 0LL;
  result = sub_18001A950();
  if ( *(_QWORD *)(a1 + 80) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * i);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 176);
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 24) & 0x80000) == 0 && *(_QWORD *)(v5 + 48) != v4 )
          {
            *(_QWORD *)(v5 + 48) = v4;
            sub_180086EA8();
          }
        }
      }
    }
    result = RtlFreeHeap(qword_18015B328, 0LL);
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x8000) != 0 )
    return RtlFreeHeap(qword_18015B328, 0LL);
  return result;
}
