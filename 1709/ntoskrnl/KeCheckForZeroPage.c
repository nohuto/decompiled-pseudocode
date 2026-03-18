/*
 * XREFs of KeCheckForZeroPage @ 0x140184CB0
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSlistGetFreePage @ 0x1400C807C (MiSlistGetFreePage.c)
 *     MiConvertPrivateToDemandZero @ 0x14011E33C (MiConvertPrivateToDemandZero.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckForZeroPage(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = a1 + 512;
  result = 0LL;
  do
  {
    result |= a1[15] | a1[14] | a1[13] | a1[12] | a1[11] | a1[10] | a1[9] | a1[8] | a1[7] | a1[6] | a1[5] | a1[4] | a1[3] | a1[2] | a1[1] | *a1;
    a1 += 16;
  }
  while ( a1 < v1 );
  return result;
}
