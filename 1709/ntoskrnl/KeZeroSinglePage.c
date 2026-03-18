/*
 * XREFs of KeZeroSinglePage @ 0x140184D20
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     ViGrowPoolAllocation @ 0x1407A6714 (ViGrowPoolAllocation.c)
 *     MxMarkActiveDriverBits @ 0x14084A6C4 (MxMarkActiveDriverBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroSinglePage(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  v2 = 64;
  do
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1 += 8;
    *(a1 - 5) = 0LL;
    *(a1 - 4) = 0LL;
    --v2;
    *(a1 - 3) = 0LL;
    *(a1 - 2) = 0LL;
    *(a1 - 1) = 0LL;
  }
  while ( v2 );
  return result;
}
