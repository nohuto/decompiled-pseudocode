/*
 * XREFs of EtwpCCSwapStart @ 0x14057CD1C
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140434C0C (EtwpUpdateGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  ULONG v1; // ebp
  __int64 v2; // rdi
  ULONG v3; // esi
  __int64 v4; // rbx
  PVOID PoolWithTag; // rax
  ULONG i; // ebp
  __int64 v8; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  if ( CCSwapNumLoggersPerClockType[a1] || (v3 = 0, !(_DWORD)KeNumberProcessors_0) )
  {
LABEL_6:
    ++CCSwapNumLoggersPerClockType[v2];
    return 0LL;
  }
  while ( 1 )
  {
    v4 = *(_QWORD *)(KeGetPrcb(v3) + 24784);
    if ( !*(_QWORD *)(v4 + 8 * v2 + 1752) )
      break;
    *(_BYTE *)(v2 + v4 + 1744) = 0;
LABEL_5:
    ++v3;
    **(_DWORD **)(v4 + 8 * v2 + 1752) = 0;
    if ( v3 >= v1 )
      goto LABEL_6;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
  *(_QWORD *)(v4 + 8 * v2 + 1752) = PoolWithTag;
  if ( PoolWithTag )
    goto LABEL_5;
  for ( i = 0; i < v3; ++i )
  {
    v8 = *(_QWORD *)(KeGetPrcb(i) + 24784);
    ExFreePoolWithTag(*(PVOID *)(v8 + 8 * v2 + 1752), 0);
    *(_QWORD *)(v8 + 8 * v2 + 1752) = 0LL;
  }
  return 3221225495LL;
}
