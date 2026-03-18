/*
 * XREFs of MiCountNonPagedPool @ 0x1400AE6FC
 * Callers:
 *     MiIncreaseNonPagedPoolUsage @ 0x1400AE68C (MiIncreaseNonPagedPoolUsage.c)
 * Callees:
 *     MiSignalNonPagedPoolWatchers @ 0x140154988 (MiSignalNonPagedPoolWatchers.c)
 */

unsigned __int64 __fastcall MiCountNonPagedPool(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 result; // rax

  if ( a2 == 1 )
    v3 = a1 + _InterlockedExchangeAdd64(&qword_14036BD18, a1);
  else
    v3 = _InterlockedExchangeAdd64(&qword_14036BD18, -(__int64)a1);
  v4 = MiState;
  if ( v3 >= MiState - 5120 && v3 - a1 < MiState - 5120 || v3 >= MiState - 2048 && v3 - a1 < MiState - 2048 )
    MiSignalNonPagedPoolWatchers();
  result = 0LL;
  if ( v3 < v4 && a2 == 1 )
    return v4 - v3;
  return result;
}
