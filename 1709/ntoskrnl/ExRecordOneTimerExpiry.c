/*
 * XREFs of ExRecordOneTimerExpiry @ 0x1402867C4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

char __fastcall ExRecordOneTimerExpiry(unsigned __int8 a1, char a2)
{
  __int64 v2; // r9
  unsigned __int8 v3; // r8
  unsigned __int8 *v4; // rdx
  __int64 v5; // r11
  int v6; // eax
  __int64 v7; // rcx

  if ( ExpIRTimerExpiryCounts )
  {
    v2 = a1 < 0xEu ? a1 : 0;
    v3 = a1 < 0xEu ? a2 : 0;
    v4 = (unsigned __int8 *)&unk_1402B67D0;
    v5 = v3 < *((_BYTE *)&unk_1402B67D0 + 24 * v2) ? v3 : 0;
    LOBYTE(v6) = v3 < *((_BYTE *)&unk_1402B67D0 + 24 * v2) ? v2 : 0;
    v7 = (unsigned __int8)v6;
    if ( (_BYTE)v6 )
    {
      do
      {
        v6 = *v4;
        v4 += 24;
        v5 = (unsigned int)(v6 + v5);
        --v7;
      }
      while ( v7 );
    }
    ++*(_DWORD *)(ExpIRTimerExpiryCounts + 4 * v5);
  }
  return v6;
}
