/*
 * XREFs of sub_18001F834 @ 0x18001F834
 * Callers:
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 *     LdrpResGetMappingSize @ 0x180053280 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001F8B0 @ 0x18001F8B0 (sub_18001F8B0.c)
 */

__int64 __fastcall sub_18001F834(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  sub_18001F8B0();
  RtlEnterCriticalSection(&stru_18015B260);
  v3 = dword_18015B290;
  if ( dword_18015B290 )
  {
    while ( v3 > 0 )
    {
      if ( *((_QWORD *)qword_18015B288 + 6 * --v3) == a1 )
      {
        v2 = *((_QWORD *)qword_18015B288 + 6 * v3 + 2);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&stru_18015B260);
  return v2;
}
