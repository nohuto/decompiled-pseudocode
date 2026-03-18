/*
 * XREFs of MiAllocateCrcList @ 0x1405BF15C
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPrivatePageCount @ 0x1401408E0 (MiGetPrivatePageCount.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiAllocateCrcList(__int64 *a1, char a2, SIZE_T *a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 PrivatePageCount; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  SIZE_T v16; // rbx
  PVOID result; // rax

  v3 = (_QWORD *)*a1;
  v6 = *a3 >> 5;
  v7 = *(_QWORD *)(*a1 + 4992);
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v9 = PrivatePageCount + v7;
  if ( PrivatePageCount + v7 < PrivatePageCount )
    v9 = -1LL;
  if ( (a2 & 1) != 0 )
    v9 = qword_1403CBD90;
  if ( v9 <= v6 )
    v6 = v9;
  v10 = v3[888] - 1024LL;
  v11 = (32 * v6 + 4095) >> 12;
  if ( v10 <= 0 )
    return 0LL;
  v12 = v3[941];
  v13 = v3[925];
  if ( v11 <= v10 )
    v10 = v11;
  if ( v13 >= v12 )
    return 0LL;
  v14 = v12 - v13;
  if ( v10 <= v14 )
    v14 = v10;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v3, 2u);
  if ( v14 > AvailablePagesBelowPriority )
    v14 = AvailablePagesBelowPriority;
  v16 = v14 << 12;
  if ( v16 < 0x200000 )
    v16 = 0x200000LL;
  while ( 1 )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6D75534Du);
    if ( result )
      break;
    v16 >>= 1;
    if ( v16 < 0x10000 )
      return result;
  }
  *a3 = v16;
  return result;
}
