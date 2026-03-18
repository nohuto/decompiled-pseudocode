/*
 * XREFs of MiAllocateCrcList @ 0x1406ECC24
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPrivatePageCount @ 0x14021D734 (MiGetPrivatePageCount.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  PVOID result; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  SIZE_T v17; // rbx

  v3 = (_QWORD *)*a1;
  v6 = *a3 >> 5;
  v7 = *(_QWORD *)(*a1 + 4928);
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v9 = PrivatePageCount + v7;
  if ( PrivatePageCount + v7 < PrivatePageCount )
    v9 = -1LL;
  if ( (a2 & 1) != 0 )
    v9 = qword_140388AF8;
  if ( v9 <= v6 )
    v6 = v9;
  v10 = v3[752] - 1024LL;
  v11 = (32 * v6 + 4095) >> 12;
  if ( v10 <= 0 )
    return 0LL;
  v13 = v3[805];
  v14 = v3[790];
  if ( v11 <= v10 )
    v10 = v11;
  if ( v14 >= v13 )
    return 0LL;
  v15 = v13 - v14;
  if ( v10 <= v15 )
    v15 = v10;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v3, 2u);
  if ( v15 > AvailablePagesBelowPriority )
    v15 = AvailablePagesBelowPriority;
  v17 = v15 << 12;
  if ( v17 < 0x200000 )
    v17 = 0x200000LL;
  while ( 1 )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x6D75534Du);
    if ( result )
      break;
    v17 >>= 1;
    if ( v17 < 0x10000 )
      return result;
  }
  *a3 = v17;
  return result;
}
