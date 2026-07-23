/*
 * XREFs of sub_180054338 @ 0x180054338
 * Callers:
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800DB520 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001F8B0 @ 0x18001F8B0 (sub_18001F8B0.c)
 */

__int64 __fastcall sub_180054338(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  _OWORD *v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  sub_18001F8B0();
  RtlEnterCriticalSection(&stru_18015B260);
  v5 = dword_18015B290;
  if ( dword_18015B290 )
  {
    v6 = qword_18015B288;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)&v6[3 * --v5] == a1 )
      {
        if ( *((_QWORD *)&v6[3 * v5] + 1) )
        {
          *a2 = v6[3 * v5];
          a2[1] = v6[3 * v5 + 1];
          a2[2] = v6[3 * v5 + 2];
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection(&stru_18015B260);
  return v4;
}
