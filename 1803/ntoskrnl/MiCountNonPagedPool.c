/*
 * XREFs of MiCountNonPagedPool @ 0x1400D8358
 * Callers:
 *     MiIncreaseNonPagedPoolUsage @ 0x1400D82F0 (MiIncreaseNonPagedPoolUsage.c)
 * Callees:
 *     MiSignalNonPagedPoolWatchers @ 0x140170180 (MiSignalNonPagedPoolWatchers.c)
 */

unsigned __int64 __fastcall MiCountNonPagedPool(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rax

  if ( a2 == 1 )
    v3 = a1 + _InterlockedExchangeAdd64(&qword_1403CB118, a1);
  else
    v3 = _InterlockedExchangeAdd64(&qword_1403CB118, -(__int64)a1);
  v4 = MiState[0];
  v5 = 0LL;
  if ( MiState[0] )
  {
    if ( (v6 = v3 - a1, v3 >= MiState[0] - 5120) && v6 < MiState[0] - 5120
      || v3 >= MiState[0] - 2048 && v6 < MiState[0] - 2048 )
    {
      MiSignalNonPagedPoolWatchers();
    }
  }
  if ( a2 == 1 && v3 < v4 )
    return v4 - v3;
  return v5;
}
