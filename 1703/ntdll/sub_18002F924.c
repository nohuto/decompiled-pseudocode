/*
 * XREFs of sub_18002F924 @ 0x18002F924
 * Callers:
 *     sub_18002FEC4 @ 0x18002FEC4 (sub_18002FEC4.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 */

__int64 __fastcall sub_18002F924(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  sub_18002FBD4(&unk_18015A270, &stru_18015A220);
  RtlEnterCriticalSection(&stru_18015A220);
  v3 = dword_18015A254;
  if ( dword_18015A254 )
  {
    while ( v3 > 0 )
    {
      if ( *((_QWORD *)qword_18015A248 + 6 * --v3) == a1 )
      {
        v2 = *((_QWORD *)qword_18015A248 + 6 * v3 + 2);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&stru_18015A220);
  return v2;
}
