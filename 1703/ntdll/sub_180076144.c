/*
 * XREFs of sub_180076144 @ 0x180076144
 * Callers:
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_180075FD4 @ 0x180075FD4 (sub_180075FD4.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800E1860 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 */

__int64 __fastcall sub_180076144(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  _OWORD *v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  sub_18002FBD4(dword_18015A270, &stru_18015A220);
  RtlEnterCriticalSection(&stru_18015A220);
  v5 = dword_18015A254;
  if ( dword_18015A254 )
  {
    v6 = qword_18015A248;
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
  RtlLeaveCriticalSection(&stru_18015A220);
  return v4;
}
