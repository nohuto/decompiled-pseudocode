/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x1400D5DAC
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdatePagefilePeakUsage(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1 - a1[3] - 1LL;
  if ( a1[4] < v1 )
    a1[4] = v1;
}
