/*
 * XREFs of EtwpGetTraceGuidList @ 0x14074489C
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1404EF174 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidList(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 *v6; // rdx
  __int64 i; // rbp
  signed __int64 *NextGuidEntry; // rax

  v3 = 0;
  v4 = *a3 >> 4;
  v6 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v6, 0);
    if ( !NextGuidEntry )
      break;
    if ( ++v3 <= v4 )
      *a2++ = *(_OWORD *)(NextGuidEntry + 3);
    v6 = NextGuidEntry;
  }
  *a3 = 16 * v3;
  return v4 < v3 ? 0xC0000023 : 0;
}
