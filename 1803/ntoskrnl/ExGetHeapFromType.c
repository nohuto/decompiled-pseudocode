/*
 * XREFs of ExGetHeapFromType @ 0x1402BD650
 * Callers:
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetHeapFromType(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return qword_1403EFA68;
  if ( (a1 & 0x21) == 0x21 )
    return *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424) + 12512LL);
  if ( (a1 & 1) != 0 )
    return qword_1403EFA60;
  result = qword_1403EFA58;
  if ( (a1 & 0x200) != 0 )
    return qword_1403EFA50;
  return result;
}
