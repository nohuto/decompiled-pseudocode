/*
 * XREFs of MiCountNonPagedPool @ 0x1400C2560
 * Callers:
 *     MiIncreaseNonPagedPoolUsage @ 0x1400C24F0 (MiIncreaseNonPagedPoolUsage.c)
 * Callees:
 *     MiSignalNonPagedPoolWatchers @ 0x1401398B4 (MiSignalNonPagedPoolWatchers.c)
 */

unsigned __int64 __fastcall MiCountNonPagedPool(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi

  if ( a2 == 1 )
    v3 = a1 + _InterlockedExchangeAdd64(&qword_140388018, a1);
  else
    v3 = _InterlockedExchangeAdd64(&qword_140388018, -(__int64)a1);
  v4 = MiState[0];
  v5 = 0LL;
  if ( MiState[0]
    && (v3 >= MiState[0] - 5120 && v3 - a1 < MiState[0] - 5120 || v3 >= MiState[0] - 2048 && v3 - a1 < MiState[0] - 2048) )
  {
    MiSignalNonPagedPoolWatchers();
  }
  if ( v3 < v4 && a2 == 1 )
    return v4 - v3;
  return v5;
}
