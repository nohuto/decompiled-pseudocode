/*
 * XREFs of EtwpCCSwapStart @ 0x140752164
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140749910 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  ULONG v1; // ebp
  __int64 v2; // rdi
  ULONG v3; // esi
  __int64 v4; // rbx
  PVOID PoolWithTag; // rax
  ULONG i; // ebp
  __int64 v7; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  if ( CCSwapNumLoggersPerClockType[a1] || (v3 = 0, !(_DWORD)KeNumberProcessors_0) )
  {
LABEL_10:
    ++CCSwapNumLoggersPerClockType[v2];
    return 0LL;
  }
  while ( 1 )
  {
    v4 = *(_QWORD *)(KeGetPrcb(v3) + 24616);
    if ( *(_QWORD *)(v4 + 8 * v2 + 296) )
    {
      *(_BYTE *)(v4 + v2 + 288) = 0;
      goto LABEL_9;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
    *(_QWORD *)(v4 + 8 * v2 + 296) = PoolWithTag;
    if ( !PoolWithTag )
      break;
LABEL_9:
    ++v3;
    **(_DWORD **)(v4 + 8 * v2 + 296) = 0;
    if ( v3 >= v1 )
      goto LABEL_10;
  }
  for ( i = 0; i < v3; ++i )
  {
    v7 = *(_QWORD *)(KeGetPrcb(i) + 24616);
    ExFreePoolWithTag(*(PVOID *)(v7 + 8 * v2 + 296), 0);
    *(_QWORD *)(v7 + 8 * v2 + 296) = 0LL;
  }
  return 3221225495LL;
}
