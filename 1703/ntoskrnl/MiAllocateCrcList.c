/*
 * XREFs of MiAllocateCrcList @ 0x14056A478
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPrivatePageCount @ 0x140130050 (MiGetPrivatePageCount.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MiAllocateCrcList(__int64 *a1, SIZE_T *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 PrivatePageCount; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  SIZE_T v15; // rbx
  PVOID result; // rax

  v2 = (_QWORD *)*a1;
  v5 = *a2 >> 5;
  v6 = *(_QWORD *)(*a1 + 4800);
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v8 = PrivatePageCount + v6;
  if ( PrivatePageCount + v6 < PrivatePageCount )
    v8 = -1LL;
  if ( a1 == (__int64 *)&unk_14036C718 )
    v8 = qword_14036C900;
  if ( v8 <= v5 )
    v5 = v8;
  v9 = v2[728] - 1024LL;
  v10 = (32 * v5 + 4095) >> 12;
  if ( v9 <= 0 )
    return 0LL;
  v11 = v2[781];
  v12 = v2[766];
  if ( v10 <= v9 )
    v9 = v10;
  if ( v12 >= v11 )
    return 0LL;
  v13 = v11 - v12;
  if ( v9 <= v13 )
    v13 = v9;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v2, 2u);
  if ( v13 > AvailablePagesBelowPriority )
    v13 = AvailablePagesBelowPriority;
  v15 = v13 << 12;
  if ( v15 < 0x200000 )
    v15 = 0x200000LL;
  while ( 1 )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x6D75534Du);
    if ( result )
      break;
    v15 >>= 1;
    if ( v15 < 0x10000 )
      return result;
  }
  *a2 = v15;
  return result;
}
